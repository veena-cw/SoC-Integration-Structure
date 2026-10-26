/* plic_irq_scenarios.c
 *
 * The PLIC testbench's interrupt tests (VERIF/plic_verif/plic_tb/tests/
 * plic_irq_test.sv), run at CPU level: core 0 programs the PLIC and claims /
 * completes over its real AHB path; the interrupt line of target t is read
 * from the owning core's mip (t0/t2 MEIP of core 0/1, t1/t3 SEIP of core
 * 0/1). Core 1 samples its own mip for core 0 (remote_mip_server). The
 * sources are driven by the PLIC testbench's interrupt agent. Interrupts
 * stay disabled (mstatus.MIE = 0): everything is checked by polling, as in
 * the PLIC testbench.
 *
 * BP-DV-060 (this file):                       PLIC TB test
 *   1-3    simultaneous: s3/s6/s9/s40 raised     plic_irq_simultaneous_test
 *          together on t0, claimed in priority
 *          order 7, 41, 10, 4
 *   4-8    disabled: s37 on t2 - no irq and no   plic_irq_disabled_test
 *          claim until enabled, irq follows IE
 *   9-10   threshold: s50 priority 4 on t1,      plic_irq_threshold_test
 *          irq only for threshold 0-3, still
 *          claimable below threshold
 *   11-13  equal priority: s5/s31/s32/s63 -> 6,  plic_irq_equal_prio_test
 *          32, 33, 64; priority 0 never interrupts
 *   14-18  four targets: one source per target,  plic_irq_four_target_test
 *          independent delivery; s60 on all
 *          targets is claimed once (t1), t3 gets 0
 *   19-23  claim/complete: no re-trigger while   plic_irq_claim_complete_test
 *          claimed, pends again after complete
 *          while still high
 *   24-29  nested complete: claim s3, claim s10, plic_irq_nested_complete_test
 *          complete s10, complete s3 (RISC-V
 *          PLIC spec: complete releases the ID
 *          written), s3 must interrupt again
 *
 * BP-DV-061 (built with -DPLIC_SINGLE, c/plic_irq_single.c):
 *   1-4    each of the 64 sources alone on      plic_irq_single_test
 *          target 0, 1, 2, 3 (one check per
 *          target): irq up, claim = s+1, irq down
 *
 * Difference from the PLIC testbench: equal_prio relied on source 10
 * resetting to priority 0; with the priority bank (17 Oct) it resets to 1,
 * so priority 0 is written explicitly.
 *
 * Progress marker (check about to run) at 0x0010_8F00.
 * tohost: (hart1 << 32) | hart0; hart 0 = 0 pass, else
 *   (fail_count << 16) | 0x6000 (BP-DV-060) / 0x6100 (BP-DV-061)
 *   | first failing check.
 */

#include "plic_cpu.h"

/* Claim on t, complete, return 1 if the claimed ID was exp. */
static int serve(unsigned t, uint32_t exp)
{
  uint32_t id = claim(t);
  complete(t, id);
  return id == exp;
}

#ifndef PLIC_SINGLE

static uint64_t run_scenarios(void)
{
  struct st s = { 0, 0, 0 };
  uint32_t id;
  int ok;

  /* ---------- simultaneous (1-3) ---------- */
  plic_quiet();
  {
    uint64_t mask = sbit(3) | sbit(6) | sbit(9) | sbit(40);
    set_priority(3, 2);
    set_priority(6, 7);
    set_priority(9, 4);
    set_priority(40, 5);
    set_enable(0, mask);
    progress(&s);
    check(&s, raise_src(mask) && irq_is(0, 1));
    drop_src(mask);
    progress(&s);
    ok = serve(0, 7);
    ok &= serve(0, 41);
    ok &= serve(0, 10);
    ok &= serve(0, 4);
    check(&s, ok);
    progress(&s);
    check(&s, irq_is(0, 0) && claim(0) == 0);
  }

  /* ---------- disabled (4-8), target 2 = core 1 MEIP ---------- */
  plic_quiet();
  set_priority(37, 7);
  progress(&s);
  check(&s, raise_src(sbit(37)) && irq_is(2, 0));        /* pending, not enabled */
  progress(&s);
  check(&s, claim(2) == 0);                              /* nothing to claim */
  progress(&s);
  set_enable(2, sbit(37));
  check(&s, irq_is(2, 1));
  progress(&s);
  set_enable(2, 0);
  check(&s, irq_is(2, 0));
  progress(&s);
  set_enable(2, sbit(37));
  drop_src(sbit(37));
  check(&s, serve(2, 38) && irq_is(2, 0));

  /* ---------- threshold (9-10), target 1 = core 0 SEIP ---------- */
  plic_quiet();
  set_priority(50, 4);
  set_enable(1, sbit(50));
  progress(&s);
  ok = raise_src(sbit(50));
  for (unsigned th = 0; th < PLIC_PRIORITIES; th++) {
    set_threshold(1, th);
    ok &= irq_is(1, 4 > th);
  }
  check(&s, ok);
  progress(&s);
  drop_src(sbit(50));
  ok = serve(1, 51);                                     /* below threshold */
  set_threshold(1, 0);
  check(&s, ok && irq_is(1, 0));

  /* ---------- equal priority (11-13) ---------- */
  plic_quiet();
  {
    uint64_t mask = sbit(5) | sbit(31) | sbit(32) | sbit(63);
    set_priority(5, 3);
    set_priority(31, 3);
    set_priority(32, 3);
    set_priority(63, 3);
    set_priority(10, 0);                                 /* resets to 1 now */
    set_enable(0, mask | sbit(10));
    progress(&s);
    check(&s, raise_src(mask) && irq_is(0, 1));
    drop_src(mask);
    progress(&s);
    ok = serve(0, 6);
    ok &= serve(0, 32);
    ok &= serve(0, 33);
    ok &= serve(0, 64);
    check(&s, ok);
    progress(&s);
    ok = raise_src(sbit(10)) && irq_is(0, 0);            /* priority 0 */
    drop_src(sbit(10));
    /* s10's level request is still latched as pending in its gateway (a
     * dropped level source stays pending until claimed). The PLIC TB starts
     * each test from reset; here the scenarios share one run, so claim it
     * now or it would win in the nested-complete scenario. */
    set_priority(10, 1);
    ok &= serve(0, 11) && claim(0) == 0;
    check(&s, ok);
  }

  /* ---------- four targets (14-18) ---------- */
  plic_quiet();
  {
    uint64_t all = 0;
    for (unsigned t = 0; t < PLIC_TARGETS; t++) {
      set_priority(16 * t + 1, t + 1);
      set_enable(t, sbit(16 * t + 1));
      all |= sbit(16 * t + 1);
    }
    progress(&s);
    check(&s, raise_src(all) && irq_all() == 0xF);
    drop_src(all);
    progress(&s);
    ok = 1;
    for (unsigned t = 0; t < PLIC_TARGETS; t++) {
      ok &= serve(t, 16 * t + 2);
      ok &= irq_all() == (0xEU << t & 0xF);              /* targets > t still up */
    }
    check(&s, ok);

    set_priority(60, 5);
    for (unsigned t = 0; t < PLIC_TARGETS; t++)
      set_enable(t, sbit(60));
    progress(&s);
    check(&s, raise_src(sbit(60)) && irq_all() == 0xF);  /* shared s60 */
    drop_src(sbit(60));
    progress(&s);
    id = claim(1);
    check(&s, id == 61 && irq_all() == 0);               /* gone from all */
    progress(&s);
    check(&s, claim(3) == 0);
    complete(1, 61);
  }

  /* ---------- claim / complete (19-23) ---------- */
  plic_quiet();
  progress(&s);
  check(&s, claim(0) == 0);
  set_priority(3, 4);
  set_enable(0, sbit(3));
  progress(&s);
  check(&s, raise_src(sbit(3)) && irq_is(0, 1));
  progress(&s);
  id = claim(0);
  check(&s, id == 4 && irq_is(0, 0));                    /* claimed, src high */
  progress(&s);
  complete(0, id);
  check(&s, irq_is(0, 1));                               /* pends again */
  progress(&s);
  drop_src(sbit(3));
  check(&s, serve(0, 4) && irq_is(0, 0));

  /* ---------- nested complete (24-29) ---------- */
  plic_quiet();
  set_priority(3, 4);
  set_priority(10, 6);
  set_enable(0, sbit(3) | sbit(10));
  progress(&s);
  raise_src(sbit(3));
  check(&s, irq_is(0, 1) && claim(0) == 4);              /* s3 in service */
  progress(&s);
  raise_src(sbit(10));
  check(&s, irq_is(0, 1));                               /* s10 arrives */
  progress(&s);
  check(&s, claim(0) == 11);                             /* s10 in service */
  drop_src(sbit(3) | sbit(10));
  complete(0, 11);
  complete(0, 4);
  progress(&s);
  check(&s, irq_is(0, 0));                               /* both completed */
  progress(&s);
  raise_src(sbit(3));
  check(&s, irq_is(0, 1));                               /* s3 requests again */
  progress(&s);
  drop_src(sbit(3));
  check(&s, serve(0, 4));

  plic_quiet();
  *PLIC_PROGRESS(0) = 0xFF;
  dual_fence();
  return st_result(&s, 0x6000);
}

#else  /* PLIC_SINGLE */

static uint64_t run_scenarios(void)
{
  struct st s = { 0, 0, 0 };

  plic_quiet();
  for (unsigned src = 0; src < PLIC_SOURCES; src++)
    set_priority(src, src % 7 + 1);
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    int ok = 1;
    progress(&s);
    for (unsigned src = 0; src < PLIC_SOURCES; src++) {
      int one;
      set_enable(t, sbit(src));
      one = raise_src(sbit(src)) && irq_is(t, 1);
      one = drop_src(sbit(src)) && one;
      one = serve(t, src + 1) && one;
      one = irq_is(t, 0) && one;
#ifdef DEBUG_DUMP
      if (!one) {                                      /* failing (target, source) */
        *(volatile uint64_t *)0x00109408UL = ((uint64_t)t << 8) | src;
        dual_fence();
      }
#endif
      ok &= one;
      set_enable(t, 0);
    }
    check(&s, ok);
  }
  *PLIC_PROGRESS(0) = 0xFF;
  dual_fence();
  return st_result(&s, 0x6100);
}

#endif

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
  uint64_t r = 0;
  if (hart_id() == 0) {
    r = run_scenarios();
    rmip.done = 1;                     /* release core 1 */
    __asm__ volatile ("fence rw, rw" ::: "memory");
  } else {
    remote_mip_server();
  }
  tohost_exit(r);
}
