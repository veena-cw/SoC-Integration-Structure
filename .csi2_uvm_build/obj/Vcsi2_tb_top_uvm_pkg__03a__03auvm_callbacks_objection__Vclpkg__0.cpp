// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    /*super.new*/;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_raised(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_raised\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41> unnamedblk1__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk1__DOT__cb;
    unnamedblk1__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this});
    VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1414)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    while ((VlNull{} != unnamedblk1__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk1__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1414)->__VnoInFunc_raised(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk1__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1414)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk1__DOT__cb);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_dropped(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41> unnamedblk2__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk2__DOT__cb;
    unnamedblk2__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this});
    VL_NULL_CHECK(unnamedblk2__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1424)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    while ((VlNull{} != unnamedblk2__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk2__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1424)->__VnoInFunc_dropped(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk2__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1424)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk2__DOT__cb);
    }
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_all_dropped(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> source_obj, std::string description, IData/*31:0*/ count) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_all_dropped\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_KEEP_THIS;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41> unnamedblk3__DOT__iter;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_objection_callback> unnamedblk3__DOT__cb;
    unnamedblk3__DOT__iter = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_callback_iter__pi41, vlSymsp, 
                                    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this});
    VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1435)->__VnoInFunc_first(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    while ((VlNull{} != unnamedblk3__DOT__cb)) {
        VL_NULL_CHECK(unnamedblk3__DOT__cb, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1435)->__VnoInFunc_all_dropped(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection>{this}, obj, source_obj, description, count);
        VL_NULL_CHECK(unnamedblk3__DOT__iter, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_objection.svh", 1435)->__VnoInFunc_next(vlProcess, vlSymsp, unnamedblk3__DOT__cb);
    }
    co_return;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_callbacks_objection::~\n"); );
}
