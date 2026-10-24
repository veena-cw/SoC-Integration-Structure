// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcsi2_tb_top.h for the primary calling header

#include "Vcsi2_tb_top__pch.h"

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs::__VnoInFunc_get_radix_str(Vcsi2_tb_top__Syms* __restrict vlSymsp, IData/*31:0*/ radix, std::string &get_radix_str__Vfuncrtn) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs::__VnoInFunc_get_radix_str\n"); );
    // Body
    {
        get_radix_str__Vfuncrtn = ""s;
        if ((1U & (~ (IData)(this->__PVT__show_radix)))) {
            get_radix_str__Vfuncrtn = ""s;
            goto __Vlabel0;
        }
        if ((0U == radix)) {
            radix = this->__PVT__default_radix;
        }
        get_radix_str__Vfuncrtn = ((0x01000000U == radix)
                                    ? this->__PVT__bin_radix
                                    : ((0x06000000U 
                                        == radix) ? this->__PVT__oct_radix
                                        : ((0x02000000U 
                                            == radix)
                                            ? this->__PVT__dec_radix
                                            : ((0x07000000U 
                                                == radix)
                                                ? this->__PVT__hex_radix
                                                : (
                                                   (0x03000000U 
                                                    == radix)
                                                    ? this->__PVT__unsigned_radix
                                                    : ""s)))));
        __Vlabel0: ;
    }
}

void Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs::init(Vcsi2_tb_top__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+            Vcsi2_tb_top_uvm_pkg__03a__03auvm_printer_knobs::new\n"); );
    // Body
    this->__PVT__header = 1U;
    this->__PVT__footer = 1U;
    this->__PVT__full_name = 0U;
    this->__PVT__identifier = 1U;
    this->__PVT__type_name = 1U;
    this->__PVT__size = 1U;
    this->__PVT__depth = 0xffffffffU;
    this->__PVT__reference = 1U;
    this->__PVT__begin_elements = 5U;
    this->__PVT__end_elements = 5U;
    this->__PVT__prefix = ""s;
    this->__PVT__indent = 2U;
    this->__PVT__show_root = 0U;
    this->__PVT__mcd = 1U;
    this->__PVT__separator = "{}"s;
    this->__PVT__show_radix = 1U;
    this->__PVT__default_radix = 0x07000000U;
    this->__PVT__dec_radix = "'d"s;
    this->__PVT__bin_radix = "'b"s;
    this->__PVT__oct_radix = "'o"s;
    this->__PVT__unsigned_radix = "'d"s;
    this->__PVT__hex_radix = "'h"s;
    this->__PVT__max_width = 0x000003e7U;
    this->__PVT__truncation = "+"s;
    this->__PVT__name_width = 0xffffffffU;
    this->__PVT__type_width = 0xffffffffU;
    this->__PVT__size_width = 0xffffffffU;
    this->__PVT__value_width = 0xffffffffU;
    this->__PVT__sprint = 1U;
}
