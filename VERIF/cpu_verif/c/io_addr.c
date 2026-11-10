/* io_addr.c
 *
 * BP-DV-076: I/O address coverage (hole review, 10 Nov 2026: the I/O CCE
 * and I/O tile address bits above the 0x0010_xxxx window never toggled).
 * Every access below is routed to the I/O CCE (bp_me_addr_to_cce_id) and
 * leaves through the AXI4 bridge to the testbench AXI slave. Harts run one
 * after the other.
 *
 *   1 host device window, walking one in the offset: loads from
 *     0x0010_0000 | 1 << k, k = 3..19 (loads only - the window holds the
 *     testbench mailboxes and tohost)
 *   2 host device of other tiles: loads from (t << 24) | 0x0010_A800,
 *     t = 1..31 (tile field; host_dev routes to the I/O CCE from any tile)
 *   3 soc-periph window: loads from 0x3000_0000 | 1 << k, k = 3..27
 *   4 external I/O (hio field > 1): (1 << k) | 0x0010_A900 + hart * 0x40,
 *     k = 34..39: store a pattern, load it back
 *
 * Pass = no trap and the run completes (bus errors are not reported by the
 * RTL, BP-DV-043). Phase-4 read-back values are logged (0x0010_8900 +
 * hart * 0x100 + (k - 34) * 8), not checked: they depend on how the
 * testbench slave maps addresses above 32 bits.
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (trap count << 16) | 0x7600 | (phase << 4) of the first trap.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define LOGV(h, i)   ((volatile uint64_t *)(0x00108900UL + (h) * 0x100UL + (i) * 8UL))

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global io_trap\n"
  "io_trap:\n"                    /* count, remember mcause, skip 4 bytes */
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
extern char io_trap[];
static volatile uint64_t trec[NUM_HARTS][4] __attribute__((aligned(64)));

static inline uint64_t ld64(uint64_t a)
{
  uint64_t v;
  __asm__ volatile (".option push\n .option norvc\n ld %0, 0(%1)\n .option pop"
                    : "=r"(v) : "r"(a) : "memory");
  return v;
}
static inline void sd64(uint64_t a, uint64_t v)
{
  __asm__ volatile (".option push\n .option norvc\n sd %1, 0(%0)\n .option pop"
                    :: "r"(a), "r"(v) : "memory");
}

static uint64_t run_io(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  unsigned first = 0;
  uint64_t sink = 0;

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(io_trap));

#define MARK(ph, st) do { *PROGRESS(me) = ((ph) << 8) | (st); \
                          if (r[0] && !first) first = (ph) << 4; } while (0)

  for (unsigned k = 3; k <= 19; k++) {
    MARK(1, k);
    sink += ld64(0x00100000ULL | (1ULL << k));
  }
  for (unsigned t = 1; t <= 31; t++) {
    MARK(2, t);
    sink += ld64(((uint64_t)t << 24) | 0x0010A800ULL);
  }
  for (unsigned k = 3; k <= 27; k++) {
    MARK(3, k);
    sink += ld64(0x30000000ULL | (1ULL << k));
  }
  for (unsigned k = 34; k <= 39; k++) {
    uint64_t a = (1ULL << k) | (0x0010A900ULL + me * 0x40ULL);
    uint64_t v = 0xC3A5000000000000ULL | ((uint64_t)k << 32) | (a & 0xFFFFFFFFULL);
    MARK(4, k);
    sd64(a, v);
    *LOGV(me, k - 34) = ld64(a);
  }
  MARK(5, 0);
  *LOGV(me, 8) = sink;

  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return r[0] ? (((r[0] & 0xFF) << 16) | 0x7600 | (first & 0xFF)) : 0;
#undef MARK
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
  uint64_t rc;
  dual_turn_wait();
  rc = run_io();
  dual_turn_pass();
  tohost_exit(rc);
}
