/* smp_atomics.c
 *
 * BP-DV-038: two-core atomics and cache coherence. Both harts work on the
 * SAME shared DRAM locations at the same time (requires the two-core build,
 * BP_CFG_ID=9). Phases, separated by a two-hart barrier:
 *
 *   1  AMO counter     : N x amoadd.d and N x amoadd.w per hart  -> 2N each
 *   2  LR/SC counter   : N x lr.d/sc.d increment per hart         -> 2N
 *                        (retry cap per increment: livelock check)
 *   3  spinlock        : N x {amoswap.d.aq lock, ld/add/sd, amoswap.d.rl
 *                        unlock} per hart                          -> 2N
 *   4  false sharing   : each hart plain-increments its own dword of one
 *                        shared cache line N times                -> N each
 *   5  message passing : hart 0 writes 8 words, fence w,w, flag = r; hart 1
 *                        waits for flag, fence r,r, checks the words, ack = r
 *                        (MP_ROUNDS rounds)
 *   6  amoor / amomax  : hart h sets bits 2i+h of a bitmap with amoor.d (all
 *                        64 bits end up set); both harts amomax.d    -> max
 *
 * A failed value check is recorded (first failure wins) and the run continues
 * through every phase, so both harts stay in step and report promptly. Only
 * hangs - a barrier/lock/flag wait timing out or LR/SC livelock - end a hart
 * early.
 *
 * Barrier: each hart writes its phase number to its own uncached slot in the
 * host window (0x0010_8400 + 16*hart) after fence rw,rw, then waits (bounded)
 * for the other hart's slot. Every wait and every LR/SC retry loop is
 * bounded, so a coherence deadlock or livelock reports a failure code instead
 * of hanging.
 *
 * Shared variables each sit on their own 64-byte line (except the deliberate
 * false-sharing line), at a fixed DRAM address (not HART_DRAM): 0x8000_C000.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0; per hart 0 = pass, else
 *   (phase << 8) | detail
 *   detail 0x01/0x02  value check failed (first/second counter of the phase)
 *          0x10       LR/SC increment hit the retry cap (livelock)
 *          0x2j       message word j wrong when hart 1 read it (phase 5)
 *          0xE0       barrier: other hart never arrived
 *          0xE1       spinlock never acquired (phase 3)
 *          0xE2/0xE3  message ack/flag never seen (phase 5)
 */

#include <stdint.h>
#include "dual_core.h"

#ifndef SMP_N
#define SMP_N          40        /* increments per hart per phase */
#endif
#define MP_ROUNDS      16
#define MP_WORDS       8
#define SC_RETRY_CAP   2000
#define SMP_WAIT_CYCLES 400000UL /* 4 ms at 100 MHz: never reached normally */

/* Shared data: one 64-byte line per variable. */
#define SHARED_BASE    0x8000C000UL
#define LINE(n)        ((volatile uint64_t *)(SHARED_BASE + (n) * 64UL))
#define AMO_CNT_D      LINE(0)
#define AMO_CNT_W      ((volatile uint32_t *)LINE(1))
#define LRSC_CNT       LINE(2)
#define LOCK           LINE(3)
#define LOCKED_CNT     LINE(4)
#define FALSE_LINE     LINE(5)                 /* [0] hart 0, [1] hart 1 */
#define MP_DATA        LINE(6)                 /* 8 words */
#define MP_FLAG        LINE(7)
#define MP_ACK         LINE(8)
#define BITMAP         LINE(9)
#define AMO_MAX        LINE(10)
#define NUM_LINES      11

/* Barrier slots (uncached, host window, addr[3] = 0). */
#define BARRIER_SLOT(h) ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))

#define FAIL(phase, detail)  ((((uint64_t)(phase)) << 8) | (detail))

static inline void fence_rw(void) { __asm__ volatile ("fence rw, rw" ::: "memory"); }
static inline void fence_w(void)  { __asm__ volatile ("fence w, w"   ::: "memory"); }
static inline void fence_r(void)  { __asm__ volatile ("fence r, r"   ::: "memory"); }

/* Wait until *p == v (bounded). Returns 1 if seen. */
static int wait_eq(volatile uint64_t *p, uint64_t v)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < SMP_WAIT_CYCLES)
    if (*p == v)
      return 1;
  return 0;
}

/* Two-hart barrier for phase `phase` (1, 2, ...). */
static int barrier(uint64_t phase)
{
  uint64_t me = hart_id(), other = me ^ 1;
  uint64_t start;

  fence_rw();
  dual_fence();
  *BARRIER_SLOT(me) = phase;
  dual_fence();
  start = dual_cycles();
  while ((dual_cycles() - start) < SMP_WAIT_CYCLES)
    if (*BARRIER_SLOT(other) >= phase) {
      fence_rw();
      return 1;
    }
  return 0;
}

static inline void amoadd_d(volatile uint64_t *p, uint64_t v)
{
  __asm__ volatile ("amoadd.d zero, %1, (%0)" :: "r"(p), "r"(v) : "memory");
}

static inline void amoadd_w(volatile uint32_t *p, uint32_t v)
{
  __asm__ volatile ("amoadd.w zero, %1, (%0)" :: "r"(p), "r"(v) : "memory");
}

static inline void amoor_d(volatile uint64_t *p, uint64_t v)
{
  __asm__ volatile ("amoor.d zero, %1, (%0)" :: "r"(p), "r"(v) : "memory");
}

static inline void amomax_d(volatile uint64_t *p, uint64_t v)
{
  __asm__ volatile ("amomax.d zero, %1, (%0)" :: "r"(p), "r"(v) : "memory");
}

static inline uint64_t amoswap_d_aq(volatile uint64_t *p, uint64_t v)
{
  uint64_t old;
  __asm__ volatile ("amoswap.d.aq %0, %2, (%1)" : "=r"(old) : "r"(p), "r"(v) : "memory");
  return old;
}

static inline void amoswap_d_rl(volatile uint64_t *p, uint64_t v)
{
  __asm__ volatile ("amoswap.d.rl zero, %1, (%0)" :: "r"(p), "r"(v) : "memory");
}

/* One LR/SC increment; returns 0 on success, 1 if the retry cap was hit. */
static int lrsc_increment(volatile uint64_t *p)
{
  for (unsigned tries = 0; tries < SC_RETRY_CAP; tries++) {
    uint64_t v, fail;
    __asm__ volatile (
      "lr.d   %0, (%2)\n"
      "addi   %0, %0, 1\n"
      "sc.d   %1, %0, (%2)\n"
      : "=&r"(v), "=&r"(fail)
      : "r"(p)
      : "memory");
    if (fail == 0)
      return 0;
  }
  return 1;
}

static uint64_t mp_word(uint64_t round, unsigned j)
{
  return 0x4D50000000000000ULL | (round << 16) | j;
}

static uint64_t run_smp(void)
{
  uint64_t me = hart_id();
  uint64_t phase = 0;
  uint64_t rc = 0;   /* first value-check failure; checks do not stop the run */
#define RECORD(code) do { if (rc == 0) rc = (code); } while (0)

  /* Phase 0: hart 0 clears the shared lines; nobody starts before that. */
  if (me == 0) {
    for (unsigned n = 0; n < NUM_LINES; n++)
      for (unsigned j = 0; j < 8; j++)
        LINE(n)[j] = 0;
  }
  if (!barrier(++phase)) return FAIL(0, 0xE0);

  /* Phase 1: AMO counters. */
  for (unsigned i = 0; i < SMP_N; i++) {
    amoadd_d(AMO_CNT_D, 1);
    amoadd_w(AMO_CNT_W, 1);
  }
  if (!barrier(++phase)) return FAIL(1, 0xE0);
  if (me == 0) {
    if (*AMO_CNT_D != 2 * SMP_N) RECORD(FAIL(1, 0x01));
    if (*AMO_CNT_W != 2 * SMP_N) RECORD(FAIL(1, 0x02));
  }

  /* Phase 2: LR/SC counter. */
  for (unsigned i = 0; i < SMP_N; i++)
    if (lrsc_increment(LRSC_CNT))
      return FAIL(2, 0x10);
  if (!barrier(++phase)) return FAIL(2, 0xE0);
  if (me == 0 && *LRSC_CNT != 2 * SMP_N) RECORD(FAIL(2, 0x01));

  /* Phase 3: spinlock-protected plain increment. */
  for (unsigned i = 0; i < SMP_N; i++) {
    uint64_t start = dual_cycles();
    while (amoswap_d_aq(LOCK, 1) != 0)
      if ((dual_cycles() - start) >= SMP_WAIT_CYCLES)
        return FAIL(3, 0xE1);
    *LOCKED_CNT = *LOCKED_CNT + 1;
    amoswap_d_rl(LOCK, 0);
  }
  if (!barrier(++phase)) return FAIL(3, 0xE0);
  if (me == 0) {
    if (*LOCKED_CNT != 2 * SMP_N) RECORD(FAIL(3, 0x01));
    if (*LOCK != 0) RECORD(FAIL(3, 0x02));
  }

  /* Phase 4: false sharing - own dword, shared line. */
  for (unsigned i = 0; i < SMP_N; i++)
    FALSE_LINE[me] = FALSE_LINE[me] + 1;
  if (!barrier(++phase)) return FAIL(4, 0xE0);
  if (me == 0) {
    if (FALSE_LINE[0] != SMP_N) RECORD(FAIL(4, 0x01));
    if (FALSE_LINE[1] != SMP_N) RECORD(FAIL(4, 0x02));
  }

  /* Phase 5: message passing hart 0 -> hart 1. */
  for (uint64_t r = 1; r <= MP_ROUNDS; r++) {
    if (me == 0) {
      for (unsigned j = 0; j < MP_WORDS; j++)
        MP_DATA[j] = mp_word(r, j);
      fence_w();
      *MP_FLAG = r;
      if (!wait_eq(MP_ACK, r)) return FAIL(5, 0xE2);
    } else {
      if (!wait_eq(MP_FLAG, r)) return FAIL(5, 0xE3);
      fence_r();
      for (unsigned j = 0; j < MP_WORDS; j++)
        if (MP_DATA[j] != mp_word(r, j))
          RECORD(FAIL(5, 0x20 | j));
      *MP_ACK = r;
    }
  }
  if (!barrier(++phase)) return FAIL(5, 0xE0);

  /* Phase 6: amoor.d bitmap and amomax.d across harts. */
  for (unsigned i = 0; i < 32; i++) {
    amoor_d(BITMAP, 1ULL << (2 * i + me));
    amomax_d(AMO_MAX, (uint64_t)(i * 2 + me) * 0x100 + 0x7);
  }
  if (!barrier(++phase)) return FAIL(6, 0xE0);
  if (me == 0) {
    if (*BITMAP != ~0ULL) RECORD(FAIL(6, 0x01));
    if (*AMO_MAX != (uint64_t)(31 * 2 + 1) * 0x100 + 0x7) RECORD(FAIL(6, 0x02));
  }

  return rc;
#undef RECORD
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
  tohost_exit(run_smp());
}
