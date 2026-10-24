// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg::__VnoInFunc_get_global_queue(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> &get_global_queue__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg::__VnoInFunc_get_global_queue\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_global_queue)) {
        this->__PVT__m_global_queue = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121, vlProcess, vlSymsp, "global_queue"s);
    }
    get_global_queue__Vfuncrtn = this->__PVT__m_global_queue;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg::__VnoInFunc_get_global(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get_global__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121__Vclpkg::__VnoInFunc_get_global\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> gqueue;
    this->__VnoInFunc_get_global_queue(vlSymsp, gqueue);
    VL_NULL_CHECK(gqueue, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_queue.svh", 75)->__VnoInFunc_get(vlProcess, vlSymsp, index, get_global__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_get(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &get__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_get\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__3__verbosity;
    __Vtask_uvm_report_warning__3__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__3__line;
    __Vtask_uvm_report_warning__3__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__4__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> default_value;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__3__line = 0U;
            this->__Vtask_uvm_report_warning__3__filename = ""s;
            __Vtask_uvm_report_warning__3__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__3__message
                          ,"get: given index out of range for queue of size %0d. Ignoring get request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__3__id = "QUEUEGET"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__4__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__4__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__3__id, this->__Vtask_uvm_report_warning__3__message, __Vtask_uvm_report_warning__3__verbosity, this->__Vtask_uvm_report_warning__3__filename, __Vtask_uvm_report_warning__3__line);
            get__Vfuncrtn = default_value;
            goto __Vlabel0;
        }
        get__Vfuncrtn = this->__PVT__queue.at(index);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_size(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &size__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_size\n"); );
    // Body
    size__Vfuncrtn = this->__PVT__queue.size();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_insert(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_insert\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__8__verbosity;
    __Vtask_uvm_report_warning__8__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__8__line;
    __Vtask_uvm_report_warning__8__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__9__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0U, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__8__line = 0U;
            this->__Vtask_uvm_report_warning__8__filename = ""s;
            __Vtask_uvm_report_warning__8__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__8__message
                          ,"insert: given index out of range for queue of size %0d. Ignoring insert request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__8__id = "QUEUEINS"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__9__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__9__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__8__id, this->__Vtask_uvm_report_warning__8__message, __Vtask_uvm_report_warning__8__verbosity, this->__Vtask_uvm_report_warning__8__filename, __Vtask_uvm_report_warning__8__line);
            goto __Vlabel0;
        }
        this->__PVT__queue.insert(index, item);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_delete(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ index) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_delete\n"); );
    // Locals
    IData/*31:0*/ __Vtask_uvm_report_warning__13__verbosity;
    __Vtask_uvm_report_warning__13__verbosity = 0;
    IData/*31:0*/ __Vtask_uvm_report_warning__13__line;
    __Vtask_uvm_report_warning__13__line = 0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__14__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_1__size;
    IData/*31:0*/ __VlefCall_0__size;
    {
        this->__VnoInFunc_size(vlSymsp, __VlefCall_0__size);
        if ((VL_GTES_III(32, index, __VlefCall_0__size) 
             | VL_GTS_III(32, 0xffffffffU, index))) {
            this->__VnoInFunc_size(vlSymsp, __VlefCall_1__size);
            __Vtask_uvm_report_warning__13__line = 0U;
            this->__Vtask_uvm_report_warning__13__filename = ""s;
            __Vtask_uvm_report_warning__13__verbosity = 0x000000c8U;
            VL_SFORMAT_NX(this->__Vtask_uvm_report_warning__13__message
                          ,"delete: given index out of range for queue of size %0d. Ignoring delete request",1
                          , '~',32,__VlefCall_1__size);
            this->__Vtask_uvm_report_warning__13__id = "QUEUEDEL"s;
            vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__14__Vfuncout);
            vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top 
                = __Vfunc_get__14__Vfuncout;
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg.__PVT__uvm_report_warning__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 158)->__VnoInFunc_uvm_report_warning(vlProcess, vlSymsp, this->__Vtask_uvm_report_warning__13__id, this->__Vtask_uvm_report_warning__13__message, __Vtask_uvm_report_warning__13__verbosity, this->__Vtask_uvm_report_warning__13__filename, __Vtask_uvm_report_warning__13__line);
            goto __Vlabel0;
        }
        if ((0xffffffffU == index)) {
            this->__PVT__queue.clear();
        } else {
            this->__PVT__queue.erase(index);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_pop_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_front__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_pop_front\n"); );
    // Body
    pop_front__Vfuncrtn = this->__PVT__queue.pop_front();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_pop_back(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> &pop_back__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_pop_back\n"); );
    // Body
    pop_back__Vfuncrtn = this->__PVT__queue.pop_back();
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_push_front(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_push_front\n"); );
    // Body
    this->__PVT__queue.push_front(item);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_push_back(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_hdl_path_concat> item) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_push_back\n"); );
    // Body
    this->__PVT__queue.push_back(item);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> v;
    v = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121, vlProcess, vlSymsp, name);
    create__Vfuncrtn = v;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "uvm_queue"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_do_copy(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_do_copy\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefLogOr_1;
    IData/*31:0*/ __VlefExpr_0;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121> p;
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
        this->__PVT__queue = VL_NULL_CHECK(p, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_queue.svh", 191)
            ->__PVT__queue;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_convert2string\n"); );
    // Locals
    std::string __Vtemp_1;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vtemp_1 = VL_TO_STRING_DEREF(this->__PVT__queue);
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"%p",1, '!',&(__Vtemp_1));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121() {
    VL_DEBUG_IF(VL_DBG_MSGF("+              Vcsi2_tb_top_uvm_pkg__03a__03auvm_queue__Tz121::~\n"); );
}
