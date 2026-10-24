// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

extern "C" int uvm_hdl_check_path(const char* path);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_check_path_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, IData/*31:0*/ &uvm_hdl_check_path__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_check_path_TOP__uvm_pkg\n"); );
    // Body
    const char* path__Vcvt;
    path__Vcvt = path.c_str();
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int uvm_hdl_check_path__Vfuncrtn__Vcvt;
    uvm_hdl_check_path__Vfuncrtn__Vcvt = uvm_hdl_check_path(path__Vcvt);
    uvm_hdl_check_path__Vfuncrtn = (uvm_hdl_check_path__Vfuncrtn__Vcvt);
}

extern "C" int uvm_hdl_deposit(const char* path, const svLogicVecVal* value);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, const VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_deposit__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_deposit_TOP__uvm_pkg\n"); );
    // Body
    const char* path__Vcvt;
    path__Vcvt = path.c_str();
    svLogicVecVal value__Vcvt[32];
    VL_SET_SVLV_W(1024, value__Vcvt, value);
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int uvm_hdl_deposit__Vfuncrtn__Vcvt;
    uvm_hdl_deposit__Vfuncrtn__Vcvt = uvm_hdl_deposit(path__Vcvt, value__Vcvt);
    uvm_hdl_deposit__Vfuncrtn = (uvm_hdl_deposit__Vfuncrtn__Vcvt);
}

extern "C" int uvm_hdl_read(const char* path, svLogicVecVal* value);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno, const std::string &path, VlWide<32>/*1023:0*/ &value, IData/*31:0*/ &uvm_hdl_read__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_hdl_read_TOP__uvm_pkg\n"); );
    // Body
    VL_ZERO_W(1024, value);
    const char* path__Vcvt;
    path__Vcvt = path.c_str();
    svLogicVecVal value__Vcvt[32];
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    int uvm_hdl_read__Vfuncrtn__Vcvt;
    uvm_hdl_read__Vfuncrtn__Vcvt = uvm_hdl_read(path__Vcvt, value__Vcvt);
    VL_SET_W_SVLV(1024, value, value__Vcvt + 0);
    uvm_hdl_read__Vfuncrtn = (uvm_hdl_read__Vfuncrtn__Vcvt);
}

extern "C" const char* uvm_dpi_get_next_arg_c();

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_next_arg_c_TOP__uvm_pkg(std::string &uvm_dpi_get_next_arg_c__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_next_arg_c_TOP__uvm_pkg\n"); );
    // Body
    const char* uvm_dpi_get_next_arg_c__Vfuncrtn__Vcvt;
    uvm_dpi_get_next_arg_c__Vfuncrtn__Vcvt = uvm_dpi_get_next_arg_c();
    uvm_dpi_get_next_arg_c__Vfuncrtn = VL_CVT_N_CSTR(uvm_dpi_get_next_arg_c__Vfuncrtn__Vcvt);
}

extern "C" const char* uvm_dpi_get_tool_name_c();

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_name_c_TOP__uvm_pkg(std::string &uvm_dpi_get_tool_name_c__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_name_c_TOP__uvm_pkg\n"); );
    // Body
    const char* uvm_dpi_get_tool_name_c__Vfuncrtn__Vcvt;
    uvm_dpi_get_tool_name_c__Vfuncrtn__Vcvt = uvm_dpi_get_tool_name_c();
    uvm_dpi_get_tool_name_c__Vfuncrtn = VL_CVT_N_CSTR(uvm_dpi_get_tool_name_c__Vfuncrtn__Vcvt);
}

extern "C" const char* uvm_dpi_get_tool_version_c();

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_version_c_TOP__uvm_pkg(std::string &uvm_dpi_get_tool_version_c__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_version_c_TOP__uvm_pkg\n"); );
    // Body
    const char* uvm_dpi_get_tool_version_c__Vfuncrtn__Vcvt;
    uvm_dpi_get_tool_version_c__Vfuncrtn__Vcvt = uvm_dpi_get_tool_version_c();
    uvm_dpi_get_tool_version_c__Vfuncrtn = VL_CVT_N_CSTR(uvm_dpi_get_tool_version_c__Vfuncrtn__Vcvt);
}

extern "C" void* uvm_dpi_regcomp(const char* regex);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regcomp_TOP__uvm_pkg(const std::string &regex, QData/*63:0*/ &uvm_dpi_regcomp__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regcomp_TOP__uvm_pkg\n"); );
    // Body
    const char* regex__Vcvt;
    regex__Vcvt = regex.c_str();
    void* uvm_dpi_regcomp__Vfuncrtn__Vcvt;
    uvm_dpi_regcomp__Vfuncrtn__Vcvt = uvm_dpi_regcomp(regex__Vcvt);
    uvm_dpi_regcomp__Vfuncrtn = VL_CVT_VP_Q(uvm_dpi_regcomp__Vfuncrtn__Vcvt);
}

extern "C" int uvm_dpi_regexec(void* preg, const char* str);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regexec_TOP__uvm_pkg(QData/*63:0*/ preg, const std::string &str, IData/*31:0*/ &uvm_dpi_regexec__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regexec_TOP__uvm_pkg\n"); );
    // Body
    void* preg__Vcvt;
    preg__Vcvt = VL_CVT_Q_VP(preg);
    const char* str__Vcvt;
    str__Vcvt = str.c_str();
    int uvm_dpi_regexec__Vfuncrtn__Vcvt;
    uvm_dpi_regexec__Vfuncrtn__Vcvt = uvm_dpi_regexec(preg__Vcvt, str__Vcvt);
    uvm_dpi_regexec__Vfuncrtn = (uvm_dpi_regexec__Vfuncrtn__Vcvt);
}

extern "C" void uvm_dpi_regfree(void* preg);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regfree_TOP__uvm_pkg(QData/*63:0*/ preg) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regfree_TOP__uvm_pkg\n"); );
    // Body
    void* preg__Vcvt;
    preg__Vcvt = VL_CVT_Q_VP(preg);
    uvm_dpi_regfree(preg__Vcvt);
}

extern "C" int uvm_re_match(const char* re, const char* str);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg\n"); );
    // Body
    const char* re__Vcvt;
    re__Vcvt = re.c_str();
    const char* str__Vcvt;
    str__Vcvt = str.c_str();
    int uvm_re_match__Vfuncrtn__Vcvt;
    uvm_re_match__Vfuncrtn__Vcvt = uvm_re_match(re__Vcvt, str__Vcvt);
    uvm_re_match__Vfuncrtn = (uvm_re_match__Vfuncrtn__Vcvt);
}

extern "C" const char* uvm_glob_to_re(const char* glob);

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg\n"); );
    // Body
    const char* glob__Vcvt;
    glob__Vcvt = glob.c_str();
    const char* uvm_glob_to_re__Vfuncrtn__Vcvt;
    uvm_glob_to_re__Vfuncrtn__Vcvt = uvm_glob_to_re(glob__Vcvt);
    uvm_glob_to_re__Vfuncrtn = VL_CVT_N_CSTR(uvm_glob_to_re__Vfuncrtn__Vcvt);
}

void Vcsi2_tb_top_uvm_pkg::__VnoInFunc_uvm_instance_scope_TOP__uvm_pkg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &uvm_instance_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg::__VnoInFunc_uvm_instance_scope_TOP__uvm_pkg\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __Vincrement1;
    __Vincrement1 = 0;
    {
        if ((""s != uvm_instance_scope__Vfuncrtn)) {
            goto __Vlabel0;
        }
        VL_SFORMAT_NX(uvm_instance_scope__Vfuncrtn,"%m",1, 'M',vlSymsp->name(),"uvm_pkg.uvm_instance_scope");
        this->__PVT__uvm_instance_scope__Vstatic__pos 
            = (VL_LEN_IN(uvm_instance_scope__Vfuncrtn) 
               - (IData)(1U));
        this->__PVT__uvm_instance_scope__Vstatic__c 
            = VL_GETC_N(uvm_instance_scope__Vfuncrtn,this->__PVT__uvm_instance_scope__Vstatic__pos);
        while ((((0U != this->__PVT__uvm_instance_scope__Vstatic__pos) 
                 & (0x2eU != (IData)(this->__PVT__uvm_instance_scope__Vstatic__c))) 
                & (0x3aU != (IData)(this->__PVT__uvm_instance_scope__Vstatic__c)))) {
            __Vincrement1 = (this->__PVT__uvm_instance_scope__Vstatic__pos 
                             - (IData)(1U));
            this->__PVT__uvm_instance_scope__Vstatic__pos 
                = __Vincrement1;
            this->__PVT__uvm_instance_scope__Vstatic__c 
                = VL_GETC_N(uvm_instance_scope__Vfuncrtn,__Vincrement1);
        }
        if ((0U == this->__PVT__uvm_instance_scope__Vstatic__pos)) {
            this->__VnoInFunc_uvm_report_error_TOP__uvm_pkg(vlProcess, vlSymsp, "SCPSTR"s, VL_SFORMATF_N_NX("Illegal name %s in scope string",1
                                                                                , 'S',&(uvm_instance_scope__Vfuncrtn)) , 0x00000064U, ""s, 0U);
        }
        uvm_instance_scope__Vfuncrtn = VL_SUBSTR_N(uvm_instance_scope__Vfuncrtn,0U,this->__PVT__uvm_instance_scope__Vstatic__pos);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg::__VnoInFunc_uvm_report_error_TOP__uvm_pkg(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string id, std::string message, IData/*31:0*/ verbosity, std::string filename, IData/*31:0*/ line) {
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vcsi2_tb_top_uvm_pkg::__VnoInFunc_uvm_report_error_TOP__uvm_pkg\n"); );
    // Locals
    VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_root> __Vfunc_get__13__Vfuncout;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->TOP__uvm_pkg__03a__03auvm_root__Vclpkg.__VnoInFunc_get(vlProcess, vlSymsp, __Vfunc_get__13__Vfuncout);
    this->__PVT__uvm_report_error__Vstatic__top = __Vfunc_get__13__Vfuncout;
    VL_NULL_CHECK(this->__PVT__uvm_report_error__Vstatic__top, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_globals.svh", 171)->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, id, message, verbosity, filename, line);
}
