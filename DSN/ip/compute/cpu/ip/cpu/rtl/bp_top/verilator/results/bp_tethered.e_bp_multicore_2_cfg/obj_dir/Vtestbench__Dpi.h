// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VTESTBENCH__DPI_H_
#define VERILATED_VTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI IMPORTS
    // DPI import at /home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv:26:43
    extern void* cosim_finish(void* cosim_handle);
    // DPI import at /home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv:25:43
    extern void* cosim_init(int ncpus, int memsize, int pmps, const char* prog_name);
    // DPI import at /home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv:27:39
    extern int cosim_step(void* cosim_handle, int hartid, long long pc, int insn, long long wdata, long long status);
    // DPI import at /home/cw025_jishnu/Documents/black-parrot-clean/bp_be/test/common/bp_be_nonsynth_cosim.sv:34:39
    extern int cosim_trap(void* cosim_handle, int hartid, long long cause);

#ifdef __cplusplus
}
#endif

#endif  // guard
