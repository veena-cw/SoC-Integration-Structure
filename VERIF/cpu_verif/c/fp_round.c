/* fp_round.c
 *
 * BP-DV-099: subnormal rounding positions in the FP rounders (hole review,
 * 14 Nov 2026: HardFloat_rawFN.v roundAnyRawFNToRecFN 196 / 201 - the round
 * position bit set at most positions of roundPosMask / shiftedRoundMask
 * never happened; the round position only moves for subnormal results).
 * Both harts at once. Built with rv64imafd.
 *
 * Every operation has an exact real result M * 2^E (M an integer); the
 * expected output is M shifted down to the subnormal unit (2^-149 single,
 * 2^-1074 double) and rounded by an integer model in the mode under test.
 * The subnormal encoding is that integer (a carry into 2^23 / 2^52 gives
 * the smallest normal, same encoding), so results are checked bit for bit.
 *
 *   1 fcvt.s.d: double M * 2^E, M = three 53-bit patterns, single result
 *     shifted by s = 30..54 (every subnormal round position)
 *   2 fmul.s: (A * 2^(-23-j)) * 2^-126, A = three 24-bit patterns,
 *     j = 1..24 (round position at bit j)
 *   3 fmul.d: (A * 2^(-52-j)) * 2^-1022, A = three 53-bit patterns,
 *     j = 1..53
 * each for rounding modes RNE / RTZ / RDN / RUP / RMM (frm) and both signs.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x9900 | first failing step (1..3).
 * Progress (step << 12 | mode << 8 | shift) at 0x0010_8400 (+0x10 / hart);
 * first failure (same encoding) at 0x0010_8700 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))

enum { RNE = 0, RTZ = 1, RDN = 2, RUP = 3, RMM = 4 };

/* M >> s rounded in mode, for a value of sign neg (s >= 1) */
static uint64_t rnd(uint64_t m, unsigned s, int neg, unsigned mode)
{
  uint64_t q, rem, half;
  if (s >= 64) { q = 0; rem = m; half = (s == 64) ? (1ULL << 63) : 0; }
  else         { q = m >> s; rem = m & ((1ULL << s) - 1); half = 1ULL << (s - 1); }
  if (s > 64) {                      /* far below half: only directed modes */
    if ((mode == RDN && neg) || (mode == RUP && !neg))
      q += (rem != 0);
    return q;
  }
  switch (mode) {
  case RNE: if (rem > half || (rem == half && (q & 1))) q++; break;
  case RTZ: break;
  case RDN: if (neg && rem) q++; break;
  case RUP: if (!neg && rem) q++; break;
  default:  if (rem >= half) q++; break;   /* RMM */
  }
  return q;
}

static void set_frm(unsigned mode)
{
  __asm__ volatile ("csrw frm, %0" :: "r"((uint64_t)mode) : "memory");
}

static uint64_t fcvt_s_d(uint64_t d)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fcvt.s.d ft1, ft0\n fmv.x.w %0, ft1"
                    : "=r"(r) : "r"(d) : "ft0", "ft1");
  return r & 0xFFFFFFFFULL;
}
static uint64_t fmul_s(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fmul.s ft2, ft0, ft1\n fmv.x.w %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r & 0xFFFFFFFFULL;
}
static uint64_t fmul_d(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fmul.d ft2, ft0, ft1\n fmv.x.d %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r;
}

/* double with integer significand m (2^52 <= m < 2^53) times 2^(x - 52) */
static uint64_t mk_d(int neg, uint64_t m, int x)
{
  return ((uint64_t)neg << 63) | ((uint64_t)(x + 1023) << 52) | (m & ((1ULL << 52) - 1));
}
/* single with integer significand a (2^23 <= a < 2^24) times 2^(x - 23) */
static uint64_t mk_s(int neg, uint64_t a, int x)
{
  return ((uint64_t)neg << 31) | ((uint64_t)(x + 127) << 23) | (a & ((1ULL << 23) - 1));
}

static const uint64_t PD[3] = { 0x1AAAAAAAAAAAABULL, 0x18000000000000ULL, 0x1FFFFFFFFFFFFFULL };
static const uint64_t PS[3] = { 0xAAAAABULL, 0xC00000ULL, 0xFFFFFFULL };

static uint64_t run_round(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned fails = 0;
  uint64_t first = 0;

#define CHECK(code, got, exp) do {                                            \
    if ((got) != (exp)) { if (!fails) first = (code); fails++; } } while (0)

  __asm__ volatile ("csrs mstatus, %0\n csrw fflags, zero" :: "r"(1ULL << 13) : "memory");

  for (unsigned mode = 0; mode < 5; mode++) {
    set_frm(mode);
    for (int neg = 0; neg < 2; neg++) {
      /* 1 fcvt.s.d: value m * 2^(x-52), unit 2^-149, s = 52 - x - 149 */
      for (unsigned s = 30; s <= 54; s++) {
        int x = 52 - 149 - (int)s;
        *PROGRESS(me) = (1 << 12) | (mode << 8) | s;
        for (unsigned p = 0; p < 3; p++) {
          uint64_t q = rnd(PD[p], s, neg, mode);
          CHECK((1 << 12) | (mode << 8) | s,
                fcvt_s_d(mk_d(neg, PD[p], x)), ((uint64_t)neg << 31) | q);
        }
      }
      /* 2 fmul.s: (a * 2^(-23-j)) * 2^-126 = a * 2^-149 * 2^-j */
      for (unsigned j = 1; j <= 24; j++) {
        *PROGRESS(me) = (2 << 12) | (mode << 8) | j;
        for (unsigned p = 0; p < 3; p++) {
          uint64_t q = rnd(PS[p], j, neg, mode);
          CHECK((2 << 12) | (mode << 8) | j,
                fmul_s(mk_s(neg, PS[p], -(int)j), mk_s(0, 1ULL << 23, -126)),
                ((uint64_t)neg << 31) | q);
        }
      }
      /* 3 fmul.d: (a * 2^(-52-j)) * 2^-1022 = a * 2^-1074 * 2^-j */
      for (unsigned j = 1; j <= 53; j++) {
        *PROGRESS(me) = (3 << 12) | (mode << 8) | j;
        for (unsigned p = 0; p < 3; p++) {
          uint64_t q = rnd(PD[p], j, neg, mode);
          CHECK((3 << 12) | (mode << 8) | j,
                fmul_d(mk_d(neg, PD[p], -(int)j), mk_d(0, 1ULL << 52, -1022)),
                ((uint64_t)neg << 63) | q);
        }
      }
    }
  }
  set_frm(RNE);
#undef CHECK

  DIAG(me) = first;
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFFFF) << 16) | 0x9900 | ((first >> 12) & 0xF)) : 0;
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
  tohost_exit(run_round());
}
