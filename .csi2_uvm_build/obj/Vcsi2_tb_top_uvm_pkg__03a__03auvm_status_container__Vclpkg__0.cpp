// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_do_field_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string field, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> obj) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_do_field_check\n"); );
    // Body
    vlSymsp->TOP__uvm_pkg__03a__03auvm_status_container__Vclpkg.__PVT__field_array.atWrite(field) = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_get_function_type(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ what, std::string &get_function_type__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_get_function_type\n"); );
    // Body
    get_function_type__Vfuncrtn = (((((((((1U == what) 
                                          | (4U == what)) 
                                         | (0x00000010U 
                                            == what)) 
                                        | (0x00000040U 
                                           == what)) 
                                       | (0x00000100U 
                                          == what)) 
                                      | (0x00020002U 
                                         == what)) 
                                     | (0x00020001U 
                                        == what)) | 
                                    (0x00020006U == what))
                                    ? ((1U == what)
                                        ? "copy"s : 
                                       ((4U == what)
                                         ? "compare"s
                                         : ((0x00000010U 
                                             == what)
                                             ? "print"s
                                             : ((0x00000040U 
                                                 == what)
                                                 ? "record"s
                                                 : 
                                                ((0x00000100U 
                                                  == what)
                                                  ? "pack"s
                                                  : 
                                                 ((0x00020002U 
                                                   == what)
                                                   ? "unpack"s
                                                   : 
                                                  ((0x00020001U 
                                                    == what)
                                                    ? "get_flags"s
                                                    : "set"s)))))))
                                    : ((0x00020007U 
                                        == what) ? "set_object"s
                                        : ((0x00020008U 
                                            == what)
                                            ? "set_string"s
                                            : "unknown"s)));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_get_full_scope_arg(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_full_scope_arg__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_get_full_scope_arg\n"); );
    // Body
    get_full_scope_arg__Vfuncrtn = ""s;
    VL_NULL_CHECK(this->__PVT__scope, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_misc.svh", 248)->__VnoInFunc_get(vlSymsp, get_full_scope_arg__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_m_do_cycle_check(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> scope, CData/*0:0*/ &m_do_cycle_check__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::__VnoInFunc_m_do_cycle_check\n"); );
    // Body
    VlQueue<VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object>> unnamedblk1__DOT__m;
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> l;
    m_do_cycle_check__Vfuncrtn = 0U;
    l = this->__PVT__m_uvm_cycle_scopes.atBack(0U);
    if ((l == scope)) {
        this->__PVT__m_uvm_cycle_scopes.push_back(scope);
        m_do_cycle_check__Vfuncrtn = 0U;
    } else {
        unnamedblk1__DOT__m = this->__PVT__m_uvm_cycle_scopes.find_first(
                                                                         [&](
                                                                             IData/*31:0*/ item__DOT__index, 
                                                                             VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> item) -> 
                                                                         CData/*31:0*/ {
                return ((item == scope));
            }
        );
        if ((0U != unnamedblk1__DOT__m.size())) {
            m_do_cycle_check__Vfuncrtn = 1U;
        } else {
            this->__PVT__m_uvm_cycle_scopes.push_back(scope);
            m_do_cycle_check__Vfuncrtn = 0U;
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::new\n"); );
    // Body
    _ctor_var_reset(vlSymsp);
    this->__PVT__clone = 1U;
    this->__PVT__scope = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_scope_stack, vlSymsp);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_status_container::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__warning = 0;
    __PVT__status = 0;
    VL_SCOPED_RAND_RESET_W(4096, __PVT__bitstream, 12811502898906104025ULL, 12172854130148764616ull);
    __PVT__intv = 0;
    __PVT__element = 0;
    __PVT__array_warning_done = 0;
    __PVT__cycle_check.atDefault() = 0;
}
