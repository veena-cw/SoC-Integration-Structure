/* plic_edge_sat.c
 *
 * BP-DV-085: PLIC edge-triggered pending counter saturation (hole review,
 * 11 Nov 2026: plic_gateway.sv 129 - the "pending_cnt already at max" arm
 * was never hit). ahb3lite_plic_top's default MAX_PENDING_COUNT is 8.
 *
 * Gateway model (plic_gateway.sv): in EDGE mode each source edge
 * increments pending_cnt (saturating at 8); when idle the gateway takes one
 * count and raises IP; claim then complete returns it to idle, and it
 * raises IP again while counts remain.
 *
 * Core 0, source 20 (claim ID 21) on target 0, priority 5, EL = edge:
 *   1 first pulse: MEIP up (gateway took that count)
 *   2 11 more pulses while the first is unclaimed: counter saturates
 *   3 claim / complete loop: every claim returns 21, exactly 1 + 8 = 9
 *     claims before claim returns 0 (12 edges, 3 dropped at saturation)
 *   4 MEIP low, claim = 0
 *   5 EL = level again, source 20 high -> claim 21 once, drop -> no irq
 * Core 1 runs remote_mip_server (plic_cpu.h).
 *
 * Test class: bp_dv_060_plic_irq_scenarios_test (interrupt agent +
 * plic_irq_ctrl + passive RAL; claim reads are not compared).
 * tohost: (hart1 << 32) | hart0; hart 0 = 0 pass, else
 *   (fail_count << 16) | 0x8500 | first failing check.
 * Progress (check about to run) at 0x0010_8F00. Claims seen in step 3 are
 * logged at 0x0010_8F80.
 */

#include "plic_cpu.h"

#define SRC        20
#define SRC_ID     (SRC + 1)
#define PULSES     12
#define MAX_PEND   8
#define CLAIM_LOG  ((volatile uint64_t *)0x00108F80UL)

static int pulse(void)
{
  return raise_src(sbit(SRC)) && drop_src(sbit(SRC));
}

static uint64_t run_sat(void)
{
  struct st s = { 0, 0, 0 };
  uint32_t el0 = plic_rd(PLIC_EL(0));
  unsigned claims = 0, bad_id = 0;
  int ok;

  plic_quiet();
  set_priority(SRC, 5);
  plic_wr(PLIC_EL(0), el0 | (1U << SRC));          /* edge */
  set_enable(0, sbit(SRC));

  /* 1 */
  progress(&s);
  ok = pulse();
  check(&s, ok && irq_is(0, 1));

  /* 2 */
  progress(&s);
  ok = 1;
  for (unsigned i = 1; i < PULSES; i++)
    ok &= pulse();
  check(&s, ok && irq_is(0, 1));

  /* 3 */
  progress(&s);
  for (unsigned i = 0; i < PULSES + 4; i++) {
    uint32_t id;
    if (!irq_is(0, 1))
      break;
    id = claim(0);
    if (id == 0)
      break;
    if (id != SRC_ID)
      bad_id++;
    claims++;
    complete(0, id);
  }
  *CLAIM_LOG = ((uint64_t)bad_id << 32) | claims;
  dual_fence();
  check(&s, claims == 1 + MAX_PEND && bad_id == 0);

  /* 4 */
  progress(&s);
  check(&s, irq_is(0, 0) && claim(0) == 0);

  /* 5 level mode: one claim per assertion, nothing after drop */
  progress(&s);
  plic_wr(PLIC_EL(0), el0 & ~(1U << SRC));
  ok = raise_src(sbit(SRC)) && irq_is(0, 1);
  ok &= (claim(0) == SRC_ID);
  ok &= drop_src(sbit(SRC));
  complete(0, SRC_ID);
  ok &= irq_is(0, 0) && claim(0) == 0;
  check(&s, ok);

  set_enable(0, 0);
  plic_wr(PLIC_EL(0), el0);
  return st_result(&s, 0x8500);
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
  uint64_t r = 0;
  if (hart_id() == 0) {
    r = run_sat();
    rmip.done = 1;
    __asm__ volatile ("fence rw, rw" ::: "memory");
  } else {
    remote_mip_server();
  }
  tohost_exit(r);
}
