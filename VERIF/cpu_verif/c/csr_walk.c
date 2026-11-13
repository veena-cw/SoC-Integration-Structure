/* csr_walk.c
 *
 * BP-DV-071: data patterns through every read/write CSR on both harts
 * (bp_be_csr.sv toggle / expression coverage). Patterns: 0x5555..,
 * 0xAAAA.., ~0, 0 and walking ones (64), each CSR restored afterwards.
 * Runs in M-mode with interrupts off.
 *
 * Checks (per CSR, first failing CSR index reported):
 *   - full-width CSRs (mscratch, sscratch) return exactly what was written
 *   - mepc / sepc: bit 0 reads 0 (IALIGN = 16) and the value is stable
 *     (WARL: only the implemented address bits are kept)
 *   - WARL CSRs: the value read back is stable - writing it back and
 *     reading again returns the same value (a legal value stays legal)
 *   - mcycle / minstret: 48-bit counters (design decision 13 Nov 2026, in
 *     the feature list): a write keeps bits 47:0, bits 63:48 read 0, the
 *     value continues from the written one modulo 2^48 (< 2000 later), and
 *     the counter wraps at 2^48 (started 256 below; check 0x42 / 0x43)
 *   - no CSR access traps
 * Not written: mstatus/sstatus (would change the test's own execution),
 * mtvec while traps may happen (restored right away), debug CSRs (Debug
 * Mode only), mip bits that are read-only.
 *
 * Progress marker (CSR index << 8 | pattern) at 0x0010_8400 (+0x10 / hart);
 * mask of every failing CSR index at 0x0010_8700 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7100 | first failing CSR index.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))


__asm__ (
  ".text\n"
  ".align 2\n"
  ".global walk_trap\n"
  "walk_trap:\n"                   /* count and skip (+4) */
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 8(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 8(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char walk_trap[];
static volatile uint64_t trec[NUM_HARTS][2] __attribute__((aligned(64)));

#define NPAT 68
static uint64_t pat(unsigned i)
{
  static const uint64_t fixed[4] = { 0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, ~0ULL, 0 };
  return i < 4 ? fixed[i] : 1ULL << (i - 4);
}

enum kind { EXACT, EPC, WARL, COUNTER };

/* mcycle / minstret are 48 bits wide (bp_mcounter_s). Design team decision
 * 13 Nov 2026: kept at 48 bits, documented in the feature list. */
#define CNT_BITS 48
#define CNT_MASK ((1ULL << CNT_BITS) - 1)

/* One function per CSR (the CSR number must be an immediate). */
#define CSR_FN(name)                                                         \
  static uint64_t rd_##name(void) { uint64_t v; __asm__ volatile ("csrr %0, " #name : "=r"(v) :: "memory"); return v; } \
  static void wr_##name(uint64_t v) { __asm__ volatile ("csrw " #name ", %0" :: "r"(v) : "memory"); }

CSR_FN(sscratch) CSR_FN(sepc) CSR_FN(scause) CSR_FN(stval) CSR_FN(stvec)
CSR_FN(sie) CSR_FN(sip) CSR_FN(satp) CSR_FN(scounteren)
CSR_FN(medeleg) CSR_FN(mideleg) CSR_FN(mie) CSR_FN(mcounteren)
CSR_FN(mepc) CSR_FN(mcause) CSR_FN(mtval) CSR_FN(mcountinhibit)
CSR_FN(mcycle) CSR_FN(minstret) CSR_FN(fcsr) CSR_FN(mip)

struct csr { uint64_t (*rd)(void); void (*wr)(uint64_t); enum kind k; };
#define C(name, k) { rd_##name, wr_##name, k }

static const struct csr csrs[] = {
  C(sscratch, WARL),  /* index 0: exact check done separately below */
  C(sepc, EPC),     C(scause, WARL),  C(stval, WARL),  C(stvec, WARL),
  C(sie, WARL),     C(sip, WARL),     C(satp, WARL),   C(scounteren, WARL),
  C(medeleg, WARL), C(mideleg, WARL), C(mie, WARL),    C(mcounteren, WARL),
  C(mepc, EPC),     C(mcause, WARL),  C(mtval, WARL),  C(mcountinhibit, WARL),
  C(mcycle, COUNTER), C(minstret, COUNTER), C(fcsr, WARL), C(mip, WARL),
};
#define NCSR (sizeof(csrs) / sizeof(csrs[0]))

static uint64_t run_walk(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  unsigned fails = 0, first = 0;
  uint64_t failmask = 0;
  uint64_t v, x, y;

#define FAIL(idx) do { if (!fails) first = (idx); fails++; \
                         if ((idx) < 64) failmask |= 1ULL << (idx); } while (0)

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(walk_trap));
  __asm__ volatile ("csrs mstatus, %0" :: "r"(1ULL << 13) : "memory");   /* FS on: fcsr */

  /* mscratch: exact (the trap handler needs it, so restore it each time) */
  for (unsigned p = 0; p < NPAT; p++) {
    __asm__ volatile ("csrw mscratch, %1\n csrr %0, mscratch\n csrw mscratch, %2"
                      : "=&r"(x) : "r"(pat(p)), "r"(r) : "memory");
    if (x != pat(p))
      FAIL(0x40);
  }

  for (unsigned c = 0; c < NCSR; c++) {
    uint64_t save = csrs[c].rd();
    *PROGRESS(me) = c << 8;
    for (unsigned p = 0; p < NPAT; p++) {
      v = pat(p);
      csrs[c].wr(v);
      x = csrs[c].rd();
      switch (csrs[c].k) {
      case EXACT:
        if (x != v) FAIL(c);
        break;
      case EPC:
        csrs[c].wr(x);
        y = csrs[c].rd();
        if ((x & 1) || y != x) FAIL(c);
        break;
      case COUNTER:                          /* 48-bit counter (design decision) */
        if ((x >> CNT_BITS) || ((x - v) & CNT_MASK) >= 2000) FAIL(c);
        break;
      case WARL:
        csrs[c].wr(x);
        y = csrs[c].rd();
        if (y != x) FAIL(c);
        break;
      }
      if (c == 0 && x != v)                  /* sscratch is full width */
        FAIL(0x41);
    }
    csrs[c].wr(save);
  }

  /* mcycle / minstret wrap at 2^48: start 256 below, run > 256 instructions */
  for (unsigned c = 0; c < NCSR; c++) {
    if (csrs[c].k != COUNTER)
      continue;
    uint64_t save = csrs[c].rd();
    *PROGRESS(me) = (c << 8) | 0xFE;
    csrs[c].wr(CNT_MASK - 255);
    for (volatile unsigned i = 0; i < 100; i++)
      ;
    x = csrs[c].rd();
    csrs[c].wr(save);
    if (x >> CNT_BITS || x >= 4000)          /* wrapped to a small value */
      FAIL(0x42 + (c & 1));
  }
  __asm__ volatile ("csrw mip, zero" ::: "memory");
  __asm__ volatile ("csrw mie, zero" ::: "memory");

  if (r[0])
    FAIL(0x80 | (r[0] & 0x7F));              /* a CSR access trapped */

  DIAG(me) = failmask;                       /* bit c = CSR index c failed */
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7100 | (first & 0xFF)) : 0;
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
  tohost_exit(run_walk());
}
