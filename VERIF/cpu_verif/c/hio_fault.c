/* hio_fault.c
 *
 * BP-DV-095: hio (paddr bits 33..39) access checks in bp_mmu (hole review,
 * 13 Nov 2026: bp_mmu.sv 169 - an hio bit set with its hio_mask bit clear
 * never happened; BP-DV-076 accesses hio space with the mask enabled).
 * Harts one after the other (hio_mask is a per-tile cfg register, the
 * cfg device of tile t is at (t << 24) | 0x0020_0000, BP-DV-072).
 *
 *   1 hio_mask of the own tile read and saved (logged)
 *   2 instruction fetch from (1 << k) | <code address>, k = 33..38 (bit 39
 *     is above the 39-bit PC), with
 *     hio_mask = saved value: instruction access fault (mcause 1),
 *     mtval = the target (bp_mmu hio_fault_v: any fetch from hio != 0)
 *   3 the same with hio_mask = 0
 *   4 hio_mask = 0: sd / ld to (1 << k) | 0x0010_AA00 + hart * 0x40,
 *     k = 34..39. bp_mmu only uses hio_fault_v for fetches, so the RTL is
 *     expected not to fault here; the result (trap count, mcause) is
 *     logged at 0x0010_8900 + hart * 0x100 and not checked
 *   5 hio_mask restored, read back == saved value
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x9500 | first failing check (2, 3, 5).
 * Progress (phase << 8 | step) at 0x0010_8400 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define LOGV(h, i)   ((volatile uint64_t *)(0x00108900UL + (h) * 0x100UL + (i) * 8UL))
#define CFG(t, off)  ((volatile uint64_t *)((((uintptr_t)(t)) << 24) | 0x00200000UL | (off)))
#define R_HIO_MASK   0x0038UL

/* per hart: 0 trap count, 8 last mcause, 16 t0 save, 24 resume pc (0 =
 * skip 4 bytes), 32 last mtval */
static volatile uint64_t trec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global hio_trap\n"
  "hio_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 32(t6)\n"
  "  ld t0, 24(t6)\n"
  "  bnez t0, 1f\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "1:\n"
  "  csrw mepc, t0\n"
  "  sd x0, 24(t6)\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char hio_trap[];

/* Jump to the label after the jump with paddr bit k set; the fetch fault
 * returns to the label itself (if the fetch does not fault, execution just
 * continues there and the trap count shows it). Returns the jump target. */
static uint64_t fetch_at(volatile uint64_t *r, unsigned k)
{
  uint64_t t;
  __asm__ volatile (
    ".option push\n .option norvc\n"
    "  la   t0, 1f\n"
    "  sd   t0, 24(%1)\n"
    "  or   %0, t0, %2\n"
    "  jr   %0\n"
    "  nop\n"
    "1:\n"
    "  sd   x0, 24(%1)\n"
    ".option pop\n"
    : "=&r"(t) : "r"(r), "r"(1ULL << k) : "t0", "memory");
  return t;
}

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

static uint64_t run_hio(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  uint64_t fails = 0, first = 0, save, n;

#define CHECK(id, cond) do { if (!(cond)) { fails++; if (!first) first = (id); } } while (0)
  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(hio_trap));
  r[24 / 8] = 0;

  /* 1 */
  *PROGRESS(me) = 0x100;
  save = *CFG(me, R_HIO_MASK);
  *LOGV(me, 0) = save;

  /* 2, 3: fetch faults with the mask set, then clear */
  for (unsigned ph = 2; ph <= 3; ph++) {
    int ok = 1;
    if (ph == 3)
      *CFG(me, R_HIO_MASK) = 0;
    for (unsigned k = 33; k <= 38; k++) {
      uint64_t t;
      *PROGRESS(me) = (ph << 8) | k;
      n = r[0];
      t = fetch_at(r, k);
      ok &= r[0] == n + 1 && r[1] == 1 && ((r[4] ^ t) & ((1ULL << 39) - 1)) == 0;
    }
    CHECK(ph, ok);
  }

  /* 4: data accesses with the mask clear (observation) */
  n = r[0];
  for (unsigned k = 34; k <= 39; k++) {
    uint64_t a = (1ULL << k) | (0x0010AA00ULL + me * 0x40ULL);
    *PROGRESS(me) = (4 << 8) | k;
    sd64(a, 0x5A5A000000000000ULL | ((uint64_t)k << 32) | (a & 0xFFFFFFFFULL));
    *LOGV(me, 2 + (k - 34)) = ld64(a);
  }
  *LOGV(me, 1) = ((r[0] - n) << 16) | (r[0] != n ? (r[1] & 0xFF) : 0);

  /* 5: restore */
  *PROGRESS(me) = 0x500;
  *CFG(me, R_HIO_MASK) = save;
  CHECK(5, *CFG(me, R_HIO_MASK) == save);
#undef CHECK

  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? ((fails << 16) | 0x9500 | first) : 0;
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
  rc = run_hio();
  dual_turn_pass();
  tohost_exit(rc);
}
