// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99__Vclpkg::__VnoInFunc_get_global_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99, vlProcess, vlSymsp, "global_pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99__Vclpkg::__VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, gpool);
    VL_NULL_CHECK(gpool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 294)->__VnoInFunc_get(vlSymsp, key, get_global__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_obj_str_pool"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_get\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier> __VlefCall_0__new;
    if ((! Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.exists(key))) {
        __VlefCall_0__new = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_barrier, vlProcess, vlSymsp, key, 0U);
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.atWrite(key) 
            = __VlefCall_0__new;
    }
    get__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool
        .at(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__3__verbosity;
    __Vtask_uvm_report_warning__3__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__3__line;
    __Vtask_uvm_report_warning__3__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            __Vtask_uvm_report_warning__3__line = 0U;
            this->__Vtask_uvm_report_warning__3__filename = ""s;
            __Vtask_uvm_report_warning__3__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__3__message
                          ,"delete: key '%s' doesn't exist",1
                          , 'S',&(key));
            this->__Vtask_uvm_report_warning__3__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__3__id, this->__Vtask_uvm_report_warning__3__message, __Vtask_uvm_report_warning__3__verbosity, this->__Vtask_uvm_report_warning__3__filename, __Vtask_uvm_report_warning__3__line);
            goto __Vlabel0;
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string key;
    key = ""s;
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 330)->__VnoInFunc_print_array_header(vlSymsp, "pool"s, Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.first(key));
    if (__VlefExpr_0) {
        do {
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 333)->__VnoInFunc_print_object(vlProcess, vlSymsp, 
                                                                                VL_CVT_PACK_STR_NN(
                                                                                VL_CONCATN_NNN(
                                                                                VL_CONCATN_NNN("["s, key), "]"s)), Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool
                                                                                .at(key), 0x5bU);
            __VlefExpr_1 = (0U != Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz99::__PVT__pool.next(key));
        } while (__VlefExpr_1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 335)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_string_pool__Tz99::~\n"); );
}
