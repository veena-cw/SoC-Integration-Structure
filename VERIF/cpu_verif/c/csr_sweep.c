/* csr_sweep.c
 *
 * BP-DV-050: CSR read/write sweep on both harts (bp_be_csr.sv and the CSR
 * checks in bp_be_instr_decoder.sv).
 *
 * Every check below is numbered; an M-mode trap handler records mcause and
 * skips a trapping instruction (+4, built without RVC), or - for an ecall
 * from U-mode - returns to M at the point recorded before entering U.
 *
 *   1-5   identity: mhartid, misa (MXL=2, A B C D F I M S U = 0x14112f),
 *         mvendorid=0, marchid=13, mimpid=4
 *   6-9   writing a read-only CSR (mvendorid/marchid/mimpid/mhartid) is
 *         an illegal instruction (mcause 2), value unchanged
 *   10    misa is WARL: writes ignored
 *   11-12 mscratch / sscratch: full 64-bit read/write
 *   13-14 mepc / sepc: written with all ones, bit 0 reads 0
 *   15-16 mtval / stval read back
 *   17    medeleg[11] (ecall from M) is read-only zero
 *   18    mideleg S-interrupt bits (0x222) read back
 *   19    sie writes only the delegated bits of mie, never M bits
 *   20    sip.SSIP sets / clears mip.SSIP when delegated
 *   21    sstatus: SIE/SUM/MXR reach mstatus, sstatus cannot set MIE
 *   22    satp: MODE 8 (Sv39) accepted, MODE 1 write ignored, 0 accepted
 *   23    mtvec read back
 *   24    mcounteren / scounteren: CY and IR read back, TM reads 0
 *         (no time CSR in BlackParrot; WARL)
 *   25-28 mcycle counts, mcycle write, mcountinhibit.CY freezes mcycle,
 *         mcountinhibit.IR freezes minstret
 *   29-31 fcsr = {frm, fflags} aliasing; fcsr with mstatus.FS = Off traps
 *   32    pmpcfg0 / pmpaddr0 read back
 *   33-34 unknown CSR (0x7C0): read and write-only access trap
 *   35    sedeleg / sideleg (no N extension) read 0, writes ignored
 *   36-38 U-mode: cycle with mcounteren.CY=0 traps, with CY=1 (and
 *         scounteren.CY=1) reads; mstatus read from U traps
 * Informational only (not a failure): bit 0 of the info word = dcsr was
 * readable from M-mode without trapping (debug CSRs outside Debug Mode).
 *
 * The info word and the first failing check are written to 0x0010_8700
 * (+0x10 per hart) for the log. tohost (dual_core.h): (hart1 << 32) | hart0.
 * Per hart 0 = pass, else (fail_count << 16) | 0x5000 | first_failing_check.
 */

#include <stdint.h>
#include "dual_core.h"

#define CAUSE_ILLEGAL  2
#define CAUSE_ECALL_U  8

#define CSRR(csr)        ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v)     __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v)     __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

/* Per-hart trap record: count, mcause, mtval, mepc, resume pc, t0, t1. */
static uint64_t trec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global csr_trap\n"
  "csr_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 40(t6)\n"
  "  sd t1, 48(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t1, mcause\n"
  "  sd t1, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 16(t6)\n"
  "  csrr t0, mepc\n"
  "  sd t0, 24(t6)\n"
  "  li t0, 8\n"
  "  bne t1, t0, 1f\n"
  "  ld t1, 32(t6)\n"             /* ecall from U: back to M at resume pc */
  "  csrw mepc, t1\n"
  "  li t0, 0x1800\n"
  "  csrs mstatus, t0\n"          /* MPP = M */
  "  j 2f\n"
  "1:\n"
  "  csrr t0, mepc\n"             /* anything else: skip the instruction */
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "2:\n"
  "  ld t0, 40(t6)\n"
  "  ld t1, 48(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  /* uint64_t run_user(void (*fn)(void)): run fn in U-mode, fn ends with
   * ecall; returns fn's a0. Uses no stack in U-mode. */
  ".align 2\n"
  ".global run_user\n"
  "run_user:\n"
  "  csrr t1, mscratch\n"
  "  la t0, 3f\n"
  "  sd t0, 32(t1)\n"
  "  csrw mepc, a0\n"
  "  li t0, 0x1800\n"
  "  csrc mstatus, t0\n"          /* MPP = U */
  "  li a0, 0\n"
  "  mret\n"
  "3:\n"
  "  ret\n"

  ".align 2\n"
  ".global u_read_cycle\n"
  "u_read_cycle:\n"
  "  li a0, -1\n"
  "  csrr a0, cycle\n"            /* skipped (a0 stays -1) if illegal */
  "  ecall\n"
  ".global u_read_mstatus\n"
  "u_read_mstatus:\n"
  "  li a0, -1\n"
  "  csrr a0, mstatus\n"
  "  ecall\n"
);
extern char csr_trap[];
extern uint64_t run_user(void (*fn)(void));
extern void u_read_cycle(void);
extern void u_read_mstatus(void);

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

/* 1 if exactly one new trap with `cause` happened since `before`. */
static int trapped(struct st *s, uint64_t before, uint64_t cause)
{
  return s->r[0] == before + 1 && s->r[1] == cause;
}

static uint64_t run_sweep(void)
{
  struct st s = { 0, 0, 0, trec[hart_id()] };
  uint64_t v, w, n, info = 0;

  CSRW(mscratch, s.r);
  CSRW(mtvec, csr_trap);

  /* 1-5 identity */
  check(&s, CSRR(mhartid) == hart_id());
  check(&s, CSRR(misa) == ((2ULL << 62) | 0x14112fULL));
  check(&s, CSRR(mvendorid) == 0);
  check(&s, CSRR(marchid) == 13);
  check(&s, CSRR(mimpid) == 4);

  /* 6-9 read-only CSR writes trap */
  n = s.r[0]; CSRW(mvendorid, 1); check(&s, trapped(&s, n, CAUSE_ILLEGAL) && CSRR(mvendorid) == 0);
  n = s.r[0]; CSRW(marchid, 1);   check(&s, trapped(&s, n, CAUSE_ILLEGAL) && CSRR(marchid) == 13);
  n = s.r[0]; CSRW(mimpid, 1);    check(&s, trapped(&s, n, CAUSE_ILLEGAL) && CSRR(mimpid) == 4);
  n = s.r[0]; CSRW(mhartid, 7);   check(&s, trapped(&s, n, CAUSE_ILLEGAL) && CSRR(mhartid) == hart_id());

  /* 10 misa WARL */
  n = s.r[0]; CSRW(misa, 0);
  check(&s, s.r[0] == n && CSRR(misa) == ((2ULL << 62) | 0x14112fULL));

  /* 11-12 scratch registers */
  {
    static const uint64_t pat[3] = { 0, ~0ULL, 0xA5A5C3C3F0F01234ULL };
    int ok_m = 1, ok_s = 1;
    for (unsigned i = 0; i < 3; i++) {
      CSRW(mscratch, pat[i]); ok_m &= CSRR(mscratch) == pat[i];
      CSRW(sscratch, pat[i]); ok_s &= CSRR(sscratch) == pat[i];
    }
    CSRW(mscratch, s.r);                          /* handler needs it back */
    check(&s, ok_m);
    check(&s, ok_s);
  }

  /* 13-14 xepc bit 0 */
  CSRW(mepc, ~0ULL); v = CSRR(mepc); check(&s, (v & 1) == 0 && v != 0);
  CSRW(sepc, ~0ULL); v = CSRR(sepc); check(&s, (v & 1) == 0 && v != 0);

  /* 15-16 xtval */
  CSRW(mtval, 0x1234); check(&s, CSRR(mtval) == 0x1234);
  CSRW(stval, 0x5678); check(&s, CSRR(stval) == 0x5678);

  /* 17 medeleg[11] read-only zero */
  CSRW(medeleg, ~0ULL); v = CSRR(medeleg); CSRW(medeleg, 0);
  check(&s, (v & (1ULL << 11)) == 0);

  /* 18 mideleg */
  CSRW(mideleg, 0x222); check(&s, (CSRR(mideleg) & 0x222) == 0x222);

  /* 19 sie only reaches delegated bits */
  CSRW(mie, 0);
  CSRW(sie, ~0ULL);
  v = CSRR(mie);
  CSRW(mie, 0);
  check(&s, (v & 0x222) == 0x222 && (v & 0x888) == 0);

  /* 20 sip.SSIP <-> mip.SSIP (mie = 0, so no interrupt is taken) */
  CSRW(sip, 2); v = CSRR(mip);
  CSRW(sip, 0); w = CSRR(mip);
  check(&s, (v & 2) && !(w & 2));
  CSRW(mideleg, 0);

  /* 21 sstatus view of mstatus */
  CSRC(mstatus, (1ULL << 1) | (1ULL << 3) | (1ULL << 18) | (1ULL << 19));
  CSRS(sstatus, (1ULL << 1) | (1ULL << 3) | (1ULL << 18) | (1ULL << 19));
  v = CSRR(mstatus);
  w = CSRR(sstatus);
  CSRC(mstatus, (1ULL << 1) | (1ULL << 3) | (1ULL << 18) | (1ULL << 19));
  check(&s, (v & ((1ULL << 1) | (1ULL << 18) | (1ULL << 19))) ==
                 ((1ULL << 1) | (1ULL << 18) | (1ULL << 19))
            && !(v & (1ULL << 3)) && !(w & (1ULL << 3)));

  /* 22 satp WARL MODE */
  {
    uint64_t sv39 = (8ULL << 60) | 0x12345ULL;
    CSRW(satp, sv39);            v = CSRR(satp);
    CSRW(satp, (1ULL << 60) | 7); w = CSRR(satp);  /* unsupported mode: ignored */
    CSRW(satp, 0);
    check(&s, v == sv39 && w == sv39 && CSRR(satp) == 0);
  }

  /* 23 mtvec */
  CSRW(mtvec, 0x80001000ULL); v = CSRR(mtvec); CSRW(mtvec, csr_trap);
  check(&s, v == 0x80001000ULL);

  /* 24 counter enables: BlackParrot implements CY and IR only; TM (no
   * time CSR) is WARL read-only zero */
  CSRW(mcounteren, 7); CSRW(scounteren, 7);
  check(&s, (CSRR(mcounteren) & 7) == 5 && (CSRR(scounteren) & 7) == 5);
  CSRW(mcounteren, 0); CSRW(scounteren, 0);

  /* 25-28 counters */
  CSRW(mcountinhibit, 0);
  v = CSRR(mcycle); w = CSRR(mcycle);
  check(&s, w > v);
  CSRW(mcycle, 100000); v = CSRR(mcycle);
  check(&s, v >= 100000 && v < 100000 + 5000);
  CSRW(mcountinhibit, 1); v = CSRR(mcycle); w = CSRR(mcycle);
  CSRW(mcountinhibit, 0);
  check(&s, v == w);
  CSRW(mcountinhibit, 4); v = CSRR(minstret); w = CSRR(minstret);
  CSRW(mcountinhibit, 0);
  check(&s, v == w && CSRR(minstret) > w);

  /* 29-31 fcsr aliasing and FS=Off trap */
  CSRS(mstatus, 1ULL << 13);                      /* FS = Initial */
  CSRW(fcsr, 0xE5);
  check(&s, CSRR(frm) == 7 && CSRR(fflags) == 5);
  CSRW(frm, 2);    v = CSRR(fcsr);
  CSRW(fflags, 0x1F); w = CSRR(fcsr);
  check(&s, v == 0x45 && w == 0x5F);
  CSRW(fcsr, 0);
  CSRC(mstatus, 3ULL << 13);                      /* FS = Off */
  n = s.r[0]; v = CSRR(fcsr);
  check(&s, trapped(&s, n, CAUSE_ILLEGAL));

  /* 32 PMP (entry 0, A=OFF so nothing is matched or locked) */
  CSRW(pmpaddr0, 0x12345); v = CSRR(pmpaddr0);
  CSRW(pmpcfg0, 0x07);     w = CSRR(pmpcfg0) & 0xFF;
  CSRW(pmpcfg0, 0); CSRW(pmpaddr0, 0);
  check(&s, v == 0x12345 && w == 0x07);

  /* 33-34 unknown CSR 0x7C0 */
  n = s.r[0]; v = CSRR(0x7c0);  check(&s, trapped(&s, n, CAUSE_ILLEGAL));
  n = s.r[0]; CSRW(0x7c0, 1);   check(&s, trapped(&s, n, CAUSE_ILLEGAL));

  /* 35 sedeleg / sideleg (0x102 / 0x103) */
  n = s.r[0];
  CSRW(0x102, ~0ULL); CSRW(0x103, ~0ULL);
  check(&s, s.r[0] == n && CSRR(0x102) == 0 && CSRR(0x103) == 0);

  /* informational: dcsr from M-mode */
  n = s.r[0]; v = CSRR(dcsr);
  if (s.r[0] == n)
    info |= 1;

  /* 36-38 U-mode counter enable and privilege */
  CSRW(mcounteren, 0); CSRW(scounteren, 0);
  n = s.r[0];
  v = run_user(u_read_cycle);
  check(&s, v == ~0ULL && s.r[0] == n + 2 && s.r[1] == CAUSE_ECALL_U);   /* illegal + ecall */
  CSRW(mcounteren, 1); CSRW(scounteren, 1);
  n = s.r[0];
  v = run_user(u_read_cycle);
  check(&s, v != ~0ULL && s.r[0] == n + 1);                                /* ecall only */
  CSRW(mcounteren, 0); CSRW(scounteren, 0);
  n = s.r[0];
  v = run_user(u_read_mstatus);
  check(&s, v == ~0ULL && s.r[0] == n + 2);

  *(volatile uint64_t *)(0x00108700UL + hart_id() * 0x10UL) =
      (info << 32) | ((uint64_t)s.fails << 16) | s.first;
  dual_fence();

  return s.fails ? (((uint64_t)s.fails << 16) | 0x5000 | s.first) : 0;
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
  tohost_exit(run_sweep());
}
