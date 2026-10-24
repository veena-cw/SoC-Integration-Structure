// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg::__VnoInFunc_get_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi6> &get_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item__Vclpkg::__VnoInFunc_get_type\n"); );
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, get_type__Vfuncrtn);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_get_object_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_wrapper> &get_object_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_get_object_type\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object_registry__pi6> __Vfunc_get__0__Vfuncout;
    // Body
    VlProcessRef vlProcess = std::make_shared<VlProcess>();
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_object_registry__pi6__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__0__Vfuncout);
    get_object_type__Vfuncrtn = __Vfunc_get__0__Vfuncout;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_create(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> &create__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_create\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> tmp;
    tmp = VL_NEW(Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item, vlProcess, vlSymsp, "csi2_rx_packet_item"s);
    if ((""s != name)) {
        VL_NULL_CHECK(tmp, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 2)->__VnoInFunc_set_name(vlProcess, vlSymsp, name);
    }
    create__Vfuncrtn = tmp;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_get_type_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_type_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_get_type_name\n"); );
    // Body
    get_type_name__Vfuncrtn = "csi2_rx_packet_item"s;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc____05Fm_uvm_field_automation(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> tmp_data___05F, IData/*31:0*/ what___05F, std::string str___05F) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc____05Fm_uvm_field_automation\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefExpr_1;
    CData/*0:0*/ __VlefCall_0__m_do_cycle_check;
    VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> unnamedblk1__DOT__local_data___05F;
    {
        if ((((0x00020006U == what___05F) | (0x00020008U 
                                             == what___05F)) 
             | (0x00020007U == what___05F))) {
            VL_NULL_CHECK(vlSymsp->TOP__uvm_pkg__03a__03auvm_object__Vclpkg.__PVT_____05Fm_uvm_status_container, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 2)->__VnoInFunc_m_do_cycle_check(vlSymsp, 
                                                                                VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item>{this}, __VlefCall_0__m_do_cycle_check);
            if (__VlefCall_0__m_do_cycle_check) {
                goto __Vlabel0;
            }
        }
        Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::__VnoInFunc____05Fm_uvm_field_automation(vlProcess, vlSymsp, tmp_data___05F, what___05F, str___05F);
        if ((VlNull{} != tmp_data___05F)) {
            __VlefExpr_1 = VL_CAST_DYNAMIC(tmp_data___05F, unnamedblk1__DOT__local_data___05F);
        }
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_sequence_item::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    this->__PVT__reserved = 0U;
    this->__PVT__vcx = 0U;
    this->__PVT__vc = 0U;
    this->__PVT__datatype = 0x29U;
    this->__PVT__rtl_word_count = 0x0118U;
    this->__PVT__sync_type = 3U;
    this->__PVT__send_eot = 1U;
    /*super.new*/;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_copy_from(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item> rhs) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_copy_from\n"); );
    // Body
    this->__PVT__reserved = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 21)
        ->__PVT__reserved;
    this->__PVT__vcx = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 22)
        ->__PVT__vcx;
    this->__PVT__vc = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 23)
        ->__PVT__vc;
    this->__PVT__datatype = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 24)
        ->__PVT__datatype;
    this->__PVT__rtl_word_count = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 25)
        ->__PVT__rtl_word_count;
    this->__PVT__sync_type = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 26)
        ->__PVT__sync_type;
    this->__PVT__send_eot = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 27)
        ->__PVT__send_eot;
    this->__PVT__payload = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 28)
        ->__PVT__payload;
    this->__PVT__bfm_completed = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 29)
        ->__PVT__bfm_completed;
    this->__PVT__bfm_status = VL_NULL_CHECK(rhs, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/mipi_csi2_verif/csi2_tb/agent/rx_agent/csi2_rx_packet_item.sv", 30)
        ->__PVT__bfm_status;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    VL_SFORMAT_NX(convert2string__Vfuncrtn,"dt=0x%02h rtl_wc=0x%04h payload=%0d eot=%0b",4
                  , '#',6,this->__PVT__datatype, '#',16,(IData)(this->__PVT__rtl_word_count)
                  , '~',32,this->__PVT__payload.size()
                  , '#',1,(IData)(this->__PVT__send_eot));
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__payload.atDefault() = 0;
    __PVT__bfm_completed = 0;
    __PVT__bfm_status = 0;
}

Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::~Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item() {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_csi2_uvm_pkg__03a__03acsi2_rx_packet_item::~\n"); );
}
