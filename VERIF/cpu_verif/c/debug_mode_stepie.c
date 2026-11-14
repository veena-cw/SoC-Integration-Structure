/* debug_mode_stepie.c - BP-DV-098: BP-DV-051 (c/debug_mode.c) with
 * dcsr.stepie = 1: the CLINT debug halt request (debug interrupt) and the
 * single step run with stepie set (bp_be_csr.sv 728). */
#define DCSR_STEPIE_ON 1
#include "debug_mode.c"
