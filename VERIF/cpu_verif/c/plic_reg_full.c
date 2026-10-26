/* plic_reg_full.c
 *
 * BP-DV-059: the PLIC testbench's register tests, run by core 0 over its
 * real path (core -> PLIC port -> AHB bridge -> PLIC):
 *   plic_reg_reset_test       -> checks 1-13
 *   plic_reg_write_read_test  -> checks 14-16
 *   plic_reg_walk_one_test    -> checks 17-20
 * (plic_reg_mirror_predict_test / plic_scoreboard_test compare the RAL
 *  model with itself; here every read is compared with the expected value
 *  directly, which covers the same register behaviour.)
 *
 * Read/write registers and implemented bits:
 *   EL0-1         32 bits each
 *   PRIORITY0-7   3 bits in every 4-bit field (0x77777777)
 *   IE t,w        32 bits each (4 targets x 2 words)
 *   THRESHOLD0-3  3 bits
 * Unimplemented bits must read 0. CONFIG0/1 are read-only. ID registers
 * are claim/complete and are only read here (nothing pending -> 0).
 *
 * Checks (core 0):
 *   1      CONFIG0/1 values
 *   2-9    PRIORITY0-7 reset values (plic_priority_config.svh defaults)
 *   10     EL0-1 reset 0
 *   11     IE (all 8 words) reset 0
 *   12     THRESHOLD0-3 reset 0
 *   13     ID0-3: claim with nothing pending reads 0
 *   14     CONFIG0/1 ignore writes
 *   15     write/read 0xA5A5A5A5 to every R/W register (masked)
 *   16     write/read 0x5A5A5A5A to every R/W register (masked)
 *   17-20  walking one through all 32 bits of EL, PRIORITY, IE, THRESHOLD
 *          (reads (1 << b) & implemented mask)
 *   21     everything restored to its reset value
 * Core 1 does nothing (reports 0).
 *
 * tohost: (hart1 << 32) | hart0; hart 0 = 0 pass, else
 *   (fail_count << 16) | 0x5900 | first failing check.
 */

#include "plic_cpu.h"

struct rwreg { uint32_t off, mask, reset; };

static unsigned rw_regs(struct rwreg *r)
{
  unsigned n = 0;
  for (unsigned w = 0; w < 2; w++)
    r[n++] = (struct rwreg){ PLIC_EL(w), 0xFFFFFFFFU, 0 };
  for (unsigned w = 0; w < 8; w++)
    r[n++] = (struct rwreg){ PLIC_PRIORITY(w), PRIORITY_MASK, plic_exp_priority[w] };
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    for (unsigned w = 0; w < 2; w++)
      r[n++] = (struct rwreg){ PLIC_IE(t, w), 0xFFFFFFFFU, 0 };
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    r[n++] = (struct rwreg){ PLIC_THRESHOLD(t), THRESHOLD_MASK, 0 };
  return n;                                   /* 22 */
}

static int pattern(struct rwreg *r, unsigned n, uint32_t pat)
{
  int ok = 1;
  for (unsigned i = 0; i < n; i++)
    plic_wr(r[i].off, pat);
  for (unsigned i = 0; i < n; i++)
    ok &= plic_rd(r[i].off) == (pat & r[i].mask);
  return ok;
}

static int walk(struct rwreg *r, unsigned first, unsigned count)
{
  int ok = 1;
  for (unsigned i = first; i < first + count; i++)
    for (unsigned b = 0; b < 32; b++) {
      plic_wr(r[i].off, 1U << b);
      ok &= plic_rd(r[i].off) == ((1U << b) & r[i].mask);
    }
  return ok;
}

static uint64_t run_regs(void)
{
  struct st s = { 0, 0, 0 };
  struct rwreg r[24];
  unsigned n = rw_regs(r);
  int ok;

  /* 1-13 reset values */
  progress(&s);
  check(&s, plic_rd(PLIC_CONFIG0) == EXP_CONFIG0 && plic_rd(PLIC_CONFIG1) == EXP_CONFIG1);
  for (unsigned w = 0; w < 8; w++) {
    progress(&s);
    check(&s, plic_rd(PLIC_PRIORITY(w)) == plic_exp_priority[w]);
  }
  progress(&s);
  check(&s, plic_rd(PLIC_EL(0)) == 0 && plic_rd(PLIC_EL(1)) == 0);
  progress(&s);
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    ok &= plic_rd(PLIC_IE(t, 0)) == 0 && plic_rd(PLIC_IE(t, 1)) == 0;
  check(&s, ok);
  progress(&s);
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    ok &= plic_rd(PLIC_THRESHOLD(t)) == 0;
  check(&s, ok);
  progress(&s);
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    ok &= claim(t) == 0;
  check(&s, ok);

  /* 14 read-only CONFIG */
  progress(&s);
  plic_wr(PLIC_CONFIG0, 0xFFFFFFFFU);
  plic_wr(PLIC_CONFIG1, 0xFFFFFFFFU);
  check(&s, plic_rd(PLIC_CONFIG0) == EXP_CONFIG0 && plic_rd(PLIC_CONFIG1) == EXP_CONFIG1);

  /* 15-16 write / read */
  progress(&s);
  check(&s, pattern(r, n, 0xA5A5A5A5U));
  progress(&s);
  check(&s, pattern(r, n, 0x5A5A5A5AU));

  /* 17-20 walking one: EL, PRIORITY, IE, THRESHOLD */
  progress(&s);
  check(&s, walk(r, 0, 2));
  progress(&s);
  check(&s, walk(r, 2, 8));
  progress(&s);
  check(&s, walk(r, 10, 8));
  progress(&s);
  check(&s, walk(r, 18, 4));

  /* 21 restore reset values */
  progress(&s);
  ok = 1;
  for (unsigned i = 0; i < n; i++)
    plic_wr(r[i].off, r[i].reset);
  for (unsigned i = 0; i < n; i++)
    ok &= plic_rd(r[i].off) == r[i].reset;
  check(&s, ok);

  *PLIC_PROGRESS(0) = 0xFF;
  dual_fence();
  return st_result(&s, 0x5900);
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
  tohost_exit(hart_id() == 0 ? run_regs() : 0);
}
