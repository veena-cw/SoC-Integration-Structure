/* plic_prio_sweep.c
 *
 * BP-DV-105: PLIC per-target priority cells with every source pending
 * (toggle review, 14 Nov 2026: plic_target / plic_priority_index priority_i
 * bits never toggled on many sources). priority_i there is plic_cell
 * priority_o, which only follows the PRIORITY register while the source is
 * pending and enabled for that target (plic_cell: if (ip && ie) priority_o
 * <= priority_i) - register-only tests never move it.
 * Run by core 0 over its real path (core -> PLIC port -> AHB bridge ->
 * PLIC); core 1 reports 0.
 *
 * Checks (core 0):
 *   1  all 64 level sources raised (testbench STATUS)
 *   2  with all sources pending and enabled on all 4 targets (threshold 7:
 *      no target interrupts), PRIORITY0-7 written 7,0,5,2,7,0 in every field
 *      read back (masked); no MEIP/SEIP on core 0 meanwhile
 *   3  source s priority 1 + (5s mod 7), target 0 threshold 0: 64 claims
 *      return the sources in priority order (higher first, ties -> lower
 *      ID); each claimed source is dropped, then completed
 *   4  then claim returns 0 on every target
 *   5  PRIORITY / IE / THRESHOLD restored (reset priorities read back)
 *
 * tohost: (hart1 << 32) | hart0; hart 0 = 0 pass, else
 *   (fail_count << 16) | 0xA500 | first failing check.
 */

#include "plic_cpu.h"

static const uint32_t sweep[6] = {
  0x77777777U, 0x00000000U, 0x55555555U, 0x22222222U, 0x77777777U, 0x00000000U
};

static unsigned prio_of(unsigned s) { return 1 + (5 * s) % 7; }

static uint64_t run_sweep(void)
{
  struct st s = { 0, 0, 0 };
  int ok;

  /* 1 enable everything, threshold 7, raise all sources (level) */
  progress(&s);
  plic_wr(PLIC_EL(0), 0);
  plic_wr(PLIC_EL(1), 0);
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    set_threshold(t, 7);
    set_enable(t, ~0ULL);
  }
  check(&s, raise_src(~0ULL));
  delay(SETTLE_CYCLES);

  /* 2 sweep every priority field while pending */
  progress(&s);
  ok = 1;
  for (unsigned p = 0; p < 6; p++) {
    for (unsigned w = 0; w < 8; w++)
      plic_wr(PLIC_PRIORITY(w), sweep[p]);
    delay(SETTLE_CYCLES);
    for (unsigned w = 0; w < 8; w++)
      ok &= plic_rd(PLIC_PRIORITY(w)) == (sweep[p] & PRIORITY_MASK);
    ok &= (CSRR(mip) & (MIP_MEIP | MIP_SEIP)) == 0;
  }
  check(&s, ok);

  /* 3 claim order on target 0 */
  progress(&s);
  ok = 1;
  for (unsigned src = 0; src < PLIC_SOURCES; src++)
    set_priority(src, prio_of(src));
  for (unsigned t = 1; t < PLIC_TARGETS; t++)
    set_enable(t, 0);
  set_threshold(0, 0);
  delay(SETTLE_CYCLES);
  {
    unsigned n = 0;
    for (int p = 7; p >= 1; p--)
      for (unsigned src = 0; src < PLIC_SOURCES; src++) {
        uint32_t id;
        if (prio_of(src) != (unsigned)p)
          continue;
        id = claim(0);
        ok &= id == src + 1;
        if (id) {
          ok &= drop_src(sbit(id - 1));
          complete(0, id);
        }
        n++;
      }
    ok &= n == PLIC_SOURCES;
  }
  check(&s, ok);

  /* 4 nothing left */
  progress(&s);
  delay(SETTLE_CYCLES);
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    set_enable(t, ~0ULL);
    ok &= claim(t) == 0;
  }
  check(&s, ok);

  /* 5 restore */
  progress(&s);
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    set_enable(t, 0);
    set_threshold(t, 0);
  }
  for (unsigned w = 0; w < 8; w++) {
    plic_wr(PLIC_PRIORITY(w), plic_exp_priority[w]);
    ok &= plic_rd(PLIC_PRIORITY(w)) == plic_exp_priority[w];
  }
  check(&s, ok);

  *PLIC_PROGRESS(0) = 0xFF;
  dual_fence();
  return st_result(&s, 0xA500);
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
  tohost_exit(hart_id() == 0 ? run_sweep() : 0);
}
