// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> target) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::new\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__1__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    /*super.new*/;
    if ((VlNull{} != target)) {
        this->__PVT__target = target;
    } else {
        vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__1__Vfuncout);
        this->__PVT__target = __Vfunc_get__1__Vfuncout;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_raised\n"); );
    // Body
    if ((obj == this->__PVT__target)) {
        if ((! this->__PVT__cnt.exists(source_obj))) {
            this->__PVT__cnt.atWrite(source_obj) = 0U;
        }
        this->__PVT__cnt.atWrite(source_obj) = ((IData)(1U) 
                                                + this->__PVT__cnt
                                                .at(source_obj));
        this->__PVT__last_trigger.atWrite(source_obj) 
            = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection> objection, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_dropped\n"); );
    // Body
    this->__VnoInFunc_raised(vlSymsp, objection, obj, source_obj, description, count);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_reset_counts\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk1__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk1__DOT__i__Vmore;
    unnamedblk1__DOT__i__Vmore = 0;
    unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__cnt.first(unnamedblk1__DOT__i__Vnext));
    while (unnamedblk1__DOT__i__Vmore) {
        unnamedblk1__DOT__i = unnamedblk1__DOT__i__Vnext;
        unnamedblk1__DOT__i__Vmore = (0U != this->__PVT__cnt.next(unnamedblk1__DOT__i__Vnext));
        this->__PVT__cnt.atWrite(unnamedblk1__DOT__i) = 0U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &objects_triggered__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_objects_triggered\n"); );
    // Body
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> unnamedblk2__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__i__Vmore;
    unnamedblk2__DOT__i__Vmore = 0;
    objects_triggered__Vfuncrtn = 0U;
    unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__cnt.first(unnamedblk2__DOT__i__Vnext));
    while (unnamedblk2__DOT__i__Vmore) {
        unnamedblk2__DOT__i = unnamedblk2__DOT__i__Vnext;
        unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__cnt.next(unnamedblk2__DOT__i__Vnext));
        if ((0U != this->__PVT__cnt.at(unnamedblk2__DOT__i))) {
            objects_triggered__Vfuncrtn = ((IData)(1U) 
                                           + objects_triggered__Vfuncrtn);
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__cnt.atDefault() = 0;
    __PVT__last_trigger.atDefault() = VL_SCOPED_RAND_RESET_Q(64, 6832164394050517435ULL, 14228963972983550624ull);
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_heartbeat_callback::~\n"); );
}
