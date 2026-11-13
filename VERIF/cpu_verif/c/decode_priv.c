/* decode_priv.c
 *
 * BP-DV-094: decoder illegal-instruction checks left by the hole review
 * (13 Nov 2026, bp_be_instr_decoder.sv 305 / 384 / 498 / 503 / 510 / 532 /
 * 745 never hit). Both harts at once (only their own CSRs are used).
 *
 *   1 mstatus.FS = Off: fsw, fsd, flw, fmadd.s, fnmsub.d, fadd.d each raise
 *     an illegal-instruction trap (mcause 2, mtval = the encoding)
 *   2 JALR with funct3 = 1..7 (reserved): illegal, mtval = the encoding.
 *     rs1 points at the next instruction, so a decoder that accepts it
 *     still continues - the trap count shows it.
 *   3 S mode: mret is illegal
 *   4 S mode, mstatus.TSR = 1: sret is illegal
 *   5 S mode, mstatus.TVM = 1: csrr satp and sfence.vma are illegal;
 *     TVM = 0: both execute without a trap
 *   6 S mode, mstatus.TW = 1: wfi is illegal (mtval 0x10500073)
 *   7 M mode, mstatus.TW = 1: wfi must NOT trap (privileged spec: TW only
 *     applies to modes below M). SSIP is set and enabled in mie with
 *     mstatus.MIE = 0, so the wfi completes at once and no interrupt is
 *     taken. bp_be_csr.sv 794 passes mstatus.TW to the decoder without the
 *     mode, so this check is expected to show whether M-mode wfi traps.
 *   8 U mode: sfence.vma is illegal
 * Lower-mode code ends with ecall (mcause 8 / 9); the M handler resumes the
 * M code after it with MPP = M. Every other trap is counted, its mcause /
 * mtval kept, and the 4-byte instruction skipped.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x9400 | first failing check (1..8).
 * Progress (check) at 0x0010_8400 (+0x10 / hart); mask of failing checks at
 * 0x0010_8700 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))

#define MS_MPP   0x1800ULL
#define MS_FS    0x6000ULL
#define MS_TVM   (1ULL << 20)
#define MS_TW    (1ULL << 21)
#define MS_TSR   (1ULL << 22)

/* per hart: 0 trap count, 8 last mcause, 16 t0 save, 24 M resume pc,
 * 32 t1 save, 40 last mtval */
static uint64_t rec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global dp_trap\n"
  "dp_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  sd t1, 32(t6)\n"
  "  csrr t0, mcause\n"
  "  addi t1, t0, -8\n"
  "  srli t1, t1, 1\n"
  "  beqz t1, 2f\n"               /* mcause 8 / 9: ecall from U / S */
  "  sd t0, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 40(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  j 3f\n"
  "2:\n"
  "  ld t0, 24(t6)\n"
  "  csrw mepc, t0\n"
  "  li t0, 0x1800\n"
  "  csrs mstatus, t0\n"          /* MPP = M */
  "3:\n"
  "  ld t1, 32(t6)\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char dp_trap[];

#define CSRR(csr)    ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v) __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v) __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v) __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define NORVC(s)     ".option push\n .option norvc\n" s "\n .option pop\n"

/* Run INSNS in a lower mode (MPP = mpp: 0x0800 S, 0 U), ecall back to M. */
#define RUN_LOWER(r, mpp, INSNS)                                           \
  __asm__ volatile (                                                       \
    NORVC(                                                                 \
    "  la   t0, 1f\n"                                                      \
    "  sd   t0, 24(%0)\n"                                                  \
    "  la   t0, 4f\n"                                                      \
    "  csrw mepc, t0\n"                                                    \
    "  li   t0, 0x1800\n"                                                  \
    "  csrc mstatus, t0\n"                                                 \
    "  csrs mstatus, %1\n"                                                 \
    "  mret\n"                                                             \
    "4:\n"                                                                 \
    INSNS                                                                  \
    "  ecall\n"                                                            \
    "1:\n")                                                                \
    :: "r"(r), "r"((uint64_t)(mpp)) : "t0", "memory")

/* one M-mode instruction word that must trap: count +1, mcause 2,
 * mtval = the word */
static int m_illegal(uint64_t *r, uint32_t word)
{
  uint64_t n = r[0];
  switch (word) {
#define W(x) case x: __asm__ volatile (NORVC(".word " #x) ::: "memory"); break;
    W(0x00012027) W(0x00013027) W(0x00012007)       /* fsw / fsd / flw f0, 0(sp) */
    W(0x00000043) W(0x0200004b) W(0x02000053)       /* fmadd.s / fnmsub.d / fadd.d */
#undef W
    default: return 0;
  }
  return r[0] == n + 1 && r[1] == 2 && (uint32_t)r[2 + 3] == word;
}

/* JALR x0, 0(t0) with funct3 f; t0 = the next instruction */
static int jalr_illegal(uint64_t *r, unsigned f)
{
  uint64_t n = r[0];
  uint32_t word = 0x00028067U | (f << 12);
  switch (f) {
#define J(k, x) case k: __asm__ volatile (NORVC("la t0, 1f\n .word " #x "\n1:") ::: "t0", "memory"); break;
    J(1, 0x00029067) J(2, 0x0002a067) J(3, 0x0002b067) J(4, 0x0002c067)
    J(5, 0x0002d067) J(6, 0x0002e067) J(7, 0x0002f067)
#undef J
    default: return 0;
  }
  return r[0] == n + 1 && r[1] == 2 && (uint32_t)r[5] == word;
}

static uint64_t run_tests(void)
{
  unsigned me = (unsigned)hart_id();
  uint64_t *r = rec[me];
  uint64_t n, fails = 0, mask = 0, first = 0;
  int ok;

#define CHECK(id, cond) do { if (!(cond)) { fails++; mask |= 1ULL << (id); \
                                            if (!first) first = (id); } } while (0)
  CSRW(mscratch, r);
  CSRW(mtvec, dp_trap);
  CSRW(mie, 0);
  CSRW(mideleg, 0);

  /* 1 FS = Off */
  *PROGRESS(me) = 1;
  CSRC(mstatus, MS_FS);
  ok = m_illegal(r, 0x00012027) & m_illegal(r, 0x00013027) & m_illegal(r, 0x00012007)
     & m_illegal(r, 0x00000043) & m_illegal(r, 0x0200004b) & m_illegal(r, 0x02000053);
  CHECK(1, ok);

  /* 2 JALR funct3 != 0 */
  *PROGRESS(me) = 2;
  ok = 1;
  for (unsigned f = 1; f < 8; f++)
    ok &= jalr_illegal(r, f);
  CHECK(2, ok);

  /* 3 mret in S */
  *PROGRESS(me) = 3;
  n = r[0];
  RUN_LOWER(r, 0x0800, "  mret\n");
  CHECK(3, r[0] == n + 1 && r[1] == 2 && (uint32_t)r[5] == 0x30200073U);

  /* 4 sret in S, TSR = 1 */
  *PROGRESS(me) = 4;
  n = r[0];
  CSRS(mstatus, MS_TSR);
  RUN_LOWER(r, 0x0800, "  sret\n");
  CSRC(mstatus, MS_TSR);
  CHECK(4, r[0] == n + 1 && r[1] == 2 && (uint32_t)r[5] == 0x10200073U);

  /* 5 satp / sfence.vma in S, TVM = 1 then 0 */
  *PROGRESS(me) = 5;
  n = r[0];
  CSRS(mstatus, MS_TVM);
  RUN_LOWER(r, 0x0800, "  csrr t0, satp\n  sfence.vma\n");
  ok = r[0] == n + 2 && r[1] == 2;
  CSRC(mstatus, MS_TVM);
  n = r[0];
  RUN_LOWER(r, 0x0800, "  csrr t0, satp\n  sfence.vma\n");
  ok &= r[0] == n;
  CHECK(5, ok);

  /* 6 wfi in S, TW = 1 */
  *PROGRESS(me) = 6;
  n = r[0];
  CSRS(mstatus, MS_TW);
  RUN_LOWER(r, 0x0800, "  wfi\n");
  CSRC(mstatus, MS_TW);
  CHECK(6, r[0] == n + 1 && r[1] == 2 && (uint32_t)r[5] == 0x10500073U);

  /* 7 wfi in M, TW = 1: no trap (SSIP pending + enabled, MIE = 0) */
  *PROGRESS(me) = 7;
  CSRC(mstatus, 0x8);              /* MIE = 0 */
  CSRS(mip, 0x2);                  /* SSIP */
  CSRW(mie, 0x2);                  /* SSIE */
  n = r[0];
  CSRS(mstatus, MS_TW);
  __asm__ volatile (NORVC("wfi") ::: "memory");
  CSRC(mstatus, MS_TW);
  CSRW(mie, 0);
  CSRC(mip, 0x2);
  CHECK(7, r[0] == n);

  /* 8 sfence.vma in U */
  *PROGRESS(me) = 8;
  n = r[0];
  RUN_LOWER(r, 0, "  sfence.vma\n");
  CHECK(8, r[0] == n + 1 && r[1] == 2);
#undef CHECK

  DIAG(me) = mask;
  *PROGRESS(me) = 0xFF;
  dual_fence();
  return fails ? ((fails << 16) | 0x9400 | first) : 0;
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
  tohost_exit(run_tests());
}
