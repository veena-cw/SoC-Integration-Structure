// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::init(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string name, std::string s) {
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_object::init(vlProcess, vlSymsp, name);
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::new\n"); );
    // Locals
    IData/*31:0*/ __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i;
    __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    _ctor_var_reset(vlSymsp);
    CData/*0:0*/ __VlefCall_0__uvm_has_wildcard;
    /*super.new*/;
    this->__VnoInFunc_set_scope(vlSymsp, s);
    this->__PVT__modified = 0U;
    this->__PVT__read_only = 0U;
    this->__PVT__precedence = 0x000003e8U;
    this->__Vfunc_uvm_has_wildcard__2__arg = name;
    __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i = 0U;
    {
        __VlefCall_0__uvm_has_wildcard = 0U;
        __VlefCall_0__uvm_has_wildcard = 0U;
        if (((VL_LTS_III(32, 1U, VL_LEN_IN(this->__Vfunc_uvm_has_wildcard__2__arg)) 
              & (0x2fU == VL_GETC_N(this->__Vfunc_uvm_has_wildcard__2__arg,0U))) 
             & (0x2fU == VL_GETC_N(this->__Vfunc_uvm_has_wildcard__2__arg,
                                   (VL_LEN_IN(this->__Vfunc_uvm_has_wildcard__2__arg) 
                                    - (IData)(1U)))))) {
            __VlefCall_0__uvm_has_wildcard = 1U;
            goto __Vlabel0;
        }
        __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i = 0U;
        while (VL_LTS_III(32, __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i, 
                          VL_LEN_IN(this->__Vfunc_uvm_has_wildcard__2__arg))) {
            if ((((0x2aU == VL_GETC_N(this->__Vfunc_uvm_has_wildcard__2__arg,__Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i)) 
                  | (0x2bU == VL_GETC_N(this->__Vfunc_uvm_has_wildcard__2__arg,__Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i))) 
                 | (0x3fU == VL_GETC_N(this->__Vfunc_uvm_has_wildcard__2__arg,__Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i)))) {
                __VlefCall_0__uvm_has_wildcard = 1U;
            }
            __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i 
                = ((IData)(1U) + __Vfunc_uvm_has_wildcard__2__unnamedblk3__DOT__i);
        }
        __Vlabel0: ;
    }
    if (__VlefCall_0__uvm_has_wildcard) {
        this->__PVT__m_is_regex_name = 1U;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base> &get_type_handle__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_type_handle\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_only\n"); );
    // Body
    this->__PVT__read_only = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_read_write\n"); );
    // Body
    this->__PVT__read_only = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &is_read_only__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_is_read_only\n"); );
    // Body
    is_read_only__Vfuncrtn = this->__PVT__read_only;
}

VlCoroutine Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_wait_modified\n"); );
    // Body
    VL_KEEP_THIS;
    if ((1U & (~ (IData)(this->__PVT__modified)))) {
        CData/*0:0*/ __VdynTrigger_h57165ed3__0;
        __VdynTrigger_h57165ed3__0 = 0;
        __VdynTrigger_h57165ed3__0 = 0U;
        while ((1U & (~ (IData)(__VdynTrigger_h57165ed3__0)))) {
            co_await vlSymsp->TOP.__VdynSched.evaluation(
                                                         nullptr, 
                                                         "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                         "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 
                                                         299);
            __VdynTrigger_h57165ed3__0 = this->__PVT__modified;
            vlSymsp->TOP.__VdynSched.anyTriggered(__VdynTrigger_h57165ed3__0);
        }
        co_await vlSymsp->TOP.__VdynSched.resumption(
                                                     nullptr, 
                                                     "@([true] uvm_pkg::uvm_resource_base.modified)", 
                                                     "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 
                                                     299);
    }
    this->__PVT__modified = 0U;
    co_return;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(const std::string &glob, std::string &uvm_glob_to_re__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_scope\n"); );
    // Body
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_glob_to_re_TOP__uvm_pkg(s, this->__PVT__scope);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &get_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_get_scope\n"); );
    // Body
    get_scope__Vfuncrtn = this->__PVT__scope;
}

void Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(const std::string &re, const std::string &str, IData/*31:0*/ &uvm_re_match__Vfuncrtn);

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_match_scope(Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string s, CData/*0:0*/ &match_scope__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_match_scope\n"); );
    // Body
    IData/*31:0*/ err;
    Vcsi2_tb_top_uvm_pkg____Vdpiimwrap_uvm_re_match_TOP__uvm_pkg(this->__PVT__scope, s, err);
    match_scope__Vfuncrtn = (0U == err);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ pri) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_set_priority\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, std::string &convert2string__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_convert2string\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    convert2string__Vfuncrtn = "?"s;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer> printer) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_do_print\n"); );
    // Body
    VlProcess::currentp(vlProcess.get());
    std::string __VlefCall_2__convert2string;
    std::string __VlefCall_1__get_scope;
    std::string __VlefCall_0__get_name;
    this->__VnoInFunc_get_name(vlSymsp, __VlefCall_0__get_name);
    this->__VnoInFunc_get_scope(vlSymsp, __VlefCall_1__get_scope);
    this->__VnoInFunc_convert2string(vlProcess, vlSymsp, __VlefCall_2__convert2string);
    VL_WRITEF_NX("%s [%s] : %s\n",3, 'S',&(__VlefCall_0__get_name)
                 , 'S',&(__VlefCall_1__get_scope), 'S',&(__VlefCall_2__convert2string));
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_read_access\n"); );
    // Locals
    Vcsi2_tb_top_access_t__struct__0 __Vtask_init_access_record__10__access_record;
    __Vtask_init_access_record__10__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__10__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__10__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__10__access_record.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_auditing;
    std::string str;
    Vcsi2_tb_top_access_t__struct__0 access_record;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
        if ((1U & (~ (IData)(__VlefCall_0__is_auditing)))) {
            goto __Vlabel0;
        }
        if ((VlNull{} != accessor)) {
            VL_NULL_CHECK(accessor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 501)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, str);
        } else {
            str = "<empty>"s;
        }
        if (this->__PVT__access.exists(str)) {
            access_record = this->__PVT__access.at(str);
        } else {
            __Vtask_init_access_record__10__access_record 
                = access_record;
            this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__10__access_record);
            access_record = __Vtask_init_access_record__10__access_record;
        }
        access_record.__PVT__read_count = ((IData)(1U) 
                                           + access_record
                                           .__PVT__read_count);
        access_record.__PVT__read_time = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
        this->__PVT__access.atWrite(str) = access_record;
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access(VlProcessRef vlProcess, Vcsi2_tb_top__Syms* __restrict vlSymsp, VlClassRef<Vcsi2_tb_top_uvm_pkg__03a__03auvm_object> accessor) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_record_write_access\n"); );
    // Locals
    Vcsi2_tb_top_access_t__struct__0 __Vtask_init_access_record__13__access_record;
    __Vtask_init_access_record__13__access_record.__PVT__read_time = 0;
    __Vtask_init_access_record__13__access_record.__PVT__write_time = 0;
    __Vtask_init_access_record__13__access_record.__PVT__read_count = 0;
    __Vtask_init_access_record__13__access_record.__PVT__write_count = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    CData/*0:0*/ __VlefCall_0__is_auditing;
    Vcsi2_tb_top_access_t__struct__0 unnamedblk1__DOT__access_record;
    std::string unnamedblk1__DOT__str;
    vlSymsp->TOP__uvm_pkg__03a__03auvm_resource_options__Vclpkg.__VnoInFunc_is_auditing(vlSymsp, __VlefCall_0__is_auditing);
    if (__VlefCall_0__is_auditing) {
        if ((VlNull{} != accessor)) {
            unnamedblk1__DOT__access_record.__PVT__read_time = 0;
            unnamedblk1__DOT__access_record.__PVT__write_time = 0;
            unnamedblk1__DOT__access_record.__PVT__read_count = 0;
            unnamedblk1__DOT__access_record.__PVT__write_count = 0;
            unnamedblk1__DOT__str = ""s;
            VL_NULL_CHECK(accessor, "/home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/base/uvm_resource.svh", 533)->__VnoInFunc_get_full_name(vlProcess, vlSymsp, unnamedblk1__DOT__str);
            if (this->__PVT__access.exists(unnamedblk1__DOT__str)) {
                unnamedblk1__DOT__access_record = this->__PVT__access
                    .at(unnamedblk1__DOT__str);
            } else {
                __Vtask_init_access_record__13__access_record 
                    = unnamedblk1__DOT__access_record;
                this->__VnoInFunc_init_access_record(vlSymsp, __Vtask_init_access_record__13__access_record);
                unnamedblk1__DOT__access_record = __Vtask_init_access_record__13__access_record;
            }
            unnamedblk1__DOT__access_record.__PVT__write_count 
                = ((IData)(1U) + unnamedblk1__DOT__access_record
                   .__PVT__write_count);
            unnamedblk1__DOT__access_record.__PVT__write_time 
                = VL_RTOIROUND_Q_D(VL_TIME_UNITED_D(1000));
            this->__PVT__access.atWrite(unnamedblk1__DOT__str) 
                = unnamedblk1__DOT__access_record;
        }
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_print_accessors\n"); );
    // Body
    std::string unnamedblk2__DOT__i;
    std::string unnamedblk2__DOT__i__Vnext;
    CData/*0:0*/ unnamedblk2__DOT__i__Vmore;
    unnamedblk2__DOT__i__Vmore = 0;
    std::string str;
    Vcsi2_tb_top_access_t__struct__0 access_record;
    {
        str = ""s;
        access_record.__PVT__read_time = 0;
        access_record.__PVT__write_time = 0;
        access_record.__PVT__read_count = 0;
        access_record.__PVT__write_count = 0;
        if ((0U == this->__PVT__access.size())) {
            goto __Vlabel0;
        }
        VL_WRITEF_NX("  --------\n",0);
        unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.first(unnamedblk2__DOT__i__Vnext));
        while (unnamedblk2__DOT__i__Vmore) {
            unnamedblk2__DOT__i = unnamedblk2__DOT__i__Vnext;
            unnamedblk2__DOT__i__Vmore = (0U != this->__PVT__access.next(unnamedblk2__DOT__i__Vnext));
            str = unnamedblk2__DOT__i;
            VL_WRITEF_NX("  %s",1, 'S',&(str));
            access_record = this->__PVT__access.at(str);
            VL_WRITEF_NX(" reads: %0d @ %0t  writes: %0d @ %0t\n",5, 'T',-9
                         , '#',32,access_record.__PVT__read_count
                         , '#',64,access_record.__PVT__read_time
                         , '#',32,access_record.__PVT__write_count
                         , '#',64,access_record.__PVT__write_time);
        }
        VL_WRITEF_NX("\n",0);
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record(Vcsi2_tb_top__Syms* __restrict vlSymsp, Vcsi2_tb_top_access_t__struct__0 &access_record) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_init_access_record\n"); );
    // Body
    access_record.__PVT__read_time = 0ULL;
    access_record.__PVT__write_time = 0ULL;
    access_record.__PVT__read_count = 0U;
    access_record.__PVT__write_count = 0U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_has_regex_name(Vcsi2_tb_top__Syms* __restrict vlSymsp, CData/*0:0*/ &has_regex_name__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_has_regex_name\n"); );
    // Body
    has_regex_name__Vfuncrtn = this->__PVT__m_is_regex_name;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &randomize__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc_randomize\n"); );
    // Body
    IData/*31:0*/ __VlefCall_0____VBasicRand;
    Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.clearConstraints();
    this->__VnoInFunc___Vsetup_constraints(vlSymsp);
    randomize__Vfuncrtn = Vcsi2_tb_top_uvm_pkg__03a__03auvm_void::__PVT__constraint.next(__Vm_rng);
    this->__VnoInFunc___VBasicRand(vlSymsp, __VlefCall_0____VBasicRand);
    randomize__Vfuncrtn = (randomize__Vfuncrtn & __VlefCall_0____VBasicRand);
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___Vsetup_constraints\n"); );
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ &__VBasicRand__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::__VnoInFunc___VBasicRand\n"); );
    // Body
    __VBasicRand__Vfuncrtn = 1U;
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::_ctor_var_reset\n"); );
    // Body
    (void)vlSymsp;  // Prevent unused variable warning
    __PVT__modified = 0;
    __PVT__read_only = 0;
    __PVT__m_is_regex_name = 0;
    __PVT__access.atDefault().__PVT__read_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__write_time = VL_SCOPED_RAND_RESET_Q(64, 12052251328565956498ULL, 12049826633365357964ull);
    __PVT__access.atDefault().__PVT__read_count = 0;
    __PVT__access.atDefault().__PVT__write_count = 0;
    __PVT__precedence = 0;
}

Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::~Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base() {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_resource_base::~\n"); );
}
