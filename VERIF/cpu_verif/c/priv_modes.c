/* priv_modes.c
 *
 * BP-DV-035: M/S/U privilege modes, trap delegation and xRET, on both harts.
 *
 * Each hart has its own trap record (HART_DRAM, pointed to by mscratch /
 * sscratch). The M-mode handler (mtvec) and S-mode handler (stvec) log every
 * trap - cause, status, epc, tval - and then either skip the trapping
 * instruction or, for the final "exit" trap of a step, return to M mode.
 *
 *   step 1  S mode, no delegation : ecall, read mscratch, read sscratch, mret
 *             -> M traps 9, 2, 2, 2(exit); sscratch read must not trap
 *   step 2  U mode, no delegation : ecall, read sscratch, sret
 *             -> M traps 8, 2, 2, 2(exit)
 *   step 3  U mode, medeleg[8]    : ecall goes to the S handler (scause 8,
 *             SPP=U), sret returns to U; a following sscratch read traps to
 *             M with MPP=U (proves the sret went back to U, not S)
 *   step 4  S mode, mideleg[1]    : set sip.SSIP, then sstatus.SIE ->
 *             supervisor software interrupt taken in S (scause
 *             0x8000_0000_0000_0001, SPP=S), not in M
 *   every step: after the handler's mret back to M, mstatus.MPP must be U
 *
 * Exact mepc/sepc are checked against global labels in the S/U routines.
 * Lower-mode code is plain RV64I (built with -march=rv64ima, no C), uses
 * only t0/a0 and leaves sp and s-registers alone.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0; per hart 0 = pass, else
 *   (step << 8) | (trap index << 4) | check
 *   check 1 = trap count, 2 = cause, 3 = MPP/SPP, 4 = mepc/sepc,
 *         5 = MPP not U after mret back to M
 */

#include <stdint.h>
#include "dual_core.h"

#define PRIV_U 0
#define PRIV_S 1
#define PRIV_M 3

#define CAUSE_ILLEGAL   2
#define CAUSE_ECALL_U   8
#define CAUSE_ECALL_S   9
#define CAUSE_SSI       0x8000000000000001ULL

/* Per-hart trap record (byte offsets used by the asm handlers). */
#define REC_BASE        0x8000A000UL
#define REC_M_ACTION    0     /* 0 = skip instruction, 1 = return to M */
#define REC_M_RESUME    8
#define REC_M_COUNT     16
#define REC_S_COUNT     24
#define REC_M_LOG       64    /* 8 entries x 32 B: cause, status, epc, tval */
#define REC_S_LOG       320
#define LOG_ENTRIES     8

/* Lower-mode routines and their trap points (defined in asm below). */
extern char s_basic[], s_basic_ecall[], s_basic_mcsr[], s_basic_mret[], s_basic_exit[];
extern char u_basic[], u_basic_ecall[], u_basic_scsr[], u_basic_sret[], u_basic_exit[];
extern char u_deleg[], u_deleg_ecall[], u_deleg_after[], u_deleg_exit[];
extern char s_irq[], s_irq_exit[];
extern char m_trap[], s_trap[];

/* ------------------------------------------------------------------ */
/* Trap handlers. t6 is swapped with x-scratch to reach the record;    */
/* t0-t2 are saved in the record.                                      */
/* ------------------------------------------------------------------ */
__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 32(t6)\n"
  "  sd t1, 40(t6)\n"
  "  sd t2, 48(t6)\n"
  "  ld t0, 16(t6)\n"            /* entry = count & 7 */
  "  andi t1, t0, 7\n"
  "  slli t1, t1, 5\n"
  "  add t1, t1, t6\n"
  "  csrr t2, mcause\n"
  "  sd t2, 64(t1)\n"
  "  csrr t2, mstatus\n"
  "  sd t2, 72(t1)\n"
  "  csrr t2, mepc\n"
  "  sd t2, 80(t1)\n"
  "  csrr t2, mtval\n"
  "  sd t2, 88(t1)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  bnez t0, 1f\n"
  "  csrr t1, mepc\n"            /* action 0: skip the trapping instruction */
  "  addi t1, t1, 4\n"
  "  csrw mepc, t1\n"
  "  j 2f\n"
  "1:\n"                          /* action 1: return to M at the resume pc */
  "  ld t1, 8(t6)\n"
  "  csrw mepc, t1\n"
  "  li t1, 0x1800\n"
  "  csrs mstatus, t1\n"          /* MPP = M */
  "  sd zero, 0(t6)\n"
  "2:\n"
  "  ld t0, 32(t6)\n"
  "  ld t1, 40(t6)\n"
  "  ld t2, 48(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  ".align 2\n"
  ".global s_trap\n"
  "s_trap:\n"
  "  csrrw t6, sscratch, t6\n"
  "  sd t0, 576(t6)\n"
  "  sd t1, 584(t6)\n"
  "  sd t2, 592(t6)\n"
  "  ld t0, 24(t6)\n"
  "  andi t1, t0, 7\n"
  "  slli t1, t1, 5\n"
  "  add t1, t1, t6\n"
  "  csrr t2, scause\n"
  "  sd t2, 320(t1)\n"
  "  csrr t2, sstatus\n"
  "  sd t2, 328(t1)\n"
  "  csrr t2, sepc\n"
  "  sd t2, 336(t1)\n"
  "  csrr t2, stval\n"
  "  sd t2, 344(t1)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 24(t6)\n"
  "  csrr t0, scause\n"
  "  bltz t0, 1f\n"
  "  csrr t1, sepc\n"            /* exception: skip the instruction */
  "  addi t1, t1, 4\n"
  "  csrw sepc, t1\n"
  "  j 2f\n"
  "1:\n"                          /* interrupt: clear SSIP, resume at sepc */
  "  li t1, 2\n"
  "  csrc sip, t1\n"
  "2:\n"
  "  ld t0, 576(t6)\n"
  "  ld t1, 584(t6)\n"
  "  ld t2, 592(t6)\n"
  "  csrrw t6, sscratch, t6\n"
  "  sret\n"

  /* ---------------- lower-mode routines (a0 = record) ------------- */
  ".align 2\n"
  ".global s_basic, s_basic_ecall, s_basic_mcsr, s_basic_mret, s_basic_exit\n"
  "s_basic:\n"
  "s_basic_ecall:  ecall\n"
  "s_basic_mcsr:   csrr t0, mscratch\n"   /* M CSR from S: illegal */
  "                csrr t0, sscratch\n"   /* S CSR from S: legal   */
  "s_basic_mret:   mret\n"                /* mret in S: illegal    */
  "                li t0, 1\n"
  "                sd t0, 0(a0)\n"
  "s_basic_exit:   csrr t0, mstatus\n"    /* exit trap -> M        */
  "1:              j 1b\n"

  ".align 2\n"
  ".global u_basic, u_basic_ecall, u_basic_scsr, u_basic_sret, u_basic_exit\n"
  "u_basic:\n"
  "u_basic_ecall:  ecall\n"
  "u_basic_scsr:   csrr t0, sscratch\n"   /* S CSR from U: illegal */
  "u_basic_sret:   sret\n"                /* sret in U: illegal    */
  "                li t0, 1\n"
  "                sd t0, 0(a0)\n"
  "u_basic_exit:   csrr t0, mstatus\n"
  "1:              j 1b\n"

  ".align 2\n"
  ".global u_deleg, u_deleg_ecall, u_deleg_after, u_deleg_exit\n"
  "u_deleg:\n"
  "u_deleg_ecall:  ecall\n"               /* delegated -> S handler */
  "u_deleg_after:  csrr t0, sscratch\n"   /* back in U: illegal -> M */
  "                li t0, 1\n"
  "                sd t0, 0(a0)\n"
  "u_deleg_exit:   csrr t0, mstatus\n"
  "1:              j 1b\n"

  ".align 2\n"
  ".global s_irq, s_irq_exit\n"
  "s_irq:\n"
  "                csrsi sip, 2\n"        /* SSIP pending            */
  "                csrsi sstatus, 2\n"    /* SIE = 1 -> taken in S   */
  "                csrci sstatus, 2\n"
  "                li t0, 1\n"
  "                sd t0, 0(a0)\n"
  "s_irq_exit:     csrr t0, mstatus\n"
  "1:              j 1b\n"
);

static inline volatile uint64_t *rec(void)
{
  return (volatile uint64_t *)HART_DRAM(REC_BASE);
}

#define REC_U64(off)  (rec()[(off) / 8])

static inline uint64_t read_mstatus(void)
{
  uint64_t v;
  __asm__ volatile ("csrr %0, mstatus" : "=r"(v));
  return v;
}

/* Enter `mode` at `entry` via mret; the lower-mode routine ends with an
 * exit trap whose handler returns here (label 1) in M mode. */
static void run_in_mode(uint64_t mode, uintptr_t entry)
{
  volatile uint64_t *r = rec();

  r[REC_M_COUNT / 8] = 0;
  r[REC_S_COUNT / 8] = 0;
  __asm__ volatile (
    "sd zero, 0(%0)\n"            /* action = skip */
    "la t0, 1f\n"
    "sd t0, 8(%0)\n"              /* resume pc     */
    "mv a0, %0\n"                 /* lower code: a0 = record */
    "csrw mepc, %1\n"
    "li t0, 0x1800\n"
    "csrc mstatus, t0\n"
    "slli t0, %2, 11\n"
    "csrs mstatus, t0\n"          /* MPP = mode    */
    "mret\n"
    "1:\n"
    :
    : "r"(r), "r"(entry), "r"(mode)
    : "t0", "t1", "t2", "t3", "t4", "t5", "t6",
      "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "ra", "memory");
}

struct exp_trap {
  uint64_t cause;
  uint64_t prev_priv;     /* MPP (M log) or SPP (S log) */
  uintptr_t epc;          /* 0 = do not check */
};

static uint64_t check_log(unsigned log_off, unsigned count_off, unsigned step,
                          const struct exp_trap *exp, unsigned n)
{
  uint64_t base = (uint64_t)step << 8;
  int is_m = (log_off == REC_M_LOG);

  if (REC_U64(count_off) != n)
    return base | 0x01;

  for (unsigned i = 0; i < n; i++) {
    uint64_t cause  = REC_U64(log_off + i * 32);
    uint64_t status = REC_U64(log_off + i * 32 + 8);
    uint64_t epc    = REC_U64(log_off + i * 32 + 16);
    uint64_t prev   = is_m ? ((status >> 11) & 3) : ((status >> 8) & 1);

    if (cause != exp[i].cause)
      return base | (i << 4) | 0x02;
    if (prev != exp[i].prev_priv)
      return base | (i << 4) | 0x03;
    if (exp[i].epc && epc != exp[i].epc)
      return base | (i << 4) | 0x04;
  }
  return 0;
}

static uint64_t check_mpp_reset(unsigned step)
{
  /* Back in M via mret: MPP must now hold the least-privileged mode (U). */
  return (((read_mstatus() >> 11) & 3) == PRIV_U) ? 0 : (((uint64_t)step << 8) | 0x05);
}

static uint64_t run_priv_tests(void)
{
  uint64_t rc;

  /* Handlers and scratch pointers for this hart. */
  __asm__ volatile ("csrw mtvec, %0" :: "r"(m_trap));
  __asm__ volatile ("csrw stvec, %0" :: "r"(s_trap));
  __asm__ volatile ("csrw mscratch, %0" :: "r"(rec()));
  __asm__ volatile ("csrw sscratch, %0" :: "r"(rec()));
  __asm__ volatile ("csrw medeleg, zero");
  __asm__ volatile ("csrw mideleg, zero");

  /* Step 1: S mode, nothing delegated. */
  {
    const struct exp_trap m[] = {
      { CAUSE_ECALL_S,  PRIV_S, (uintptr_t)s_basic_ecall },
      { CAUSE_ILLEGAL,  PRIV_S, (uintptr_t)s_basic_mcsr  },
      { CAUSE_ILLEGAL,  PRIV_S, (uintptr_t)s_basic_mret  },
      { CAUSE_ILLEGAL,  PRIV_S, (uintptr_t)s_basic_exit  },
    };
    run_in_mode(PRIV_S, (uintptr_t)s_basic);
    if ((rc = check_mpp_reset(1)) != 0) return rc;
    if ((rc = check_log(REC_M_LOG, REC_M_COUNT, 1, m, 4)) != 0) return rc;
    if ((rc = check_log(REC_S_LOG, REC_S_COUNT, 1, m, 0)) != 0) return rc | 0x80;
  }

  /* Step 2: U mode, nothing delegated. */
  {
    const struct exp_trap m[] = {
      { CAUSE_ECALL_U,  PRIV_U, (uintptr_t)u_basic_ecall },
      { CAUSE_ILLEGAL,  PRIV_U, (uintptr_t)u_basic_scsr  },
      { CAUSE_ILLEGAL,  PRIV_U, (uintptr_t)u_basic_sret  },
      { CAUSE_ILLEGAL,  PRIV_U, (uintptr_t)u_basic_exit  },
    };
    run_in_mode(PRIV_U, (uintptr_t)u_basic);
    if ((rc = check_mpp_reset(2)) != 0) return rc;
    if ((rc = check_log(REC_M_LOG, REC_M_COUNT, 2, m, 4)) != 0) return rc;
    if ((rc = check_log(REC_S_LOG, REC_S_COUNT, 2, m, 0)) != 0) return rc | 0x80;
  }

  /* Step 3: U mode, ecall-from-U delegated to S. */
  {
    const struct exp_trap s[] = {
      { CAUSE_ECALL_U,  0 /* SPP = U */, (uintptr_t)u_deleg_ecall },
    };
    const struct exp_trap m[] = {
      { CAUSE_ILLEGAL,  PRIV_U, (uintptr_t)u_deleg_after },
      { CAUSE_ILLEGAL,  PRIV_U, (uintptr_t)u_deleg_exit  },
    };
    __asm__ volatile ("csrw medeleg, %0" :: "r"(1UL << CAUSE_ECALL_U));
    run_in_mode(PRIV_U, (uintptr_t)u_deleg);
    __asm__ volatile ("csrw medeleg, zero");
    if ((rc = check_mpp_reset(3)) != 0) return rc;
    if ((rc = check_log(REC_S_LOG, REC_S_COUNT, 3, s, 1)) != 0) return rc | 0x80;
    if ((rc = check_log(REC_M_LOG, REC_M_COUNT, 3, m, 2)) != 0) return rc;
  }

  /* Step 4: S mode, supervisor software interrupt delegated to S. */
  {
    const struct exp_trap s[] = {
      { CAUSE_SSI,      1 /* SPP = S */, 0 },
    };
    const struct exp_trap m[] = {
      { CAUSE_ILLEGAL,  PRIV_S, (uintptr_t)s_irq_exit },
    };
    __asm__ volatile ("csrw mideleg, %0" :: "r"(1UL << 1));
    __asm__ volatile ("csrs sie, %0" :: "r"(1UL << 1));       /* SSIE */
    run_in_mode(PRIV_S, (uintptr_t)s_irq);
    __asm__ volatile ("csrc sie, %0" :: "r"(1UL << 1));
    __asm__ volatile ("csrw mideleg, zero");
    if ((rc = check_mpp_reset(4)) != 0) return rc;
    if ((rc = check_log(REC_S_LOG, REC_S_COUNT, 4, s, 1)) != 0) return rc | 0x80;
    if ((rc = check_log(REC_M_LOG, REC_M_COUNT, 4, m, 1)) != 0) return rc;
  }

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
  tohost_exit(run_priv_tests());
}
