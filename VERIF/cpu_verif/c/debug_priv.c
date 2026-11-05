/* debug_priv.c
 *
 * BP-DV-063: Debug Mode cases BP-DV-051 (c/debug_mode.c) does not cover, on
 * both harts: single-step results, and Debug Mode entered from S and U mode.
 *
 * Checks:
 *   1  dcsr.ebreaku written alone reads back 1, ebreakm and ebreaks 0
 *   2  step one addi: cause 4, dpc = next instruction, result correct
 *   3  step a taken branch: dpc = branch target
 *   4  step a jr: dpc = jump target
 *   5  three steps in a row (dret straight into the next step): dpc of
 *      each entry is the next instruction
 *   6  S-mode ebreak, ebreaks = 0: M-mode breakpoint, no Debug Mode
 *   7  ebreakm + ebreaks do not catch U, ebreakm + ebreaku do not catch S
 *   8  S-mode ebreak, ebreaks = 1: Debug Mode, cause 1, prv 1, handler runs
 *      with no exception, dret returns to S
 *   9  as 8 from U mode with ebreaku = 1: prv 0, dret returns to U
 *
 * The handler reaches its data through tp, not through mhartid, and its
 * first CSR access is dscratch0 (M level; Debug Mode has M-mode permission).
 * An exception inside the handler goes to vector +8, which counts it, writes
 * a nop over this hart's ebreak and returns: dpc still points at the ebreak,
 * and the handler cannot change dpc if its CSR accesses fault. That way a
 * failing check ends normally and the following checks still run.
 *
 * Progress marker (check about to run) at 0x0010_8800 (+0x10 per hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (bitmask of failed checks, bit 0 = check 1) << 16 | 0x6300.
 */

#include <stdint.h>
#include "dual_core.h"

#define CSRR(csr)        ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

#define CFG_NPC(h)       ((volatile uint64_t *)(((uint64_t)(h) << 24) | 0x00200010UL))
#define PROGRESS(h)      ((volatile uint64_t *)(0x00108800UL + (uint64_t)(h) * 0x10UL))

#define DCSR_EBREAKM     (1ULL << 15)
#define DCSR_EBREAKS     (1ULL << 13)
#define DCSR_EBREAKU     (1ULL << 12)
#define DCSR_STEP        (1ULL << 2)
#define DCSR_CAUSE(d)    (((d) >> 6) & 7)
#define DCSR_PRV(d)      ((d) & 3)

#define EBREAK_INSTR     0x00100073U

/* Debug record per hart, addressed by tp: [0] entries, [1] dcsr, [2] dpc,
 * [3] exceptions in Debug Mode, [6] further steps to take,
 * [8..15] dpc of entry (count & 7), [16..18] saved t0-t2, [19] ebreak site */
static uint64_t drec[NUM_HARTS][24] __attribute__((aligned(64)));
/* M-mode trap record: [0] count, [1] mcause, [2] mepc, [3] save */
static uint64_t mrec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  /* ---------------- debug vector ---------------- */
  ".align 4\n"
  ".global dbg_vec\n"
  "dbg_vec:\n"
  "  j dbg_entry\n"               /* +0: Debug Mode entry */
  "  nop\n"
  "  j dbg_exc\n"                 /* +8: exception inside Debug Mode */
  "  nop\n"

  "dbg_entry:\n"
  "  sd t0, 128(tp)\n"
  "  sd t1, 136(tp)\n"
  "  sd t2, 144(tp)\n"
  "  csrw dscratch0, t0\n"        /* first M-level CSR access */
  "  ld t1, 0(tp)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 0(tp)\n"
  "  csrr t2, dpc\n"
  "  sd t2, 16(tp)\n"
  "  andi t1, t1, 7\n"
  "  slli t1, t1, 3\n"
  "  add t1, t1, tp\n"
  "  sd t2, 64(t1)\n"
  "  csrr t1, dcsr\n"
  "  sd t1, 8(tp)\n"
  "  srli t1, t1, 6\n"
  "  andi t1, t1, 7\n"            /* cause */
  "  li t2, 1\n"
  "  bne t1, t2, 1f\n"
  "  csrr t2, dpc\n"              /* ebreak: resume after it */
  "  addi t2, t2, 4\n"
  "  csrw dpc, t2\n"
  "1:\n"
  "  ld t2, 48(tp)\n"             /* more steps wanted: leave dcsr.step set */
  "  beqz t2, 2f\n"
  "  addi t2, t2, -1\n"
  "  sd t2, 48(tp)\n"
  "  j 3f\n"
  "2:\n"
  "  li t2, 4\n"
  "  csrc dcsr, t2\n"
  "3:\n"
  "  ld t0, 128(tp)\n"
  "  ld t1, 136(tp)\n"
  "  ld t2, 144(tp)\n"
  "  dret\n"

  "dbg_exc:\n"                    /* no CSR access here, see the header */
  "  ld t1, 24(tp)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 24(tp)\n"
  "  ld t1, 152(tp)\n"
  "  li t2, 0x13\n"
  "  sw t2, 0(t1)\n"
  "  fence.i\n"
  "  dret\n"

  /* ------- M-mode trap handler: count; ecall from S/U returns to M ------- */
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 24(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  addi t0, t0, -8\n"           /* mcause 8 or 9 */
  "  srli t0, t0, 1\n"
  "  bnez t0, 1f\n"
  "  csrw mepc, ra\n"             /* back to the caller of site_priv, in M */
  "  li t0, 0x1800\n"
  "  csrs mstatus, t0\n"
  "  j 2f\n"
  "1:\n"
  "  csrr t0, mepc\n"
  "  sd t0, 16(t6)\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "2:\n"
  "  ld t0, 24(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  /* ---------------- S/U code: one ebreak site per hart ---------------- */
  /* site_priv(a0 = mode, a1 = this hart's site): mret into it */
  ".align 2\n"
  ".global site_priv\n"
  "site_priv:\n"
  "  li t0, 0x1800\n"
  "  csrc mstatus, t0\n"
  "  slli t1, a0, 11\n"
  "  csrs mstatus, t1\n"
  "  csrw mepc, a1\n"
  "  mret\n"
  ".balign 64\n"
  ".global site_low0\n"
  "site_low0:\n"
  "  ebreak\n"
  "  ecall\n"
  ".balign 64\n"
  ".global site_low1\n"
  "site_low1:\n"
  "  ebreak\n"
  "  ecall\n"
  ".balign 64\n"

  /* ---------------- single-step sites (a1 = DCSR_STEP) ---------------- */
  ".global site_step\n"
  "site_step:\n"
  "  csrs dcsr, a1\n"
  "  addi a0, a0, 1\n"
  ".global site_step_next\n"
  "site_step_next:\n"
  "  addi a0, a0, 1\n"
  "  ret\n"
  ".global site_br\n"
  "site_br:\n"
  "  csrs dcsr, a1\n"
  "  beq x0, x0, site_br_t\n"
  "  nop\n"
  "  nop\n"
  ".global site_br_t\n"
  "site_br_t:\n"
  "  ret\n"
  ".global site_jr\n"
  "site_jr:\n"
  "  la t0, site_jr_t\n"
  "  csrs dcsr, a1\n"
  "  jr t0\n"
  "  nop\n"
  "  nop\n"
  ".global site_jr_t\n"
  "site_jr_t:\n"
  "  ret\n"
  ".global site_multi\n"
  "site_multi:\n"
  "  csrs dcsr, a1\n"
  "  addi a0, a0, 1\n"
  ".global site_m1\n"
  "site_m1:\n"
  "  addi a0, a0, 1\n"
  ".global site_m2\n"
  "site_m2:\n"
  "  j site_m3\n"
  "  nop\n"
  ".global site_m3\n"
  "site_m3:\n"
  "  ret\n"
);
extern char dbg_vec[], m_trap[], site_low0[], site_low1[];
extern char site_step_next[], site_br_t[], site_jr_t[], site_m1[], site_m2[], site_m3[];
extern void site_priv_fn(uint64_t mode, uint64_t site) __asm__("site_priv");
extern uint64_t site_step_fn(uint64_t a0, uint64_t a1) __asm__("site_step");
extern void site_br_fn(uint64_t a0, uint64_t a1) __asm__("site_br");
extern void site_jr_fn(uint64_t a0, uint64_t a1) __asm__("site_jr");
extern uint64_t site_multi_fn(uint64_t a0, uint64_t a1) __asm__("site_multi");

static void progress(unsigned v)
{
  *PROGRESS(hart_id()) = v;
  dual_fence();
}

struct st { unsigned n, mask; };
static void check(struct st *s, int ok)
{
  s->n++;
  if (!ok)
    s->mask |= 1U << (s->n - 1);
}

static void set_ebreak(volatile uint32_t *site)
{
  *site = EBREAK_INSTR;
  __asm__ volatile ("fence.i" ::: "memory");
}

static uint64_t run_debug(void)
{
  unsigned h = (unsigned)hart_id();
  uint64_t *d = drec[h], *m = mrec[h];
  uint64_t site = (uint64_t)(uintptr_t)(h ? site_low1 : site_low0);
  struct st s = { 0, 0 };
  uint64_t v, n, dn, en, old_npc;

  __asm__ volatile ("mv tp, %0" :: "r"(d) : "memory");
  d[19] = site;
  CSRW(mscratch, m);
  CSRW(mtvec, m_trap);
  old_npc = *CFG_NPC(h);
  *CFG_NPC(h) = (uint64_t)(uintptr_t)dbg_vec;
  dual_fence();
  v = CSRR(dcsr) & ~(DCSR_EBREAKM | DCSR_EBREAKS | DCSR_EBREAKU);

  /* 1 ebreaku alone */
  progress(1);
  CSRW(dcsr, v | DCSR_EBREAKU); n = CSRR(dcsr); CSRW(dcsr, v);
  check(&s, (n & DCSR_EBREAKU) && !(n & (DCSR_EBREAKM | DCSR_EBREAKS)));

  /* 2 step one instruction */
  progress(2);
  dn = d[0];
  n = site_step_fn(0, DCSR_STEP);
  check(&s, n == 2 && d[0] == dn + 1 && DCSR_CAUSE(d[1]) == 4
            && d[2] == (uint64_t)(uintptr_t)site_step_next
            && !(CSRR(dcsr) & DCSR_STEP));

  /* 3 step a taken branch */
  progress(3);
  dn = d[0];
  site_br_fn(0, DCSR_STEP);
  check(&s, d[0] == dn + 1 && DCSR_CAUSE(d[1]) == 4
            && d[2] == (uint64_t)(uintptr_t)site_br_t);

  /* 4 step a jr */
  progress(4);
  dn = d[0];
  site_jr_fn(0, DCSR_STEP);
  check(&s, d[0] == dn + 1 && DCSR_CAUSE(d[1]) == 4
            && d[2] == (uint64_t)(uintptr_t)site_jr_t);

  /* 5 three steps in a row */
  progress(5);
  dn = d[0];
  d[6] = 2;
  n = site_multi_fn(0, DCSR_STEP);
  check(&s, n == 2 && d[0] == dn + 3
            && d[8 + ((dn + 1) & 7)] == (uint64_t)(uintptr_t)site_m1
            && d[8 + ((dn + 2) & 7)] == (uint64_t)(uintptr_t)site_m2
            && d[8 + ((dn + 3) & 7)] == (uint64_t)(uintptr_t)site_m3);

  /* 6 S ebreak, ebreaks = 0: M breakpoint, then the ecall */
  progress(6);
  n = m[0]; dn = d[0];
  site_priv_fn(1, site);
  check(&s, m[0] == n + 2 && m[1] == 9 && d[0] == dn);

  /* 7 each bit only catches its own mode */
  progress(7);
  n = m[0]; dn = d[0];
  CSRW(dcsr, v | DCSR_EBREAKM | DCSR_EBREAKS);
  site_priv_fn(0, site);
  CSRW(dcsr, v | DCSR_EBREAKM | DCSR_EBREAKU);
  site_priv_fn(1, site);
  CSRW(dcsr, v);
  check(&s, d[0] == dn && m[0] == n + 4);

  /* 8 S ebreak, ebreaks = 1: Debug Mode, back in S (ecall from S) */
  progress(8);
  n = m[0]; dn = d[0]; en = d[3];
  CSRW(dcsr, v | DCSR_EBREAKS);
  site_priv_fn(1, site);
  CSRW(dcsr, v);
  check(&s, d[3] == en && d[0] == dn + 1 && m[0] == n + 1 && m[1] == 9
            && DCSR_CAUSE(d[1]) == 1 && DCSR_PRV(d[1]) == 1);
  set_ebreak((volatile uint32_t *)(uintptr_t)site);

  /* 9 U ebreak, ebreaku = 1: Debug Mode, back in U (ecall from U) */
  progress(9);
  n = m[0]; dn = d[0]; en = d[3];
  CSRW(dcsr, v | DCSR_EBREAKU);
  site_priv_fn(0, site);
  CSRW(dcsr, v);
  check(&s, d[3] == en && d[0] == dn + 1 && m[0] == n + 1 && m[1] == 8
            && DCSR_CAUSE(d[1]) == 1 && DCSR_PRV(d[1]) == 0);

  *CFG_NPC(h) = old_npc;
  dual_fence();
  progress(0xFF);
  return s.mask ? (((uint64_t)s.mask << 16) | 0x6300) : 0;
}

static void start_main(void);

/* Initialize the stack before entering C code. */
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
  tohost_exit(run_debug());
}
