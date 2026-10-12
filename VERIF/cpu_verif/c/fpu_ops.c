/* fpu_ops.c
 *
 * BP-DV-039: RV64 F and D floating point on both harts.
 *
 * Every check runs one FP instruction (inline asm) on raw IEEE-754 bit
 * patterns and compares the result bits - and, where relevant, fflags -
 * against values computed offline with IEEE arithmetic. Covered:
 *
 *   F: fadd/fsub/fmul/fdiv/fsqrt.s, fmadd/fmsub/fnmadd/fnmsub.s,
 *      fmin/fmax.s, fsgnjn.s, feq/flt/fle.s, fcvt.w.s, fcvt.s.w, fclass.s,
 *      flw/fsw, fmv.x.w/fmv.w.x
 *   D: fadd/fdiv/fsqrt.d, fused fmadd.d (single rounding), fcvt.d.s,
 *      fcvt.s.d, fcvt.w.d in all five static rounding modes, dynamic
 *      rounding via frm, fld/fsd, fmv.x.d/fmv.d.x bit-exact (sNaN payload)
 *   flags: NX (1/3), NV (sqrt(-1) -> canonical NaN), DZ (1/0 -> +inf),
 *          OF|NX (FLT_MAX * 2 -> +inf)
 *   arch: mstatus.FS = Dirty and SD after FP writes; with FS = Off an FP
 *         instruction raises an illegal-instruction trap.
 *
 * Needs -march with F and D (the Makefile selects rv64imafd for this
 * program). FS is Off at reset, so the test sets FS = Initial first.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0; per hart 0 = pass, else the
 * ID of the first failing check (0x01-0x3F, listed at each CHECK below).
 * Checks do not stop the run; the first failure is reported.
 */

#include <stdint.h>
#include "dual_core.h"

/* ---------------- one-instruction helpers (bit patterns in, bits out) ---- */
#define FS_UNARY(op, a) ({ uint64_t _r; __asm__ volatile (               \
    "fmv.w.x ft0, %1\n\t" op " ft2, ft0\n\tfmv.x.w %0, ft2"              \
    : "=r"(_r) : "r"((uint64_t)(a)) : "ft0", "ft2"); _r & 0xFFFFFFFFULL; })
#define FS_BIN(op, a, b) ({ uint64_t _r; __asm__ volatile (              \
    "fmv.w.x ft0, %1\n\tfmv.w.x ft1, %2\n\t" op " ft2, ft0, ft1\n\t"      \
    "fmv.x.w %0, ft2"                                                     \
    : "=r"(_r) : "r"((uint64_t)(a)), "r"((uint64_t)(b))                   \
    : "ft0", "ft1", "ft2"); _r & 0xFFFFFFFFULL; })
#define FS_TER(op, a, b, c) ({ uint64_t _r; __asm__ volatile (           \
    "fmv.w.x ft0, %1\n\tfmv.w.x ft1, %2\n\tfmv.w.x ft3, %3\n\t"          \
    op " ft2, ft0, ft1, ft3\n\tfmv.x.w %0, ft2"                           \
    : "=r"(_r) : "r"((uint64_t)(a)), "r"((uint64_t)(b)),                  \
      "r"((uint64_t)(c)) : "ft0", "ft1", "ft2", "ft3"); _r & 0xFFFFFFFFULL; })
#define FS_CMP(op, a, b) ({ uint64_t _r; __asm__ volatile (              \
    "fmv.w.x ft0, %1\n\tfmv.w.x ft1, %2\n\t" op " %0, ft0, ft1"           \
    : "=r"(_r) : "r"((uint64_t)(a)), "r"((uint64_t)(b))                   \
    : "ft0", "ft1"); _r; })
#define FS_TOX(op, a) ({ uint64_t _r; __asm__ volatile (                 \
    "fmv.w.x ft0, %1\n\t" op " %0, ft0"                                   \
    : "=r"(_r) : "r"((uint64_t)(a)) : "ft0"); _r; })

#define FD_UNARY(op, a) ({ uint64_t _r; __asm__ volatile (               \
    "fmv.d.x ft0, %1\n\t" op " ft2, ft0\n\tfmv.x.d %0, ft2"              \
    : "=r"(_r) : "r"((uint64_t)(a)) : "ft0", "ft2"); _r; })
#define FD_BIN(op, a, b) ({ uint64_t _r; __asm__ volatile (              \
    "fmv.d.x ft0, %1\n\tfmv.d.x ft1, %2\n\t" op " ft2, ft0, ft1\n\t"      \
    "fmv.x.d %0, ft2"                                                     \
    : "=r"(_r) : "r"((uint64_t)(a)), "r"((uint64_t)(b))                   \
    : "ft0", "ft1", "ft2"); _r; })
#define FD_TER(op, a, b, c) ({ uint64_t _r; __asm__ volatile (           \
    "fmv.d.x ft0, %1\n\tfmv.d.x ft1, %2\n\tfmv.d.x ft3, %3\n\t"          \
    op " ft2, ft0, ft1, ft3\n\tfmv.x.d %0, ft2"                           \
    : "=r"(_r) : "r"((uint64_t)(a)), "r"((uint64_t)(b)),                  \
      "r"((uint64_t)(c)) : "ft0", "ft1", "ft2", "ft3"); _r; })
#define FD_TOX(op, a) ({ uint64_t _r; __asm__ volatile (                 \
    "fmv.d.x ft0, %1\n\t" op " %0, ft0"                                   \
    : "=r"(_r) : "r"((uint64_t)(a)) : "ft0"); _r; })

/* fcvt.w.d with a static rounding mode (rne/rtz/rdn/rup/rmm) */
#define FD_CVTW(rm, a) ({ int64_t _r; __asm__ volatile (                 \
    "fmv.d.x ft0, %1\n\tfcvt.w.d %0, ft0, " rm                            \
    : "=r"(_r) : "r"((uint64_t)(a)) : "ft0"); _r; })

static inline void     clear_flags(void) { __asm__ volatile ("csrw fflags, zero"); }
static inline uint64_t read_flags(void)  { uint64_t f; __asm__ volatile ("csrr %0, fflags" : "=r"(f)); return f; }
static inline uint64_t read_mstatus(void){ uint64_t v; __asm__ volatile ("csrr %0, mstatus" : "=r"(v)); return v; }

#define FL_NX 0x01
#define FL_UF 0x02
#define FL_OF 0x04
#define FL_DZ 0x08
#define FL_NV 0x10

#define MSTATUS_FS_MASK  (3UL << 13)
#define MSTATUS_FS_INIT  (1UL << 13)
#define MSTATUS_FS_DIRTY (3UL << 13)
#define MSTATUS_SD       (1UL << 63)

/* ---------------- minimal M-mode trap handler for the FS = Off check ---- */
#define REC_BASE   0x8000A000UL   /* per hart via HART_DRAM: [0] count, [1] last mcause */
__asm__ (
  ".text\n"
  ".align 2\n"
  ".global fpu_m_trap\n"
  "fpu_m_trap:\n"
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
extern char fpu_m_trap[];

/* ---------------- checks ---------------- */
#define CHECK(id, cond) do { if (rc == 0 && !(cond)) rc = (id); } while (0)

static uint64_t run_fpu(void)
{
  uint64_t rc = 0;   /* per hart (stack), first failing check */
  volatile uint64_t *rec = (volatile uint64_t *)HART_DRAM(REC_BASE);
  volatile uint64_t *buf = (volatile uint64_t *)HART_DRAM(REC_BASE + 0x100);

  __asm__ volatile ("csrw mtvec, %0" :: "r"(fpu_m_trap));
  __asm__ volatile ("csrw mscratch, %0" :: "r"(rec));
  __asm__ volatile ("csrc mstatus, %0" :: "r"(MSTATUS_FS_MASK));
  __asm__ volatile ("csrs mstatus, %0" :: "r"(MSTATUS_FS_INIT));   /* FS = Initial */
  __asm__ volatile ("csrw fcsr, zero");                             /* RNE, no flags */

  /* ---- single precision arithmetic ---- */
  CHECK(0x01, FS_BIN("fadd.s", 0x3FC00000, 0x40100000) == 0x40700000);   /* 1.5+2.25 = 3.75   */
  CHECK(0x02, FS_BIN("fsub.s", 0x40700000, 0x3FC00000) == 0x40100000);   /* 3.75-1.5 = 2.25   */
  CHECK(0x03, FS_BIN("fmul.s", 0x3FC00000, 0x40100000) == 0x40580000);   /* 1.5*2.25 = 3.375  */
  clear_flags();
  CHECK(0x04, FS_BIN("fdiv.s", 0x3F800000, 0x40400000) == 0x3EAAAAAB);   /* 1/3 (RNE)         */
  CHECK(0x05, read_flags() == FL_NX);                                    /* inexact           */
  CHECK(0x06, FS_UNARY("fsqrt.s", 0x40000000) == 0x3FB504F3);            /* sqrt(2)           */
  CHECK(0x07, FS_TER("fmadd.s",  0x3FC00000, 0x40100000, 0x40700000) == 0x40E40000); /*  a*b+c =  7.125 */
  CHECK(0x08, FS_TER("fmsub.s",  0x3FC00000, 0x40100000, 0x40700000) == 0xBEC00000); /*  a*b-c = -0.375 */
  CHECK(0x09, FS_TER("fnmadd.s", 0x3FC00000, 0x40100000, 0x40700000) == 0xC0E40000); /* -a*b-c = -7.125 */
  CHECK(0x0A, FS_TER("fnmsub.s", 0x3FC00000, 0x40100000, 0x40700000) == 0x3EC00000); /* -a*b+c =  0.375 */
  CHECK(0x0B, FS_BIN("fmin.s", 0xBF800000, 0x40000000) == 0xBF800000);   /* min(-1, 2)        */
  CHECK(0x0C, FS_BIN("fmax.s", 0xBF800000, 0x40000000) == 0x40000000);   /* max(-1, 2)        */
  CHECK(0x0D, FS_BIN("fsgnjn.s", 0x3FC00000, 0x3FC00000) == 0xBFC00000); /* -1.5              */
  CHECK(0x0E, FS_CMP("feq.s", 0x3FC00000, 0x3FC00000) == 1);
  CHECK(0x0F, FS_CMP("flt.s", 0xBF800000, 0x40000000) == 1);
  CHECK(0x10, FS_CMP("fle.s", 0x40000000, 0xBF800000) == 0);
  CHECK(0x11, FS_TOX("fcvt.w.s", 0x40E40000) == 7);                      /* 7.125 -> 7 (RNE)  */
  {
    uint64_t r;
    __asm__ volatile ("fcvt.s.w ft0, %1\n\tfmv.x.w %0, ft0" : "=r"(r) : "r"(-5L) : "ft0");
    CHECK(0x12, (r & 0xFFFFFFFFULL) == 0xC0A00000);                      /* -5 -> -5.0        */
  }
  CHECK(0x13, FS_TOX("fclass.s", 0x7F800000) == (1u << 7));              /* +inf              */
  CHECK(0x14, FS_TOX("fclass.s", 0x7FC00000) == (1u << 9));              /* quiet NaN         */
  CHECK(0x15, FS_TOX("fclass.s", 0x80000000) == (1u << 3));              /* -0                */

  /* ---- exception flags ---- */
  clear_flags();
  CHECK(0x16, FS_UNARY("fsqrt.s", 0xBF800000) == 0x7FC00000);            /* sqrt(-1) = qNaN   */
  CHECK(0x17, read_flags() == FL_NV);
  clear_flags();
  CHECK(0x18, FS_BIN("fdiv.s", 0x3F800000, 0x00000000) == 0x7F800000);   /* 1/0 = +inf        */
  CHECK(0x19, read_flags() == FL_DZ);
  clear_flags();
  CHECK(0x1A, FS_BIN("fmul.s", 0x7F7FFFFF, 0x40000000) == 0x7F800000);   /* FLT_MAX*2 = +inf  */
  CHECK(0x1B, read_flags() == (FL_OF | FL_NX));

  /* ---- single precision load/store ---- */
  {
    uint64_t r;
    __asm__ volatile ("fmv.w.x ft0, %1\n\tfsw ft0, 0(%2)\n\tflw ft1, 0(%2)\n\tfmv.x.w %0, ft1"
                      : "=r"(r) : "r"(0x40E40000UL), "r"(buf) : "ft0", "ft1", "memory");
    CHECK(0x1C, (r & 0xFFFFFFFFULL) == 0x40E40000 && (buf[0] & 0xFFFFFFFFULL) == 0x40E40000);
  }

  /* ---- double precision ---- */
  CHECK(0x21, FD_BIN("fadd.d", 0x3FF0000000000000ULL, 0x4000000000000000ULL) == 0x4008000000000000ULL); /* 1+2 = 3 */
  CHECK(0x22, FD_BIN("fdiv.d", 0x3FF0000000000000ULL, 0x4008000000000000ULL) == 0x3FD5555555555555ULL); /* 1/3     */
  CHECK(0x23, FD_UNARY("fsqrt.d", 0x4000000000000000ULL) == 0x3FF6A09E667F3BCDULL);                     /* sqrt 2  */
  /* fused: (1+2^-27)^2 - (1+2^-26) = 2^-54 exactly; unfused would give 0 */
  CHECK(0x24, FD_TER("fmadd.d", 0x3FF0000002000000ULL, 0x3FF0000002000000ULL, 0xBFF0000004000000ULL)
              == 0x3C90000000000000ULL);
  CHECK(0x25, FD_UNARY("fcvt.d.s", 0xFFFFFFFF3EAAAAABULL) == 0x3FD5555560000000ULL);  /* widen f32 1/3   */
  CHECK(0x26, (FD_UNARY("fcvt.s.d", 0x3FD5555555555555ULL) & 0xFFFFFFFFULL) == 0x3EAAAAAB); /* narrow */

  /* static rounding modes: fcvt.w.d of +2.5 and -2.5 */
  CHECK(0x27, FD_CVTW("rne", 0x4004000000000000ULL) == 2);
  CHECK(0x28, FD_CVTW("rtz", 0x4004000000000000ULL) == 2);
  CHECK(0x29, FD_CVTW("rdn", 0x4004000000000000ULL) == 2);
  CHECK(0x2A, FD_CVTW("rup", 0x4004000000000000ULL) == 3);
  CHECK(0x2B, FD_CVTW("rmm", 0x4004000000000000ULL) == 3);
  CHECK(0x2C, FD_CVTW("rne", 0xC004000000000000ULL) == -2);
  CHECK(0x2D, FD_CVTW("rdn", 0xC004000000000000ULL) == -3);
  CHECK(0x2E, FD_CVTW("rup", 0xC004000000000000ULL) == -2);
  CHECK(0x2F, FD_CVTW("rmm", 0xC004000000000000ULL) == -3);

  /* dynamic rounding: frm = RUP, then 1/3 rounds up in the last bit */
  __asm__ volatile ("csrwi frm, 3");
  CHECK(0x30, FD_BIN("fdiv.d", 0x3FF0000000000000ULL, 0x4008000000000000ULL) == 0x3FD5555555555556ULL);
  __asm__ volatile ("csrwi frm, 0");

  /* double load/store and bit-exact moves (sNaN payload must survive) */
  {
    uint64_t r;
    __asm__ volatile ("fmv.d.x ft0, %1\n\tfsd ft0, 8(%2)\n\tfld ft1, 8(%2)\n\tfmv.x.d %0, ft1"
                      : "=r"(r) : "r"(0x7FF0000000000001ULL), "r"(buf) : "ft0", "ft1", "memory");
    CHECK(0x31, r == 0x7FF0000000000001ULL && buf[1] == 0x7FF0000000000001ULL);
  }

  /* ---- architectural state ---- */
  {
    uint64_t ms = read_mstatus();
    CHECK(0x38, (ms & MSTATUS_FS_MASK) == MSTATUS_FS_DIRTY);   /* FS = Dirty after FP writes */
    CHECK(0x39, (ms & MSTATUS_SD) != 0);                        /* SD summarises FS          */
  }
  /* FS = Off: an FP instruction must raise an illegal-instruction trap */
  rec[0] = 0;
  rec[1] = 0;
  __asm__ volatile ("csrc mstatus, %0" :: "r"(MSTATUS_FS_MASK));
  __asm__ volatile ("fadd.d ft0, ft0, ft0" ::: "ft0");
  __asm__ volatile ("csrs mstatus, %0" :: "r"(MSTATUS_FS_INIT));
  CHECK(0x3A, rec[0] == 1 && rec[1] == 2);
  return rc;
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
  tohost_exit(run_fpu());
}
