/* debug_mode.c
 *
 * BP-DV-051: RISC-V Debug Mode on both harts, entered from software (no
 * debug module in this SoC; the core enters Debug Mode on its own):
 *   - the debug "ROM" is a 16-byte aligned vector in this program, whose
 *     address is written to the tile's cfg NPC register (0x0020_0010,
 *     tile = hart << 24): entry at +0, exceptions in Debug Mode at +8
 *     (bp_be_csr: debug_halt_pc / debug_exception_pc)
 *   - entries: ebreak with dcsr.ebreakm (cause 1), halt request through
 *     the CLINT debug register 0x0030_D000 + 8*hart (cause 3), single step
 *     dcsr.step (cause 4); exit with dret to dpc
 *
 * Checks (numbered; first failing one is reported):
 *   1  cfg NPC reads back the debug vector address
 *   2  dcsr.xdebugver == 4
 *   3  dcsr.ebreakm written 1 reads back 1 (and 0 again)
 *   4  dcsr.ebreaks written alone reads back 1 and ebreakm 0
 *      (bp decompress_dcsr_s returns ebreakm for ebreaks/ebreaku)
 *   5  ebreak with ebreakm = 0 is an M-mode breakpoint (mcause 3)
 *   6  ebreak with ebreakm = 1 enters Debug Mode: cause 1, prv 3,
 *      dpc = the ebreak; execution resumes after it, no M trap
 *   7  CLINT debug register = 1 enters Debug Mode: cause 3, prv 3; the
 *      handler clears the register; execution resumes, no M trap
 *   8  an illegal instruction inside Debug Mode goes to vector +8, and
 *      mcause / mepc are not changed
 *   9  dcsr.step = 1: after one instruction Debug Mode is entered with
 *      cause 4 and dpc = the next instruction
 *  10  dret outside Debug Mode is an illegal instruction (mcause 2)
 *  11  dscratch0 / dscratch1 restored by the handler (regs preserved)
 *
 * Progress marker (step number) at 0x0010_8800 (+0x10 per hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x5100 | first failing check.
 */

#include <stdint.h>
#include "dual_core.h"

#define CSRR(csr)        ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

#define CFG_NPC(h)       ((volatile uint64_t *)(((uint64_t)(h) << 24) | 0x00200010UL))
#define CLINT_DEBUG(h)   ((volatile uint64_t *)(0x0030D000UL + (uint64_t)(h) * 8UL))
#define PROGRESS(h)      ((volatile uint64_t *)(0x00108800UL + (uint64_t)(h) * 0x10UL))

/* Standard dcsr bit positions (Debug spec). -DBP_DCSR_LAYOUT uses the
 * positions BlackParrot actually implements (rv64_dcsr_s has a 4-bit cause,
 * so every field above it is one bit higher) - for diagnosis only. */
#ifdef BP_DCSR_LAYOUT
#define DCSR_EBREAKM     (1ULL << 16)
#define DCSR_EBREAKS     (1ULL << 14)
#else
#define DCSR_EBREAKM     (1ULL << 15)
#define DCSR_EBREAKS     (1ULL << 13)
#endif
#define DCSR_STEP        (1ULL << 2)
#define DCSR_CAUSE(d)    (((d) >> 6) & 7)
#define DCSR_PRV(d)      ((d) & 3)

/* Debug record per hart (64 B): [0] entries, [1] dcsr, [2] dpc,
 * [3] exceptions in Debug Mode, [4] flags (bit0: do an illegal op),
 * [5] scratch for t2 */
static uint64_t drec[NUM_HARTS][8] __attribute__((aligned(64)));
/* M-mode trap record: [0] count, [1] mcause, [2] mepc, [3..4] save */
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
  "  csrw dscratch0, t0\n"
  "  csrw dscratch1, t1\n"
  "  csrr t1, mhartid\n"
  "  slli t1, t1, 6\n"
  "  la t0, drec\n"
  "  add t0, t0, t1\n"            /* t0 = &drec[hart] */
  "  sd t2, 40(t0)\n"
  "  ld t1, 0(t0)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 0(t0)\n"
  "  csrr t1, dcsr\n"
  "  sd t1, 8(t0)\n"
  "  csrr t2, dpc\n"
  "  sd t2, 16(t0)\n"
  "  srli t1, t1, 6\n"
  "  andi t1, t1, 7\n"            /* cause */
  "  li t2, 1\n"
  "  bne t1, t2, 1f\n"
  "  csrr t2, dpc\n"              /* ebreak: resume after it */
  "  addi t2, t2, 4\n"
  "  csrw dpc, t2\n"
  "1:\n"
  "  li t2, 3\n"
  "  bne t1, t2, 2f\n"
  "  csrr t1, mhartid\n"          /* halt request: clear CLINT debug bit */
  "  slli t1, t1, 3\n"
  "  li t2, 0x0030D000\n"
  "  add t2, t2, t1\n"
  "  sd zero, 0(t2)\n"
  "  fence iorw, iorw\n"
  "2:\n"
  "  li t2, 4\n"                  /* single step: clear dcsr.step */
  "  csrc dcsr, t2\n"
  "  ld t1, 32(t0)\n"             /* flags: bit0 = execute an illegal op */
  "  andi t1, t1, 1\n"
  "  beqz t1, 3f\n"
  "  sd zero, 32(t0)\n"
  "  .word 0\n"                   /* illegal: goes to dbg_vec + 8 */
  ".global dbg_after_illegal\n"
  "dbg_after_illegal:\n"
  "3:\n"
  "  ld t2, 40(t0)\n"
  "  csrr t0, dscratch0\n"
  "  csrr t1, dscratch1\n"
  "  dret\n"

  "dbg_exc:\n"                    /* t0 still = &drec[hart] */
  "  ld t1, 24(t0)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 24(t0)\n"
  "  j dbg_after_illegal\n"

  /* ---------------- M-mode trap handler: count, skip ---------------- */
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
  "  csrr t0, mepc\n"
  "  sd t0, 16(t6)\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 24(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  /* ---------------- instruction sites ---------------- */
  ".align 2\n"
  ".global site_ebreak\n"
  "site_ebreak:\n"
  "  ebreak\n"
  "  ret\n"
  ".global site_dret\n"
  "site_dret:\n"
  "  dret\n"
  "  ret\n"
  ".global site_step\n"           /* a0 += 1 twice; step stops after one */
  "site_step:\n"
  "  csrs dcsr, a1\n"             /* a1 = DCSR_STEP: armed by this csrs */
  "  addi a0, a0, 1\n"
  ".global site_step_next\n"
  "site_step_next:\n"
  "  addi a0, a0, 1\n"
  "  ret\n"
);
extern char dbg_vec[], m_trap[], site_ebreak[], site_step_next[];
extern void site_ebreak_fn(void) __asm__("site_ebreak");
extern void site_dret_fn(void) __asm__("site_dret");
extern uint64_t site_step_fn(uint64_t a0, uint64_t a1) __asm__("site_step");

struct st { unsigned n, fails, first; };
static void check(struct st *s, int ok)
{
  s->n++;
  if (!ok) {
    if (s->fails == 0)
      s->first = s->n;
    s->fails++;
  }
}

static void progress(unsigned v)
{
  *PROGRESS(hart_id()) = v;
  dual_fence();
}

/* Debug dump (DEBUG_DUMP builds only): 8 dwords per step at
 * 0x0010_9000 + hart*0x800 + step*0x40, visible in the AXI W log. */
static void dump(unsigned step, uint64_t a, uint64_t b)
{
#ifdef DEBUG_DUMP
  unsigned h = (unsigned)hart_id();
  volatile uint64_t *p = (volatile uint64_t *)(0x00109000UL + h * 0x800UL + step * 0x40UL);
  p[0] = a; p[1] = b;
  p[2] = drec[h][0]; p[3] = drec[h][1]; p[4] = drec[h][2]; p[5] = drec[h][3];
  p[6] = mrec[h][0]; p[7] = mrec[h][1];
  dual_fence();
#else
  (void)step; (void)a; (void)b;
#endif
}

static uint64_t run_debug(void)
{
  unsigned h = (unsigned)hart_id();
  uint64_t *d = drec[h], *m = mrec[h];
  struct st s = { 0, 0, 0 };
  uint64_t v, n, dn, old_npc, mcause0, mepc0;

  CSRW(mscratch, m);
  CSRW(mtvec, m_trap);

  /* 1 cfg NPC -> debug vector */
  progress(1);
  old_npc = *CFG_NPC(h);
  *CFG_NPC(h) = (uint64_t)(uintptr_t)dbg_vec;
  dual_fence();
  check(&s, *CFG_NPC(h) == (uint64_t)(uintptr_t)dbg_vec);

  /* 2-4 dcsr fields */
  progress(2);
  v = CSRR(dcsr);
  dump(2, v, 0);
  check(&s, ((v >> 28) & 0xF) == 4);
  CSRW(dcsr, v | DCSR_EBREAKM);  n = CSRR(dcsr);
  CSRW(dcsr, v & ~DCSR_EBREAKM); dn = CSRR(dcsr);
  check(&s, (n & DCSR_EBREAKM) && !(dn & DCSR_EBREAKM));
  CSRW(dcsr, (v & ~DCSR_EBREAKM) | DCSR_EBREAKS); n = CSRR(dcsr);
  CSRW(dcsr, v & ~(DCSR_EBREAKM | DCSR_EBREAKS));
  dump(4, n, dn);
  check(&s, (n & DCSR_EBREAKS) && !(n & DCSR_EBREAKM));

  /* 5 ebreak, ebreakm = 0: M-mode breakpoint */
  progress(5);
  n = m[0]; dn = d[0];
  site_ebreak_fn();
  dump(5, n, dn);
  check(&s, m[0] == n + 1 && m[1] == 3 && d[0] == dn);

  /* 6 ebreak, ebreakm = 1: Debug Mode */
  progress(6);
  CSRW(dcsr, CSRR(dcsr) | DCSR_EBREAKM);
  n = m[0]; dn = d[0];
  site_ebreak_fn();
  dump(6, n, dn);
  CSRW(dcsr, CSRR(dcsr) & ~DCSR_EBREAKM);
  check(&s, d[0] == dn + 1 && m[0] == n
            && DCSR_CAUSE(d[1]) == 1 && DCSR_PRV(d[1]) == 3
            && d[2] == (uint64_t)(uintptr_t)site_ebreak);

  /* 7 halt request through the CLINT debug register */
  progress(7);
  n = m[0]; dn = d[0];
  *CLINT_DEBUG(h) = 1;
  dual_fence();
  {
    uint64_t start = dual_cycles();
    while (d[0] == dn && (dual_cycles() - start) < 100000)
      ;
  }
  dump(7, n, dn);
  check(&s, d[0] == dn + 1 && m[0] == n
            && DCSR_CAUSE(d[1]) == 3 && DCSR_PRV(d[1]) == 3
            && *CLINT_DEBUG(h) == 0);

  /* 8 exception inside Debug Mode -> vector + 8, M CSRs untouched */
  progress(8);
  CSRW(mcause, 0x77); CSRW(mepc, 0x80000100ULL);
  mcause0 = CSRR(mcause); mepc0 = CSRR(mepc);
  d[4] = 1;                                     /* handler: do an illegal op */
  n = m[0]; dn = d[3];
  CSRW(dcsr, CSRR(dcsr) | DCSR_EBREAKM);
  site_ebreak_fn();
  CSRW(dcsr, CSRR(dcsr) & ~DCSR_EBREAKM);
  check(&s, d[3] == dn + 1 && m[0] == n
            && CSRR(mcause) == mcause0 && CSRR(mepc) == mepc0);

  /* 9 single step */
  progress(9);
  dn = d[0];
  v = site_step_fn(0, DCSR_STEP);
  dump(9, n, dn);
  check(&s, v == 2 && d[0] == dn + 1
            && DCSR_CAUSE(d[1]) == 4 && !(CSRR(dcsr) & DCSR_STEP));

  /* 10 dret outside Debug Mode */
  progress(10);
  n = m[0];
  site_dret_fn();
  dump(10, n, dn);
  check(&s, m[0] == n + 1 && m[1] == 2);

  /* 11 registers preserved across the handler (dscratch restore) */
  check(&s, CSRR(mscratch) == (uint64_t)(uintptr_t)m);

  *CFG_NPC(h) = old_npc;
  dual_fence();
  progress(0xFF);
  return s.fails ? (((uint64_t)s.fails << 16) | 0x5100 | s.first) : 0;
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
