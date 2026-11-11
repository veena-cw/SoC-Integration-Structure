/* dcache_hazard.c
 *
 * BP-DV-079: D$ write-buffer / data-bank hazards (hole review, 10 Nov 2026:
 * bp_be_dcache.sv 1009 / 1050 - write buffer force-write and fast-read vs
 * force-write per bank were never hit). A store sits in the write buffer
 * for a few cycles; a load right behind it that needs the same data bank
 * forces the buffered store out first. The D$ line is 64 B in 8 banks of
 * one dword (bank = addr[5:3]).
 *
 * For every bank b (0..7), back to back in one asm block:
 *   1 sd to line L bank b, then ld from line M bank b (other line, same
 *     bank, both lines resident) - must return M's value
 *   2 sd to L bank b, then ld from L bank b (same dword) - store data
 *   3 sw / sh / sb into L bank b, then ld of that dword - merged bytes
 *   4 two sd to L banks b and b^1, then ld from M bank b and L bank b^1
 *   5 sd to L bank b, then ld from a line in another set that misses,
 *     then ld L bank b
 * Expected values come from a C model of the two lines. Both harts run it
 * one after the other, each on its own lines.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7900 | (pattern << 4) | bank of the first failure.
 * Progress marker (pattern << 4 | bank) at 0x0010_8400 (+0x10 / hart).
 *
 * Written 10 Nov 2026, not yet run.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define LINE_L(h)    ((volatile uint64_t *)(0x81200000UL + (h) * 0x10000UL))
#define LINE_M(h)    ((volatile uint64_t *)(0x81200040UL + (h) * 0x10000UL))
#define LINE_X(h)    ((volatile uint64_t *)(0x81208080UL + (h) * 0x10000UL))   /* other set */

static uint64_t ml[8], mm[8];          /* model of L and M */

static void init_lines(volatile uint64_t *L, volatile uint64_t *M, unsigned round)
{
  for (unsigned i = 0; i < 8; i++) {
    ml[i] = 0x1111000000000000ULL ^ ((uint64_t)round << 32) ^ (i * 0x0101010101ULL);
    mm[i] = 0x2222000000000000ULL ^ ((uint64_t)round << 32) ^ (i * 0x0303030303ULL);
    L[i] = ml[i];
    M[i] = mm[i];
  }
  __asm__ volatile ("fence rw, rw" ::: "memory");
  for (unsigned i = 0; i < 8; i++)          /* make both lines resident */
    (void) L[i], (void) M[i];
}

static uint64_t run_dc(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *L = LINE_L(me), *M = LINE_M(me), *X = LINE_X(me);
  unsigned fails = 0, first = 0;
  uint64_t a, b, c;

#define CHECK(p, bank, got, want) do { if ((got) != (want)) { \
    if (!fails) first = ((p) << 4) | (bank); fails++; } } while (0)

  for (unsigned bk = 0; bk < 8; bk++) {
    uint64_t v = 0xA5A5000000000000ULL | (bk << 8) | me;

    /* 1 store L[b], load M[b] */
    *PROGRESS(me) = 0x10 | bk;
    init_lines(L, M, 1);
    __asm__ volatile ("sd %2, 0(%1)\n ld %0, 0(%3)\n"
                      : "=&r"(a) : "r"(&L[bk]), "r"(v), "r"(&M[bk]) : "memory");
    ml[bk] = v;
    CHECK(1, bk, a, mm[bk]);
    CHECK(1, bk, L[bk], ml[bk]);

    /* 2 store L[b], load L[b] */
    *PROGRESS(me) = 0x20 | bk;
    init_lines(L, M, 2);
    __asm__ volatile ("sd %2, 0(%1)\n ld %0, 0(%1)\n"
                      : "=&r"(a) : "r"(&L[bk]), "r"(v) : "memory");
    CHECK(2, bk, a, v);

    /* 3 sub-dword stores, then ld of the dword */
    *PROGRESS(me) = 0x30 | bk;
    init_lines(L, M, 3);
    __asm__ volatile ("sw %1, 0(%2)\n sh %1, 4(%2)\n sb %1, 7(%2)\n ld %0, 0(%2)\n"
                      : "=&r"(a) : "r"(v ^ 0x00000000C3C3C3C3ULL), "r"(&L[bk]) : "memory");
    {
      uint64_t w = (v ^ 0x00000000C3C3C3C3ULL);
      uint64_t e = ml[bk];
      e = (e & ~0x00000000FFFFFFFFULL) | (w & 0xFFFFFFFFULL);
      e = (e & ~0x0000FFFF00000000ULL) | ((w & 0xFFFFULL) << 32);
      e = (e & ~0xFF00000000000000ULL) | ((w & 0xFFULL) << 56);
      CHECK(3, bk, a, e);
    }

    /* 4 two stores to L[b], L[b^1]; loads M[b], L[b^1] */
    *PROGRESS(me) = 0x40 | bk;
    init_lines(L, M, 4);
    __asm__ volatile ("sd %3, 0(%4)\n sd %3, 0(%5)\n ld %0, 0(%6)\n ld %1, 0(%5)\n"
                      : "=&r"(a), "=&r"(b)
                      : "r"(0), "r"(v), "r"(&L[bk]), "r"(&L[bk ^ 1]), "r"(&M[bk]) : "memory");
    CHECK(4, bk, a, mm[bk]);
    CHECK(4, bk, b, v);

    /* 5 store L[b], load a missing line in another set, load L[b] */
    *PROGRESS(me) = 0x50 | bk;
    init_lines(L, M, 5);
    X[bk] = 0x5555000000000000ULL | bk;
    __asm__ volatile ("fence rw, rw\n .insn i 0x0f, 2, x0, %0, 2" :: "r"(&X[0]) : "memory"); /* cbo.flush X */
    __asm__ volatile ("sd %3, 0(%4)\n ld %0, 0(%5)\n ld %1, 0(%4)\n"
                      : "=&r"(a), "=&r"(c)
                      : "r"(0), "r"(v), "r"(&L[bk]), "r"(&X[bk]) : "memory");
    CHECK(5, bk, a, 0x5555000000000000ULL | bk);
    CHECK(5, bk, c, v);
  }
#undef CHECK
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7900 | (first & 0xFF)) : 0;
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
  rc = run_dc();
  dual_turn_pass();
  tohost_exit(rc);
}
