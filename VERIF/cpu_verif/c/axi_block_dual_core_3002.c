/* axi_block_dual_core_3002.c
 *
 * BP-DV-031: BP-DV-030 (axi_block_dual_core.c) with the blocks at
 * 0x3002_0000 instead of the host window. Requires the two-core build
 * (BP_CFG_ID=9).
 *
 *   hart 0 : 0x3002_0000 - 0x3002_00FF
 *   hart 1 : 0x3002_0100 - 0x3002_01FF
 *   hart 1 -> hart 0 handshake : 0x3002_0F00 (result), 0x3002_0F10 (DONE)
 *
 * On one core 0x3xxx_xxxx is routed to the I/O port and reaches AXI. In
 * the two-core build it currently does not (bp_me_addr_to_cce_id sends it
 * to CCE id addr[30:24] = 0x30, which does not exist), so no AXI
 * transaction is issued and the test fails with
 *   tohost = 0xffffffff_00201000
 *   (hart 1 never reports; hart 0 reads back 32/32 wrong dwords).
 * It passes (tohost == 0) once that window is routed to I/O.
 */

#define AXI_BLOCK_BASE 0x30020000UL
#include "axi_block_dual_core.c"
