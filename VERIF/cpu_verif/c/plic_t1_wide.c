/* plic_t1_wide.c
 *
 * plic_wide.c with the PLIC addressed through tile 1 (0x0150_0000): local
 * devices are routed by the address tile field (bits 24+), so every access
 * leaves through core tile 1's PLIC port - core 1's input of
 * bp_plic_shared_top - whichever hart issues it (hole review, 10 Nov 2026:
 * the core-1 PLIC port was never used; both harts used 0x0050_0000, tile 0).
 * Checks and tohost codes as in plic_wide.c.
 */
#define PLIC_BASE 0x01500000UL
#include "plic_wide.c"
