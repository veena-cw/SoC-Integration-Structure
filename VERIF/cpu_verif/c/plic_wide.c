/* plic_wide.c
 *
 * BP-DV-067: 64-bit (ld / sd) accesses to the PLIC, run by each core over its
 * real path (core -> PLIC port -> AHB bridge -> 32-bit AHB PLIC). An 8-byte
 * access is two AHB beats in one BedRock flit (bp_bedrock_ahb3lite_bridge:
 * ST_XFER_WAIT -> ST_XFER for the second beat, read data assembled from
 * both beats). Every other PLIC test uses 32-bit accesses only.
 * Register pairs (8-byte aligned; offset 0 and 8 within the 16-byte flit):
 *   0x00 CONFIG0/1, 0x08 EL0/1, 0x10..0x28 PRIORITY0-7, 0x30..0x48 IE t,
 *   0x50/0x58 THRESHOLD0-3. The low word is the lower address.
 *
 * Checks (core 0):
 *   1  ld CONFIG0/1 == (EXP_CONFIG1 << 32) | EXP_CONFIG0
 *   2  sd IE t (4 targets): each 32-bit half reads back with lw
 *   3  ld IE t returns both halves (values written with sw)
 *   4  sd PRIORITY pairs: halves read back masked (0x77777777)
 *   5  sd EL0/1 (offset 8 in the flit): halves read back
 *   6  sd THRESHOLD pairs: halves read back masked (3 bits); ld == both
 *   7  ld after sd returns the same 64-bit value (IE, every target)
 *   8  everything restored to reset values (32-bit reads)
 * Both cores run the checks, core 0 first, then core 1 (the PLIC registers
 * are shared; dual_turn_wait / dual_turn_pass), so both cores' PLIC ports
 * (bp_plic_shared_top core0 / core1) carry the 64-bit patterns.
 *
 * tohost: (hart1 << 32) | hart0; per hart 0 = pass, else
 *   (fail_count << 16) | 0x6700 | first failing check.
 */

#include "plic_cpu.h"

#define PLIC_REG64(off) ((volatile uint64_t *)(PLIC_BASE + (off)))

static inline uint64_t ld64(uint32_t off)             { return *PLIC_REG64(off); }
static inline void     sd64(uint32_t off, uint64_t v) { *PLIC_REG64(off) = v; }
static inline uint64_t pair(uint32_t lo, uint32_t hi) { return ((uint64_t)hi << 32) | lo; }

static uint64_t run_wide(void)
{
  struct st s = { 0, 0, 0 };
  int ok;

  /* 1 CONFIG pair */
  check(&s, ld64(PLIC_CONFIG0) == pair(EXP_CONFIG0, EXP_CONFIG1));

  /* 2 sd IE, read halves */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    uint64_t v = 0x0123456789ABCDEFULL ^ ((uint64_t)t * 0x1111111111111111ULL);
    sd64(PLIC_IE(t, 0), v);
    ok &= plic_rd(PLIC_IE(t, 0)) == (uint32_t)v;
    ok &= plic_rd(PLIC_IE(t, 1)) == (uint32_t)(v >> 32);
  }
  check(&s, ok);

  /* 3 sw halves, ld pair */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    uint32_t lo = 0xA5000000U | t, hi = 0x5A000000U | (t << 8);
    plic_wr(PLIC_IE(t, 0), lo);
    plic_wr(PLIC_IE(t, 1), hi);
    ok &= ld64(PLIC_IE(t, 0)) == pair(lo, hi);
  }
  check(&s, ok);

  /* 4 sd PRIORITY pairs */
  ok = 1;
  for (unsigned w = 0; w < 8; w += 2) {
    uint64_t v = 0xFEDCBA9876543210ULL ^ ((uint64_t)w << 4);
    sd64(PLIC_PRIORITY(w), v);
    ok &= plic_rd(PLIC_PRIORITY(w))     == ((uint32_t)v & PRIORITY_MASK);
    ok &= plic_rd(PLIC_PRIORITY(w + 1)) == ((uint32_t)(v >> 32) & PRIORITY_MASK);
    ok &= ld64(PLIC_PRIORITY(w)) == pair((uint32_t)v & PRIORITY_MASK,
                                         (uint32_t)(v >> 32) & PRIORITY_MASK);
  }
  check(&s, ok);

  /* 5 sd EL pair (offset 8 in the flit) */
  sd64(PLIC_EL(0), 0x13579BDF2468ACE0ULL);
  check(&s, plic_rd(PLIC_EL(0)) == 0x2468ACE0U && plic_rd(PLIC_EL(1)) == 0x13579BDFU
            && ld64(PLIC_EL(0)) == 0x13579BDF2468ACE0ULL);

  /* 6 sd THRESHOLD pairs */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t += 2) {
    uint64_t v = ((uint64_t)(0xF0 | (t + 5)) << 32) | (0xF0 | (t + 2));
    sd64(PLIC_THRESHOLD(t), v);
    ok &= plic_rd(PLIC_THRESHOLD(t))     == ((t + 2) & THRESHOLD_MASK);
    ok &= plic_rd(PLIC_THRESHOLD(t + 1)) == ((t + 5) & THRESHOLD_MASK);
    ok &= ld64(PLIC_THRESHOLD(t)) == pair((t + 2) & THRESHOLD_MASK, (t + 5) & THRESHOLD_MASK);
  }
  check(&s, ok);

  /* 7 sd / ld round trip, every IE pair */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    uint64_t v = 0x8000000180000001ULL << t;
    sd64(PLIC_IE(t, 0), v);
    ok &= ld64(PLIC_IE(t, 0)) == v;
  }
  check(&s, ok);

  /* 8 restore (64-bit writes), check with 32-bit reads */
  sd64(PLIC_EL(0), 0);
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    sd64(PLIC_IE(t, 0), 0);
  sd64(PLIC_THRESHOLD(0), 0);
  sd64(PLIC_THRESHOLD(2), 0);
  for (unsigned w = 0; w < 8; w += 2)
    sd64(PLIC_PRIORITY(w), pair(plic_exp_priority[w], plic_exp_priority[w + 1]));
  ok = plic_rd(PLIC_EL(0)) == 0 && plic_rd(PLIC_EL(1)) == 0;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    ok &= plic_rd(PLIC_IE(t, 0)) == 0 && plic_rd(PLIC_IE(t, 1)) == 0
          && plic_rd(PLIC_THRESHOLD(t)) == 0;
  for (unsigned w = 0; w < 8; w++)
    ok &= plic_rd(PLIC_PRIORITY(w)) == plic_exp_priority[w];
  check(&s, ok);

  *PLIC_PROGRESS(hart_id()) = 0xFF;
  dual_fence();
  return st_result(&s, 0x6700);
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
  uint64_t r;
  dual_turn_wait();                /* hart 1 runs after hart 0 is done */
  r = run_wide();
  dual_turn_pass();
  tohost_exit(r);
}
