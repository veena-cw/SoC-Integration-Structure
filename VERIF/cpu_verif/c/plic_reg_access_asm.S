/* plic_reg_access_asm.S
 *
 * Hand-written assembly version of plic_reg_access.c (BP-DV-042), for reading
 * alongside the AHB log: same register accesses, in the same order, with the
 * same result code. See plic_reg_access.c for the register map.
 *
 *   make sim TEST=bp_dv_042_plic_reg_test TCNAME=plic_reg_access_asm NO_VCD=1
 *
 * What it does:
 *   hart 0 runs first, hart 1 waits for it. Each hart then
 *     1. reads CONFIG0/1 and checks them
 *     2. writes its own registers
 *     3. reads them back and checks them
 *     4. reads the ID registers of its two targets (nothing pending: 0)
 *   hart 1 also reads hart 0's registers (one shared PLIC).
 *
 * tohost: (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (number of failed checks << 16) | 0x4200 | first failing check (1-based).
 *
 * Registers used:
 *   s0  PLIC base address          s2  number of failed checks
 *   s1  hart id                    s3  number of the first failed check
 *   s4  number of checks so far    s5  this hart's result
 *   a0  value read                 a1  expected value
 *   t0-t3  scratch
 * No stack: the only calls are one level deep, return address in ra.
 */

#define PLIC_BASE    0x00500000
/* register offsets from PLIC_BASE */
#define CONFIG0      0x00
#define CONFIG1      0x04
#define EL0          0x08
#define EL1          0x0C
#define PRIORITY0    0x10
#define PRIORITY1    0x14
#define IE_T0_W0     0x30
#define IE_T0_W1     0x34
#define IE_T1_W0     0x38
#define IE_T1_W1     0x3C
#define IE_T2_W0     0x40
#define IE_T2_W1     0x44
#define IE_T3_W0     0x48
#define IE_T3_W1     0x4C
#define THRESHOLD_T0 0x50
#define THRESHOLD_T1 0x54
#define THRESHOLD_T2 0x58
#define THRESHOLD_T3 0x5C
#define ID_T0        0x60
#define ID_T1        0x64
#define ID_T2        0x68
#define ID_T3        0x6C

/* host window, uncached, reaches the AXI memory model */
#define TOHOST       0x00102000
#define MAILBOX_RES  0x00108000     /* hart 1's result */
#define MAILBOX_DONE 0x00108010     /* hart 1 has finished */
#define MAILBOX_TURN 0x00108020     /* hart 0 has finished its PLIC accesses */
#define DONE_MARKER  0xD0D0D0D0C0C0C0C1
#define WAIT_CYCLES  200000

/* WR off, val : write val to a PLIC register */
.macro WR off, val
  li   t0, \val
  sw   t0, \off(s0)
.endm

/* RD off, val : read a PLIC register and check it. lwu, not lw: lw would
 * sign-extend 0xA5A50F0F and it would not match the li value. */
.macro RD off, val
  lwu  a0, \off(s0)
  li   a1, \val
  jal  ra, check
.endm

  .section .text.start, "ax"
  .globl _start
_start:
  csrr s1, mhartid
  li   s0, PLIC_BASE
  li   s2, 0
  li   s3, 0
  li   s4, 0

  /* hart 1 waits for hart 0 (bounded, as in dual_turn_wait) */
  beqz s1, plic_tests
  li   a0, MAILBOX_TURN
  jal  ra, wait_marker

plic_tests:
  /* 1. read-only configuration registers */
  RD   CONFIG0, 0x00040040          /* TARGETS = 4, SOURCES = 64 */
  RD   CONFIG1, 0x00010008          /* HAS_THRESHOLD = 1, PRIORITIES = 8 */

  bnez s1, hart1_regs

/* ---------------- hart 0: EL0, PRIORITY0, targets 0 and 1 ---------------- */
  /* 2. write */
  WR   EL0,          0xA5A50F0F
  WR   PRIORITY0,    0x76543210
  WR   IE_T0_W0,     0x11223344
  WR   IE_T0_W1,     0x55667788
  WR   IE_T1_W0,     0x99AABBCC
  WR   IE_T1_W1,     0xDDEEFF01
  WR   THRESHOLD_T0, 0x00000005
  WR   THRESHOLD_T1, 0x00000002
  fence iorw, iorw

  /* 3. read back */
  jal  ra, check_hart0_regs

  /* 4. no source is active: nothing to claim */
  RD   ID_T0, 0
  RD   ID_T1, 0

  jal  ra, make_result

  /* let hart 1 run (dual_turn_pass) */
  fence iorw, iorw
  li   t0, MAILBOX_TURN
  li   t1, DONE_MARKER
  sd   t1, 0(t0)
  fence iorw, iorw

  /* wait for hart 1; 0xFFFFFFFF in tohost if it never reports */
  li   t2, 0xFFFFFFFF
  li   a0, MAILBOX_DONE
  jal  ra, wait_marker
  beqz a0, write_tohost
  li   t0, MAILBOX_RES
  ld   t2, 0(t0)

write_tohost:
  slli t2, t2, 32                   /* hart 1 in the upper half */
  or   t2, t2, s5                   /* hart 0 in the lower half */
  li   t0, TOHOST
  sd   t2, 0(t0)
  fence iorw, iorw
park0:
  j    park0

/* ---------------- hart 1: EL1, PRIORITY1, targets 2 and 3 ---------------- */
hart1_regs:
  /* 2. write */
  WR   EL1,          0x5A5AF0F0
  WR   PRIORITY1,    0x01234567
  WR   IE_T2_W0,     0x12345678
  WR   IE_T2_W1,     0x9ABCDEF0
  WR   IE_T3_W0,     0x0F1E2D3C
  WR   IE_T3_W1,     0x4B5A6978
  WR   THRESHOLD_T2, 0x00000006
  WR   THRESHOLD_T3, 0x00000001
  fence iorw, iorw

  /* 3. read back */
  RD   EL1,          0x5A5AF0F0
  RD   PRIORITY1,    0x01234567
  RD   IE_T2_W0,     0x12345678
  RD   IE_T2_W1,     0x9ABCDEF0
  RD   IE_T3_W0,     0x0F1E2D3C
  RD   IE_T3_W1,     0x4B5A6978
  RD   THRESHOLD_T2, 0x00000006
  RD   THRESHOLD_T3, 0x00000001

  /* 4. no source is active: nothing to claim */
  RD   ID_T2, 0
  RD   ID_T3, 0

  /* hart 0's values must still be there: one shared PLIC */
  jal  ra, check_hart0_regs

  jal  ra, make_result

  /* report to hart 0: result, then DONE */
  fence iorw, iorw
  li   t0, MAILBOX_RES
  sd   s5, 0(t0)
  fence iorw, iorw
  li   t0, MAILBOX_DONE
  li   t1, DONE_MARKER
  sd   t1, 0(t0)
  fence iorw, iorw
park1:
  j    park1

/* ---------------- subroutines ---------------- */

/* Read and check the registers hart 0 wrote. Uses check, so keeps ra in t3. */
check_hart0_regs:
  mv   t3, ra
  RD   EL0,          0xA5A50F0F
  RD   PRIORITY0,    0x76543210
  RD   IE_T0_W0,     0x11223344
  RD   IE_T0_W1,     0x55667788
  RD   IE_T1_W0,     0x99AABBCC
  RD   IE_T1_W1,     0xDDEEFF01
  RD   THRESHOLD_T0, 0x00000005
  RD   THRESHOLD_T1, 0x00000002
  mv   ra, t3
  ret

/* check: a0 = value read, a1 = expected. Count the check; on a mismatch
 * count the failure and remember the first failing check number. */
check:
  addi s4, s4, 1
  beq  a0, a1, check_done
  bnez s2, check_count
  mv   s3, s4
check_count:
  addi s2, s2, 1
check_done:
  ret

/* make_result: s5 = 0, or (failed << 16) | 0x4200 | first failed check */
make_result:
  li   s5, 0
  beqz s2, make_result_done
  slli s5, s2, 16
  li   t0, 0x4200
  or   s5, s5, t0
  or   s5, s5, s3
make_result_done:
  ret

/* wait_marker: a0 = mailbox address. Poll for DONE_MARKER for up to
 * WAIT_CYCLES cycles. Returns a0 = 1 if it was seen, 0 on timeout. */
wait_marker:
  li   t1, DONE_MARKER
  li   t3, WAIT_CYCLES
  rdcycle t0
wait_marker_poll:
  ld   a1, 0(a0)
  beq  a1, t1, wait_marker_seen
  rdcycle a1
  sub  a1, a1, t0
  bltu a1, t3, wait_marker_poll
  li   a0, 0
  ret
wait_marker_seen:
  li   a0, 1
  ret
