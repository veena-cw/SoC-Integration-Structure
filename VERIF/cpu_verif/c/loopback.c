/* loopback.c
 *
 * BP-DV-069: accesses to unmapped local devices are answered by the tile's
 * loopback device (bp_core.sv: is_loopback_fwd = local address that is not
 * cfg / CLINT / PLIC; bp_me_loopback echoes the request as the response).
 * Local address: tile [30:24], device [23:20], offset [19:0]. Devices 4
 * (cache_dev, not mapped in bp_core), 6 and 15 are unmapped; tile 0 and
 * tile 1 are both used (a remote tile's loopback, over the network).
 *
 * The loopback returns whatever data the request carried, so read values
 * are not checked; each hart checks that every load and store completes
 * without a trap and that execution continues (a hang = test timeout).
 * Sizes: sd/ld, sw/lw, sh/lh, sb/lb.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (traps << 16) | 0x6900 | first failing access (1-based).
 */

#include <stdint.h>
#include "dual_core.h"

#define LOCAL(tile, dev, off) (((uint64_t)(tile) << 24) | ((uint64_t)(dev) << 20) | (off))
#define PROGRESS(h)     ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))

static volatile uint64_t trec[NUM_HARTS][4] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global lb_trap\n"
  "lb_trap:\n"                     /* count, record mcause, skip (+4) */
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char lb_trap[];

static uint64_t run_loopback(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  static const unsigned devs[3] = { 4, 6, 15 };
  unsigned n = 0, first = 0;
  volatile uint64_t sink = 0;

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(lb_trap));

  for (unsigned tile = 0; tile < 2; tile++)
    for (unsigned d = 0; d < 3; d++) {
      uint64_t a = LOCAL(tile, devs[d], 0x100 + 0x40 * me);
      uint64_t before;

#define ACCESS(stmt) do { before = r[0]; stmt; n++; \
        *PROGRESS(me) = n; dual_fence(); \
        if (r[0] != before && !first) first = n; } while (0)

      ACCESS(*(volatile uint64_t *)a = 0x1122334455667788ULL);
      ACCESS(sink += *(volatile uint64_t *)a);
      ACCESS(*(volatile uint32_t *)(a + 8) = 0x99AABBCCU);
      ACCESS(sink += *(volatile uint32_t *)(a + 8));
      ACCESS(*(volatile uint16_t *)(a + 12) = 0xDDEEU);
      ACCESS(sink += *(volatile uint16_t *)(a + 12));
      ACCESS(*(volatile uint8_t *)(a + 15) = 0xFFU);
      ACCESS(sink += *(volatile uint8_t *)(a + 15));
#undef ACCESS
    }

  *PROGRESS(me) = 0xFF;
  dual_fence();
  (void)sink;
  return (r[0] || first) ? (((r[0] & 0xFF) << 16) | 0x6900 | (first & 0xFF)) : 0;
}

static void start_main(void);

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
  tohost_exit(run_loopback());
}
