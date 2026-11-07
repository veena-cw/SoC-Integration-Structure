/* coh_corner.c
 *
 * BP-DV-066: two-core coherence corner cases - bp_cce_fsm paths that
 * BP-DV-049 (smp_coherence.c) does not reach (hole review, 7 Nov 2026).
 * Requires the two-core build (BP_CFG_ID=9). Hart 0 is the requester,
 * hart 1 sets up the state of the line in its caches first. Uncached
 * accesses use hart 0's D$ uncached mode (cfg dcache_mode, tile 0).
 *
 *   1 uncached access, owner in E (clean): hart 1 reads X1 (E); hart 0
 *       reads and writes X1 uncached -> CCE e_uc_coherent_cmd sends st_wb,
 *       owner answers null_wb (bp_cce_fsm e_uc_coherent_resp, null_wb arm)
 *   2 uncached access, owner in F: hart 1 reads X2 (E), hart 0 reads X2
 *       (hart 1 -> F, hart 0 S); hart 0 writes X2 uncached -> CCE replaces
 *       hart 0's own copy, then sends inv to the F owner and takes the
 *       inv_ack (e_uc_coherent_cmd inv arm, e_uc_coherent_resp inv_ack arm)
 *   3 uncached AMO to a line modified in hart 1: amoadd.d from hart 0 in
 *       uncached mode returns the old value; memory = old + 5
 *       (e_uc_coherent_mem_fwd, uc_amo -> mem_amo)
 *   4 write miss with replacement + sharer invalidation + owner transfer:
 *       code line L4 with a data slot. Hart 1's D$ reads the slot (E);
 *       hart 0 runs the code (its I$ gets S, hart 1's D$ -> F); hart 0
 *       fills the slot's D$ set with 8 dirty lines and writes the slot ->
 *       dirty victim writeback, invalidate hart 0's I$, transfer from the
 *       F owner (e_replacement_wb_resp with invalidate and transfer flags)
 *   5 three sharers: both I$s run code line L5 and hart 1's D$ reads its
 *       slot; hart 0 writes the slot -> three invalidations, acks counted
 *       (e_inv_cmd / e_inv_ack)
 *   6 as 4 with 8 clean victims (null_wb + invalidate + transfer)
 *   7 sharer without owner: only hart 0's I$ holds the line in S (hart 1's
 *       F copy evicted); hart 0 writes it after 8 dirty fills -> wb +
 *       invalidate, no transfer
 *   8 as 7 with 8 clean fills -> null_wb + invalidate, no transfer
 *
 * Every phase checks the data seen afterwards by both harts, and in 4/5
 * that both harts still execute the code line correctly.
 * Progress marker before every step: (phase << 4) | step, written to
 * 0x0010_8300 (+0x10 per hart) over AXI, to locate a hang.
 *
 * A failing check is recorded (first one wins) and the hart carries on
 * through the barriers. tohost (dual_core.h): (hart1 << 32) | hart0. Per
 * hart 0 = pass, else (phase << 8) | detail, detail 0xE0 = barrier timeout.
 */

#include <stdint.h>
#include "dual_core.h"

#define REGION         0x80020000UL
#define X1             ((volatile uint64_t *)(REGION + 0x0000UL))
#define X2             ((volatile uint64_t *)(REGION + 0x0040UL))
#define X3             ((volatile uint64_t *)(REGION + 0x0080UL))
/* D$ set of a line: addr[11:6]; 8 fills 4 KiB apart, far from code/stack */
#define FILL(addr, j)  ((volatile uint64_t *)((uintptr_t)(addr) + 0x40000UL + (j) * 0x1000UL))

#define CFG_DCACHE_MODE(tile) ((volatile uint64_t *)(((uintptr_t)(tile) << 24) | 0x00200408UL))
#define MODE_UNCACHED  0
#define MODE_NORMAL    1

#define BARRIER_SLOT(h) ((volatile uint64_t *)(0x00108500UL + (h) * 16UL))
#define PROGRESS(h)     ((volatile uint64_t *)(0x00108300UL + (h) * 16UL))
#define MAILBOX         ((volatile uint64_t *)0x00108600UL)   /* hart 1 -> hart 0 */
#define WAIT_CYCLES     400000UL

#define FAIL(phase, detail)  ((((uint64_t)(phase)) << 8) | (detail))

static inline void fence_rw(void) { __asm__ volatile ("fence rw, rw" ::: "memory"); }

static void progress(unsigned v)
{
  *PROGRESS(hart_id()) = v;
  dual_fence();
}

static int barrier(uint64_t phase)
{
  uint64_t me = hart_id(), other = me ^ 1, start;

  fence_rw();
  dual_fence();
  *BARRIER_SLOT(me) = phase;
  dual_fence();
  start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (*BARRIER_SLOT(other) >= phase) {
      fence_rw();
      return 1;
    }
  return 0;
}

static void dcache_mode(uint64_t mode)
{
  fence_rw();
  *CFG_DCACHE_MODE(0) = mode;
  dual_fence();
}

/* Code lines shared by both I$s, each with a data slot in the same line. */
__asm__ (
  ".text\n"
  ".align 6\n"
  ".global coh_l4\n"
  "coh_l4:\n"
  "  li a0, 0x5A\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_l4_slot\n"
  "coh_l4_slot:\n"
  "  .dword 0x4444444444444444\n"
  ".align 6\n"
  ".global coh_l5\n"
  "coh_l5:\n"
  "  li a0, 0x5B\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_l5_slot\n"
  "coh_l5_slot:\n"
  "  .dword 0x5555555555555555\n"
  ".align 6\n"
  ".global coh_l6\n"
  "coh_l6:\n"
  "  li a0, 0x5C\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_l6_slot\n"
  "coh_l6_slot:\n"
  "  .dword 0x6666666666666666\n"
  ".align 6\n"
  ".global coh_l7\n"
  "coh_l7:\n"
  "  li a0, 0x5D\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_l7_slot\n"
  "coh_l7_slot:\n"
  "  .dword 0x7777777777777777\n"
  ".align 6\n"
  ".global coh_l8\n"
  "coh_l8:\n"
  "  li a0, 0x5E\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_l8_slot\n"
  "coh_l8_slot:\n"
  "  .dword 0x8888888888888888\n"
  ".align 6\n"
);
extern uint64_t coh_l4(void);
extern uint64_t coh_l5(void);
extern volatile uint64_t coh_l4_slot;
extern volatile uint64_t coh_l5_slot;
extern uint64_t coh_l6(void);
extern uint64_t coh_l7(void);
extern uint64_t coh_l8(void);
extern volatile uint64_t coh_l6_slot;
extern volatile uint64_t coh_l7_slot;
extern volatile uint64_t coh_l8_slot;

/* Hart 0's D$ set of `slot`: 8 dirty (stores) or 8 clean (loads of lines
 * nobody holds) fills, so the next miss to the set replaces a victim. */
static void fill_set(volatile uint64_t *slot, uintptr_t off, int dirty, volatile uint64_t *sink)
{
  for (unsigned j = 0; j < 8; j++) {
    volatile uint64_t *a = (volatile uint64_t *)((uintptr_t)slot + off + j * 0x1000UL);
    if (dirty)
      *a = 0xF111000000000000ULL | j;
    else
      *sink += *a;
  }
}

static uint64_t run_corner(void)
{
  unsigned me = (unsigned)hart_id();
  uint64_t rc = 0, phase = 0, v, old;
  volatile uint64_t sink = 0;

#define RECORD(code) do { if (rc == 0) rc = (code); } while (0)
#define BARRIER(p)   do { if (!barrier(++phase)) { RECORD(FAIL(p, 0xE0)); return rc; } } while (0)

  /* ---------------- phase 1: uncached access, owner in E ---------------- */
  progress(0x10);
  if (me == 1) {
    *MAILBOX = *X1;                                  /* clean read: E in hart 1 */
    dual_fence();
  }
  BARRIER(1);
  if (me == 0) {
    progress(0x11);
    dcache_mode(MODE_UNCACHED);
    if (*X1 != *MAILBOX)                             /* st_wb -> null_wb */
      RECORD(FAIL(1, 1));
    *X1 = 0x1111000000000001ULL;
    dcache_mode(MODE_NORMAL);
    progress(0x12);
  }
  BARRIER(1);
  if (*X1 != 0x1111000000000001ULL)
    RECORD(FAIL(1, 2));
  BARRIER(1);

  /* ---------------- phase 2: uncached access, owner in F ---------------- */
  progress(0x20);
  if (me == 1)
    sink += *X2;                                     /* E in hart 1 */
  BARRIER(2);
  if (me == 0)
    sink += *X2;                                     /* hart 1 -> F, hart 0 S */
  BARRIER(2);
  if (me == 0) {
    progress(0x21);
    dcache_mode(MODE_UNCACHED);
    *X2 = 0x2222000000000002ULL;                     /* own S replaced, F owner inv */
    if (*X2 != 0x2222000000000002ULL)
      RECORD(FAIL(2, 1));
    dcache_mode(MODE_NORMAL);
    progress(0x22);
  }
  BARRIER(2);
  if (*X2 != 0x2222000000000002ULL)
    RECORD(FAIL(2, 2));
  BARRIER(2);

  /* ---------------- phase 3: uncached AMO, line modified in hart 1 ------ */
  progress(0x30);
  if (me == 1)
    *X3 = 0x3333000000000030ULL;                     /* M in hart 1 */
  BARRIER(3);
  if (me == 0) {
    progress(0x31);
    dcache_mode(MODE_UNCACHED);
    __asm__ volatile ("amoadd.d %0, %2, (%1)"
                      : "=r"(old) : "r"(X3), "r"(5ULL) : "memory");
    if (old != 0x3333000000000030ULL)
      RECORD(FAIL(3, 1));
    if (*X3 != 0x3333000000000035ULL)
      RECORD(FAIL(3, 2));
    dcache_mode(MODE_NORMAL);
    progress(0x32);
  }
  BARRIER(3);
  if (*X3 != 0x3333000000000035ULL)
    RECORD(FAIL(3, 3));
  BARRIER(3);

  /* ------- phase 4: replacement + invalidate sharer + transfer from F ---- */
  progress(0x40);
  if (me == 1)
    sink += coh_l4_slot;                             /* hart 1 D$: E */
  BARRIER(4);
  if (me == 0 && coh_l4() != 0x5A)                   /* hart 0 I$: S, hart 1 D$ -> F */
    RECORD(FAIL(4, 1));
  BARRIER(4);
  if (me == 0) {
    progress(0x41);
    for (unsigned j = 0; j < 8; j++)                 /* dirty victims in the slot's set */
      *FILL(&coh_l4_slot, j) = 0x4400000000000000ULL | j;
    coh_l4_slot = 0x4444000000000004ULL;             /* wb + inv I$ + transfer */
    fence_rw();
    progress(0x42);
  }
  BARRIER(4);
  if (coh_l4_slot != 0x4444000000000004ULL)
    RECORD(FAIL(4, 2));
  if (coh_l4() != 0x5A)
    RECORD(FAIL(4, 3));
  if (me == 0)
    for (unsigned j = 0; j < 8; j++)
      if (*FILL(&coh_l4_slot, j) != (0x4400000000000000ULL | j))
        RECORD(FAIL(4, 0x10 + j));
  BARRIER(4);

  /* ---------------- phase 5: three sharers invalidated ---------------- */
  progress(0x50);
  if (coh_l5() != 0x5B)                              /* both I$s: S */
    RECORD(FAIL(5, 1));
  BARRIER(5);
  if (me == 1)
    sink += coh_l5_slot;                             /* hart 1 D$: third sharer */
  BARRIER(5);
  if (me == 0) {
    progress(0x51);
    coh_l5_slot = 0x5555000000000005ULL;             /* inv hart 0 I$, hart 1 I$ + D$ */
    fence_rw();
    progress(0x52);
  }
  BARRIER(5);
  if (coh_l5_slot != 0x5555000000000005ULL)
    RECORD(FAIL(5, 2));
  if (coh_l5() != 0x5B)
    RECORD(FAIL(5, 3));
  BARRIER(5);

  /* ------- phase 6: as 4 with clean victims (null_wb + inv + transfer) -- */
  progress(0x60);
  if (me == 1)
    sink += coh_l6_slot;                             /* hart 1 D$: E */
  BARRIER(6);
  if (me == 0 && coh_l6() != 0x5C)                   /* hart 0 I$: S, hart 1 D$ -> F */
    RECORD(FAIL(6, 1));
  BARRIER(6);
  if (me == 0) {
    progress(0x61);
    fill_set(&coh_l6_slot, 0x40000UL, 0, &sink);     /* clean victims */
    coh_l6_slot = 0x6666000000000006ULL;
    fence_rw();
  }
  BARRIER(6);
  if (coh_l6_slot != 0x6666000000000006ULL)
    RECORD(FAIL(6, 2));
  if (coh_l6() != 0x5C)
    RECORD(FAIL(6, 3));
  BARRIER(6);

  /* ---- phases 7/8: sharer without owner (S only), then replacement ----
   * Hart 1's D$ reads the slot (E), hart 0's I$ runs the line (S, hart 1
   * -> F), hart 1 evicts its F copy (8 fresh lines in the set), so only
   * hart 0's I$ holds the line, in S. Hart 0 then fills its D$ set with 8
   * dirty (7) / clean (8) lines and writes the slot -> replacement +
   * invalidate, no transfer (e_replacement_wb_resp, wb / null_wb arm). */
  for (unsigned p = 7; p <= 8; p++) {
    volatile uint64_t *slot = (p == 7) ? &coh_l7_slot : &coh_l8_slot;
    uint64_t (*fn)(void) = (p == 7) ? coh_l7 : coh_l8;
    uint64_t ret = (p == 7) ? 0x5D : 0x5E;
    uint64_t nv = 0x7878000000000000ULL | p;

    progress(p << 4);
    if (me == 1)
      sink += *slot;                                 /* hart 1 D$: E */
    BARRIER(p);
    if (me == 0 && fn() != ret)                      /* hart 0 I$: S, hart 1 -> F */
      RECORD(FAIL(p, 1));
    BARRIER(p);
    if (me == 1)
      for (unsigned j = 0; j < 8; j++)               /* evict hart 1's F copy */
        sink += *(volatile uint64_t *)((uintptr_t)slot + 0x80000UL + j * 0x1000UL);
    BARRIER(p);
    if (me == 0) {
      progress((p << 4) | 1);
      fill_set(slot, 0x40000UL, p == 7, &sink);
      *slot = nv;                                    /* replace + invalidate I$ S */
      fence_rw();
    }
    BARRIER(p);
    if (*slot != nv)
      RECORD(FAIL(p, 2));
    if (fn() != ret)
      RECORD(FAIL(p, 3));
    BARRIER(p);
  }

  progress(0xFF);
  (void)sink; (void)v;
  return rc;
#undef RECORD
#undef BARRIER
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
  tohost_exit(run_corner());
}
