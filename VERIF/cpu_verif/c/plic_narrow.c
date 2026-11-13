/* plic_narrow.c
 *
 * BP-DV-092: byte and halfword accesses to the PLIC (hole review, 12 Nov
 * 2026). Every other PLIC test uses lw / sw / ld / sd, so the AHB bridge
 * never sent HSIZE_BYTE / HSIZE_HWORD and the PLIC never merged a partial
 * write (ahb3lite_plic_top.sv gen_be / gen_wval: be[n] = 0 keeps the old
 * byte; plic_dynamic_registers_priority_bank.sv gen_wval likewise).
 *
 * Checks (core 0, then core 1 - registers are shared):
 *   1  sb to each byte lane of IE t word 0/1 (4 targets): lw shows only that
 *      byte changed
 *   2  sh to each halfword lane of EL0 / EL1: lw shows only that half changed
 *   3  lbu / lb (sign extension) of every byte lane of a known IE word
 *   4  lhu / lh of both halfword lanes of a known IE word
 *   5  sb to PRIORITY bytes (2 sources per byte): read back masked 0x77
 *   6  sb to THRESHOLD byte 0 (masked to 3 bits), sb to bytes 1..3 ignored
 *   7  lbu of CONFIG0 / CONFIG1 bytes == EXP_CONFIG0/1 bytes
 *   8  everything restored to reset values (32-bit reads)
 *
 * tohost: (hart1 << 32) | hart0; per hart 0 = pass, else
 *   (fail_count << 16) | 0x9200 | first failing check.
 */

#include "plic_cpu.h"

#define B(off)  ((volatile uint8_t  *)(PLIC_BASE + (off)))
#define H(off)  ((volatile uint16_t *)(PLIC_BASE + (off)))
#define SB(off) ((volatile int8_t   *)(PLIC_BASE + (off)))
#define SH(off) ((volatile int16_t  *)(PLIC_BASE + (off)))

static uint64_t run_narrow(void)
{
  struct st s = { 0, 0, 0 };
  unsigned me = (unsigned)hart_id();
  int ok;

  /* 1 sb lanes of IE */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    for (unsigned w = 0; w < 2; w++) {
      uint32_t off = PLIC_IE(t, w), exp = 0x11223344U ^ (t << 4) ^ (w << 12) ^ me;
      plic_wr(off, exp);
      for (unsigned k = 0; k < 4; k++) {
        uint8_t v = (uint8_t)(0xA0 + 0x11 * k + t + me);
        *B(off + k) = v;
        exp = (exp & ~(0xFFU << (8 * k))) | ((uint32_t)v << (8 * k));
        ok &= plic_rd(off) == exp;
      }
    }
  check(&s, ok);

  /* 2 sh lanes of EL */
  ok = 1;
  for (unsigned w = 0; w < 2; w++) {
    uint32_t off = PLIC_EL(w), exp = 0x89ABCDEFU ^ me;
    plic_wr(off, exp);
    for (unsigned k = 0; k < 2; k++) {
      uint16_t v = (uint16_t)(0x5A5A ^ (k << 8) ^ (w << 4) ^ me);
      *H(off + 2 * k) = v;
      exp = (exp & ~(0xFFFFU << (16 * k))) | ((uint32_t)v << (16 * k));
      ok &= plic_rd(off) == exp;
    }
  }
  check(&s, ok);

  /* 3 byte loads */
  plic_wr(PLIC_IE(1, 0), 0x80FF7F01U);
  ok = *B(PLIC_IE(1, 0) + 0) == 0x01 && *B(PLIC_IE(1, 0) + 1) == 0x7F
    && *B(PLIC_IE(1, 0) + 2) == 0xFF && *B(PLIC_IE(1, 0) + 3) == 0x80
    && *SB(PLIC_IE(1, 0) + 2) == -1 && *SB(PLIC_IE(1, 0) + 3) == -128
    && *SB(PLIC_IE(1, 0) + 1) == 0x7F;
  check(&s, ok);

  /* 4 halfword loads */
  plic_wr(PLIC_IE(2, 1), 0x8001FFFEU);
  ok = *H(PLIC_IE(2, 1)) == 0xFFFE && *H(PLIC_IE(2, 1) + 2) == 0x8001
    && *SH(PLIC_IE(2, 1)) == -2 && *SH(PLIC_IE(2, 1) + 2) == (int16_t)0x8001;
  check(&s, ok);

  /* 5 sb PRIORITY */
  ok = 1;
  for (unsigned w = 0; w < 8; w++) {
    uint32_t off = PLIC_PRIORITY(w), exp = 0;
    plic_wr(off, 0);
    for (unsigned k = 0; k < 4; k++) {
      uint8_t v = (uint8_t)(0xF8 ^ (w << 4) ^ (k * 0x13) ^ me);
      *B(off + k) = v;
      exp |= ((uint32_t)(v & 0x77)) << (8 * k);
      ok &= plic_rd(off) == exp;
    }
  }
  check(&s, ok);

  /* 6 sb THRESHOLD */
  ok = 1;
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    plic_wr(PLIC_THRESHOLD(t), 0);
    *B(PLIC_THRESHOLD(t)) = (uint8_t)(0xF8 | (t + 1 + me));
    ok &= plic_rd(PLIC_THRESHOLD(t)) == ((t + 1 + me) & THRESHOLD_MASK);
    for (unsigned k = 1; k < 4; k++)
      *B(PLIC_THRESHOLD(t) + k) = 0xFF;
    ok &= plic_rd(PLIC_THRESHOLD(t)) == ((t + 1 + me) & THRESHOLD_MASK);
  }
  check(&s, ok);

  /* 7 CONFIG bytes */
  ok = 1;
  for (unsigned k = 0; k < 4; k++) {
    ok &= *B(PLIC_CONFIG0 + k) == (uint8_t)(EXP_CONFIG0 >> (8 * k));
    ok &= *B(PLIC_CONFIG1 + k) == (uint8_t)(EXP_CONFIG1 >> (8 * k));
  }
  check(&s, ok);

  /* 8 restore */
  plic_wr(PLIC_EL(0), 0);
  plic_wr(PLIC_EL(1), 0);
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    plic_wr(PLIC_IE(t, 0), 0);
    plic_wr(PLIC_IE(t, 1), 0);
    plic_wr(PLIC_THRESHOLD(t), 0);
  }
  for (unsigned w = 0; w < 8; w++)
    plic_wr(PLIC_PRIORITY(w), plic_exp_priority[w]);
  ok = plic_rd(PLIC_EL(0)) == 0 && plic_rd(PLIC_EL(1)) == 0;
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    ok &= plic_rd(PLIC_IE(t, 0)) == 0 && plic_rd(PLIC_IE(t, 1)) == 0
          && plic_rd(PLIC_THRESHOLD(t)) == 0;
  for (unsigned w = 0; w < 8; w++)
    ok &= plic_rd(PLIC_PRIORITY(w)) == plic_exp_priority[w];
  check(&s, ok);

  *PLIC_PROGRESS(me) = 0xFF;
  dual_fence();
  return st_result(&s, 0x9200);
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
  r = run_narrow();
  dual_turn_pass();
  tohost_exit(r);
}
