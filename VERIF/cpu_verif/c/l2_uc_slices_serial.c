/* l2_uc_slices_serial.c
 *
 * BP-DV-091: BP-DV-082 (c/l2_uc_slices.c) with the harts running one after
 * the other (L2UC_SERIAL), so L1-uncached / L2-uncached ops reach every CCE
 * and L2 slice (and bsg_cache's store-buffer hazard) in the regression
 * while the two-hart lost-store / hang on CCE 1 (BP-DV-082, Jira) is open.
 * Same tohost / progress encoding as BP-DV-082.
 */
#define L2UC_SERIAL 1
#include "l2_uc_slices.c"
