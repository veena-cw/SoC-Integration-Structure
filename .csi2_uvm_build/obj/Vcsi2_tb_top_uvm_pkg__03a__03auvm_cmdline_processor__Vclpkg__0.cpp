// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor> &get_inst__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+  Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor__Vclpkg::__VnoInFunc_get_inst\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    if ((VlNull{} == this->__PVT__m_inst)) {
        this->__PVT__m_inst = VL_NEW(Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor, vlProcess, vlSymsp, "uvm_cmdline_proc"s);
    }
    get_inst__Vfuncrtn = this->__PVT__m_inst;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_args\n"); );
    // Body
    args = this->__PVT__m_argv;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_plusargs\n"); );
    // Body
    args = this->__PVT__m_plus_argv;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args(Vcsi2_tb_top__Syms* __restrict vlSymsp, VlQueue<std::string> &args) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_uvm_args\n"); );
    // Body
    args = this->__PVT__m_uvm_argv;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regcomp_TOP__uvm_pkg(const std::string &regex, QData/*63:0*/ &uvm_dpi_regcomp__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regexec_TOP__uvm_pkg(QData/*63:0*/ preg, const std::string &str, IData/*31:0*/ &uvm_dpi_regexec__Vfuncrtn);
void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regfree_TOP__uvm_pkg(QData/*63:0*/ preg);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &args, IData/*31:0*/ &get_arg_matches__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_matches\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    IData/*31:0*/ __VlefCall_0__uvm_dpi_regexec;
    IData/*31:0*/ unnamedblk1__DOT__i;
    unnamedblk1__DOT__i = 0;
    IData/*31:0*/ unnamedblk1__DOT__i__Vloopsize;
    unnamedblk1__DOT__i__Vloopsize = 0;
    QData/*63:0*/ exp_h;
    IData/*31:0*/ len;
    {
        get_arg_matches__Vfuncrtn = 0U;
        exp_h = 0ULL;
        len = VL_LEN_IN(match);
        args.clear();
        if (((VL_LTS_III(32, 2U, VL_LEN_IN(match)) 
              & (0x2fU == VL_GETC_N(match,0U))) & (0x2fU 
                                                   == 
                                                   VL_GETC_N(match,
                                                             (VL_LEN_IN(match) 
                                                              - (IData)(1U)))))) {
            match = VL_SUBSTR_N(match,1U,(VL_LEN_IN(match) 
                                          - (IData)(2U)));
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regcomp_TOP__uvm_pkg(match, exp_h);
            if ((0ULL == exp_h)) {
                this->__VnoInFunc_uvm_report_error(vlProcess, vlSymsp, "UVM_CMDLINE_PROC"s, 
                                                   VL_CVT_PACK_STR_NN(
                                                                      VL_CONCATN_NNN("Unable to compile the regular expression: "s, match)), 0U, ""s, 0U);
                get_arg_matches__Vfuncrtn = 0U;
                goto __Vlabel0;
            }
        }
        unnamedblk1__DOT__i = 0U;
        while (VL_LTS_III(32, unnamedblk1__DOT__i, this->__PVT__m_argv.size())) {
            unnamedblk1__DOT__i__Vloopsize = this->__PVT__m_argv.size();
            if ((0ULL != exp_h)) {
                Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regexec_TOP__uvm_pkg(exp_h, 
                                                                                VL_CVT_PACK_STR_NN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), __VlefCall_0__uvm_dpi_regexec);
                if ((1U & (~ (0U != __VlefCall_0__uvm_dpi_regexec)))) {
                    args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
                }
            } else if ((VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk1__DOT__i)), len) 
                        & (VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk1__DOT__i),0U,
                                       (len - (IData)(1U))) 
                           == match))) {
                args.push_back(this->__PVT__m_argv.at(unnamedblk1__DOT__i));
            }
            if ((unnamedblk1__DOT__i__Vloopsize <= this->__PVT__m_argv.size())) {
                unnamedblk1__DOT__i = ((IData)(1U) 
                                       + unnamedblk1__DOT__i);
            }
        }
        if ((0ULL != exp_h)) {
            Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_regfree_TOP__uvm_pkg(exp_h);
        }
        get_arg_matches__Vfuncrtn = args.size();
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, std::string &value, IData/*31:0*/ &get_arg_value__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_value\n"); );
    // Body
    IData/*31:0*/ unnamedblk2__DOT__i;
    unnamedblk2__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    get_arg_value__Vfuncrtn = 0U;
    unnamedblk2__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk2__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                get_arg_value__Vfuncrtn = ((IData)(1U) 
                                           + get_arg_value__Vfuncrtn);
                if ((1U == get_arg_value__Vfuncrtn)) {
                    value = VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk2__DOT__i),chars,
                                        (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk2__DOT__i)) 
                                         - (IData)(1U)));
                }
            }
        }
        unnamedblk2__DOT__i = ((IData)(1U) + unnamedblk2__DOT__i);
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string match, VlQueue<std::string> &values, IData/*31:0*/ &get_arg_values__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_arg_values\n"); );
    // Body
    IData/*31:0*/ unnamedblk3__DOT__i;
    unnamedblk3__DOT__i = 0;
    IData/*31:0*/ chars;
    chars = VL_LEN_IN(match);
    values.clear();
    unnamedblk3__DOT__i = 0U;
    while (VL_LTS_III(32, unnamedblk3__DOT__i, this->__PVT__m_argv.size())) {
        if (VL_GTES_III(32, VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)), chars)) {
            if ((VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),0U,
                             (chars - (IData)(1U))) 
                 == match)) {
                values.push_back(VL_SUBSTR_N(this->__PVT__m_argv.at(unnamedblk3__DOT__i),chars,
                                             (VL_LEN_IN(this->__PVT__m_argv.at(unnamedblk3__DOT__i)) 
                                              - (IData)(1U))));
            }
        }
        unnamedblk3__DOT__i = ((IData)(1U) + unnamedblk3__DOT__i);
    }
    get_arg_values__Vfuncrtn = values.size();
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_name_c_TOP__uvm_pkg(std::string &uvm_dpi_get_tool_name_c__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_tool_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_name\n"); );
    // Body
    get_tool_name__Vfuncrtn = ""s;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_name_c_TOP__uvm_pkg(get_tool_name__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_version_c_TOP__uvm_pkg(std::string &uvm_dpi_get_tool_version_c__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_tool_version__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_get_tool_version\n"); );
    // Body
    get_tool_version__Vfuncrtn = ""s;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_tool_version_c_TOP__uvm_pkg(get_tool_version__Vfuncrtn);
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_next_arg_c_TOP__uvm_pkg(std::string &uvm_dpi_get_next_arg_c__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_report_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::new\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    std::string s;
    std::string sub;
    s = ""s;
    sub = ""s;
    /*super.new*/;
    do {
        Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_dpi_get_next_arg_c_TOP__uvm_pkg(s);
        if ((""s != s)) {
            this->__PVT__m_argv.push_back(s);
            if ((0x2bU == VL_GETC_N(s,0U))) {
                this->__PVT__m_plus_argv.push_back(s);
            }
            if ((VL_LTES_III(32, 4U, VL_LEN_IN(s)) 
                 & ((0x2dU == VL_GETC_N(s,0U)) | (0x2bU 
                                                  == 
                                                  VL_GETC_N(s,0U))))) {
                sub = VL_SUBSTR_N(s,1U,3U);
                sub = VL_TOUPPER_NN(sub);
                if (("UVM"s == sub)) {
                    this->__PVT__m_uvm_argv.push_back(s);
                }
            }
        }
    } while ((""s != s));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string verb_str, IData/*31:0*/ &verb_enum, CData/*0:0*/ &m_convert_verb__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_m_convert_verb\n"); );
    // Body
    m_convert_verb__Vfuncrtn = 0U;
    verb_enum = 0U;
    if ((((((((("NONE"s == verb_str) | ("UVM_NONE"s 
                                        == verb_str)) 
              | ("LOW"s == verb_str)) | ("UVM_LOW"s 
                                         == verb_str)) 
            | ("MEDIUM"s == verb_str)) | ("UVM_MEDIUM"s 
                                          == verb_str)) 
          | ("HIGH"s == verb_str)) | ("UVM_HIGH"s == verb_str))) {
        verb_enum = (("NONE"s == verb_str) ? 0U : (
                                                   ("UVM_NONE"s 
                                                    == verb_str)
                                                    ? 0U
                                                    : 
                                                   (("LOW"s 
                                                     == verb_str)
                                                     ? 0x00000064U
                                                     : 
                                                    (("UVM_LOW"s 
                                                      == verb_str)
                                                      ? 0x00000064U
                                                      : 
                                                     (("MEDIUM"s 
                                                       == verb_str)
                                                       ? 0x000000c8U
                                                       : 
                                                      (("UVM_MEDIUM"s 
                                                        == verb_str)
                                                        ? 0x000000c8U
                                                        : 0x0000012cU))))));
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_FULL"s == verb_str)) {
        verb_enum = 0x00000190U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else if (("UVM_DEBUG"s == verb_str)) {
        verb_enum = 0x000001f4U;
        m_convert_verb__Vfuncrtn = 1U;
    } else {
        m_convert_verb__Vfuncrtn = 0U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_cmdline_processor::~\n"); );
}
