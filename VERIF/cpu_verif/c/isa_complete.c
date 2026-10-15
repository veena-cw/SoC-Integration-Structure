/* isa_complete.c
 *
 * BP-DV-052: instruction-decode completeness on both harts - the
 * instructions and illegal encodings no other test executes
 * (bp_be_instr_decoder.sv). Built with rv64imafd; special encodings are
 * emitted with .word / .insn so no extra toolchain extensions are needed.
 *
 *   1-6    lr.w / sc.w (success, then sc.w without reservation fails),
 *          amoswap.w, amoxor.w, amoand.w, amoor.w (old value + memory)
 *   7-10   fcvt.wu.s / fcvt.lu.s / fcvt.wu.d / fcvt.lu.d (incl. negative
 *          input -> 0 with NV), fcvt.s.wu / fcvt.s.lu / fcvt.d.wu /
 *          fcvt.d.lu (large unsigned values)
 *   11-12  fsgnj.s/.d, fsgnjx.s/.d
 *   13     wfi with an enabled pending interrupt (mie.SSIE + mip.SSIP,
 *          mstatus.MIE = 0) returns without a trap
 *   14     fence.i: patch an instruction of smc_fn, fence.i, call it
 *   15-17  cmo.inval.all / cmo.clean.all / cmo.flush.all are illegal on
 *          the coherent (two-core) configuration
 *   18     prefetch.i / prefetch.r / prefetch.w (ori x0 hints) execute as
 *          no-ops
 *   19-30  one illegal encoding per decoder group (OP, OP-IMM, BRANCH,
 *          LOAD, LOAD-FP, STORE, STORE-FP, MISC-MEM, SYSTEM, OP-FP, AMO,
 *          unknown opcode): mcause 2 and mtval = the instruction
 *   31     cbo.zero zeroes one 64-byte block and nothing else (last: the
 *          other CBO operations currently hang on two cores)
 *
 * Progress marker (check about to run) at 0x0010_8A00 (+0x10 per hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x5200 | first failing check.
 */

#include <stdint.h>
#include "dual_core.h"

#define CSRR(csr)        ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v)     __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v)     __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define PROGRESS(h)      ((volatile uint64_t *)(0x00108A00UL + (uint64_t)(h) * 0x10UL))

#define CAUSE_ILLEGAL    2
#define WORD_BUF(h)      ((volatile uint32_t *)(0x80060000UL + (h) * 0x1000UL))
#define ZERO_BUF(h)      ((volatile uint64_t *)(0x80060800UL + (h) * 0x1000UL))   /* 64-byte aligned */

/* M-mode trap record: [0] count, [1] mcause, [2] mtval, [3] mepc, [4] save */
static uint64_t trec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global isa_trap\n"
  "isa_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 32(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 16(t6)\n"
  "  csrr t0, mepc\n"
  "  sd t0, 24(t6)\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 32(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  /* self-modifying target: 'addi a0, x0, 1' is patched to '..., 2' */
  ".align 3\n"
  ".global smc_fn\n"
  "smc_fn:\n"
  "  addi a0, x0, 1\n"
  "  ret\n"
);
extern char isa_trap[];
extern uint64_t smc_fn(void);
extern volatile uint32_t smc_fn_word __asm__("smc_fn");

struct st { unsigned n, fails, first; uint64_t *r; };
static void check(struct st *s, int ok)
{
  s->n++;
  if (!ok) {
    if (s->fails == 0)
      s->first = s->n;
    s->fails++;
  }
}
static void progress(struct st *s)
{
  *PROGRESS(hart_id()) = s->n + 1;
  dual_fence();
}

/* Execute one 32-bit encoding; it must trap as illegal with mtval = enc. */
#define ILLEGAL(s, enc) do {                                              \
    uint64_t _n = (s)->r[0];                                              \
    progress(s);                                                          \
    __asm__ volatile (".word " #enc ::: "memory");                        \
    check((s), (s)->r[0] == _n + 1 && (s)->r[1] == CAUSE_ILLEGAL          \
               && (s)->r[2] == (uint64_t)(enc));                          \
  } while (0)

static uint64_t f2u(float f)  { union { float f; uint32_t u; } x = { .f = f }; return x.u; }
static uint64_t d2u(double d) { union { double d; uint64_t u; } x = { .d = d }; return x.u; }

static uint64_t run_isa(void)
{
  unsigned h = (unsigned)hart_id();
  struct st s = { 0, 0, 0, trec[h] };
  volatile uint32_t *w = WORD_BUF(h);
  uint64_t v, r, fl;

  CSRW(mscratch, s.r);
  CSRW(mtvec, isa_trap);
  CSRS(mstatus, 1ULL << 13);                         /* FS = Initial */

  /* 1-6 word atomics */
  progress(&s);
  w[0] = 0x11111111;
  __asm__ volatile ("lr.w %0, (%2)\n sc.w %1, %3, (%2)"
                    : "=&r"(v), "=&r"(r) : "r"(w), "r"(0x22222222) : "memory");
  check(&s, (uint32_t)v == 0x11111111 && r == 0 && w[0] == 0x22222222);
  __asm__ volatile ("sc.w %0, %2, (%1)" : "=r"(r) : "r"(w), "r"(0x33333333) : "memory");
  check(&s, r != 0 && w[0] == 0x22222222);              /* no reservation */
  __asm__ volatile ("amoswap.w %0, %2, (%1)" : "=r"(v) : "r"(w), "r"(0x0F0F00FF) : "memory");
  check(&s, (uint32_t)v == 0x22222222 && w[0] == 0x0F0F00FF);
  __asm__ volatile ("amoxor.w %0, %2, (%1)" : "=r"(v) : "r"(w), "r"(0xFF00FF00) : "memory");
  check(&s, (uint32_t)v == 0x0F0F00FF && w[0] == (0x0F0F00FFu ^ 0xFF00FF00u));
  __asm__ volatile ("amoand.w %0, %2, (%1)" : "=r"(v) : "r"(w), "r"(0x0000FFFF) : "memory");
  check(&s, (uint32_t)v == (0x0F0F00FFu ^ 0xFF00FF00u) && w[0] == ((0x0F0F00FFu ^ 0xFF00FF00u) & 0xFFFF));
  __asm__ volatile ("amoor.w %0, %2, (%1)" : "=r"(v) : "r"(w), "r"(0x12340000) : "memory");
  check(&s, (uint32_t)v == ((0x0F0F00FFu ^ 0xFF00FF00u) & 0xFFFF)
            && w[0] == (((0x0F0F00FFu ^ 0xFF00FF00u) & 0xFFFF) | 0x12340000u));

  /* 7-10 unsigned conversions */
  progress(&s);
  {
    float  fs = 3000000000.0f, fneg = -5.0f;
    double ds = 4000000000.0, dneg = -7.0;
    uint64_t a, b, c, d;
    CSRW(fflags, 0);
    __asm__ volatile ("fcvt.wu.s %0, %4, rtz\n fcvt.lu.s %1, %4, rtz\n"
                      "fcvt.wu.d %2, %5, rtz\n fcvt.lu.d %3, %5, rtz"
                      : "=&r"(a), "=&r"(b), "=&r"(c), "=&r"(d) : "f"(fs), "f"(ds));
    check(&s, a == (uint64_t)(int64_t)(int32_t)3000000000u && b == 3000000000ULL
              && c == (uint64_t)(int64_t)(int32_t)4000000000u && d == 4000000000ULL);
    __asm__ volatile ("fcvt.wu.s %0, %2, rtz\n fcvt.lu.d %1, %3, rtz"
                      : "=&r"(a), "=&r"(b) : "f"(fneg), "f"(dneg));
    fl = CSRR(fflags);
    check(&s, a == 0 && b == 0 && (fl & 0x10));        /* NV set */
  }
  {
    float  f1, f2;
    double d1, d2;
    uint64_t big32 = 0xFFFFFFFFULL, big64 = 0x8000000000000000ULL;
    __asm__ volatile ("fcvt.s.wu %0, %2\n fcvt.s.lu %1, %3" : "=&f"(f1), "=&f"(f2) : "r"(big32), "r"(big64));
    check(&s, f2u(f1) == 0x4F800000 && f2u(f2) == 0x5F000000);     /* 2^32, 2^63 */
    __asm__ volatile ("fcvt.d.wu %0, %2\n fcvt.d.lu %1, %3" : "=&f"(d1), "=&f"(d2) : "r"(big32), "r"(big64));
    check(&s, d2u(d1) == 0x41EFFFFFFFE00000ULL && d2u(d2) == 0x43E0000000000000ULL);
  }

  /* 11-12 sign injection */
  progress(&s);
  {
    float a = 1.5f, b = -2.0f, o1, o2;
    double c = -1.5, d = -2.0, o3, o4;
    __asm__ volatile ("fsgnj.s %0, %2, %3\n fsgnjx.s %1, %2, %3" : "=&f"(o1), "=&f"(o2) : "f"(a), "f"(b));
    __asm__ volatile ("fsgnj.d %0, %2, %3\n fsgnjx.d %1, %2, %3" : "=&f"(o3), "=&f"(o4) : "f"(c), "f"(d));
    check(&s, f2u(o1) == f2u(-1.5f) && f2u(o2) == f2u(-1.5f));
    check(&s, d2u(o3) == d2u(-1.5) && d2u(o4) == d2u(1.5));
  }

  /* 13 wfi with an enabled pending interrupt, global MIE off */
  progress(&s);
  CSRC(mstatus, (1ULL << 3) | (1ULL << 1));
  CSRW(mideleg, 0);
  CSRW(mie, 1ULL << 1);                              /* SSIE */
  CSRS(mip, 1ULL << 1);                              /* SSIP pending */
  v = s.r[0];
  __asm__ volatile ("wfi" ::: "memory");
  CSRC(mip, 1ULL << 1);
  CSRW(mie, 0);
  check(&s, s.r[0] == v);

  /* 14 fence.i with self-modifying code */
  progress(&s);
  r = smc_fn();                                      /* 1, I$ caches the line */
  smc_fn_word = 0x00200513;                          /* addi a0, x0, 2 */
  __asm__ volatile ("fence rw, rw\n .insn i 0x0F, 1, x0, x0, 0" ::: "memory");  /* fence.i */
  check(&s, r == 1 && smc_fn() == 2);
  smc_fn_word = 0x00100513;
  __asm__ volatile ("fence rw, rw\n .insn i 0x0F, 1, x0, x0, 0" ::: "memory");

  /* 15-17 cmo.*.all: illegal on the coherent configuration */
  ILLEGAL(&s, 0x0000700F);                           /* cmo.inval.all */
  ILLEGAL(&s, 0x0010700F);                           /* cmo.clean.all */
  ILLEGAL(&s, 0x0020700F);                           /* cmo.flush.all */

  /* 18 prefetch hints (ori x0, rs1, imm) are no-ops */
  progress(&s);
  v = s.r[0];
  __asm__ volatile (".insn i 0x13, 6, x0, %0, 0\n"   /* prefetch.i */
                    ".insn i 0x13, 6, x0, %0, 1\n"   /* prefetch.r */
                    ".insn i 0x13, 6, x0, %0, 3"     /* prefetch.w */
                    :: "r"(w) : "memory");
  check(&s, s.r[0] == v);

  /* 19-30 one illegal encoding per decoder group */
  ILLEGAL(&s, 0xFE000033);                           /* OP: funct7 0x7f */
  ILLEGAL(&s, 0xFC005013);                           /* OP-IMM: srli imm[11:6]=0x3f */
  ILLEGAL(&s, 0x00002063);                           /* BRANCH: funct3 2 */
  ILLEGAL(&s, 0x00007003);                           /* LOAD: funct3 7 */
  ILLEGAL(&s, 0x00000007);                           /* LOAD-FP: funct3 0 */
  ILLEGAL(&s, 0x00004023);                           /* STORE: funct3 4 */
  ILLEGAL(&s, 0x00000027);                           /* STORE-FP: funct3 0 */
  ILLEGAL(&s, 0x0000300F);                           /* MISC-MEM: funct3 3 */
  ILLEGAL(&s, 0x00004073);                           /* SYSTEM: funct3 4 */
  ILLEGAL(&s, 0xFE000053);                           /* OP-FP: funct7 0x7f */
  ILLEGAL(&s, 0xF800202F);                           /* AMO: funct5 0x1f */
  ILLEGAL(&s, 0x0000000B);                           /* custom-0 opcode */

  /* 31 cbo.zero (last) */
  progress(&s);
  {
    volatile uint64_t *z = ZERO_BUF(h);
    for (unsigned i = 0; i < 16; i++)
      z[i] = 0xA5A5A5A500000000ULL | i;
    __asm__ volatile ("fence rw, rw\n .insn i 0x0F, 2, x0, %0, 4" :: "r"(z) : "memory");   /* cbo.zero */
#ifdef DEBUG_DUMP
    {   /* 0x0010_9000 + hart*0x800: z[0..15], then trap count/mcause/mtval/mepc */
      volatile uint64_t *p = (volatile uint64_t *)(0x00109000UL + h * 0x800UL);
      for (unsigned i = 0; i < 16; i++) p[i] = z[i];
      for (unsigned i = 0; i < 4; i++)  p[16 + i] = s.r[i];
      dual_fence();
    }
#endif
    int ok = 1;
    for (unsigned i = 0; i < 8; i++)
      ok &= z[i] == 0;
    for (unsigned i = 8; i < 16; i++)                /* next block untouched */
      ok &= z[i] == (0xA5A5A5A500000000ULL | i);
    check(&s, ok);
  }

  *PROGRESS(h) = 0xFF;
  dual_fence();
  return s.fails ? (((uint64_t)s.fails << 16) | 0x5200 | s.first) : 0;
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
  tohost_exit(run_isa());
}
