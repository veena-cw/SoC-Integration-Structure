/* axi_backpressure.c
 *
 * BP-DV-044: bridge FIFOs under back-pressure (both harts).
 *
 * bp_dv_044_axi_backpressure_test puts the AXI agent in back-pressure mode:
 * after every AW/W/AR handshake AWREADY/WREADY/ARREADY stay low for a
 * number of AXI cycles and every B/R response is delayed. Both harts then
 * issue bursts of back-to-back uncached stores, so requests pile up in the
 * CPU -> AXI request FIFO of bp_bedrock_axi4_bridge (and, for the PLIC
 * writes, in the request FIFO of bp_bedrock_ahb3lite_bridge, whose AHB
 * side runs at 400 MHz against the 1.5 GHz core). The testbench counts how
 * often each FIFO is full; the test fails if the AXI request FIFO never
 * filled. Data must survive the stalls:
 *
 *   1. AXI burst : 64 x sd back-to-back to HART_IO(0x3005_0000), no fence
 *   2. PLIC burst: 16 x sw back-to-back to this hart's PRIORITY register
 *                  (hart 0: PRIORITY0 @ 0x0050_0010, hart 1: PRIORITY2 @
 *                  0x0050_0018 - offsets ending in 0/8, so the separate
 *                  AHB read-lane bug does not affect the read-back)
 *   3. fence, then read everything back and compare
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (first_bad_dword << 16) | 0x4400 | (plic_bad << 7) | axi_mismatches
 */

#include <stdint.h>
#include "dual_core.h"

#define AXI_BASE     HART_IO(0x30050000UL)
#define NUM_DWORDS   64
#define PLIC_PRIO    (0x00500010UL + 8 * hart_id())
#define PLIC_WRITES  16

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

/* Unique per hart and offset, different upper and lower halves. */
static uint64_t pattern(unsigned i)
{
  return 0xB0B00000C0C00000ULL
         | ((uint64_t)(hart_id() * 0x100 + i) << 32)
         | (uint64_t)(0x8000 + hart_id() * 0x100 + i);
}

/* 3-bit priority fields, all values distinct per write. */
static uint32_t plic_value(unsigned i)
{
  return (0x76543210U + 0x11111111U * (i & 7)) & 0x77777777U;
}

static uint64_t run_backpressure_test(void)
{
  volatile uint64_t *blk  = (volatile uint64_t *)AXI_BASE;
  volatile uint32_t *prio = (volatile uint32_t *)PLIC_PRIO;
  unsigned mismatches = 0, first_bad = 0, plic_bad = 0;

  /* 1. Back-to-back AXI stores. */
  for (unsigned i = 0; i < NUM_DWORDS; i++)
    blk[i] = pattern(i);

  /* 2. Back-to-back PLIC stores (last one wins). */
  for (unsigned i = 0; i < PLIC_WRITES; i++)
    *prio = plic_value(i);
  io_fence();

  /* 3. Read back and compare. */
  for (unsigned i = 0; i < NUM_DWORDS; i++) {
    if (blk[i] != pattern(i)) {
      if (mismatches == 0)
        first_bad = i;
      mismatches++;
    }
  }
  if (*prio != plic_value(PLIC_WRITES - 1))
    plic_bad = 1;

  if (mismatches == 0 && !plic_bad)
    return 0;
  if (mismatches > 127)
    mismatches = 127;
  return ((uint64_t)first_bad << 16) | 0x4400 | (plic_bad << 7) | mismatches;
}

static void start_main(void);

/* Initialize the stack before entering C code. */
__attribute__((naked, section(".text.start"), used))
void _start(void)
{
  __asm__ volatile (
    DUAL_CORE_STACK_INIT
    "jal ra, start_main\n"
    "1: j 1b\n"
  );
}

static void start_main(void)
{
  tohost_exit(run_backpressure_test());
}
