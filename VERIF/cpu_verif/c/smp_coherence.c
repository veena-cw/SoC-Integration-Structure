/* smp_coherence.c
 *
 * BP-DV-049: two-core cache-coherence stress (CCE FSM state coverage).
 * Requires the two-core build (BP_CFG_ID=9). Phases, separated by a
 * two-hart barrier; each targets a group of bp_cce_fsm states:
 *
 *   1 upgrade / sharer invalidation / owner transfer
 *       both harts read 16 lines (S,S); hart 0 writes them (upgrade,
 *       invalidate hart 1's copy); hart 1 reads (transfer from the M owner
 *       with writeback); then the same with the roles swapped
 *   2 ping-pong: 32 rounds, the harts take turns incrementing all 8 dwords
 *       of one line (M -> M transfers)
 *   3 false sharing + eviction of owned lines: 24 lines 4 KiB apart (one
 *       L1 set, > 8 ways), hart h increments dword h of every line, 4 rounds
 *       - lines owned/shared by the other hart get evicted and refetched
 *   4 I$ sharers: both harts execute code in one 64-byte line (both I$s
 *       share it), then hart 0 stores into a data slot in that same line
 *       (the CCE invalidates both I$ copies), and both execute it again
 *   5 uncached access to coherent memory: hart 1 dirties 8 lines; hart 0
 *       switches its D$ to uncached mode (cfg dcache_mode, tile 0 at
 *       0x0020_0408), reads and writes those lines, switches back; hart 1
 *       re-reads them (bp_cce_fsm e_uc_coherent_cmd/resp/mem_fwd)
 *       Hart 0 also accesses, in uncached mode, one clean and one dirty
 *       block it holds itself (CCE replaces the requester's own copy first)
 *   6 replacement + sharer invalidation / owner transfer: hart 0 fills the
 *       L1 set of a target line with 8 lines, then accesses the target:
 *       r0 shared target, dirty victims, write (wb + invalidate)
 *       r1 shared target, clean victims, write (null_wb + invalidate)
 *       r2 target modified in hart 1, clean victims, read (null_wb +
 *          transfer) - e_replacement_wb_resp branches
 *   7 concurrent upgrades: both harts read 16 lines (S,S), then both write
 *       their own dword of every line at the same time (hart 1 in reverse
 *       order), 4 rounds - racing upgrade requests to the same lines
 *   8 memory pressure: both harts stream writes then reads over 256 fresh
 *       lines each at the same time, so both L2 slices compete for the
 *       DRAM port while the CCE issues speculative reads
 *
 * Progress marker before every phase: (phase << 4) | step, written to
 * 0x0010_8300 (+0x10 per hart) over AXI, to locate a hang.
 *
 * A failing check is recorded (first one wins) and the hart carries on
 * through the barriers, so one failure does not hang the other hart.
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (phase << 8) | detail, detail 0xE0 = barrier timeout,
 *   0xE1 = ping-pong turn timeout, otherwise the failing line/round.
 */

#include <stdint.h>
#include "dual_core.h"

#define REGION         0x80020000UL
#define P1_LINES       16
#define P1_LINE(i)     ((volatile uint64_t *)(REGION + 0x0000UL + (i) * 64UL))
#define PP_LINE        ((volatile uint64_t *)(REGION + 0x0800UL))
#define PP_TURN        ((volatile uint64_t *)(REGION + 0x0840UL))
#define PP_ROUNDS      32
#define FS_LINES       24
#define FS_LINE(i)     ((volatile uint64_t *)(REGION + 0x10000UL + 0x0C0UL + (i) * 0x1000UL))
#define FS_ROUNDS      4
#define UC_LINES       8
#define UC_LINE(i)     ((volatile uint64_t *)(REGION + 0x0A00UL + (i) * 64UL))
#define UC_OWN_CLEAN   ((volatile uint64_t *)(REGION + 0x1000UL))
#define UC_OWN_DIRTY   ((volatile uint64_t *)(REGION + 0x1040UL))

/* Phase 6: round r, target k uses L1 set (0x340 + (r*4+k)*0x40)>>6; the
 * target X and its 8 fill lines are 4 KiB apart (same L1 set). */
#define P6_TARGETS     4
#define P6_SET(r, k)   (REGION + 0x40000UL + 0x340UL + ((r) * P6_TARGETS + (k)) * 0x40UL)
#define P6_X(r, k)     ((volatile uint64_t *)(P6_SET(r, k) + 8 * 0x1000UL))
#define P6_FILL(r, k, j) ((volatile uint64_t *)(P6_SET(r, k) + (j) * 0x1000UL))
#define P7_LINES       16
#define P7_ROUNDS      4
#define P7_LINE(i)     ((volatile uint64_t *)(REGION + 0x0C00UL + (i) * 64UL))
#define P8_LINES       256
#define P8_LINE(h, i)  ((volatile uint64_t *)(REGION + 0x80000UL + (h) * 0x40UL + (i) * 0x80UL))

#define CFG_DCACHE_MODE(tile) ((volatile uint64_t *)(((uintptr_t)(tile) << 24) | 0x00200408UL))
#define MODE_UNCACHED  0
#define MODE_NORMAL    1

#define BARRIER_SLOT(h) ((volatile uint64_t *)(0x00108500UL + (h) * 16UL))
#define PROGRESS(h)     ((volatile uint64_t *)(0x00108300UL + (h) * 16UL))
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

static uint64_t val(unsigned writer, unsigned idx, unsigned tag)
{
  return 0xC0DE000000000000ULL | ((uint64_t)tag << 32) | ((uint64_t)writer << 16) | idx;
}

/* ---- phase 4: a code line shared by both I$s, with a data slot ---- */
__asm__ (
  ".text\n"
  ".align 6\n"
  ".global coh_code_line\n"
  "coh_code_line:\n"               /* returns 0x5A, 8 bytes of code */
  "  li a0, 0x5A\n"
  "  ret\n"
  ".align 3\n"
  ".global coh_code_slot\n"
  "coh_code_slot:\n"               /* data in the same 64-byte line */
  "  .dword 0\n"
  ".align 6\n"
);
extern uint64_t coh_code_line(void);
extern volatile uint64_t coh_code_slot;

static uint64_t run_coherence(void)
{
  unsigned me = (unsigned)hart_id(), other = me ^ 1;
  uint64_t rc = 0, phase = 0;
  volatile uint64_t sink = 0;

#define RECORD(code) do { if (rc == 0) rc = (code); } while (0)
#define BARRIER(p)   do { if (!barrier(++phase)) { RECORD(FAIL(p, 0xE0)); return rc; } } while (0)

  /* ---------------- phase 1 ---------------- */
  progress(0x10);
  if (me == 0)
    for (unsigned i = 0; i < P1_LINES; i++)
      *P1_LINE(i) = val(9, i, 0);
  BARRIER(1);
  for (unsigned i = 0; i < P1_LINES; i++)          /* both: shared copies */
    sink += *P1_LINE(i);
  BARRIER(1);
  progress(0x11);
  if (me == 0)                                      /* upgrade + invalidate */
    for (unsigned i = 0; i < P1_LINES; i++)
      *P1_LINE(i) = val(0, i, 1);
  BARRIER(1);
  if (me == 1)                                      /* transfer from owner */
    for (unsigned i = 0; i < P1_LINES; i++)
      if (*P1_LINE(i) != val(0, i, 1))
        RECORD(FAIL(1, 0x10 + i));
  BARRIER(1);
  progress(0x12);
  for (unsigned i = 0; i < P1_LINES; i++)          /* both shared again */
    sink += *P1_LINE(i);
  BARRIER(1);
  if (me == 1)
    for (unsigned i = 0; i < P1_LINES; i++)
      *P1_LINE(i) = val(1, i, 2);
  BARRIER(1);
  if (me == 0)
    for (unsigned i = 0; i < P1_LINES; i++)
      if (*P1_LINE(i) != val(1, i, 2))
        RECORD(FAIL(1, 0x30 + i));
  BARRIER(1);

  /* ---------------- phase 2: ping-pong ---------------- */
  progress(0x20);
  if (me == 0) {
    for (unsigned w = 0; w < 8; w++)
      PP_LINE[w] = 0;
    *PP_TURN = 0;
  }
  BARRIER(2);
  for (unsigned r = 0; r < PP_ROUNDS; r++) {
    if ((r & 1) != me)
      continue;
    uint64_t start = dual_cycles();
    while (*PP_TURN != r)
      if ((dual_cycles() - start) > WAIT_CYCLES) {
        RECORD(FAIL(2, 0xE1));
        break;
      }
    for (unsigned w = 0; w < 8; w++)
      PP_LINE[w] = PP_LINE[w] + 1;
    fence_rw();
    *PP_TURN = r + 1;
  }
  BARRIER(2);
  for (unsigned w = 0; w < 8; w++)
    if (PP_LINE[w] != PP_ROUNDS)
      RECORD(FAIL(2, w));
  BARRIER(2);

  /* ---------------- phase 3: false sharing + eviction ---------------- */
  progress(0x30);
  if (me == 0)
    for (unsigned i = 0; i < FS_LINES; i++) {
      FS_LINE(i)[0] = 0;
      FS_LINE(i)[1] = 0;
    }
  BARRIER(3);
  for (unsigned r = 0; r < FS_ROUNDS; r++)
    for (unsigned i = 0; i < FS_LINES; i++)
      FS_LINE(i)[me] = FS_LINE(i)[me] + 1 + i;
  BARRIER(3);
  for (unsigned i = 0; i < FS_LINES; i++) {
    if (FS_LINE(i)[me] != FS_ROUNDS * (1 + i))
      RECORD(FAIL(3, i));
    if (FS_LINE(i)[other] != FS_ROUNDS * (1 + i))
      RECORD(FAIL(3, 0x40 + i));
  }
  BARRIER(3);

  /* ---------------- phase 4: I$ sharers ---------------- */
  progress(0x40);
  if (coh_code_line() != 0x5A)
    RECORD(FAIL(4, 1));
  BARRIER(4);
  if (me == 0) {
    coh_code_slot = 0x1122334455667788ULL;          /* invalidates both I$ copies */
    fence_rw();
  }
  BARRIER(4);
  if (coh_code_line() != 0x5A)                       /* refetch after invalidation */
    RECORD(FAIL(4, 2));
  if (coh_code_slot != 0x1122334455667788ULL)
    RECORD(FAIL(4, 3));
  BARRIER(4);

  /* ---------------- phase 5: uncached access to coherent memory -------- */
  progress(0x50);
  if (me == 1)                                       /* hart 1 owns them dirty */
    for (unsigned i = 0; i < UC_LINES; i++)
      *UC_LINE(i) = val(1, i, 5);
  BARRIER(5);
  if (me == 0) {
    sink += *UC_OWN_CLEAN;                           /* held clean by hart 0 */
    *UC_OWN_DIRTY = 0xD1D1D1D1D1D1D1D1ULL;           /* held dirty by hart 0 */
    fence_rw();
    progress(0x51);
    *CFG_DCACHE_MODE(0) = MODE_UNCACHED;
    dual_fence();
    progress(0x52);
    for (unsigned i = 0; i < UC_LINES; i++) {
      if (*UC_LINE(i) != val(1, i, 5))               /* uncached read, M in hart 1 */
        RECORD(FAIL(5, 0x10 + i));
      *UC_LINE(i) = val(0, i, 6);                    /* uncached write */
    }
    /* uncached access to blocks hart 0 itself holds: the CCE must first
     * replace (invalidate / write back) the requesting LCE's own copy */
    sink += *UC_OWN_CLEAN;
    if (*UC_OWN_DIRTY != 0xD1D1D1D1D1D1D1D1ULL)
      RECORD(FAIL(5, 0x50));
    *UC_OWN_DIRTY = 0xD2D2D2D2D2D2D2D2ULL;
    dual_fence();
    progress(0x53);
    *CFG_DCACHE_MODE(0) = MODE_NORMAL;
    dual_fence();
    progress(0x54);
  }
  BARRIER(5);
  if (me == 1) {
    for (unsigned i = 0; i < UC_LINES; i++)
      if (*UC_LINE(i) != val(0, i, 6))
        RECORD(FAIL(5, 0x30 + i));
    if (*UC_OWN_DIRTY != 0xD2D2D2D2D2D2D2D2ULL)
      RECORD(FAIL(5, 0x51));
  }
  BARRIER(5);

  /* ---------------- phase 6: replacement + invalidate / transfer ------ */
  /* Each round: X(k) in a given state at hart 1, then hart 0 fills X's L1
   * set with 8 lines (dirty or clean) and accesses X(k), so the CCE must
   * replace hart 0's LRU line AND invalidate / transfer hart 1's copy.
   *   round 0: X shared by both (hart 0 reads first), 8 dirty fills, hart 0
   *            writes X  -> wb victim + invalidate sharer
   *   round 1: X shared by both, 8 clean fills (fresh lines), hart 0
   *            writes X  -> null_wb victim + invalidate sharer
   *   round 2: X modified in hart 1, 8 clean fills (fresh lines), hart 0
   *            reads X   -> null_wb victim + transfer from owner */
  for (unsigned round = 0; round < 3; round++) {
    progress(0x60 + round);
    for (unsigned k = 0; k < P6_TARGETS; k++) {
      if (round < 2) {                               /* S in both */
        if (me == 0) sink += *P6_X(round, k);
        BARRIER(6);
        if (me == 1) sink += *P6_X(round, k);
      } else if (me == 1) {
        *P6_X(round, k) = val(1, k, 0x62);           /* M in hart 1 */
      }
      BARRIER(6);
      if (me == 0) {
        for (unsigned j = 0; j < 8; j++) {
          if (round == 0)
            *P6_FILL(round, k, j) = val(0, j, 0x66); /* dirty victims */
          else
            sink += *P6_FILL(round, k, j);            /* clean victims */
        }
        if (round < 2)
          *P6_X(round, k) = val(0, k, 0x60 + round);
        else if (*P6_X(round, k) != val(1, k, 0x62))
          RECORD(FAIL(6, 0x20 + k));
      }
      BARRIER(6);
      if (me == 1 && round < 2 && *P6_X(round, k) != val(0, k, 0x60 + round))
        RECORD(FAIL(6, (round << 4) + k));
      BARRIER(6);
    }
  }
  if (me == 0)
    for (unsigned k = 0; k < P6_TARGETS; k++)
      for (unsigned j = 0; j < 8; j++)
        if (*P6_FILL(0, k, j) != val(0, j, 0x66))
          RECORD(FAIL(6, 0x40 + k));
  BARRIER(6);

  /* ---------------- phase 7: concurrent upgrades ---------------- */
  progress(0x70);
  if (me == 0)
    for (unsigned i = 0; i < P7_LINES; i++) {
      P7_LINE(i)[0] = 0;
      P7_LINE(i)[1] = 0;
    }
  BARRIER(7);
  for (unsigned r = 0; r < P7_ROUNDS; r++) {
    for (unsigned i = 0; i < P7_LINES; i++)        /* both: shared copies */
      sink += P7_LINE(i)[other];
    BARRIER(7);
    for (unsigned n = 0; n < P7_LINES; n++) {      /* both write at once */
      unsigned i = me ? (P7_LINES - 1 - n) : n;
      P7_LINE(i)[me] = val(me, i, 0x70 + r);
    }
    BARRIER(7);
  }
  for (unsigned i = 0; i < P7_LINES; i++)
    for (unsigned h = 0; h < 2; h++)
      if (P7_LINE(i)[h] != val(h, i, 0x70 + P7_ROUNDS - 1))
        RECORD(FAIL(7, (h << 4) | i));
  BARRIER(7);

  /* ---------------- phase 8: concurrent miss streams ---------------- */
  progress(0x80);
  for (unsigned i = 0; i < P8_LINES; i++)
    *P8_LINE(me, i) = val(me, i, 0x80);
  BARRIER(8);
  progress(0x81);
  for (unsigned i = 0; i < P8_LINES; i++)
    if (*P8_LINE(me, i) != val(me, i, 0x80))
      RECORD(FAIL(8, i & 0xFF));
  BARRIER(8);

  progress(0xFF);
  (void)sink;
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
  tohost_exit(run_coherence());
}
