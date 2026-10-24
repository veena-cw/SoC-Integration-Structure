// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VCSI2_TB_TOP__DPI_H_
#define VERILATED_VCSI2_TB_TOP__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:27:32
    extern const char* uvm_dpi_get_next_arg_c();
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:28:32
    extern const char* uvm_dpi_get_tool_name_c();
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:29:32
    extern const char* uvm_dpi_get_tool_version_c();
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:43:33
    extern void* uvm_dpi_regcomp(const char* regex);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:44:29
    extern int uvm_dpi_regexec(void* preg, const char* str);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_svcmd_dpi.svh:45:30
    extern void uvm_dpi_regfree(void* preg);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_regex.svh:24:30
    extern void uvm_dump_re_cache();
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_regex.svh:25:32
    extern const char* uvm_glob_to_re(const char* glob);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_hdl.svh:59:39
    extern int uvm_hdl_check_path(const char* path);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_hdl.svh:67:39
    extern int uvm_hdl_deposit(const char* path, const svLogicVecVal* value);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_hdl.svh:121:39
    extern int uvm_hdl_read(const char* path, svLogicVecVal* value);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_hdl.svh:113:39
    extern int uvm_hdl_release(const char* path);
    // DPI import at /home/cw036_titiksha/SoC-Integration-Structure/VERIF/uvm-1.1d/src/dpi/uvm_regex.svh:23:29
    extern int uvm_re_match(const char* re, const char* str);

#ifdef __cplusplus
}
#endif

#endif  // guard
