/* csr_priv_more.c
 *
 * BP-DV-084: CSR / privilege corners left by the hole review (11 Nov 2026):
 *   bp_be_instr_decoder.sv 531  rdinstret (CSR 0xC02) never executed
 *   bp_be_csr.sv 704            mret to a lower mode clearing mstatus.MPRV
 *   bp_be_csr.sv 535 / 570      writes of instret / pmpaddr
 *
 * Steps (each hart, both at once):
 *   1 M: rdinstret twice, second > first
 *   2 mcounteren.IR = 1, S-mode rdinstret: no trap, value != 0
 *   3 mcounteren.IR = 0, S-mode rdinstret: exactly 1 illegal-instr trap
 *   4 mstatus.MPRV = 1, MPP = S, mret to S, ecall back: MPRV now 0
 *   5 M: csrw 0xC02 (read-only instret): exactly 1 illegal-instr trap
 *   6 M: pmpaddr0..3 write / read back, restored to 0 (traps counted and
 *     logged at 0x0010_8480 + 0x10 * hart, not a failure)
 * S-mode code ends with ecall (mcause 9); the M handler then resumes the M
 * code after the mret with MPP = M. Any other trap is counted and skipped.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   0x8400 | first failing step.
 * Progress (step) at 0x0010_8400 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define OBS(h)       ((volatile uint64_t *)(0x00108480UL + (h) * 16UL))

/* scratch record per hart: 0 trap count, 8 last mcause, 16 t0 save,
 * 24 M resume pc, 32 t1 save */
static uint64_t rec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  sd t1, 32(t6)\n"
  "  csrr t0, mcause\n"
  "  li t1, 9\n"
  "  beq t0, t1, 2f\n"            /* ecall from S: back to M */
  "  sd t0, 8(t6)\n"
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
extern char m_trap[];

#define CSRR(csr)    ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v) __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

/* Enter S at the local label, run rdinstret into a0, ecall back to M.
 * mprv = 1 also sets mstatus.MPRV before the mret. Returns a0. */
static uint64_t s_rdinstret(uint64_t *r, int mprv)
{
  register uint64_t a0 __asm__("a0") = 0;
  __asm__ volatile (
    "  la   t0, 1f\n"
    "  sd   t0, 24(%1)\n"
    "  la   t0, 4f\n"
    "  csrw mepc, t0\n"
    "  li   t0, 0x1800\n"
    "  csrc mstatus, t0\n"
    "  li   t0, 0x0800\n"
    "  csrs mstatus, t0\n"           /* MPP = S */
    "  li   t0, 0x20000\n"
    "  beqz %2, 5f\n"
    "  csrs mstatus, t0\n"           /* MPRV = 1 */
    "5:\n"
    "  mret\n"
    "4:\n"                           /* S mode */
    "  rdinstret a0\n"
    "  ecall\n"
    "1:\n"                           /* back in M */
    : "+r"(a0) : "r"(r), "r"((uint64_t)mprv) : "t0", "memory");
  return a0;
}

static uint64_t run_tests(void)
{
  unsigned me = (unsigned)hart_id();
  uint64_t *r = rec[me];
  uint64_t v1, v2, t0n;

#define FAIL(n) return 0x8400 | (n)
  CSRW(mscratch, r);
  CSRW(mtvec, m_trap);

  /* 1 */
  *PROGRESS(me) = 1;
  __asm__ volatile ("rdinstret %0" : "=r"(v1));
  __asm__ volatile ("nop\n nop\n nop\n rdinstret %0" : "=r"(v2));
  if (!(v2 > v1)) FAIL(1);

  /* 2 */
  *PROGRESS(me) = 2;
  CSRW(mcounteren, 7);
  t0n = r[0];
  v1 = s_rdinstret(r, 0);
  if (r[0] != t0n || v1 == 0) FAIL(2);

  /* 3 */
  *PROGRESS(me) = 3;
  CSRW(mcounteren, 3);              /* CY, TM only */
  t0n = r[0];
  (void) s_rdinstret(r, 0);
  if (r[0] != t0n + 1 || r[1] != 2) FAIL(3);
  CSRW(mcounteren, 7);

  /* 4 */
  *PROGRESS(me) = 4;
  (void) s_rdinstret(r, 1);
  if (CSRR(mstatus) & (1ULL << 17)) FAIL(4);

  /* 5 */
  *PROGRESS(me) = 5;
  t0n = r[0];
  __asm__ volatile ("csrw 0xC02, %0" :: "r"(1234ULL) : "memory");
  if (r[0] != t0n + 1 || r[1] != 2) FAIL(5);

  /* 6 */
  *PROGRESS(me) = 6;
  t0n = r[0];
  {
    uint64_t bad = 0;
    CSRW(pmpaddr0, 0x0000123456ULL); if (CSRR(pmpaddr0) == 0) bad |= 1;
    CSRW(pmpaddr1, 0x00000ABCDEULL); if (CSRR(pmpaddr1) == 0) bad |= 2;
    CSRW(pmpaddr2, 0x3FFFFFFFFFULL); if (CSRR(pmpaddr2) == 0) bad |= 4;
    CSRW(pmpaddr3, 0x0000000001ULL); if (CSRR(pmpaddr3) == 0) bad |= 8;
    CSRW(pmpaddr0, 0); CSRW(pmpaddr1, 0); CSRW(pmpaddr2, 0); CSRW(pmpaddr3, 0);
    *OBS(me) = ((r[0] - t0n) << 8) | bad;     /* observation only */
  }
#undef FAIL
  *PROGRESS(me) = 0xFF;
  dual_fence();
  return 0;
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
