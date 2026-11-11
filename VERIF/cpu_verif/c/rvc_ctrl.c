/* rvc_ctrl.c
 *
 * BP-DV-081: compressed control flow and fetch-boundary cases for the FE
 * scan / realigner (hole review, 10 Nov 2026: bp_fe_scan.sv 58-60, 80-82,
 * 92 never hit - compressed link calls / returns, coroutine swaps and
 * 32-bit instructions straddling a fetch block).
 *
 * rc_main(n) loops n times; each iteration:
 *   - c.jalr t1     call (link ra; rs1 not a link register)
 *   - c.jalr t0     call through the alternate link register (x5)
 *   - c.jalr ra     coroutine swap: jump to ra, link ra (rs1 = rd = x1)
 *   - jal t0 / c.jr t0   call and return through the alternate link
 *   - jal ra / c.jr ra   into a block that starts 62 bytes into a 64-byte
 *     aligned block: a 32-bit addi and a 32-bit taken beq straddle the
 *     64-byte boundaries
 *   - c.beqz / c.bnez / c.j loop control
 * Every callee updates s0, so a wrong target or a lost return changes the
 * sum. Result compared with a C model of the same arithmetic.
 *
 * Needs C (Makefile: TCNAME rvc_ctrl -> rv64imac). Both harts run it one
 * after the other. tohost (dual_core.h): (hart1 << 32) | hart0. Per hart
 * 0 = pass, else 0x8100 | 1 (wrong sum).
 *
 * Written 10 Nov 2026, not yet run.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))

__asm__ (
  ".text\n"
  ".option push\n"
  ".option rvc\n"
  ".align 2\n"
  ".global rc_main\n"
  "rc_main:\n"                     /* a0 = n -> a0 = sum */
  "  addi sp, sp, -32\n"
  "  sd ra, 0(sp)\n"
  "  sd s0, 8(sp)\n"
  "  li s0, 0\n"
  "  mv a1, a0\n"
  "1:\n"
  "  c.beqz a1, 9f\n"
  "  la t1, rc_a\n"
  "  c.jalr t1\n"                  /* call, rs1 = t1 */
  "  la t0, rc_b\n"
  "  c.jalr t0\n"                  /* call through x5 */
  "  la ra, rc_c\n"
  "  c.jalr ra\n"                  /* coroutine swap */
  "  jal t0, rc_d\n"               /* call linking x5 */
  "  jal ra, rc_e\n"               /* straddling block */
  "  c.addi a1, -1\n"
  "  c.bnez a1, 1b\n"
  "  c.j 9f\n"
  "  c.addi s0, 1\n"               /* skipped */
  "9:\n"
  "  mv a0, s0\n"
  "  ld ra, 0(sp)\n"
  "  ld s0, 8(sp)\n"
  "  addi sp, sp, 32\n"
  "  ret\n"

  "rc_a:\n"
  "  c.addi s0, 3\n"
  "  c.jr ra\n"
  "rc_b:\n"
  "  c.addi s0, 5\n"
  "  c.slli s0, 1\n"
  "  c.jr ra\n"
  "rc_c:\n"
  "  c.addi s0, 7\n"
  "  c.jr ra\n"
  "rc_d:\n"
  "  c.addi s0, 11\n"
  "  c.jr t0\n"                    /* return through x5 */

  ".balign 64\n"
  "  .rept 31\n c.nop\n .endr\n"   /* 62 bytes */
  "rc_e:\n"
  "  addi s0, s0, 13\n"            /* 32-bit, bytes 62..65: straddles */
  "  .rept 30\n c.nop\n .endr\n"   /* to byte 126 */
  "  beq x0, x0, 2f\n"             /* 32-bit taken branch, bytes 126..129 */
  "  c.addi s0, 1\n"               /* skipped */
  "2:\n"
  "  c.addi s0, 2\n"
  "  c.jr ra\n"
  ".option pop\n"
);
extern uint64_t rc_main(uint64_t n);

static uint64_t model(uint64_t n)
{
  uint64_t s = 0;
  for (uint64_t i = 0; i < n; i++) {
    s += 3;
    s += 5;
    s <<= 1;
    s += 7;
    s += 11;
    s += 13;
    s += 2;
  }
  return s;
}

static uint64_t run_rvc(void)
{
  unsigned me = (unsigned)hart_id();
  uint64_t n = 9 + me;
  *PROGRESS(me) = 1;
  uint64_t got = rc_main(n);
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return got == model(n) ? 0 : (0x8100 | 1);
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
  rc = run_rvc();
  dual_turn_pass();
  tohost_exit(rc);
}
