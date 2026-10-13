/* l2_uncached_amo.c
 *
 * BP-DV-048: BP-DV-047 plus every AMO (.w and .d) to L1-uncached DRAM, in
 * the L2-uncached window 0x1_0070_0000 and the L2-cached window
 * 0x1_8078_0000 (see l2_uncached_ops.c).
 *
 * Expected: each AMO is executed atomically by the L2 (bsg_cache atomic
 * ALU) - or, if AMOs to uncached memory are not supported, raises a
 * store/AMO access fault (mcause 7), which the M-mode handler counts.
 * Currently the core hangs on the first AMO (amoswap.d, progress marker
 * step 14 / 0x10e at 0x0010_8200): the test times out.
 *
 * tohost: as l2_uncached_ops.c.
 */

#define WITH_AMO
#include "l2_uncached_ops.c"
