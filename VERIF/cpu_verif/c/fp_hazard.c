/* fp_hazard.c
 *
 * BP-DV-078: back-to-back dependencies on the FP pipes and between the FP
 * and integer register files, aimed at the hazard detector / calculator
 * forwarding terms BP-DV-053 (hazard_chains.c) leaves unhit (hole review,
 * 10 Nov 2026: bp_be_detector.sv 184-205, rs3 and long-pipe producers).
 *
 * Each case runs a producer and its dependent consumer twice: back to back,
 * and with five nops between them. Both runs must give the same result
 * bits (FP result f3 and integer result t3), so a forwarding / stall bug
 * shows up as a mismatch without needing precomputed values.
 *
 * Needs F and D (Makefile: TCNAME fp_hazard -> rv64imafd). Both harts run
 * it one after the other. tohost (dual_core.h): (hart1 << 32) | hart0. Per
 * hart 0 = pass, else (fail_count << 16) | 0x7800 | first failing case.
 * Progress marker (case) at 0x0010_8400 (+0x10 / hart).
 *
 * Written 10 Nov 2026, not yet run.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))

static volatile uint64_t mem_in[4] __attribute__((aligned(64))) = {
  0x4021000000000000ULL,   /* 8.5 */
  0xC00C000000000000ULL,   /* -3.5 */
  0x3FC9999A3E4CCCCDULL,   /* low word: 0.2f */
  0x0000000000000017ULL,   /* 23 */
};
static volatile uint64_t out[NUM_HARTS][8] __attribute__((aligned(64)));

/* f0 = 3.0, f1 = 1.5, f2 = 5.0, t4 = 7, t5 = 3; f3 / t3 = results */
#define SETUP \
  "li t0, 0x4008000000000000\n fmv.d.x f0, t0\n" \
  "li t1, 0x3FF8000000000000\n fmv.d.x f1, t1\n" \
  "li t2, 0x4014000000000000\n fmv.d.x f2, t2\n" \
  "li t4, 7\n li t5, 3\n fmv.d.x f3, x0\n li t3, 0\n" \
  "fence\n"
#define GAP "nop\n nop\n nop\n nop\n nop\n"
#define CLOB "t0", "t1", "t2", "t3", "t4", "t5", "t6", "f0", "f1", "f2", "f3", "f4", "memory"

#define CASE(fn, prod, cons)                                                  \
  static void fn(volatile uint64_t *o)                                        \
  {                                                                           \
    __asm__ volatile (SETUP prod cons                                         \
                      "fsd f3, 0(%0)\n sd t3, 8(%0)\n"                        \
                      :: "r"(o), "r"(mem_in) : CLOB);                         \
    __asm__ volatile (SETUP prod GAP cons                                     \
                      "fsd f3, 16(%0)\n sd t3, 24(%0)\n"                      \
                      :: "r"(o), "r"(mem_in) : CLOB);                         \
  }

/* long pipe (fdiv / fsqrt) producers */
CASE(c01, "fdiv.d f4, f0, f1\n",  "fmadd.d f3, f1, f2, f4\n")          /* rs3 */
CASE(c02, "fsqrt.d f4, f2\n",     "fmadd.d f3, f4, f1, f2\n")          /* rs1 */
CASE(c03, "fdiv.d f4, f2, f0\n",  "fmsub.d f3, f1, f4, f0\n")          /* rs2 */
CASE(c04, "fdiv.d f4, f0, f1\n",  "fdiv.d f3, f4, f2\n")               /* long -> long */
CASE(c05, "fsqrt.d f4, f0\n",     "fsd f4, 32(%0)\n fld f3, 32(%0)\n") /* store data */
/* memory producers */
CASE(c06, "fld f4, 0(%1)\n",      "fmadd.d f3, f1, f4, f2\n")          /* rs2 */
CASE(c07, "fld f4, 8(%1)\n",      "fnmadd.d f3, f1, f2, f4\n")         /* rs3 */
CASE(c08, "flw f4, 16(%1)\n",     "fadd.s f3, f4, f4\n")               /* single */
CASE(c09, "ld t6, 24(%1)\n",      "fcvt.d.l f3, t6\n")                 /* int load -> fp */
CASE(c10, "ld t6, 0(%1)\n",       "fmv.d.x f3, t6\n")
/* aux pipe producers into rs3 / long */
CASE(c11, "fcvt.d.l f4, t4\n",    "fmadd.d f3, f0, f1, f4\n")
CASE(c12, "fmv.d.x f4, t4\n",     "fmsub.d f3, f0, f1, f4\n")
CASE(c13, "fsgnjn.d f4, f0, f1\n","fdiv.d f3, f4, f1\n")
CASE(c14, "fmin.d f4, f0, f2\n",  "fnmsub.d f3, f2, f1, f4\n")
CASE(c15, "fcvt.s.d f4, f2\n",    "fcvt.d.s f3, f4\n")
/* fma producer into all three sources */
CASE(c16, "fmadd.d f4, f0, f1, f2\n", "fmadd.d f3, f4, f4, f4\n")
/* fp -> int and int long -> fp */
CASE(c17, "fmul.d f4, f0, f2\n",  "fcvt.l.d t3, f4, rtz\n")
CASE(c18, "fle.d t6, f1, f0\n",   "add t3, t6, t4\n")
CASE(c19, "fmv.x.d t6, f2\n",     "srli t3, t6, 52\n")
CASE(c20, "div t6, t4, t5\n",     "fcvt.d.l f3, t6\n")
CASE(c21, "mul t6, t4, t5\n",     "fcvt.d.l f3, t6\n")
CASE(c22, "remw t6, t4, t5\n",    "fmv.d.x f3, t6\n")
CASE(c23, "fclass.d t6, f0\n",    "sll t3, t4, t6\n")

typedef void (*case_fn)(volatile uint64_t *);
static const case_fn cases[] = {
  c01, c02, c03, c04, c05, c06, c07, c08, c09, c10, c11, c12,
  c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23,
};
#define NCASE (sizeof(cases) / sizeof(cases[0]))

static uint64_t run_fp(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *o = out[me];
  unsigned fails = 0, first = 0;

  __asm__ volatile ("csrs mstatus, %0" :: "r"(1ULL << 13) : "memory");   /* FS = Initial */

  for (unsigned c = 0; c < NCASE; c++) {
    *PROGRESS(me) = c + 1;
    o[0] = o[1] = o[2] = o[3] = 0xDEAD;
    cases[c](o);
    if (o[0] != o[2] || o[1] != o[3]) {
      if (!fails) first = c + 1;
      fails++;
    }
  }
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7800 | (first & 0xFF)) : 0;
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
  rc = run_fp();
  dual_turn_pass();
  tohost_exit(rc);
}
