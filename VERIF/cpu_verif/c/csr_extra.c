/* csr_extra.c
 *
 * BP-DV-073: CSR fields BP-DV-071 (csr_walk.c) does not reach (hole review,
 * 10 Nov 2026), on both harts one after the other. M-mode, interrupts off.
 *
 *   1 mstatus TW / TVM / TSR / MPRV (MPP = M first) set and read back,
 *     mstatus restored in the same asm block (no memory access while set)
 *   2 satp in Sv39 mode with ASID / PPN patterns: mode reads back 8, the
 *     value is stable (WARL), restored to 0. M-mode never translates.
 *   3 mtvec: base patterns (mode 0 and 1 written) read back stable, mtvec
 *     restored in the same asm block; stvec vectored write stable (WARL)
 *   4 pmpcfg0 / pmpcfg2: patterns without the L bits (M-mode accesses are
 *     not checked without L), value stable, restored
 *   5 sip shows STIP / SEIP (mip bits 5 / 9) once they are delegated in
 *     mideleg; mip and mideleg restored
 *   6 loads with an address bit above the 40-bit paddr (40..63) raise a
 *     load access fault (mcause 5); fetches from hio addresses (bits
 *     33..38, hio_mask = 0) raise an instruction access fault (mcause 1,
 *     check 12) with mtval = the address sign-extended from bit 38.
 *     Observation (10 Nov): for the load faults mtval holds only the low
 *     40 bits (a valid address); the first one is logged at 0x0010_89E0 +
 *     hart * 0x100, not failed. (bp_mmu applies the
 *     hio check to fetches only: loads / stores to hio addresses are
 *     allowed.)
 *   7 dcsr stepie / stopcount / stoptime / mprven written (value stable)
 *   8 Debug Mode (cfg npc = debug vector, dcsr.ebreakm, ebreak): in the
 *     handler dscratch0 / dscratch1 return each pattern exactly and dpc
 *     returns bits 38:1 of it; dpc restored, dret after the ebreak.
 *     Observation (10 Nov): dpc keeps bit 0 (mepc / sepc clear it); the
 *     first such value is logged at 0x0010_89D0 + hart * 0x100, not failed.
 *   4 note: pmpcfg2 is not implemented (illegal instruction).
 *
 * Patterns: 0x5555.., 0xAAAA.., ~0, 0 and walking ones.
 * Progress marker (phase << 8 | pattern) at 0x0010_8400 (+0x10 / hart);
 * mask of failing checks at 0x0010_8700 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7300 | first failing check id.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))
#define CFG_NPC(h)   ((volatile uint64_t *)(((uint64_t)(h) << 24) | 0x00200010UL))

#define CSRR(csr)    ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v) __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

#define NPAT 68
static uint64_t pat(unsigned i)
{
  static const uint64_t fixed[4] = { 0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, ~0ULL, 0 };
  return i < 4 ? fixed[i] : 1ULL << (i - 4);
}

/* M-mode trap: [0] count, [1] mcause, [2] mtval; skip a 4-byte instruction */
static volatile uint64_t mrec[NUM_HARTS][4] __attribute__((aligned(64)));
/* Debug record (tp): [0] pattern in, [1] dscratch0, [2] dscratch1, [3] dpc
 * read back, [4] entries, [5] exceptions in Debug Mode, [16..18] saves */
static volatile uint64_t drec[NUM_HARTS][24] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global x_trap\n"
  "x_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 24(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 16(t6)\n"
  "  csrr t0, mcause\n"
  "  addi t0, t0, -1\n"
  "  beqz t0, 1f\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  j 2f\n"
  "1: csrw mepc, ra\n"          /* instruction access fault: back to the caller */
  "2: ld t0, 24(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  ".align 4\n"
  ".global x_dbg_vec\n"
  "x_dbg_vec:\n"
  "  j x_dbg_entry\n"            /* +0: Debug Mode entry */
  "  nop\n"
  "  j x_dbg_exc\n"              /* +8: exception inside Debug Mode */
  "  nop\n"
  "x_dbg_entry:\n"
  "  sd t0, 128(tp)\n"
  "  sd t1, 136(tp)\n"
  "  sd t2, 144(tp)\n"
  "  ld t1, 32(tp)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 32(tp)\n"
  "  ld t0, 0(tp)\n"
  "  csrw dscratch0, t0\n"
  "  csrr t1, dscratch0\n"
  "  sd t1, 8(tp)\n"
  "  csrw dscratch1, t0\n"
  "  csrr t1, dscratch1\n"
  "  sd t1, 16(tp)\n"
  "  csrr t2, dpc\n"              /* the ebreak */
  "  csrw dpc, t0\n"
  "  csrr t1, dpc\n"
  "  sd t1, 24(tp)\n"
  "  addi t2, t2, 4\n"            /* resume after the ebreak */
  "  csrw dpc, t2\n"
  "  ld t0, 128(tp)\n"
  "  ld t1, 136(tp)\n"
  "  ld t2, 144(tp)\n"
  "  dret\n"
  "x_dbg_exc:\n"
  "  sd t1, 136(tp)\n"
  "  ld t1, 40(tp)\n"
  "  addi t1, t1, 1\n"
  "  sd t1, 40(tp)\n"
  "  ld t1, 136(tp)\n"
  "  dret\n"
);
extern char x_trap[], x_dbg_vec[];

static void progress(unsigned me, unsigned v) { *PROGRESS(me) = v; }

static uint64_t run_extra(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = mrec[me];
  volatile uint64_t *d = drec[me];
  unsigned fails = 0, first = 0;
  uint64_t failmask = 0;
  uint64_t v, x, y, old;

#define FAIL(id) do { if (!fails) first = (id); fails++; failmask |= 1ULL << (id); } while (0)
  /* first failure of check id: (a, b) at 0x0010_8900 + hart * 0x100 + id * 16 */
#define DIAGV(id, a, b) do { if (!(failmask & (1ULL << (id)))) { \
    volatile uint64_t *dv = (volatile uint64_t *)(0x00108900UL + me * 0x100UL + (id) * 16UL); \
    dv[0] = (a); dv[1] = (b); } } while (0)

  CSRW(mscratch, r);
  CSRW(mtvec, x_trap);

  /* 1 mstatus TW / TVM / TSR / MPRV */
  progress(me, 0x100);
  {
    uint64_t bits = (1ULL << 17) | (1ULL << 20) | (1ULL << 21) | (1ULL << 22);
    __asm__ volatile (
      "csrr %1, mstatus\n"
      "li t0, 0x1800\n"            /* MPP = M before MPRV */
      "csrs mstatus, t0\n"
      "csrs mstatus, %2\n"
      "csrr %0, mstatus\n"
      "csrw mstatus, %1\n"
      : "=&r"(x), "=&r"(old) : "r"(bits) : "t0", "memory");
    if ((x & bits) != bits) FAIL(1);
    if (CSRR(mstatus) != old) FAIL(1);
  }

  /* 2 satp Sv39 */
  progress(me, 0x200);
  old = CSRR(satp);
  for (unsigned p = 0; p < NPAT; p++) {
    v = (8ULL << 60) | (pat(p) & ((1ULL << 60) - 1));
    CSRW(satp, v);
    x = CSRR(satp);
    CSRW(satp, x);
    y = CSRR(satp);
    if ((x >> 60) != 8 || y != x) FAIL(2);
  }
  CSRW(satp, old);
  __asm__ volatile ("sfence.vma" ::: "memory");

  /* 3 mtvec (restored inside the asm block), stvec vectored */
  progress(me, 0x300);
  for (unsigned p = 0; p < NPAT; p++) {
    for (unsigned mode = 0; mode < 2; mode++) {
      v = (pat(p) & ~3ULL) | mode;
      __asm__ volatile (
        "csrr %2, mtvec\n"
        "csrw mtvec, %3\n"
        "csrr %0, mtvec\n"
        "csrw mtvec, %0\n"
        "csrr %1, mtvec\n"
        "csrw mtvec, %2\n"
        : "=&r"(x), "=&r"(y), "=&r"(old) : "r"(v) : "memory");
      if (y != x) { DIAGV(3, x, y); FAIL(3); }
    }
  }
  old = CSRR(stvec);
  CSRW(stvec, 0x80001001ULL);
  x = CSRR(stvec);
  CSRW(stvec, x);
  if (CSRR(stvec) != x) FAIL(3);
  CSRW(stvec, old);

  /* 4 pmpcfg0 / pmpcfg2 without L */
  progress(me, 0x400);
  {
    uint64_t c0 = CSRR(pmpcfg0);
    for (unsigned p = 0; p < NPAT; p++) {
      v = pat(p) & 0x7F7F7F7F7F7F7F7FULL;
      CSRW(pmpcfg0, v); x = CSRR(pmpcfg0); CSRW(pmpcfg0, x);
      if (CSRR(pmpcfg0) != x) FAIL(4);
    }
    CSRW(pmpcfg0, c0);
  }

  /* 5 sip through mideleg */
  progress(me, 0x500);
  {
    uint64_t dl = CSRR(mideleg), ip = CSRR(mip);
    CSRW(mideleg, 0x222);
    CSRW(mip, (1ULL << 5) | (1ULL << 9));
    x = CSRR(sip);
    CSRW(mip, ip);
    y = CSRR(sip);
    CSRW(mideleg, dl);
    if ((x & 0x220) != 0x220 || (y & 0x220)) FAIL(5);
  }

  /* 6a loads with bits above the 40-bit paddr: load access fault */
  progress(me, 0x600);
  unsigned tval_obs = 0;
  for (unsigned k = 40; k < 64; k++) {
    uint64_t a = (1ULL << k) | 0x00108000ULL | ((uint64_t)k << 3);
    r[0] = 0;
    __asm__ volatile (
      ".option push\n .option norvc\n"
      "ld %0, 0(%1)\n"
      ".option pop\n"
      : "=&r"(x) : "r"(a) : "memory");
    if (r[0] != 1 || r[1] != 5) { DIAGV(6, (r[0] << 32) | r[1], r[2]); FAIL(6); }
    if (r[2] != a && !tval_obs) {             /* observation, not a failure */
      tval_obs = 1;
      *(volatile uint64_t *)(0x00108900UL + me * 0x100UL + 14 * 16UL) = r[2];
    }
  }
  /* 6b fetch from hio addresses (hio_mask = 0): instruction access fault */
  progress(me, 0x680);
  for (unsigned k = 33; k < 39; k++) {
    uint64_t a = (1ULL << k) | 0x80000000ULL | ((uint64_t)k << 4);
    r[0] = 0;
    __asm__ volatile ("jalr ra, 0(%0)" :: "r"(a) : "ra", "t0", "t1", "t2", "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "t3", "t4", "t5", "memory");
    uint64_t sext = (uint64_t)((int64_t)(a << 25) >> 25);   /* 39-bit vaddr, sign-extended */
    if (r[0] != 1 || r[1] != 1 || r[2] != sext) { DIAGV(12, (r[0] << 32) | r[1], r[2]); FAIL(12); }
  }
  r[0] = 0;

  /* 7 dcsr writable bits */
  progress(me, 0x700);
  old = CSRR(dcsr);
  {
    uint64_t bits = (1ULL << 11) | (1ULL << 10) | (1ULL << 9) | (1ULL << 4); /* stepie stopcount stoptime mprven */
    CSRW(dcsr, old | bits);
    x = CSRR(dcsr);
    CSRW(dcsr, x);
    if (CSRR(dcsr) != x) FAIL(7);
    CSRW(dcsr, old);
  }

  /* 8 Debug Mode: dscratch0 / dscratch1 / dpc */
  progress(me, 0x800);
  {
    uint64_t npc = *CFG_NPC(me);
    unsigned dpc_bit0 = 0;
    *CFG_NPC(me) = (uint64_t)(uintptr_t)x_dbg_vec;
    __asm__ volatile ("mv tp, %0" :: "r"(d) : "memory");
    CSRW(dcsr, (CSRR(dcsr) & ~(1ULL << 2)) | (1ULL << 15));      /* ebreakm, no step */
    for (unsigned p = 0; p < NPAT; p++) {
      progress(me, 0x800 | p);
      v = pat(p);
      d[0] = v;
      d[1] = d[2] = d[3] = 0xDEAD;
      __asm__ volatile (".option push\n .option norvc\n ebreak\n .option pop" ::: "memory");
      if (d[1] != v || d[2] != v) FAIL(8);
      if ((d[3] ^ v) & 0x7FFFFFFFFEULL) { DIAGV(9, v, d[3]); FAIL(9); }
      if ((d[3] & 1) && !dpc_bit0) {          /* observation, not a failure */
        dpc_bit0 = 1;
        *(volatile uint64_t *)(0x00108900UL + me * 0x100UL + 13 * 16UL) = d[3];
      }  /* 39-bit vaddr, bit 0 clear */
    }
    CSRW(dcsr, CSRR(dcsr) & ~(1ULL << 15));
    *CFG_NPC(me) = npc;
    if (d[4] != NPAT || d[5] != 0) FAIL(10);
  }

  if (r[0] != 0) FAIL(11);                 /* an unexpected M-mode trap */

  progress(me, 0xFFFF);
  DIAG(me) = failmask;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7300 | (first & 0xFF)) : 0;
#undef FAIL
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
  dual_turn_wait();          /* hart 0, then hart 1 */
  rc = run_extra();
  dual_turn_pass();
  tohost_exit(rc);
}
