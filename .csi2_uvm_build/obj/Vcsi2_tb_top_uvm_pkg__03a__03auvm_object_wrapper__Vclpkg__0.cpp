// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create_object__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_object\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    create_object__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> parent, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_component> &create_component__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_create_component\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    create_component__Vfuncrtn = VlNull{};
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = ""s;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper::~\n"); );
}
