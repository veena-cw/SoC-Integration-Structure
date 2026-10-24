// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82__Vclpkg::__VnoInFunc_get_global_pool(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82> &get_global_pool__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82__Vclpkg::__VnoInFunc_get_global_pool\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_pool)) {
        this->__PVT__m_global_pool = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82, vlProcess, vlSymsp, "pool"s);
    }
    get_global_pool__Vfuncrtn = this->__PVT__m_global_pool;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82__Vclpkg::__VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz36> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82> gpool;
    this->__VnoInFunc_get_global_pool(vlSymsp, gpool);
    VL_NULL_CHECK(gpool, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 75)->__VnoInFunc_get(vlSymsp, key, get_global__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_get(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz36> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_get\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz36> unnamedblk1__DOT__default_value;
    if ((! this->__PVT__pool.exists(key))) {
        this->__PVT__pool.atWrite(key) = unnamedblk1__DOT__default_value;
    }
    get__Vfuncrtn = this->__PVT__pool.at(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_add(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource__Tz36> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_add\n"); );
    // Body
    this->__PVT__pool.atWrite(key) = item;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_num(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &num__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_num\n"); );
    // Body
    num__Vfuncrtn = this->__PVT__pool.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__2__verbosity;
    __Vtask_uvm_report_warning__2__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__2__line;
    __Vtask_uvm_report_warning__2__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__3__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__exists;
    {
        this->__VnoInFunc_exists(vlSymsp, key, __VlefCall_0__exists);
        if ((1U & (~ (0U != __VlefCall_0__exists)))) {
            __Vtask_uvm_report_warning__2__line = 0U;
            this->__Vtask_uvm_report_warning__2__filename = ""s;
            __Vtask_uvm_report_warning__2__verbosity = 0x000000c8U;
            this->__Vtask_uvm_report_warning__2__message = "delete: pool key doesn't exist. Ignoring delete request"s;
            this->__Vtask_uvm_report_warning__2__id = "POOLDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__3__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__3__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__2__id, this->__Vtask_uvm_report_warning__2__message, __Vtask_uvm_report_warning__2__verbosity, this->__Vtask_uvm_report_warning__2__filename, __Vtask_uvm_report_warning__2__line);
            goto __Vlabel0;
        }
        this->__PVT__pool.erase(key);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_exists(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string key, IData/*31:0*/ &exists__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_exists\n"); );
    // Body
    exists__Vfuncrtn = this->__PVT__pool.exists(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_first(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &first__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_first\n"); );
    // Body
    first__Vfuncrtn = 0U;
    first__Vfuncrtn = this->__PVT__pool.first(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_last(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &last__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_last\n"); );
    // Body
    last__Vfuncrtn = 0U;
    last__Vfuncrtn = this->__PVT__pool.last(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_next(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &next__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_next\n"); );
    // Body
    next__Vfuncrtn = 0U;
    next__Vfuncrtn = this->__PVT__pool.next(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_prev(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &key, IData/*31:0*/ &prev__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_prev\n"); );
    // Body
    prev__Vfuncrtn = 0U;
    prev__Vfuncrtn = this->__PVT__pool.prev(key);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82> v;
    v = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82, vlProcess, vlSymsp, name);
    create__Vfuncrtn = v;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_pool"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82> p;
    {
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc_do_copy(vlProcess, vlSymsp, rhs);
        __VlefLogOr_1 = (VlNull{} == rhs);
        if ((1U & (~ (IData)(__VlefLogOr_1)))) {
            __VlefExpr_0 = VL_CAST_DYNAMIC(rhs, p);
            __VlefLogOr_1 = (! __VlefExpr_0);
        }
        if (__VlefLogOr_1) {
            goto __Vlabel0;
        }
        this->__PVT__pool = VL_NULL_CHECK(p, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 212)
            ->__PVT__pool;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_do_print\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefExpr_0;
    std::string v;
    IData/*31:0*/ cnt;
    std::string item;
    std::string key;
    v = ""s;
    cnt = 0U;
    item = ""s;
    key = ""s;
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 220)->__VnoInFunc_print_array_header(vlSymsp, "pool"s, this->__PVT__pool.size(), "aa_object_string"s, 0x2eU);
    __VlefExpr_0 = (0U != this->__PVT__pool.first(key));
    if (__VlefExpr_0) {
        do {
            VL_SFORMAT_NX(item,"%0d",1, '~',32,cnt);
            item = VL_CONCATN_NNN(VL_CONCATN_NNN("[-key"s, item), "--]"s);
            __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__pool
                                           .at(key));
            VL_SFORMAT_NX(v,"%p",1, '!',&(__Vtemp_1));
            VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 226)->__VnoInFunc_print_generic(vlSymsp, item, ""s, 0xffffffffU, v, 0x5bU);
            __VlefExpr_1 = (0U != this->__PVT__pool.next(key));
        } while (__VlefExpr_1);
    }
    VL_NULL_CHECK(printer, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_pool.svh", 229)->__VnoInFunc_print_array_footer(vlSymsp, 0U);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_pool__Tz5_TBz82::~\n"); );
}
