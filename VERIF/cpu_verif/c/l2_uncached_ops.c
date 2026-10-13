/* l2_uncached_ops.c
 *
 * BP-DV-047: L1-uncached DRAM loads/stores, executed as sub-block
 * operations inside the L2 (bsg_cache), on both harts. With -DWITH_AMO
 * (l2_uncached_amo.c, BP-DV-048) also all AMOs.
 *
 * bp_pma treats physical addresses with bit 32 (or above, below the I/O
 * range) set as uncached in L1, but they are still DRAM (33-bit daddr).
 * Such accesses reach the L2 as single B/H/W/D loads/stores and AMOs
 * (bp_me_cache_controller: LB..SD, SB..SD, AMO*), instead of whole lines.
 * The controller splits that space in two windows:
 *   0x1_0000_0000 - 0x1_7FFF_FFFF : is_uc_op - op, then AFLINV of the line
 *                                   (e_uc_flush: L2-uncached)
 *   0x1_8000_0000 - 0x1_FFFF_FFFF : op done in the cached L2
 * The DRAM model wraps at 32 MiB, so the windows below alias otherwise
 * unused DRAM offsets 0x70_0000 / 0x78_0000.
 *
 * Per hart, in each window (hart 1 at +0x1000):
 *   1. stores sd / sw x2 / sh x4 / sb x8 into 4 dwords
 *   2. loads ld, lw/lwu, lh/lhu, lb/lbu of every piece (signed + unsigned)
 *   3. (BP-DV-048, -DWITH_AMO only) amoswap/add/and/or/xor/min/max/minu/
 *      maxu, .d and .w: returned old value and final memory value
 * An M-mode trap handler counts and skips faulting instructions so an
 * unsupported access cannot hang the test. Before every check the step
 * number is written to 0x0010_8200 (+0x10 per hart) over AXI, so the AXI
 * log shows where a hang happened: (window << 8) | step, 0x80 = stores.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (traps << 16) | 0x4700 | (window << 7) | first failing check (1-based)
 *   window 0 = 0x1_0070_0000 (L2-uncached), 1 = 0x1_8078_0000 (L2-cached)
 */

#include <stdint.h>
#include "dual_core.h"

#define WIN0  (0x100700000ULL + hart_id() * 0x1000ULL)
#define WIN1  (0x180780000ULL + hart_id() * 0x1000ULL)

/* ---------------- trap handler: count and skip ---------------- */
static uint64_t trap_rec[NUM_HARTS][4] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char m_trap[];

/* ---------------- access helpers (explicit instructions) ---------------- */
#define ST(op, addr, v) __asm__ volatile (op " %1, 0(%0)" :: "r"(addr), "r"(v) : "memory")
#define LD(op, addr) ({ int64_t _v; __asm__ volatile (op " %0, 0(%1)" : "=r"(_v) : "r"(addr) : "memory"); _v; })
#define AMO(op, addr, v) ({ int64_t _o; __asm__ volatile (op " %0, %2, (%1)" : "=r"(_o) : "r"(addr), "r"(v) : "memory"); _o; })

struct state { unsigned check, first_bad; };

/* Progress marker: an uncached AXI write of the step number to
 * 0x0010_8200 (+0x10 per hart), visible in the AXI W log, so a hang can be
 * located: (window << 8) | step, step = check number about to run. */
static unsigned cur_window;
static inline void progress(unsigned step)
{
  *(volatile uint64_t *)(0x00108200UL + hart_id() * 0x10UL) =
      ((uint64_t)cur_window << 8) | step;
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

static void check(struct state *s, int64_t got, int64_t exp)
{
  s->check++;
  progress(s->check + 1);
  if (got != exp && s->first_bad == 0)
    s->first_bad = s->check;
}

static void run_window(struct state *s, uint64_t b)
{
  progress(0x80);                    /* stores */
  /* 1. stores: dword 0 by sd, dword 1 by 2 x sw, dword 2 by 4 x sh,
   *    dword 3 by 8 x sb */
  ST("sd", b + 0x00, 0x8877665544332211ULL);
  ST("sw", b + 0x08, 0x9ABCDEF0ULL);
  ST("sw", b + 0x0C, 0x12345678ULL);
  ST("sh", b + 0x10, 0xF00DULL);
  ST("sh", b + 0x12, 0xBEEFULL);
  ST("sh", b + 0x14, 0x0123ULL);
  ST("sh", b + 0x16, 0x8001ULL);
  for (unsigned i = 0; i < 8; i++)
    ST("sb", b + 0x18 + i, (uint64_t)(0xF0 + i));

  progress(1);                       /* first load */
  /* 2. loads */
  check(s, LD("ld",  b + 0x00), (int64_t)0x8877665544332211ULL);
  check(s, LD("ld",  b + 0x08), (int64_t)0x123456789ABCDEF0ULL);
  check(s, LD("ld",  b + 0x10), (int64_t)0x80010123BEEFF00DULL);
  check(s, LD("ld",  b + 0x18), (int64_t)0xF7F6F5F4F3F2F1F0ULL);
  check(s, LD("lw",  b + 0x00), (int64_t)0x44332211);
  check(s, LD("lw",  b + 0x04), (int64_t)(int32_t)0x88776655);      /* sign-extended */
  check(s, LD("lwu", b + 0x04), (int64_t)0x88776655ULL);
  check(s, LD("lh",  b + 0x12), (int64_t)(int16_t)0xBEEF);
  check(s, LD("lhu", b + 0x12), (int64_t)0xBEEF);
  check(s, LD("lh",  b + 0x14), (int64_t)0x0123);
  check(s, LD("lb",  b + 0x1F), (int64_t)(int8_t)0xF7);
  check(s, LD("lbu", b + 0x1F), (int64_t)0xF7);
  check(s, LD("lb",  b + 0x02), (int64_t)0x33);

#ifdef WITH_AMO
  /* 3. AMOs, 64-bit at b+0x40, 32-bit at b+0x48 (BP-DV-048 only: an AMO
   *    to L1-uncached DRAM currently hangs the core, see l2_uncached_amo.c) */
  uint64_t d = b + 0x40, w = b + 0x48;
  ST("sd", d, 100ULL);
  check(s, AMO("amoswap.d", d, 7),      100);
  check(s, AMO("amoadd.d",  d, 5),      7);
  check(s, AMO("amoand.d",  d, 0xE),    12);
  check(s, AMO("amoor.d",   d, 0x21),   12 & 0xE);
  check(s, AMO("amoxor.d",  d, 0xFF),   (12 & 0xE) | 0x21);
  check(s, AMO("amomin.d",  d, -5),     ((12 & 0xE) | 0x21) ^ 0xFF);
  check(s, AMO("amomax.d",  d, 3),      -5);
  check(s, AMO("amominu.d", d, -1),     3);                  /* min(3, 2^64-1) = 3 */
  check(s, AMO("amomaxu.d", d, -1),     3);
  check(s, LD("ld", d), -1);

  ST("sw", w, 0x7FFFFFF0ULL);
  check(s, AMO("amoadd.w",  w, 0x20),   0x7FFFFFF0);         /* wraps to 0x80000010 */
  check(s, AMO("amoswap.w", w, 9),      (int32_t)0x80000010);
  check(s, AMO("amoand.w",  w, 0xC),    9);
  check(s, AMO("amoor.w",   w, 0x30),   8);
  check(s, AMO("amoxor.w",  w, 0x3),    0x38);
  check(s, AMO("amomin.w",  w, -2),     0x3B);
  check(s, AMO("amomax.w",  w, 1),      -2);
  check(s, AMO("amominu.w", w, 0),      1);
  check(s, AMO("amomaxu.w", w, -1),     0);
  check(s, LD("lw", w), -1);
  check(s, LD("lw", w + 4), 0);                              /* neighbour untouched */
#endif
}

static uint64_t run_tests(void)
{
  uint64_t *r = trap_rec[hart_id()];
  struct state s;
  uint64_t win[2];
  win[0] = WIN0;
  win[1] = WIN1;

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(m_trap));

  /* FIRST_WINDOW (RISCV_CFLAGS=-DFIRST_WINDOW=1) skips window 0, e.g. to
   * test the L2-cached window on its own. */
#ifndef FIRST_WINDOW
#define FIRST_WINDOW 0
#endif
  for (unsigned i = FIRST_WINDOW; i < 2; i++) {
    s.check = 0;
    s.first_bad = 0;
    cur_window = i;
    run_window(&s, win[i]);
    if (s.first_bad || r[0])
      return ((r[0] & 0xFF) << 16) | 0x4700 | (i << 7) | (s.first_bad & 0x7F);
  }
  return 0;
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
  tohost_exit(run_tests());
}
