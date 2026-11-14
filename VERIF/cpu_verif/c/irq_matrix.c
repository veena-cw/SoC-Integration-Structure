/* irq_matrix.c
 *
 * BP-DV-086: supervisor interrupt delegation / priority / enable matrix and
 * U/S counter access (hole review, 11 Nov 2026: bp_be_csr.sv 165-222 m_/s_
 * ssi/sti/sei terms, 728 interrupt enable, 802/805 U-mode counter enables;
 * bp_be_scheduler.sv 115 interrupt_v). Software sets mip.SSIP/STIP/SEIP
 * (writable from M), so no device is needed; each hart runs it alone on its
 * own CSRs, both at once.
 *
 * Handlers log every interrupt as (mode << 8) | code, mode 3 = M, 1 = S.
 * M handler: interrupt -> log, clear mip bit; ecall from U/S -> resume the
 * M code (MPP = M); other exception -> count, skip. S handler: log, clear
 * sip.SSIP or (STI/SEI, not writable from S) mask it in sie. sie is a
 * view of mie, so every scenario re-enables mie first.
 *
 *   1 M, MIE=1, not delegated: SSI, STI, SEI one at a time -> M 1/5/9
 *   2 M, all three pending together -> M order 9, 1, 5 (SEI > SSI > STI)
 *   3 S, SIE=1, all delegated, all three pending -> S order 9, 1, 5
 *   4 S, SIE=0, all delegated -> nothing taken in S
 *   5 U, SIE=0, all delegated -> S takes them anyway (9, 1, 5)
 *   6 S, MIE=0, not delegated, SSIP -> M 1 (M interrupts always on below M)
 *   7 M, MIE=1, SSIP delegated -> not taken in M
 *   8 S, SIE=1, SSI delegated, STI not: both pending -> M 5 first, then S 1
 *   9 U reads cycle / instret for mcounteren x scounteren 0/1 each:
 *     legal only when both bits set; S reads them with mcounteren 0/1
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   0x8600 | (check << 0) of the first failure (check numbers below).
 * Progress (scenario) at 0x0010_8400 (+0x10 / hart); interrupt log of the
 * failing scenario at 0x0010_8480 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define LOGOUT(h)    ((volatile uint64_t *)(0x00108480UL + (h) * 16UL))

#define SSIP (1ULL << 1)
#define STIP (1ULL << 5)
#define SEIP (1ULL << 9)
#define ALLS (SSIP | STIP | SEIP)

/* per hart: 0 exc count, 8 last exc cause, 16 t0, 24 resume pc, 32 t1,
 * 40 log count, 48.. log[8] */
static uint64_t rec[NUM_HARTS][16] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  sd t1, 32(t6)\n"
  "  csrr t0, mcause\n"
  "  bgez t0, 1f\n"
  /* interrupt: log (3 << 8) | code, clear mip bit */
  "  andi t0, t0, 0x3f\n"
  "  ld t1, 40(t6)\n"
  "  andi t1, t1, 7\n"
  "  slli t1, t1, 3\n"
  "  add t1, t1, t6\n"
  "  ori t0, t0, 0x300\n"
  "  sd t0, 48(t1)\n"
  "  ld t1, 40(t6)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 40(t6)\n"
  "  andi t0, t0, 0x3f\n"
  "  li t1, 1\n"
  "  sll t1, t1, t0\n"
  "  csrc mip, t1\n"
  "  j 3f\n"
  "1:\n"
  "  li t1, 8\n"
  "  beq t0, t1, 2f\n"
  "  li t1, 9\n"
  "  beq t0, t1, 2f\n"
  /* other exception: count, skip */
  "  sd t0, 8(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  j 3f\n"
  "2:\n"                              /* ecall from U / S: resume M code */
  "  ld t0, 24(t6)\n"
  "  csrw mepc, t0\n"
  "  li t0, 0x1800\n"
  "  csrs mstatus, t0\n"
  "3:\n"
  "  ld t1, 32(t6)\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  ".align 2\n"
  ".global s_trap\n"
  "s_trap:\n"
  "  csrrw t6, sscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  sd t1, 32(t6)\n"
  "  csrr t0, scause\n"
  "  andi t0, t0, 0x3f\n"
  "  ld t1, 40(t6)\n"
  "  andi t1, t1, 7\n"
  "  slli t1, t1, 3\n"
  "  add t1, t1, t6\n"
  "  ori t0, t0, 0x100\n"
  "  sd t0, 48(t1)\n"
  "  ld t1, 40(t6)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 40(t6)\n"
  "  andi t0, t0, 0x3f\n"
  "  li t1, 1\n"
  "  sll t1, t1, t0\n"
  "  csrc sip, t1\n"                  /* SSIP; no effect on STIP/SEIP */
  "  csrc sie, t1\n"                  /* mask it so STI/SEI do not loop */
  "  ld t1, 32(t6)\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, sscratch, t6\n"
  "  sret\n"
);
extern char m_trap[], s_trap[];

#define CSRR(csr)    ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v) __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v) __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v) __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

static void settle(void) { for (volatile int i = 0; i < 40; i++) ; }

static void log_reset(uint64_t *r) { r[5] = 0; for (int i = 6; i < 14; i++) r[i] = 0; }

static int log_is(uint64_t *r, unsigned n, const uint64_t *exp)
{
  if (r[5] != n) return 0;
  for (unsigned i = 0; i < n; i++)
    if (r[6 + i] != exp[i]) return 0;
  return 1;
}

/* Drop to mode mpp (0 U, 1 S) with SIE = sie, run a short body (nops, then
 * cycle / instret reads into *cy / *ir, sentinel 0xBAD if they trapped),
 * ecall back to M. */
static void lower(uint64_t *r, unsigned mpp, int sie, uint64_t *cy, uint64_t *ir)
{
  register uint64_t a1 __asm__("a1") = 0xBAD;
  register uint64_t a2 __asm__("a2") = 0xBAD;
  CSRC(mstatus, 0x1800);
  CSRS(mstatus, (uint64_t)mpp << 11);
  if (sie) CSRS(mstatus, 2); else CSRC(mstatus, 2);
  __asm__ volatile (
    "  la   t0, 1f\n"
    "  sd   t0, 24(%2)\n"
    "  la   t0, 4f\n"
    "  csrw mepc, t0\n"
    "  mret\n"
    "4:\n"
    "  nop\n nop\n nop\n nop\n nop\n nop\n nop\n nop\n"
    "  nop\n nop\n nop\n nop\n nop\n nop\n nop\n nop\n"
    "  csrr a1, cycle\n"
    "  csrr a2, instret\n"
    "  ecall\n"
    "1:\n"
    : "+r"(a1), "+r"(a2) : "r"(r) : "t0", "memory");
  CSRC(mstatus, 2);
  if (cy) *cy = a1;
  if (ir) *ir = a2;
}

static uint64_t run_tests(void)
{
  unsigned me = (unsigned)hart_id();
  uint64_t *r = rec[me];
  unsigned check = 0;
  uint64_t cy, ir;

#define CHK(cond) do { check++; if (!(cond)) { *LOGOUT(me) = (r[5] << 32) | (r[6] << 16) | r[7]; \
      CSRC(mip, ALLS); return 0x8600 | check; } } while (0)

  CSRW(mscratch, r);
  CSRW(sscratch, r);
  CSRW(mtvec, m_trap);

#ifdef DCSR_STEPIE_ON
  /* BP-DV-098: dcsr.stepie = 1 for the whole run (no effect while
   * dcsr.step = 0; bp_be_csr irq_pending stepie terms) */
  __asm__ volatile ("csrs dcsr, %0" :: "r"(1ULL << 11) : "memory");
#endif
  CSRW(stvec, s_trap);
  CSRW(medeleg, 0);
  CSRW(mideleg, 0);
  CSRC(mip, ALLS);
  CSRW(mie, ALLS);
  CSRW(mie, ALLS);
  CSRW(mcounteren, 7);
  CSRW(scounteren, 7);

  /* 1 */
  *PROGRESS(me) = 1;
  {
    static const uint64_t bits[3] = { SSIP, STIP, SEIP };
    for (int i = 0; i < 3; i++) {
      uint64_t exp = 0x300 | (i == 0 ? 1 : i == 1 ? 5 : 9);
      log_reset(r);
      CSRS(mip, bits[i]);
      CSRS(mstatus, 8);
      settle();
      CSRC(mstatus, 8);
      CHK(log_is(r, 1, &exp));                                 /* 1..3 */
    }
  }

  /* 2 */
  *PROGRESS(me) = 2;
  {
    static const uint64_t exp[3] = { 0x309, 0x301, 0x305 };
    log_reset(r);
    CSRS(mip, ALLS);
    CSRS(mstatus, 8);
    settle();
    CSRC(mstatus, 8);
    CHK(log_is(r, 3, exp));                                    /* 4 */
  }

  /* 3 */
  *PROGRESS(me) = 3;
  {
    static const uint64_t exp[3] = { 0x109, 0x101, 0x105 };
    log_reset(r);
    CSRW(mideleg, ALLS);
    CSRW(mie, ALLS);
    CSRS(mip, ALLS);
    lower(r, 1, 1, 0, 0);
    CSRC(mip, ALLS);
    CHK(log_is(r, 3, exp));                                    /* 5 */
  }

  /* 4 */
  *PROGRESS(me) = 4;
  log_reset(r);
  CSRW(mie, ALLS);
  CSRS(mip, ALLS);
  lower(r, 1, 0, 0, 0);
  CSRC(mip, ALLS);
  CHK(r[5] == 0);                                              /* 6 */

  /* 5 */
  *PROGRESS(me) = 5;
  {
    static const uint64_t exp[3] = { 0x109, 0x101, 0x105 };
    log_reset(r);
    CSRW(mie, ALLS);
    CSRS(mip, ALLS);
    lower(r, 0, 0, 0, 0);
    CSRC(mip, ALLS);
    CHK(log_is(r, 3, exp));                                    /* 7 */
  }

  /* 6 */
  *PROGRESS(me) = 6;
  {
    static const uint64_t exp = 0x301;
    log_reset(r);
    CSRW(mideleg, 0);
    CSRW(mie, ALLS);                 /* scenario 5's S handler masked sie = mie */
    CSRS(mip, SSIP);
    lower(r, 1, 0, 0, 0);
    CHK(log_is(r, 1, &exp));                                   /* 8 */
  }

  /* 7 */
  *PROGRESS(me) = 7;
  log_reset(r);
  CSRW(mideleg, SSIP);
  CSRS(mip, SSIP);
  CSRS(mstatus, 8);
  settle();
  CSRC(mstatus, 8);
  CSRC(mip, SSIP);
  CHK(r[5] == 0);                                              /* 9 */

  /* 8 */
  *PROGRESS(me) = 8;
  {
    static const uint64_t exp[2] = { 0x305, 0x101 };
    log_reset(r);
    CSRW(mideleg, SSIP);
    CSRW(mie, ALLS);
    CSRS(mip, SSIP | STIP);
    lower(r, 1, 1, 0, 0);
    CSRC(mip, ALLS);
    CHK(log_is(r, 2, exp));                                    /* 10 */
  }
  CSRW(mideleg, 0);

  /* 9 counters */
  *PROGRESS(me) = 9;
  for (unsigned m = 0; m < 2; m++)
    for (unsigned s = 0; s < 2; s++) {
      uint64_t e0 = r[0];
      CSRW(mcounteren, m ? 5 : 0);       /* CY | IR */
      CSRW(scounteren, s ? 5 : 0);
      lower(r, 0, 0, &cy, &ir);
      if (m && s)
        CHK(cy != 0xBAD && ir != 0xBAD && r[0] == e0);          /* 11,13,15,17 */
      else
        CHK(cy == 0xBAD && ir == 0xBAD && r[0] == e0 + 2);
      e0 = r[0];
      lower(r, 1, 0, &cy, &ir);
      if (m)
        CHK(cy != 0xBAD && ir != 0xBAD && r[0] == e0);          /* 12,14,16,18 */
      else
        CHK(cy == 0xBAD && ir == 0xBAD && r[0] == e0 + 2);
    }
  CSRW(mcounteren, 7);
  CSRW(scounteren, 7);
#undef CHK
  *PROGRESS(me) = 0xFF;
  dual_fence();
  return 0;
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
  tohost_exit(run_tests());
}
