/* fp_clz.c
 *
 * BP-DV-096: leading-zero counters / normalizers of the FP pipes (hole review
 * 13 Nov 2026: bsg_encode_one_hot under pipe_aux.i2f.iNToRawFN.clz,
 * fp_box.in32_rec / in64_rec.clz and pipe_fma ...postMul.clz never saw the
 * leading one at most bit positions). Walking-one operands put the leading
 * one at every position; every result is exact, so it is checked bit for
 * bit. Both harts at once. Built with rv64imafd.
 *
 *   1 fcvt.d.l / fcvt.d.lu / fcvt.s.l / fcvt.s.lu of 2^k, k = 0..63, and
 *     fcvt.d.l / fcvt.s.l of -2^k, k = 0..62:  2^k as double / single
 *   2 fcvt.d.w / fcvt.s.w / fcvt.d.wu / fcvt.s.wu of 2^k, k = 0..31
 *   3 single subnormals 2^k * 2^-149 (bit k, k = 0..22) times 1.0: unchanged
 *   4 double subnormals (bit k, k = 0..51) times 1.0: unchanged
 *   5 fmsub.d (1 + 2^-k) * 1.0 - 1.0 = 2^-k, k = 1..52
 *   6 fmsub.s (1 + 2^-k) * 1.0 - 1.0 = 2^-k, k = 1..23
 *   7 fcvt.d.s of single subnormals bit k (k = 0..22): exact double
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x9600 | first failing step (1..7).
 * Progress (step << 8 | k) at 0x0010_8400 (+0x10 / hart); first failing
 * (step << 8 | k) at 0x0010_8700 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))

#define D_EXP(e)  ((uint64_t)(1023 + (e)) << 52)          /* 2^e as double */
#define S_EXP(e)  ((uint64_t)(uint32_t)((127 + (e)) << 23)) /* 2^e as single */
#define D_ONE     D_EXP(0)
#define S_ONE     S_EXP(0)
#define S_BOX(x)  (0xFFFFFFFF00000000ULL | (uint32_t)(x))  /* NaN-boxed single */

/* integer -> FP conversions, result bits */
static uint64_t cvt(unsigned op, uint64_t x)
{
  uint64_t r;
  switch (op) {
  case 0: __asm__ volatile ("fcvt.d.l  ft0, %1\n fmv.x.d %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 1: __asm__ volatile ("fcvt.d.lu ft0, %1\n fmv.x.d %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 2: __asm__ volatile ("fcvt.s.l  ft0, %1\n fmv.x.w %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 3: __asm__ volatile ("fcvt.s.lu ft0, %1\n fmv.x.w %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 4: __asm__ volatile ("fcvt.d.w  ft0, %1\n fmv.x.d %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 5: __asm__ volatile ("fcvt.s.w  ft0, %1\n fmv.x.w %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  case 6: __asm__ volatile ("fcvt.d.wu ft0, %1\n fmv.x.d %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  default: __asm__ volatile ("fcvt.s.wu ft0, %1\n fmv.x.w %0, ft0" : "=r"(r) : "r"(x) : "ft0"); break;
  }
  return r;
}

static uint64_t fmul_d(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fmul.d ft2, ft0, ft1\n fmv.x.d %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r;
}
static uint64_t fmul_s(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fmul.s ft2, ft0, ft1\n fmv.x.w %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r;
}
static uint64_t fmsub_d(uint64_t a, uint64_t b, uint64_t c)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fmv.d.x ft2, %3\n"
                    "fmsub.d ft3, ft0, ft1, ft2\n fmv.x.d %0, ft3"
                    : "=r"(r) : "r"(a), "r"(b), "r"(c) : "ft0", "ft1", "ft2", "ft3");
  return r;
}
static uint64_t fmsub_s(uint64_t a, uint64_t b, uint64_t c)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fmv.w.x ft2, %3\n"
                    "fmsub.s ft3, ft0, ft1, ft2\n fmv.x.w %0, ft3"
                    : "=r"(r) : "r"(a), "r"(b), "r"(c) : "ft0", "ft1", "ft2", "ft3");
  return r;
}
static uint64_t fcvt_d_s(uint64_t a)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fcvt.d.s ft1, ft0\n fmv.x.d %0, ft1"
                    : "=r"(r) : "r"(a) : "ft0", "ft1");
  return r;
}

static uint64_t run_clz(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned fails = 0;
  uint64_t first = 0;

#define CHECK(st, k, got, exp) do {                                           \
    if ((got) != (exp)) { if (!fails) first = ((uint64_t)(st) << 8) | (k);    \
                          fails++; } } while (0)

  __asm__ volatile ("csrs mstatus, %0\n csrw fcsr, zero" :: "r"(1ULL << 13) : "memory");

  /* 1 64-bit integer -> FP */
  for (unsigned k = 0; k < 64; k++) {
    uint64_t x = 1ULL << k;
    *PROGRESS(me) = (1 << 8) | k;
    if (k < 63) {
      CHECK(1, k, cvt(0, x), D_EXP(k));
      CHECK(1, k, cvt(2, x) & 0xFFFFFFFFULL, S_EXP(k));
      CHECK(1, k, cvt(0, -x), D_EXP(k) | (1ULL << 63));
      CHECK(1, k, cvt(2, -x) & 0xFFFFFFFFULL, S_EXP(k) | 0x80000000ULL);
    }
    CHECK(1, k, cvt(1, x), D_EXP(k));
    CHECK(1, k, cvt(3, x) & 0xFFFFFFFFULL, S_EXP(k));
  }

  /* 2 32-bit integer -> FP */
  for (unsigned k = 0; k < 32; k++) {
    uint64_t x = 1ULL << k;
    *PROGRESS(me) = (2 << 8) | k;
    if (k < 31) {
      CHECK(2, k, cvt(4, x), D_EXP(k));
      CHECK(2, k, cvt(5, x) & 0xFFFFFFFFULL, S_EXP(k));
    }
    CHECK(2, k, cvt(6, x), D_EXP(k));
    CHECK(2, k, cvt(7, x) & 0xFFFFFFFFULL, S_EXP(k));
  }

  /* 3 single subnormals */
  for (unsigned k = 0; k < 23; k++) {
    uint64_t s = 1ULL << k;
    *PROGRESS(me) = (3 << 8) | k;
    CHECK(3, k, fmul_s(S_BOX(s), S_BOX(S_ONE)) & 0xFFFFFFFFULL, s);
  }

  /* 4 double subnormals */
  for (unsigned k = 0; k < 52; k++) {
    uint64_t d = 1ULL << k;
    *PROGRESS(me) = (4 << 8) | k;
    CHECK(4, k, fmul_d(d, D_ONE), d);
  }

  /* 5 fmsub.d cancellation */
  for (unsigned k = 1; k <= 52; k++) {
    *PROGRESS(me) = (5 << 8) | k;
    CHECK(5, k, fmsub_d(D_ONE | (1ULL << (52 - k)), D_ONE, D_ONE), D_EXP(-(int)k));
  }

  /* 6 fmsub.s cancellation */
  for (unsigned k = 1; k <= 23; k++) {
    *PROGRESS(me) = (6 << 8) | k;
    CHECK(6, k, fmsub_s(S_BOX(S_ONE | (1ULL << (23 - k))), S_BOX(S_ONE), S_BOX(S_ONE))
                & 0xFFFFFFFFULL, S_EXP(-(int)k));
  }

  /* 7 single subnormal -> double: bit k = 2^(k - 149) */
  for (unsigned k = 0; k < 23; k++) {
    *PROGRESS(me) = (7 << 8) | k;
    CHECK(7, k, fcvt_d_s(S_BOX(1ULL << k)), D_EXP((int)k - 149));
  }
#undef CHECK

  DIAG(me) = first;
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFFFF) << 16) | 0x9600 | ((first >> 8) & 0xFF)) : 0;
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
  tohost_exit(run_clz());
}
