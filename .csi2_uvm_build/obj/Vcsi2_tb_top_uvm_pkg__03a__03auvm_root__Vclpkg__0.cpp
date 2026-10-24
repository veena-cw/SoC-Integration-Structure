// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_root__Vclpkg::__VnoInFunc_get\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __Vtask_get_common_domain__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_domain> __VlefCall_0__get_uvm_domain;
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_root, vlProcess, vlSymsp);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_common_domain(vlProcess, vlSymsp, __Vtask_get_common_domain__1__Vfuncout);
        vlSymsp->TOP__uvm_pkg__03a__03auvm_domain__Vclpkg.__VnoInFunc_get_uvm_domain(vlProcess, vlSymsp, __VlefCall_0__get_uvm_domain);
        VL_NULL_CHECK(this->__PVT__m_inst, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 288)->__PVT__m_domain 
            = __VlefCall_0__get_uvm_domain;
    }
    get__Vfuncrtn = this->__PVT__m_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_root"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_phase_started\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_severity_count;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> unnamedblk1__DOT__srvr;
    if ((phase == vlSymsp->TOP__uvm_pkg.__PVT__end_of_elaboration_ph)) {
        this->__VnoInFunc_do_resolve_bindings(vlProcess, vlSymsp);
        if (this->__PVT__enable_print_topology) {
            this->__VnoInFunc_print_topology(vlProcess, vlSymsp, VlNull{});
        }
        this->__VnoInFunc_get_report_server(vlProcess, vlSymsp, unnamedblk1__DOT__srvr);
        VL_NULL_CHECK(unnamedblk1__DOT__srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 211)->__VnoInFunc_get_severity_count(vlSymsp, 2U, __VlefCall_0__get_severity_count);
        if (VL_LTS_III(32, 0U, __VlefCall_0__get_severity_count)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "BUILDERR"s, "stopping due to build errors"s, 0U, ""s, 0U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_stop_request(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_stop_request\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_test_done_objection> tdo;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_test_done_objection__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, tdo);
    VL_NULL_CHECK(tdo, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 230)->__VnoInFunc_stop_request(vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::init(vlProcess, vlSymsp, "__top__"s, VlNull{});
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__enable_print_topology = 0U;
    this->__PVT__finish_on_completion = 1U;
    this->__PVT__phase_timeout = 0x0000085e0abb6000ULL;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler> rh;
    /*super.new*/;
    rh = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_root_report_handler, vlProcess, vlSymsp);
    this->__VnoInFunc_set_report_handler(vlSymsp, rh);
    vlSymsp->TOP__uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg.__VnoInFunc_get_inst(vlProcess, vlSymsp, this->__PVT__clp);
    this->__VnoInFunc_report_header(vlProcess, vlSymsp, 0U);
    this->__VnoInFunc_m_check_verbosity(vlProcess, vlSymsp);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string test_name) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__16__Vfuncout;
    __Vtask_get_arg_values__16__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    std::string __VlefCall_1__get_type_name;
    std::string __VlefCall_0__get_type_name;
    std::string unnamedblk124__DOT__test_list;
    std::string unnamedblk124__DOT__sep;
    IData/*31:0*/ unnamedblk124__DOT__unnamedblk125__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16> __VDynScope_run_test_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> factory;
    CData/*0:0*/ testname_plusarg;
    IData/*31:0*/ test_name_count;
    VlQueue<std::string> test_names;
    std::string msg;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> uvm_test_top;
    __VDynScope_run_test_0 = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16, vlSymsp);
    {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, factory);
        testname_plusarg = 0U;
        test_name_count = 0U;
        test_names.clear();
        test_names.atDefault().clear();
        msg = ""s;
        testname_plusarg = 0U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_objection__Vclpkg.__VnoInFunc_m_init_objections(vlProcess, vlSymsp);
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 344)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TESTNAME="s, test_names, __Vtask_get_arg_values__16__Vfuncout);
        test_name_count = __Vtask_get_arg_values__16__Vfuncout;
        if (VL_LTS_III(32, 0U, test_name_count)) {
            test_name = test_names.at(0U);
            testname_plusarg = 1U;
        }
        if (VL_LTS_III(32, 1U, test_name_count)) {
            unnamedblk124__DOT__test_list = ""s;
            unnamedblk124__DOT__sep = ""s;
            unnamedblk124__DOT__unnamedblk125__DOT__i = 0U;
            unnamedblk124__DOT__unnamedblk125__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk124__DOT__unnamedblk125__DOT__i, test_names.size())) {
                if ((0U != unnamedblk124__DOT__unnamedblk125__DOT__i)) {
                    unnamedblk124__DOT__sep = ", "s;
                }
                unnamedblk124__DOT__test_list = VL_CONCATN_NNN(
                                                               VL_CONCATN_NNN(unnamedblk124__DOT__test_list, unnamedblk124__DOT__sep), test_names.at(unnamedblk124__DOT__unnamedblk125__DOT__i));
                unnamedblk124__DOT__unnamedblk125__DOT__i 
                    = ((IData)(1U) + unnamedblk124__DOT__unnamedblk125__DOT__i);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTST"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TESTNAME arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,test_name_count
                                                                                , 'S',&(test_name)
                                                                                , 'S',&(unnamedblk124__DOT__test_list)) , 0U, ""s, 0U);
        }
        if ((""s != test_name)) {
            if (Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.exists("uvm_test_top"s)) {
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "TTINST"s, "An uvm_test_top already exists via a previous call to run_test"s, 0U, ""s, 0U);
                co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                        vlProcess, 
                                                        "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 
                                                        381);
            }
            VL_NULL_CHECK(factory, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 383)->__VnoInFunc_create_component_by_name(vlProcess, vlSymsp, test_name, ""s, "uvm_test_top"s, VlNull{}, uvm_test_top);
            if ((VlNull{} == uvm_test_top)) {
                msg = ((IData)(testname_plusarg) ? 
                       VL_CONCATN_NNN("command line +UVM_TESTNAME="s, test_name)
                        : VL_CONCATN_NNN(VL_CONCATN_NNN("call to run_test("s, test_name), ")"s));
                this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "INVTST"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Requested test from "s, msg), " not found."s)), 0U, ""s, 0U);
            }
        }
        if ((0U == Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "NOCOMP"s, "No components instantiated. You must either instantiate at least one component before calling run_test or use run_test to do so. To run a test using run_test, use +UVM_TESTNAME or supply the test name in the argument to run_test(). Exiting simulation."s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((""s == test_name)) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, "Running test ..."s, 0x00000064U, ""s, 0U);
        } else {
            VL_NULL_CHECK(uvm_test_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 407)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_0__get_type_name);
            if ((test_name == __VlefCall_0__get_type_name)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, test_name), "..."s)), 0x00000064U, ""s, 0U);
            } else {
                VL_NULL_CHECK(uvm_test_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 410)->__VnoInFunc_get_type_name(vlSymsp, __VlefCall_1__get_type_name);
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "RNTST"s, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Running test "s, __VlefCall_1__get_type_name), " (via factory override for test \""s), test_name), "\")..."s)), 0x00000064U, ""s, 0U);
            }
        }
        this->__VnoInFunc_run_test____Vfork_1__0(std::make_shared<VlProcess>(vlProcess), vlSymsp, __VDynScope_run_test_0);
        co_await vlSymsp->TOP.__VdlySched.delay(0ULL, 
                                                vlProcess, 
                                                "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 
                                                420);
        if ((1U & (~ (IData)(this->__PVT__m_phase_all_done)))) {
            CData/*0:0*/ __VdynTrigger_h0ba6b966__0;
            __VdynTrigger_h0ba6b966__0 = 0;
            __VdynTrigger_h0ba6b966__0 = 0U;
            while ((1U & (~ (IData)(__VdynTrigger_h0ba6b966__0)))) {
                co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                             vlProcess, 
                                                             "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                             "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 
                                                             422);
                __VdynTrigger_h0ba6b966__0 = this->__PVT__m_phase_all_done;
                vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h0ba6b966__0);
            }
            co_await vlSymsp->TOP.__VdynSched.resumption(
                                                         vlProcess, 
                                                         "@([true] uvm_pkg::uvm_root.m_phase_all_done)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 
                                                         422);
        }
        VL_NULL_CHECK(VL_NULL_CHECK(__VDynScope_run_test_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 425)
                      ->__PVT__phase_runner_proc, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 425)->__VnoInFunc_kill(vlSymsp);
        this->__VnoInFunc_report_summarize(vlProcess, vlSymsp, 0U);
        if (VL_UNLIKELY((this->__PVT__finish_on_completion))) {
            vlProcess->disableFork();
            VL_FINISH_MT("/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 430, "");
        }
        __Vlabel0: ;
    }
    co_return;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16> __VDynScope_run_test_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_test____Vfork_1__0\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03a__VDynScope_16> __Vtask___VforkTask_0__27____VDynScope_run_test_0;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vtask___VforkTask_0__27____VlefCall_0__self;
    VlClassRef<Vcsi2_tb_top_std__03a__03aprocess> __Vfunc_self__28__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    __Vtask___VforkTask_0__27____VDynScope_run_test_0 
        = __VDynScope_run_test_0;
    co_await vlSymsp->TOP.__VdlySched.delay(0xffffffffffffffffULL, 
                                            vlProcess, 
                                            "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 
                                            414);
    vlSymsp->TOP__std__03a__03aprocess__Vclpkg.__VnoInFunc_self(vlProcess, vlSymsp, __Vfunc_self__28__Vfuncout);
    __Vtask___VforkTask_0__27____VlefCall_0__self = __Vfunc_self__28__Vfuncout;
    VL_NULL_CHECK(__Vtask___VforkTask_0__27____VDynScope_run_test_0, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 416)->__PVT__phase_runner_proc 
        = __Vtask___VforkTask_0__27____VlefCall_0__self;
    co_await vlSymsp->TOP__uvm_pkg__03a__03auvm_phase__Vclpkg.__VnoInFunc_m_run_phases(vlProcess, vlSymsp);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find_all\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == comp)) {
        comp = VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root>{this};
    }
    this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, comp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &find__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_find\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__get_full_name;
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> comp_list;
    {
        comp_list.clear();
        this->__VnoInFunc_find_all(vlProcess, vlSymsp, comp_match, comp_list, VlNull{});
        if (VL_LTS_III(32, 1U, comp_list.size())) {
            VL_NULL_CHECK(comp_list.at(0U), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 459)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_0__get_full_name);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MMATCH"s, VL_SFORMATF_N_NX("Found %0d components matching '%s'. Returning first match, %0s.",3
                                                                                , '~',32,comp_list.size()
                                                                                , 'S',&(comp_match)
                                                                                , 'S',&(__VlefCall_0__get_full_name)) , 0U, ""s, 0U);
        }
        if ((0U == comp_list.size())) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "CMPNFD"s, 
                                                 VL_CVT_PACK_STR_NN(
                                                                    VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Component matching '"s, comp_match), "' was not found in the list of uvm_components"s)), 0U, ""s, 0U);
            find__Vfuncrtn = VlNull{};
            goto __Vlabel0;
        }
        find__Vfuncrtn = comp_list.at(0U);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_print_topology\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_0__emit;
    std::string unnamedblk126__DOT__c;
    std::string unnamedblk126__DOT__c__Vnext;
    CData/*0:0*/ unnamedblk126__DOT__c__Vmore;
    unnamedblk126__DOT__c__Vmore = 0;
    {
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVMTOP"s, "UVM testbench topology:"s, 0x00000064U, ""s, 0U);
        if ((0U == Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.size())) {
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "EMTCOMP"s, "print_topology - No UVM components to print."s, 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((VlNull{} == printer)) {
            printer = vlSymsp->TOP__uvm_pkg.__PVT__uvm_default_printer;
        }
        unnamedblk126__DOT__c__Vmore = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.first(unnamedblk126__DOT__c__Vnext));
        while (unnamedblk126__DOT__c__Vmore) {
            unnamedblk126__DOT__c = unnamedblk126__DOT__c__Vnext;
            unnamedblk126__DOT__c__Vmore = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children.next(unnamedblk126__DOT__c__Vnext));
            if (VL_NULL_CHECK(Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children
                              .at(unnamedblk126__DOT__c), "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 490)
                ->__PVT__print_enabled) {
                VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 491)->__VnoInFunc_print_object(vlProcess, vlSymsp, ""s, Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__PVT__m_children
                                                                                .at(unnamedblk126__DOT__c), 0x2eU);
            }
        }
        VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 494)->__VnoInFunc_emit(vlProcess, vlSymsp, __VlefCall_0__emit);
        VL_WRITEF_NX("%s\n",1, 'S',&(__VlefCall_0__emit));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, QData/*63:0*/ timeout, CData/*0:0*/ overridable) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_set_timeout\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    {
        if ((1U & (~ (IData)(vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable)))) {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NOTIMOUTOVR"s, VL_SFORMATF_N_NX("The global timeout setting of %0d is not overridable to %0d due to a previous setting.",2
                                                                                , '#',64,this->__PVT__phase_timeout
                                                                                , '#',64,timeout) , 0U, ""s, 0U);
            goto __Vlabel0;
        }
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__PVT__set_timeout__Vstatic__m_uvm_timeout_overridable 
            = overridable;
        this->__PVT__phase_timeout = timeout;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string comp_match, VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component>> &comps, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> comp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_find_all_recurse\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_first_child__42__Vfuncout;
    __Vtask_get_first_child__42__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_next_child__45__Vfuncout;
    __Vtask_get_next_child__45__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_uvm_is_match__47____VlefCall_0__uvm_re_match;
    __Vfunc_uvm_is_match__47____VlefCall_0__uvm_re_match = 0;
    IData/*31:0*/ __Vfunc_uvm_re_match__49__Vfuncout;
    __Vfunc_uvm_re_match__49__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_5__get_name;
    CData/*0:0*/ __VlefCall_4__uvm_is_match;
    std::string __VlefCall_3__get_full_name;
    IData/*31:0*/ __VlefCall_2__get_next_child;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> __VlefCall_1__get_child;
    IData/*31:0*/ __VlefCall_0__get_first_child;
    std::string name;
    name = ""s;
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 523)->__VnoInFunc_get_first_child(vlSymsp, name, __Vtask_get_first_child__42__Vfuncout);
    __VlefCall_0__get_first_child = __Vtask_get_first_child__42__Vfuncout;
    if ((0U != __VlefCall_0__get_first_child)) {
        do {
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 525)->__VnoInFunc_get_child(vlProcess, vlSymsp, name, __VlefCall_1__get_child);
            this->__VnoInFunc_m_find_all_recurse(vlProcess, vlSymsp, comp_match, comps, __VlefCall_1__get_child);
            VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 527)->__VnoInFunc_get_next_child(vlSymsp, name, __Vtask_get_next_child__45__Vfuncout);
            __VlefCall_2__get_next_child = __Vtask_get_next_child__45__Vfuncout;
        } while ((0U != __VlefCall_2__get_next_child));
    }
    VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 528)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, __VlefCall_3__get_full_name);
    this->__Vfunc_uvm_is_match__47__str = VL_CVT_PACK_STR_NN(__VlefCall_3__get_full_name);
    this->__Vfunc_uvm_is_match__47__expr = comp_match;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(this->__Vfunc_uvm_is_match__47__expr, this->__Vfunc_uvm_glob_to_re__48__Vfuncout);
    vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s 
        = this->__Vfunc_uvm_glob_to_re__48__Vfuncout;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(vlSymsp->TOP__uvm_pkg.__PVT__uvm_is_match__Vstatic__s, this->__Vfunc_uvm_is_match__47__str, __Vfunc_uvm_re_match__49__Vfuncout);
    __Vfunc_uvm_is_match__47____VlefCall_0__uvm_re_match 
        = __Vfunc_uvm_re_match__49__Vfuncout;
    __VlefCall_4__uvm_is_match = (0U == __Vfunc_uvm_is_match__47____VlefCall_0__uvm_re_match);
    if (__VlefCall_4__uvm_is_match) {
        VL_NULL_CHECK(comp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 529)->__VnoInFunc_get_name(vlSymsp, __VlefCall_5__get_name);
        __VlefCall_4__uvm_is_match = (""s != __VlefCall_5__get_name);
    }
    if (__VlefCall_4__uvm_is_match) {
        comps.push_back(comp);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> child, CData/*0:0*/ &m_add_child__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_add_child\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_1__get_name;
    CData/*0:0*/ __VlefCall_0__m_add_child;
    m_add_child__Vfuncrtn = 0U;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_m_add_child(vlProcess, vlSymsp, child, __VlefCall_0__m_add_child);
    if (__VlefCall_0__m_add_child) {
        VL_NULL_CHECK(child, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 541)->__VnoInFunc_get_name(vlSymsp, __VlefCall_1__get_name);
        if (("uvm_test_top"s == __VlefCall_1__get_name)) {
            this->__PVT__top_levels.push_front(child);
        } else {
            this->__PVT__top_levels.push_back(child);
        }
        m_add_child__Vfuncrtn = 1U;
    } else {
        m_add_child__Vfuncrtn = 0U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_build_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_component::__VnoInFunc_build_phase(vlProcess, vlSymsp, phase);
    this->__VnoInFunc_m_set_cl_msg_args(vlProcess, vlSymsp);
    {
        // Inlined CFunc: __VnoInFunc_m_do_verbosity_settings
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__61__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__61__Vfuncout = 0;
        CData/*7:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__sep;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__sep = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__64__verb_enum;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__64__verb_enum = 0;
        std::string __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1;
        std::string __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2;
        CData/*0:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.clear();
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.atDefault().clear();
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.clear();
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 580)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_get_arg_values__61__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i = 0U;
        __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i, __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.size())) {
            __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__sep = 0x2cU;
            this->__Vtask_uvm_split_string__62__str 
                = VL_CVT_PACK_STR_NN(__Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i));
            __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s = 0U;
            __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e = 0U;
            __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.clear();
            while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e, 
                              VL_LEN_IN(this->__Vtask_uvm_split_string__62__str))) {
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s 
                    = __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e;
                {
                    while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e, 
                                      VL_LEN_IN(this->__Vtask_uvm_split_string__62__str))) {
                        if ((VL_GETC_N(this->__Vtask_uvm_split_string__62__str,__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e) 
                             == __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__sep)) {
                            goto __Vlabel0;
                        }
                        __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e 
                            = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e);
                    }
                    __Vlabel0: ;
                }
                if ((__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s 
                     != __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e)) {
                    __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.push_back(
                                                                                VL_SUBSTR_N(this->__Vtask_uvm_split_string__62__str,__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__s,
                                                                                (__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e 
                                                                                - (IData)(1U))));
                }
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_uvm_split_string__62__e);
            }
            if ((VL_GTS_III(32, 4U, __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.size()) 
                 | VL_LTS_III(32, 5U, __Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.size()))) {
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1 
                    = __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%s'.  Setting ignored.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_1)) , 0U, ""s, 0U);
            }
            VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 590)->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(__Vinline_0___VnoInFunc_m_do_verbosity_settings_split_vals.at(2U)), __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtask_m_convert_verb__64__verb_enum, __Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb);
            if ((1U & (~ (IData)(__Vinline_0___VnoInFunc_m_do_verbosity_settings___VlefCall_0__m_convert_verb)))) {
                __Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2 
                    = __Vinline_0___VnoInFunc_m_do_verbosity_settings_set_verbosity_settings.at(__Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i);
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%s'.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_verbosity_settings___Vtemp_2)) , 0U, ""s, 0U);
            }
            __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i 
                = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_verbosity_settings_unnamedblk127__DOT__i);
        }
    }
    {
        // Inlined CFunc: __VnoInFunc_m_do_timeout_settings
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__66__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__66__Vfuncout = 0;
        std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__timeout_list;
        std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__sep;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings;
        std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count;
        QData/*63:0*/ __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int;
        std::string __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.clear();
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.atDefault().clear();
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout = ""s;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count = 0U;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int = 0;
        __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec = ""s;
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 609)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings, __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__66__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count 
            = __Vinline_0___VnoInFunc_m_do_timeout_settings___Vtask_get_arg_values__66__Vfuncout;
        if ((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)) {
            __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout 
                = __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(0U);
            if (VL_LTS_III(32, 1U, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count)) {
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__timeout_list = ""s;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__sep = ""s;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i = 0U;
                __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i = 0U;
                while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.size())) {
                    if ((0U != __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i)) {
                        __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__sep = "; "s;
                    }
                    __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__timeout_list 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__timeout_list, __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__sep), __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_settings.at(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i));
                    __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i 
                        = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__unnamedblk129__DOT__i);
                }
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_count
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_unnamedblk128__DOT__timeout_list)) , 0U, ""s, 0U);
            }
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout)) , 0U, ""s, 0U);
            std::ignore = VL_SSCANF_INNX(64,__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout,"%d,%s",2
                                         , '#',64,&(__Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int)
                                         , 'S',&(__Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) ;
            if (("YES"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
            } else if (("NO"s == __Vinline_0___VnoInFunc_m_do_timeout_settings_override_spec)) {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 0U);
            } else {
                this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, __Vinline_0___VnoInFunc_m_do_timeout_settings_timeout_int, 1U);
            }
        }
    }
    {
        // Inlined CFunc: __VnoInFunc_m_do_factory_settings
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__72__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__72__Vfuncout = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__74__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__74__Vfuncout = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i__Vloopsize = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i__Vloopsize = 0;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_factory_settings_args;
        __Vinline_0___VnoInFunc_m_do_factory_settings_args.clear();
        __Vinline_0___VnoInFunc_m_do_factory_settings_args.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 644)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__72__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
            this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i)) 
                                                                                - (IData)(1U)))));
            if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk130__DOT__i);
            }
        }
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 648)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, __Vinline_0___VnoInFunc_m_do_factory_settings_args, __Vinline_0___VnoInFunc_m_do_factory_settings___Vtask_get_arg_matches__74__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i, __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_factory_settings_args.size();
            this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                      VL_CVT_PACK_STR_NN(
                                                                         VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_factory_settings_args.at(__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i)) 
                                                                                - (IData)(1U)))));
            if ((__Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_factory_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_factory_settings_unnamedblk131__DOT__i);
            }
        }
    }
    {
        // Inlined CFunc: __VnoInFunc_m_do_config_settings
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__96__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__96__Vfuncout = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__98__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__98__Vfuncout = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i;
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i__Vloopsize = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i;
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i = 0;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i__Vloopsize;
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i__Vloopsize = 0;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_config_settings_args;
        __Vinline_0___VnoInFunc_m_do_config_settings_args.clear();
        __Vinline_0___VnoInFunc_m_do_config_settings_args.atDefault().clear();
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 769)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, __Vinline_0___VnoInFunc_m_do_config_settings_args, __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__96__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i, __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_config_settings_args.size();
            this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i),0x00000014U,
                                                                              (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i)) 
                                                                               - (IData)(1U)))), 1U);
            if ((__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk133__DOT__i);
            }
        }
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 773)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, __Vinline_0___VnoInFunc_m_do_config_settings_args, __Vinline_0___VnoInFunc_m_do_config_settings___Vtask_get_arg_matches__98__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i = 0U;
        while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i, __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
            __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i__Vloopsize 
                = __Vinline_0___VnoInFunc_m_do_config_settings_args.size();
            this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_SUBSTR_N(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i),0x00000017U,
                                                                              (VL_LEN_IN(__Vinline_0___VnoInFunc_m_do_config_settings_args.at(__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i)) 
                                                                               - (IData)(1U)))), 0U);
            if ((__Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i__Vloopsize 
                 <= __Vinline_0___VnoInFunc_m_do_config_settings_args.size())) {
                __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_config_settings_unnamedblk134__DOT__i);
            }
        }
    }
    this->__VnoInFunc_m_do_max_quit_settings(vlProcess, vlSymsp);
    {
        // Inlined CFunc: __VnoInFunc_m_do_dump_args
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__108__Vfuncout;
        __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__108__Vfuncout = 0;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__109__args;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches;
        IData/*31:0*/ __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args_dump_args;
        VlQueue<std::string> __Vinline_0___VnoInFunc_m_do_dump_args_all_args;
        std::string __Vinline_0___VnoInFunc_m_do_dump_args_out_string;
        __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.clear();
        __Vinline_0___VnoInFunc_m_do_dump_args_dump_args.atDefault().clear();
        __Vinline_0___VnoInFunc_m_do_dump_args_all_args.clear();
        __Vinline_0___VnoInFunc_m_do_dump_args_all_args.atDefault().clear();
        __Vinline_0___VnoInFunc_m_do_dump_args_out_string = ""s;
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 828)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, __Vinline_0___VnoInFunc_m_do_dump_args_dump_args, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__108__Vfuncout);
        __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches 
            = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_arg_matches__108__Vfuncout;
        if ((0U != __Vinline_0___VnoInFunc_m_do_dump_args___VlefCall_0__get_arg_matches)) {
            VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 829)->__VnoInFunc_get_args(vlSymsp, __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__109__args);
            __Vinline_0___VnoInFunc_m_do_dump_args_all_args 
                = __Vinline_0___VnoInFunc_m_do_dump_args___Vtask_get_args__109__args;
            __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i = 0U;
            __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i = 0U;
            while (VL_LTS_III(32, __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i, __Vinline_0___VnoInFunc_m_do_dump_args_all_args.size())) {
                {
                    if (("__-f__"s == __Vinline_0___VnoInFunc_m_do_dump_args_all_args.at(__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i))) {
                        goto __Vlabel1;
                    }
                    __Vinline_0___VnoInFunc_m_do_dump_args_out_string 
                        = VL_CONCATN_NNN(VL_CONCATN_NNN(__Vinline_0___VnoInFunc_m_do_dump_args_out_string, __Vinline_0___VnoInFunc_m_do_dump_args_all_args.at(__Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i)), " "s);
                    __Vlabel1: ;
                }
                __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i 
                    = ((IData)(1U) + __Vinline_0___VnoInFunc_m_do_dump_args_unnamedblk137__DOT__i);
            }
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, __Vinline_0___VnoInFunc_m_do_dump_args_out_string, 0U, ""s, 0U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_verbosity_settings\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__61__Vfuncout;
    __Vtask_get_arg_values__61__Vfuncout = 0;
    CData/*7:0*/ __Vtask_uvm_split_string__62__sep;
    __Vtask_uvm_split_string__62__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__62__s;
    __Vtask_uvm_split_string__62__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__62__e;
    __Vtask_uvm_split_string__62__e = 0;
    IData/*31:0*/ __Vtask_m_convert_verb__64__verb_enum;
    __Vtask_m_convert_verb__64__verb_enum = 0;
    std::string __Vtemp_1;
    std::string __Vtemp_2;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__m_convert_verb;
    IData/*31:0*/ unnamedblk127__DOT__i;
    VlQueue<std::string> set_verbosity_settings;
    VlQueue<std::string> split_vals;
    set_verbosity_settings.clear();
    set_verbosity_settings.atDefault().clear();
    split_vals.clear();
    split_vals.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 580)->__VnoInFunc_get_arg_values(vlSymsp, "+uvm_set_verbosity="s, set_verbosity_settings, __Vtask_get_arg_values__61__Vfuncout);
    unnamedblk127__DOT__i = 0U;
    unnamedblk127__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk127__DOT__i, set_verbosity_settings.size())) {
        __Vtask_uvm_split_string__62__sep = 0x2cU;
        this->__Vtask_uvm_split_string__62__str = VL_CVT_PACK_STR_NN(set_verbosity_settings.at(unnamedblk127__DOT__i));
        __Vtask_uvm_split_string__62__s = 0U;
        __Vtask_uvm_split_string__62__e = 0U;
        split_vals.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__62__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__62__str))) {
            __Vtask_uvm_split_string__62__s = __Vtask_uvm_split_string__62__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__62__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__62__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__62__str,__Vtask_uvm_split_string__62__e) 
                         == (IData)(__Vtask_uvm_split_string__62__sep))) {
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_split_string__62__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__62__e);
                }
                __Vlabel0: ;
            }
            if ((__Vtask_uvm_split_string__62__s != __Vtask_uvm_split_string__62__e)) {
                split_vals.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__62__str,__Vtask_uvm_split_string__62__s,
                                                 (__Vtask_uvm_split_string__62__e 
                                                  - (IData)(1U))));
            }
            __Vtask_uvm_split_string__62__e = ((IData)(1U) 
                                               + __Vtask_uvm_split_string__62__e);
        }
        if ((VL_GTS_III(32, 4U, split_vals.size()) 
             | VL_LTS_III(32, 5U, split_vals.size()))) {
            __Vtemp_1 = set_verbosity_settings.at(unnamedblk127__DOT__i);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDARGS"s, VL_SFORMATF_N_NX("Invalid number of arguments found on the command line for setting '+uvm_set_verbosity=%s'.  Setting ignored.",1
                                                                                , 'S',&(__Vtemp_1)) , 0U, ""s, 0U);
        }
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 590)->__VnoInFunc_m_convert_verb(vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_vals.at(2U)), __Vtask_m_convert_verb__64__verb_enum, __VlefCall_0__m_convert_verb);
        if ((1U & (~ (IData)(__VlefCall_0__m_convert_verb)))) {
            __Vtemp_2 = set_verbosity_settings.at(unnamedblk127__DOT__i);
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "INVLCMDVERB"s, VL_SFORMATF_N_NX("Invalid verbosity found on the command line for setting '%s'.",1
                                                                                , 'S',&(__Vtemp_2)) , 0U, ""s, 0U);
        }
        unnamedblk127__DOT__i = ((IData)(1U) + unnamedblk127__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_timeout_settings\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__66__Vfuncout;
    __Vtask_get_arg_values__66__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk128__DOT__timeout_list;
    std::string unnamedblk128__DOT__sep;
    IData/*31:0*/ unnamedblk128__DOT__unnamedblk129__DOT__i;
    VlQueue<std::string> timeout_settings;
    std::string timeout;
    IData/*31:0*/ timeout_count;
    QData/*63:0*/ timeout_int;
    std::string override_spec;
    timeout_settings.clear();
    timeout_settings.atDefault().clear();
    timeout = ""s;
    timeout_count = 0U;
    timeout_int = 0;
    override_spec = ""s;
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 609)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_TIMEOUT="s, timeout_settings, __Vtask_get_arg_values__66__Vfuncout);
    timeout_count = __Vtask_get_arg_values__66__Vfuncout;
    if ((0U != timeout_count)) {
        timeout = timeout_settings.at(0U);
        if (VL_LTS_III(32, 1U, timeout_count)) {
            unnamedblk128__DOT__timeout_list = ""s;
            unnamedblk128__DOT__sep = ""s;
            unnamedblk128__DOT__unnamedblk129__DOT__i = 0U;
            unnamedblk128__DOT__unnamedblk129__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk128__DOT__unnamedblk129__DOT__i, timeout_settings.size())) {
                if ((0U != unnamedblk128__DOT__unnamedblk129__DOT__i)) {
                    unnamedblk128__DOT__sep = "; "s;
                }
                unnamedblk128__DOT__timeout_list = 
                    VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk128__DOT__timeout_list, unnamedblk128__DOT__sep), timeout_settings.at(unnamedblk128__DOT__unnamedblk129__DOT__i));
                unnamedblk128__DOT__unnamedblk129__DOT__i 
                    = ((IData)(1U) + unnamedblk128__DOT__unnamedblk129__DOT__i);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTTIMOUT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_TIMEOUT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,timeout_count
                                                                                , 'S',&(timeout)
                                                                                , 'S',&(unnamedblk128__DOT__timeout_list)) , 0U, ""s, 0U);
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "TIMOUTSET"s, VL_SFORMATF_N_NX("'+UVM_TIMEOUT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(timeout)) , 0U, ""s, 0U);
        std::ignore = VL_SSCANF_INNX(64,timeout,"%d,%s",2
                                     , '#',64,&(timeout_int)
                                     , 'S',&(override_spec)) ;
        if (("YES"s == override_spec)) {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
        } else if (("NO"s == override_spec)) {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 0U);
        } else {
            this->__VnoInFunc_set_timeout(vlProcess, vlSymsp, timeout_int, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_factory_settings\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__72__Vfuncout;
    __Vtask_get_arg_matches__72__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_arg_matches__74__Vfuncout;
    __Vtask_get_arg_matches__74__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk130__DOT__i;
    unnamedblk130__DOT__i = 0;
    IData/*31:0*/ unnamedblk130__DOT__i__Vloopsize;
    unnamedblk130__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk131__DOT__i;
    unnamedblk131__DOT__i = 0;
    IData/*31:0*/ unnamedblk131__DOT__i__Vloopsize;
    unnamedblk131__DOT__i__Vloopsize = 0;
    VlQueue<std::string> args;
    args.clear();
    args.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 644)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_INST_OVERRIDE|uvm_set_inst_override)=/"s, args, __Vtask_get_arg_matches__72__Vfuncout);
    unnamedblk130__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk130__DOT__i, args.size())) {
        unnamedblk130__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_inst_override(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_SUBSTR_N(args.at(unnamedblk130__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk130__DOT__i)) 
                                                                                - (IData)(1U)))));
        if ((unnamedblk130__DOT__i__Vloopsize <= args.size())) {
            unnamedblk130__DOT__i = ((IData)(1U) + unnamedblk130__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 648)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_TYPE_OVERRIDE|uvm_set_type_override)=/"s, args, __Vtask_get_arg_matches__74__Vfuncout);
    unnamedblk131__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk131__DOT__i, args.size())) {
        unnamedblk131__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_type_override(vlProcess, vlSymsp, 
                                                  VL_CVT_PACK_STR_NN(
                                                                     VL_SUBSTR_N(args.at(unnamedblk131__DOT__i),0x00000017U,
                                                                                (VL_LEN_IN(args.at(unnamedblk131__DOT__i)) 
                                                                                - (IData)(1U)))));
        if ((unnamedblk131__DOT__i__Vloopsize <= args.size())) {
            unnamedblk131__DOT__i = ((IData)(1U) + unnamedblk131__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ovr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_inst_override\n"); );
    // Locals
    CData/*7:0*/ __Vtask_uvm_split_string__77__sep;
    __Vtask_uvm_split_string__77__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__77__s;
    __Vtask_uvm_split_string__77__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__77__e;
    __Vtask_uvm_split_string__77__e = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlQueue<std::string> split_val;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> fact;
    {
        split_val.clear();
        split_val.atDefault().clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, fact);
        __Vtask_uvm_split_string__77__sep = 0x2cU;
        this->__Vtask_uvm_split_string__77__str = ovr;
        __Vtask_uvm_split_string__77__s = 0U;
        __Vtask_uvm_split_string__77__e = 0U;
        split_val.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__77__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__77__str))) {
            __Vtask_uvm_split_string__77__s = __Vtask_uvm_split_string__77__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__77__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__77__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__77__str,__Vtask_uvm_split_string__77__e) 
                         == (IData)(__Vtask_uvm_split_string__77__sep))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_split_string__77__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__77__e);
                }
                __Vlabel1: ;
            }
            if ((__Vtask_uvm_split_string__77__s != __Vtask_uvm_split_string__77__e)) {
                split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__77__str,__Vtask_uvm_split_string__77__s,
                                                (__Vtask_uvm_split_string__77__e 
                                                 - (IData)(1U))));
            }
            __Vtask_uvm_split_string__77__e = ((IData)(1U) 
                                               + __Vtask_uvm_split_string__77__e);
        }
        if ((3U != split_val.size())) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_inst_override="s, ovr), ", setting must specify <requested_type>,<override_type>,<instance_path>"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "INSTOVR"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Applying instance override from the command line: +uvm_set_inst_override="s, ovr)), 0U, ""s, 0U);
        VL_NULL_CHECK(fact, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 671)->__VnoInFunc_set_inst_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string ovr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_type_override\n"); );
    // Locals
    CData/*7:0*/ __Vtask_uvm_split_string__82__sep;
    __Vtask_uvm_split_string__82__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__82__s;
    __Vtask_uvm_split_string__82__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__82__e;
    __Vtask_uvm_split_string__82__e = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    VlQueue<std::string> split_val;
    IData/*31:0*/ replace;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_factory> fact;
    {
        split_val.clear();
        split_val.atDefault().clear();
        replace = 1U;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_factory__Vclpkg.__VnoInFunc_get(vlSymsp, fact);
        __Vtask_uvm_split_string__82__sep = 0x2cU;
        this->__Vtask_uvm_split_string__82__str = ovr;
        __Vtask_uvm_split_string__82__s = 0U;
        __Vtask_uvm_split_string__82__e = 0U;
        split_val.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__82__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__82__str))) {
            __Vtask_uvm_split_string__82__s = __Vtask_uvm_split_string__82__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__82__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__82__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__82__str,__Vtask_uvm_split_string__82__e) 
                         == (IData)(__Vtask_uvm_split_string__82__sep))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_split_string__82__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__82__e);
                }
                __Vlabel1: ;
            }
            if ((__Vtask_uvm_split_string__82__s != __Vtask_uvm_split_string__82__e)) {
                split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__82__str,__Vtask_uvm_split_string__82__s,
                                                (__Vtask_uvm_split_string__82__e 
                                                 - (IData)(1U))));
            }
            __Vtask_uvm_split_string__82__e = ((IData)(1U) 
                                               + __Vtask_uvm_split_string__82__e);
        }
        if ((VL_LTS_III(32, 3U, split_val.size()) | 
             VL_GTS_III(32, 2U, split_val.size()))) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid setting for +uvm_set_type_override="s, ovr), ", setting must specify <requested_type>,<override_type>[,<replace>]"s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((3U == split_val.size())) {
            if (("0"s == split_val.at(2U))) {
                replace = 0U;
            } else if (("1"s == split_val.at(2U))) {
                replace = 1U;
            } else {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid replace arg for +uvm_set_type_override="s, ovr), " value must be 0 or 1"s)), 0U, ""s, 0U);
                goto __Vlabel0;
            }
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                          VL_CVT_PACK_STR_NN(
                                                             VL_CONCATN_NNN("Applying type override from the command line: +uvm_set_type_override="s, ovr)), 0U, ""s, 0U);
        VL_NULL_CHECK(fact, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 702)->__VnoInFunc_set_type_override_by_name(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                (1U 
                                                                                & replace));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string cfg, CData/*0:0*/ is_int) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_process_config\n"); );
    // Locals
    CData/*7:0*/ __Vtask_uvm_split_string__88__sep;
    __Vtask_uvm_split_string__88__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__88__s;
    __Vtask_uvm_split_string__88__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__88__e;
    __Vtask_uvm_split_string__88__e = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk132__DOT__base;
    std::string unnamedblk132__DOT__extval;
    VlWide<128>/*4095:0*/ v;
    VlQueue<std::string> split_val;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> m_uvm_top;
    {
        VL_ZERO_W(4096, v);
        split_val.clear();
        split_val.atDefault().clear();
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, m_uvm_top);
        __Vtask_uvm_split_string__88__sep = 0x2cU;
        this->__Vtask_uvm_split_string__88__str = cfg;
        __Vtask_uvm_split_string__88__s = 0U;
        __Vtask_uvm_split_string__88__e = 0U;
        split_val.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__88__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__88__str))) {
            __Vtask_uvm_split_string__88__s = __Vtask_uvm_split_string__88__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__88__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__88__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__88__str,__Vtask_uvm_split_string__88__e) 
                         == (IData)(__Vtask_uvm_split_string__88__sep))) {
                        goto __Vlabel1;
                    }
                    __Vtask_uvm_split_string__88__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__88__e);
                }
                __Vlabel1: ;
            }
            if ((__Vtask_uvm_split_string__88__s != __Vtask_uvm_split_string__88__e)) {
                split_val.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__88__str,__Vtask_uvm_split_string__88__s,
                                                (__Vtask_uvm_split_string__88__e 
                                                 - (IData)(1U))));
            }
            __Vtask_uvm_split_string__88__e = ((IData)(1U) 
                                               + __Vtask_uvm_split_string__88__e);
        }
        if ((1U == split_val.size())) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing field and value: component is \""s), split_val.at(0U)), "\""s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if ((2U == split_val.size())) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("Invalid +uvm_set_config command\""s, cfg), "\" missing value: component is \""s), split_val.at(0U)), "\"  field is \""s), split_val.at(1U)), "\""s)), 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (VL_LTS_III(32, 3U, split_val.size())) {
            this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, VL_SFORMATF_N_NX("Invalid +uvm_set_config command\"%s\" : expected only 3 fields (component, field and value).",1
                                                                                , 'S',&(cfg)) , 0U, ""s, 0U);
            goto __Vlabel0;
        }
        if (is_int) {
            if (VL_LTS_III(32, 2U, VL_LEN_IN(split_val.at(2U)))) {
                unnamedblk132__DOT__base = ""s;
                unnamedblk132__DOT__extval = ""s;
                unnamedblk132__DOT__base = VL_SUBSTR_N(split_val.at(2U),0U,1U);
                unnamedblk132__DOT__extval = VL_SUBSTR_N(split_val.at(2U),2U,
                                                         (VL_LEN_IN(split_val.at(2U)) 
                                                          - (IData)(1U)));
                if (("'b"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 2));
                } else if (("0b"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 2));
                } else if (("'o"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 8));
                } else if (("'d"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 10));
                } else if (("'h"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 16));
                } else if (("'x"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 16));
                } else if (("0x"s == unnamedblk132__DOT__base)) {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(unnamedblk132__DOT__extval, 16));
                } else {
                    VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(split_val.at(2U), 10));
                }
            } else {
                VL_EXTENDS_WI(4096,32, v, VL_ATOI_N(split_val.at(2U), 10));
            }
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_int="s, cfg)), 0U, ""s, 0U);
            VL_NULL_CHECK(m_uvm_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 753)->__VnoInFunc_set_config_int(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), v);
        } else {
            this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                              VL_CVT_PACK_STR_NN(
                                                                 VL_CONCATN_NNN("Applying config setting from the command line: +uvm_set_config_string="s, cfg)), 0U, ""s, 0U);
            VL_NULL_CHECK(m_uvm_top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 757)->__VnoInFunc_set_config_string(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(0U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(1U)), 
                                                                                VL_CVT_PACK_STR_NN(split_val.at(2U)));
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_config_settings\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__96__Vfuncout;
    __Vtask_get_arg_matches__96__Vfuncout = 0;
    IData/*31:0*/ __Vtask_get_arg_matches__98__Vfuncout;
    __Vtask_get_arg_matches__98__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ unnamedblk133__DOT__i;
    unnamedblk133__DOT__i = 0;
    IData/*31:0*/ unnamedblk133__DOT__i__Vloopsize;
    unnamedblk133__DOT__i__Vloopsize = 0;
    IData/*31:0*/ unnamedblk134__DOT__i;
    unnamedblk134__DOT__i = 0;
    IData/*31:0*/ unnamedblk134__DOT__i__Vloopsize;
    unnamedblk134__DOT__i__Vloopsize = 0;
    VlQueue<std::string> args;
    args.clear();
    args.atDefault().clear();
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 769)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_CONFIG_INT|uvm_set_config_int)=/"s, args, __Vtask_get_arg_matches__96__Vfuncout);
    unnamedblk133__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk133__DOT__i, args.size())) {
        unnamedblk133__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_SUBSTR_N(args.at(unnamedblk133__DOT__i),0x00000014U,
                                                                          (VL_LEN_IN(args.at(unnamedblk133__DOT__i)) 
                                                                           - (IData)(1U)))), 1U);
        if ((unnamedblk133__DOT__i__Vloopsize <= args.size())) {
            unnamedblk133__DOT__i = ((IData)(1U) + unnamedblk133__DOT__i);
        }
    }
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 773)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "/^\\+(UVM_SET_CONFIG_STRING|uvm_set_config_string)=/"s, args, __Vtask_get_arg_matches__98__Vfuncout);
    unnamedblk134__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk134__DOT__i, args.size())) {
        unnamedblk134__DOT__i__Vloopsize = args.size();
        this->__VnoInFunc_m_process_config(vlProcess, vlSymsp, 
                                           VL_CVT_PACK_STR_NN(
                                                              VL_SUBSTR_N(args.at(unnamedblk134__DOT__i),0x00000017U,
                                                                          (VL_LEN_IN(args.at(unnamedblk134__DOT__i)) 
                                                                           - (IData)(1U)))), 0U);
        if ((unnamedblk134__DOT__i__Vloopsize <= args.size())) {
            unnamedblk134__DOT__i = ((IData)(1U) + unnamedblk134__DOT__i);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_max_quit_settings\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__101__Vfuncout;
    __Vtask_get_arg_values__101__Vfuncout = 0;
    CData/*7:0*/ __Vtask_uvm_split_string__104__sep;
    __Vtask_uvm_split_string__104__sep = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__104__s;
    __Vtask_uvm_split_string__104__s = 0;
    IData/*31:0*/ __Vtask_uvm_split_string__104__e;
    __Vtask_uvm_split_string__104__e = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk135__DOT__max_quit_list;
    std::string unnamedblk135__DOT__sep;
    IData/*31:0*/ unnamedblk135__DOT__unnamedblk136__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_server> srvr;
    VlQueue<std::string> max_quit_settings;
    IData/*31:0*/ max_quit_count;
    std::string max_quit;
    VlQueue<std::string> split_max_quit;
    IData/*31:0*/ max_quit_int;
    max_quit_settings.clear();
    max_quit_settings.atDefault().clear();
    max_quit_count = 0U;
    max_quit = ""s;
    split_max_quit.clear();
    split_max_quit.atDefault().clear();
    max_quit_int = 0U;
    this->__VnoInFunc_get_report_server(vlProcess, vlSymsp, srvr);
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 791)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_MAX_QUIT_COUNT="s, max_quit_settings, __Vtask_get_arg_values__101__Vfuncout);
    max_quit_count = __Vtask_get_arg_values__101__Vfuncout;
    if ((0U != max_quit_count)) {
        max_quit = max_quit_settings.at(0U);
        if (VL_LTS_III(32, 1U, max_quit_count)) {
            unnamedblk135__DOT__max_quit_list = ""s;
            unnamedblk135__DOT__sep = ""s;
            unnamedblk135__DOT__unnamedblk136__DOT__i = 0U;
            unnamedblk135__DOT__unnamedblk136__DOT__i = 0U;
            while (VL_LTS_III(32, unnamedblk135__DOT__unnamedblk136__DOT__i, max_quit_settings.size())) {
                if ((0U != unnamedblk135__DOT__unnamedblk136__DOT__i)) {
                    unnamedblk135__DOT__sep = "; "s;
                }
                unnamedblk135__DOT__max_quit_list = 
                    VL_CONCATN_NNN(VL_CONCATN_NNN(unnamedblk135__DOT__max_quit_list, unnamedblk135__DOT__sep), max_quit_settings.at(unnamedblk135__DOT__unnamedblk136__DOT__i));
                unnamedblk135__DOT__unnamedblk136__DOT__i 
                    = ((IData)(1U) + unnamedblk135__DOT__unnamedblk136__DOT__i);
            }
            this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTMAXQUIT"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_MAX_QUIT_COUNT arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,max_quit_count
                                                                                , 'S',&(max_quit)
                                                                                , 'S',&(unnamedblk135__DOT__max_quit_list)) , 0U, ""s, 0U);
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "MAXQUITSET"s, VL_SFORMATF_N_NX("'+UVM_MAX_QUIT_COUNT=%s' provided on the command line is being applied.",1
                                                                                , 'S',&(max_quit)) , 0U, ""s, 0U);
        __Vtask_uvm_split_string__104__sep = 0x2cU;
        this->__Vtask_uvm_split_string__104__str = max_quit;
        __Vtask_uvm_split_string__104__s = 0U;
        __Vtask_uvm_split_string__104__e = 0U;
        split_max_quit.clear();
        while (VL_LTS_III(32, __Vtask_uvm_split_string__104__e, 
                          VL_LEN_IN(this->__Vtask_uvm_split_string__104__str))) {
            __Vtask_uvm_split_string__104__s = __Vtask_uvm_split_string__104__e;
            {
                while (VL_LTS_III(32, __Vtask_uvm_split_string__104__e, 
                                  VL_LEN_IN(this->__Vtask_uvm_split_string__104__str))) {
                    if ((VL_GETC_N(this->__Vtask_uvm_split_string__104__str,__Vtask_uvm_split_string__104__e) 
                         == (IData)(__Vtask_uvm_split_string__104__sep))) {
                        goto __Vlabel0;
                    }
                    __Vtask_uvm_split_string__104__e 
                        = ((IData)(1U) + __Vtask_uvm_split_string__104__e);
                }
                __Vlabel0: ;
            }
            if ((__Vtask_uvm_split_string__104__s != __Vtask_uvm_split_string__104__e)) {
                split_max_quit.push_back(VL_SUBSTR_N(this->__Vtask_uvm_split_string__104__str,__Vtask_uvm_split_string__104__s,
                                                     (__Vtask_uvm_split_string__104__e 
                                                      - (IData)(1U))));
            }
            __Vtask_uvm_split_string__104__e = ((IData)(1U) 
                                                + __Vtask_uvm_split_string__104__e);
        }
        max_quit_int = VL_ATOI_N(split_max_quit.at(0U), 10);
        if (("YES"s == split_max_quit.at(1U))) {
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 813)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
        } else if (("NO"s == split_max_quit.at(1U))) {
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 814)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 0U);
        } else {
            VL_NULL_CHECK(srvr, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 815)->__VnoInFunc_set_max_quit_count(vlProcess, vlSymsp, max_quit_int, 1U);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_do_dump_args\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_matches__108__Vfuncout;
    __Vtask_get_arg_matches__108__Vfuncout = 0;
    VlQueue<std::string> __Vtask_get_args__109__args;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__get_arg_matches;
    IData/*31:0*/ unnamedblk137__DOT__i;
    VlQueue<std::string> dump_args;
    VlQueue<std::string> all_args;
    std::string out_string;
    dump_args.clear();
    dump_args.atDefault().clear();
    all_args.clear();
    all_args.atDefault().clear();
    out_string = ""s;
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 828)->__VnoInFunc_get_arg_matches(vlProcess, vlSymsp, "+UVM_DUMP_CMDLINE_ARGS"s, dump_args, __Vtask_get_arg_matches__108__Vfuncout);
    __VlefCall_0__get_arg_matches = __Vtask_get_arg_matches__108__Vfuncout;
    if ((0U != __VlefCall_0__get_arg_matches)) {
        VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 829)->__VnoInFunc_get_args(vlSymsp, __Vtask_get_args__109__args);
        all_args = __Vtask_get_args__109__args;
        unnamedblk137__DOT__i = 0U;
        unnamedblk137__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk137__DOT__i, all_args.size())) {
            {
                if (("__-f__"s == all_args.at(unnamedblk137__DOT__i))) {
                    goto __Vlabel0;
                }
                out_string = VL_CONCATN_NNN(VL_CONCATN_NNN(out_string, all_args.at(unnamedblk137__DOT__i)), " "s);
                __Vlabel0: ;
            }
            unnamedblk137__DOT__i = ((IData)(1U) + unnamedblk137__DOT__i);
        }
        this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "DUMPARGS"s, out_string, 0U, ""s, 0U);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_m_check_verbosity\n"); );
    // Locals
    IData/*31:0*/ __Vtask_get_arg_values__111__Vfuncout;
    __Vtask_get_arg_values__111__Vfuncout = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string unnamedblk138__DOT__verb_list;
    std::string unnamedblk138__DOT__sep;
    IData/*31:0*/ unnamedblk138__DOT__unnamedblk139__DOT__i;
    std::string verb_string;
    VlQueue<std::string> verb_settings;
    IData/*31:0*/ verb_count;
    IData/*31:0*/ plusarg;
    IData/*31:0*/ verbosity;
    verb_string = ""s;
    verb_settings.clear();
    verb_settings.atDefault().clear();
    verb_count = 0U;
    plusarg = 0U;
    verbosity = 0x000000c8U;
    VL_NULL_CHECK(this->__PVT__clp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh", 853)->__VnoInFunc_get_arg_values(vlSymsp, "+UVM_VERBOSITY="s, verb_settings, __Vtask_get_arg_values__111__Vfuncout);
    verb_count = __Vtask_get_arg_values__111__Vfuncout;
    if (VL_LTS_III(32, 0U, verb_count)) {
        verb_string = verb_settings.at(0U);
        plusarg = 1U;
    }
    if (VL_LTS_III(32, 1U, verb_count)) {
        unnamedblk138__DOT__verb_list = ""s;
        unnamedblk138__DOT__sep = ""s;
        unnamedblk138__DOT__unnamedblk139__DOT__i = 0U;
        unnamedblk138__DOT__unnamedblk139__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk138__DOT__unnamedblk139__DOT__i, verb_settings.size())) {
            if ((0U != unnamedblk138__DOT__unnamedblk139__DOT__i)) {
                unnamedblk138__DOT__sep = ", "s;
            }
            unnamedblk138__DOT__verb_list = VL_CONCATN_NNN(
                                                           VL_CONCATN_NNN(unnamedblk138__DOT__verb_list, unnamedblk138__DOT__sep), verb_settings.at(unnamedblk138__DOT__unnamedblk139__DOT__i));
            unnamedblk138__DOT__unnamedblk139__DOT__i 
                = ((IData)(1U) + unnamedblk138__DOT__unnamedblk139__DOT__i);
        }
        this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "MULTVERB"s, VL_SFORMATF_N_NX("Multiple (%0d) +UVM_VERBOSITY arguments provided on the command line.  '%s' will be used.  Provided list: %s.",3
                                                                                , '~',32,verb_count
                                                                                , 'S',&(verb_string)
                                                                                , 'S',&(unnamedblk138__DOT__verb_list)) , 0U, ""s, 0U);
    }
    if ((1U == plusarg)) {
        if ((((((((("UVM_NONE"s == verb_string) | ("NONE"s 
                                                   == verb_string)) 
                  | ("UVM_LOW"s == verb_string)) | 
                 ("LOW"s == verb_string)) | ("UVM_MEDIUM"s 
                                             == verb_string)) 
               | ("MEDIUM"s == verb_string)) | ("UVM_HIGH"s 
                                                == verb_string)) 
             | ("HIGH"s == verb_string))) {
            verbosity = (("UVM_NONE"s == verb_string)
                          ? 0U : (("NONE"s == verb_string)
                                   ? 0U : (("UVM_LOW"s 
                                            == verb_string)
                                            ? 0x00000064U
                                            : (("LOW"s 
                                                == verb_string)
                                                ? 0x00000064U
                                                : (
                                                   ("UVM_MEDIUM"s 
                                                    == verb_string)
                                                    ? 0x000000c8U
                                                    : 
                                                   (("MEDIUM"s 
                                                     == verb_string)
                                                     ? 0x000000c8U
                                                     : 0x0000012cU))))));
        } else if (("UVM_FULL"s == verb_string)) {
            verbosity = 0x00000190U;
        } else if (("FULL"s == verb_string)) {
            verbosity = 0x00000190U;
        } else if (("UVM_DEBUG"s == verb_string)) {
            verbosity = 0x000001f4U;
        } else if (("DEBUG"s == verb_string)) {
            verbosity = 0x000001f4U;
        } else {
            verbosity = VL_ATOI_N(verb_string, 10);
            if (VL_LTS_III(32, 0U, verbosity)) {
                this->__VnoInFunc_uvm_report_info(vlProcess, vlSymsp, "NSTVERB"s, VL_SFORMATF_N_NX("Non-standard verbosity value, using provided '%0d'.",1
                                                                                , '~',32,verbosity) , 0U, ""s, 0U);
            }
            if ((0U == verbosity)) {
                verbosity = 0x000000c8U;
                this->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, "ILLVERB"s, "Illegal verbosity value, using default of UVM_MEDIUM."s, 0U, ""s, 0U);
            }
        }
    }
    this->__VnoInFunc_set_report_verbosity_level_hier(vlSymsp, verbosity);
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_phase> phase) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_run_phase\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    IData/*31:0*/ __VlefCall_0__uvm_report_enabled;
    if ((0ULL < VL_TIME_UNITED_Q(1000))) {
        this->__VnoInFunc_uvm_report_enabled(vlSymsp, 0U, 3U, "RUNPHSTIME"s, __VlefCall_0__uvm_report_enabled);
        if ((0U != __VlefCall_0__uvm_report_enabled)) {
            this->__VnoInFunc_uvm_report_fatal(vlProcess, vlSymsp, "RUNPHSTIME"s, 
                                               VL_CVT_PACK_STR_NN(
                                                                  VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("The run phase must start at time 0, current time is "s, VL_SFORMATF_N_NX("%0t",2, 'T',-9
                                                                                , 'D',VL_TIME_UNITED_D(1000)) ), ". No non-zero delays are allowed before "s), "run_test(), and pre-run user defined phases may not consume "s), "simulation time before the start of the run phase."s)), 0U, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_root.svh"s, 0x0000039aU);
        }
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__m_phase_all_done = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_root() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_root::~\n"); );
}
