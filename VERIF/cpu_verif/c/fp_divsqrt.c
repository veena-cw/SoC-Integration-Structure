/* fp_divsqrt.c
 *
 * BP-DV-104: FP divide / square root datapath with full-width operands
 * (toggle review, 14 Nov 2026: divSqrtRecFN_medium fractB_Z bits 0-49 and
 * most of sigX_NMuxIn never toggled - every earlier test divided by short
 * constants; bp_be_scheduler be_exc_imm_li bits 1-2 (late-writeback fflags
 * UF / OF) never set). Both harts at once. Built with rv64imafd.
 *
 * Operands: random sign, random 52-bit (23-bit) fraction, exponent within
 * +/-40 (+/-30 single) of 1.0, xorshift64 seeded per hart. Each result q is
 * checked with the exact FMA residual (exact while q is within 1 ulp):
 *   div:  r = a - q*b   (fnmsub), Q - q = r / b
 *   sqrt: r = a - q*q   (fnmsub), Q - q ~ r / 2q
 * with h = |b| * ulp(q) / 2 (div) or |q| * ulp(q) (sqrt):
 *   RNE / RMM : |r| <= h
 *   RTZ       : |r| < 2h, Q - q has the sign of q (or 0)
 *   RDN       : |r| < 2h, Q - q >= 0
 *   RUP       : |r| < 2h, Q - q <= 0
 *
 *   1 fdiv.d   2 fsqrt.d   3 fdiv.s   4 fsqrt.s   (5 modes each)
 *   5 fflags: fdiv.d / fdiv.s overflow (OF|NX, +inf in RNE) and
 *     underflow (UF|NX, subnormal result)
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0xA400 | first failing step (1..5).
 * Progress (step << 12 | mode << 8 | iteration) at 0x0010_8400 (+0x10 /
 * hart); first failure (same encoding) at 0x0010_8700 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))

enum { RNE = 0, RTZ = 1, RDN = 2, RUP = 3, RMM = 4 };

#define N_DIV   40      /* per mode */
#define N_SQRT  20

static uint64_t rs;
static uint64_t rnd(void)
{
  rs ^= rs << 13; rs ^= rs >> 7; rs ^= rs << 17;
  return rs;
}

static void set_frm(unsigned mode)
{
  __asm__ volatile ("csrw frm, %0" :: "r"((uint64_t)mode) : "memory");
}
static uint64_t get_fflags(void)
{
  uint64_t f;
  __asm__ volatile ("csrrw %0, fflags, zero" : "=r"(f) :: "memory");
  return f;
}

/* ---- double ---- */
static uint64_t fdiv_d(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fdiv.d ft2, ft0, ft1\n fmv.x.d %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r;
}
static uint64_t fsqrt_d(uint64_t a)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fsqrt.d ft2, ft0\n fmv.x.d %0, ft2"
                    : "=r"(r) : "r"(a) : "ft0", "ft2");
  return r;
}
/* a - x*y, one rounding */
static uint64_t fnmsub_d(uint64_t x, uint64_t y, uint64_t a)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fmv.d.x ft2, %3\n"
                    " fnmsub.d ft3, ft0, ft1, ft2\n fmv.x.d %0, ft3"
                    : "=r"(r) : "r"(x), "r"(y), "r"(a) : "ft0", "ft1", "ft2", "ft3");
  return r;
}
static uint64_t fmul_d(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.d.x ft0, %1\n fmv.d.x ft1, %2\n fmul.d ft2, ft0, ft1\n fmv.x.d %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r;
}

/* ---- single (values in the low 32 bits) ---- */
static uint64_t fdiv_s(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fdiv.s ft2, ft0, ft1\n fmv.x.w %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r & 0xFFFFFFFFULL;
}
static uint64_t fsqrt_s(uint64_t a)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fsqrt.s ft2, ft0\n fmv.x.w %0, ft2"
                    : "=r"(r) : "r"(a) : "ft0", "ft2");
  return r & 0xFFFFFFFFULL;
}
static uint64_t fnmsub_s(uint64_t x, uint64_t y, uint64_t a)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fmv.w.x ft2, %3\n"
                    " fnmsub.s ft3, ft0, ft1, ft2\n fmv.x.w %0, ft3"
                    : "=r"(r) : "r"(x), "r"(y), "r"(a) : "ft0", "ft1", "ft2", "ft3");
  return r & 0xFFFFFFFFULL;
}
static uint64_t fmul_s(uint64_t a, uint64_t b)
{
  uint64_t r;
  __asm__ volatile ("fmv.w.x ft0, %1\n fmv.w.x ft1, %2\n fmul.s ft2, ft0, ft1\n fmv.x.w %0, ft2"
                    : "=r"(r) : "r"(a), "r"(b) : "ft0", "ft1", "ft2");
  return r & 0xFFFFFFFFULL;
}

/* Format description so one checker serves both precisions. */
struct fmt {
  unsigned sig, ebits, bias;          /* fraction bits, exponent bits, bias */
  uint64_t (*mul)(uint64_t, uint64_t);
};
static const struct fmt FD = { 52, 11, 1023, fmul_d };
static const struct fmt FS = { 23,  8,  127, fmul_s };

static uint64_t sbit(const struct fmt *f)  { return 1ULL << (f->sig + f->ebits); }
static uint64_t absb(const struct fmt *f, uint64_t x) { return x & (sbit(f) - 1); }
static int      expo(const struct fmt *f, uint64_t x)
{
  return (int)((x >> f->sig) & ((1ULL << f->ebits) - 1)) - (int)f->bias;
}
static uint64_t pow2(const struct fmt *f, int e)
{
  return (uint64_t)(e + (int)f->bias) << f->sig;
}
static uint64_t rand_val(const struct fmt *f, int neg, int range)
{
  int e = (int)(rnd() % (2 * range + 1)) - range;
  return ((uint64_t)neg << (f->sig + f->ebits)) | pow2(f, e)
         | (rnd() & ((1ULL << f->sig) - 1));
}

/* Residual check. r = a - q*m (m = b for div, q for sqrt); h = |m| *
 * 2^(Eq - sig - hs), hs = 1 for div (half ulp * |b|), 0 for sqrt (ulp * q).
 * dpos: Q - q > 0 (sign of r / m for div; sign of r for sqrt). */
static int ok_res(const struct fmt *f, unsigned mode, uint64_t q, uint64_t m,
                  uint64_t r, int hs, int div)
{
  uint64_t ar = absb(f, r);
  uint64_t h  = f->mul(absb(f, m), pow2(f, expo(f, q) - (int)f->sig - hs));
  uint64_t h2 = f->mul(h, pow2(f, 1));
  int rneg = (r >> (f->sig + f->ebits)) & 1;
  int mneg = div ? (int)((m >> (f->sig + f->ebits)) & 1) : 0;
  int qneg = (q >> (f->sig + f->ebits)) & 1;
  int dneg = rneg ^ mneg;                 /* Q - q < 0 (when r != 0) */
  if (ar == 0)
    return 1;
  switch (mode) {
  case RNE: case RMM: return ar <= h;
  case RTZ: return ar < h2 && dneg == qneg;
  case RDN: return ar < h2 && !dneg;
  default:  return ar < h2 && dneg;       /* RUP */
  }
}

static uint64_t run_divsqrt(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned fails = 0;
  uint64_t first = 0;

#define CHECK(code, ok) do {                                                  \
    if (!(ok)) { if (!fails) first = (code); fails++; } } while (0)

  rs = 0x9E3779B97F4A7C15ULL ^ ((uint64_t)me << 32) ^ 0x104;
  __asm__ volatile ("csrs mstatus, %0\n csrw fflags, zero" :: "r"(1ULL << 13) : "memory");

  for (unsigned mode = 0; mode < 5; mode++) {
    set_frm(mode);
    /* 1 fdiv.d */
    for (unsigned i = 0; i < N_DIV; i++) {
      uint64_t code = (1 << 12) | (mode << 8) | i;
      uint64_t a = rand_val(&FD, rnd() & 1, 40), b = rand_val(&FD, rnd() & 1, 40);
      uint64_t q = fdiv_d(a, b);
      *PROGRESS(me) = code;
      CHECK(code, ok_res(&FD, mode, q, b, fnmsub_d(q, b, a), 1, 1));
    }
    /* 2 fsqrt.d */
    for (unsigned i = 0; i < N_SQRT; i++) {
      uint64_t code = (2 << 12) | (mode << 8) | i;
      uint64_t a = rand_val(&FD, 0, 40);
      uint64_t q = fsqrt_d(a);
      *PROGRESS(me) = code;
      CHECK(code, ok_res(&FD, mode, q, q, fnmsub_d(q, q, a), 0, 0));
    }
    /* 3 fdiv.s */
    for (unsigned i = 0; i < N_DIV; i++) {
      uint64_t code = (3 << 12) | (mode << 8) | i;
      uint64_t a = rand_val(&FS, rnd() & 1, 30), b = rand_val(&FS, rnd() & 1, 30);
      uint64_t q = fdiv_s(a, b);
      *PROGRESS(me) = code;
      CHECK(code, ok_res(&FS, mode, q, b, fnmsub_s(q, b, a), 1, 1));
    }
    /* 4 fsqrt.s */
    for (unsigned i = 0; i < N_SQRT; i++) {
      uint64_t code = (4 << 12) | (mode << 8) | i;
      uint64_t a = rand_val(&FS, 0, 30);
      uint64_t q = fsqrt_s(a);
      *PROGRESS(me) = code;
      CHECK(code, ok_res(&FS, mode, q, q, fnmsub_s(q, q, a), 0, 0));
    }
  }

  /* 5 overflow / underflow flags (RNE) */
  set_frm(RNE);
  *PROGRESS(me) = 5 << 12;
  {
    uint64_t q, fl;
    (void)get_fflags();
    q = fdiv_d(0x7FE0000000000001ULL, 0x3FD0000000000000ULL);   /* big / 0.25 */
    fl = get_fflags();
    CHECK((5 << 12) | 1, q == 0x7FF0000000000000ULL && (fl & 0x5) == 0x5);
    q = fdiv_d(0x0010000000000000ULL, 0x4008000000000000ULL);   /* DBL_MIN / 3 */
    fl = get_fflags();
    CHECK((5 << 12) | 2, (q >> 52) == 0 && q != 0 && (fl & 0x3) == 0x3);
    q = fdiv_s(0x7F000001ULL, 0x3E800000ULL);                   /* big / 0.25f */
    fl = get_fflags();
    CHECK((5 << 12) | 3, q == 0x7F800000ULL && (fl & 0x5) == 0x5);
    q = fdiv_s(0x00800000ULL, 0x40400000ULL);                   /* FLT_MIN / 3 */
    fl = get_fflags();
    CHECK((5 << 12) | 4, (q >> 23) == 0 && q != 0 && (fl & 0x3) == 0x3);
  }
#undef CHECK

  DIAG(me) = first;
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFFFF) << 16) | 0xA400 | ((first >> 12) & 0xF)) : 0;
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
  tohost_exit(run_divsqrt());
}
