/* clint_timer.c
 *
 * BP-DV-068: CLINT timer and software interrupts on both harts
 * (bp_me_clint_slice.sv). No other test uses mtime / mtimecmp / msip.
 * CLINT at 0x0030_0000, one 8-byte register per core (core h at +8*h):
 *   +0x0000 msip (bit 0)   +0x4000 mtimecmp   +0x8000 mtimesel (2 bits)
 *   +0xBFF8 mtime (read-only: "Cannot write the RTC"; core 1's slice)
 * mtimesel: 0 = core clock (reset), 1 = core clock / 8, 2 = rt_clk_i,
 * 3 = stopped.
 *
 * Checks per hart (numbered):
 *   1  mtimecmp full 64-bit read/write: ~0, 0x5555.., 0xAAAA.., 0
 *   2  mtime counts up
 *   3  a write to mtime is ignored (mtime keeps counting from its value)
 *   4  mtimesel reads 0 after reset, reads back 1 and 3
 *   5  mtimecmp <= mtime sets mip.MTIP with MTIE = 0 (no trap);
 *      mtimecmp = ~0 clears it
 *   6  timer interrupt taken: mcause = 0x8000_0000_0000_0007, the handler
 *      sets mtimecmp = ~0, MTIP is clear afterwards
 *   7  wfi wakes on the timer interrupt
 *   8  msip = 1 with MSIE = 0: mip.MSIP set, msip reads 1, msip = 0 clears
 *   9  software interrupt taken: mcause = 0x8000_0000_0000_0003, the
 *      handler clears msip
 *   10 IPI: the other hart writes this hart's msip; the interrupt is taken
 *   11 mip.MTIP / MSIP are read-only in mip (csrs mip has no effect)
 *   12 mtimesel 1 counts slower than 0 (/8), 3 stops mtime (hart 1 only:
 *      the mtime address is served by core 1's slice). Run last: it puts
 *      core 1's mtime behind core 0's, and core 0's copy is not readable
 *
 * Progress marker (check number) at 0x0010_8400 (+0x10 per hart).
 * Check 7 diagnostics at 0x0010_8700 (+0x20 per hart): mtime when armed,
 * mtime after the wake-up, 1 if the interrupt came before the wfi.
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x6800 | first failing check (0xE0 = barrier timeout).
 */

#include <stdint.h>
#include "dual_core.h"

/* CLINT registers are interleaved per core: bp_me_addr_to_cce_id routes a
 * CLINT address to core addr[3 +: core_id_width] (the tile field is not
 * used), so core h's copy of a register is at base + 8 * h. mtime is only
 * matched at 0x0030_BFF8 (bit 3 set -> core 1's slice); every slice counts
 * the same clock, so both harts read that one. */
#define CLINT_BASE      0x00300000ULL
#define MSIP(h)         ((volatile uint64_t *)(CLINT_BASE + 0x0000 + 8ULL * (h)))
#define MTIMECMP(h)     ((volatile uint64_t *)(CLINT_BASE + 0x4000 + 8ULL * (h)))
#define MTIMESEL(h)     ((volatile uint64_t *)(CLINT_BASE + 0x8000 + 8ULL * (h)))
#define MTIME(h)        ((volatile uint64_t *)(CLINT_BASE + 0xBFF8))

#define MIP_MSIP        (1ULL << 3)
#define MIP_MTIP        (1ULL << 7)
#define MSTATUS_MIE     (1ULL << 3)
#define IRQ_MSI         0x8000000000000003ULL
#define IRQ_MTI         0x8000000000000007ULL

#define BARRIER_SLOT(h) ((volatile uint64_t *)(0x00108500UL + (h) * 16UL))
#define PROGRESS(h)     ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define READY(h)        ((volatile uint64_t *)(0x00108600UL + (h) * 16UL))
#define WAIT_CYCLES     200000UL
#define DIAG(h)         ((volatile uint64_t *)(0x00108700UL + (h) * 0x20UL))

#define CSRR(csr)       ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)    __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v)    __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v)    __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

/* Per-hart trap record (mscratch points here):
 *   0  count, 1 last mcause, 2 mtimecmp address, 3 msip address,
 *   4  interrupt count, 5/6 saved t0/t1 */
static volatile uint64_t trec[NUM_HARTS][8] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global clint_trap\n"
  "clint_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 40(t6)\n"
  "  sd t1, 48(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t1, mcause\n"
  "  sd t1, 8(t6)\n"
  "  bgez t1, 3f\n"                /* exception: skip the instruction */
  "  ld t0, 32(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 32(t6)\n"
  "  slli t1, t1, 1\n"
  "  srli t1, t1, 1\n"             /* interrupt code */
  "  li t0, 7\n"
  "  bne t1, t0, 1f\n"
  "  ld t0, 16(t6)\n"              /* timer: mtimecmp = ~0 */
  "  li t1, -1\n"
  "  sd t1, 0(t0)\n"
  "  j 2f\n"
  "1:\n"
  "  li t0, 3\n"
  "  bne t1, t0, 2f\n"
  "  ld t0, 24(t6)\n"              /* software: msip = 0 */
  "  sd zero, 0(t0)\n"
  "2:\n"
  "  fence iorw, iorw\n"
  "  j 4f\n"
  "3:\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "4:\n"
  "  ld t0, 40(t6)\n"
  "  ld t1, 48(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char clint_trap[];

struct st { unsigned n, fails, first; };

static void check(struct st *s, int ok)
{
  s->n++;
  *PROGRESS(hart_id()) = s->n;
  if (!ok) {
    if (s->fails == 0)
      s->first = s->n;
    s->fails++;
  }
}

static inline void fence_io(void) { __asm__ volatile ("fence iorw, iorw" ::: "memory"); }

static void spin(uint64_t cycles)
{
  uint64_t t = dual_cycles();
  while (dual_cycles() - t < cycles)
    ;
}

/* wait until the interrupt count passes `n` (or time out) */
static int wait_irq(volatile uint64_t *r, uint64_t n)
{
  uint64_t t = dual_cycles();
  while (r[4] == n)
    if (dual_cycles() - t > WAIT_CYCLES)
      return 0;
  return 1;
}

static int barrier(uint64_t phase)
{
  uint64_t me = hart_id(), other = me ^ 1, t;
  fence_io();
  *BARRIER_SLOT(me) = phase;
  fence_io();
  t = dual_cycles();
  while (dual_cycles() - t < WAIT_CYCLES)
    if (*BARRIER_SLOT(other) >= phase)
      return 1;
  return 0;
}

static uint64_t run_clint(void)
{
  unsigned me = (unsigned)hart_id(), other = me ^ 1;
  volatile uint64_t *r = trec[me];
  struct st s = { 0, 0, 0 };
  uint64_t a, b, n, phase = 0;
  int ok;

#define BARRIER() do { if (!barrier(++phase)) { s.fails++; if (!s.first) s.first = 0xE0; goto out; } } while (0)

  r[2] = (uint64_t)MTIMECMP(me);
  r[3] = (uint64_t)MSIP(me);
  CSRW(mscratch, r);
  CSRW(mtvec, clint_trap);
  CSRW(mie, 0);
  *MTIMECMP(me) = ~0ULL;
  *MSIP(me) = 0;
  fence_io();

  /* 1 mtimecmp full width */
  {
    static const uint64_t pat[4] = { ~0ULL, 0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, 0 };
    ok = 1;
    for (unsigned i = 0; i < 4; i++) {
      *MTIMECMP(me) = pat[i];
      ok &= *MTIMECMP(me) == pat[i];
    }
    *MTIMECMP(me) = ~0ULL;
    check(&s, ok);
  }

  /* 2 mtime counts */
  a = *MTIME(me); spin(200); b = *MTIME(me);
  check(&s, b > a);

  /* 3 mtime write ignored */
  a = *MTIME(me);
  *MTIME(me) = 0;
  fence_io();
  b = *MTIME(me);
  check(&s, b >= a);

  /* mtimesel changes the rate of this core's mtime, and the only readable
   * mtime is core 1's: keep checks 4-5 apart from the other hart's mtime
   * reads, and measure rates on hart 1 only. */
  BARRIER();

  /* 4 mtimesel readback */
  ok = (*MTIMESEL(me) & 3) == 0;
  *MTIMESEL(me) = 1; ok &= (*MTIMESEL(me) & 3) == 1;
  *MTIMESEL(me) = 3; ok &= (*MTIMESEL(me) & 3) == 3;
  *MTIMESEL(me) = 0; ok &= (*MTIMESEL(me) & 3) == 0;
  check(&s, ok);

  BARRIER();

  /* 5 MTIP pending without enable */
  n = r[0];
  *MTIMECMP(me) = 0; fence_io(); spin(100);
  a = CSRR(mip);
  *MTIMECMP(me) = ~0ULL; fence_io(); spin(100);
  b = CSRR(mip);
  check(&s, (a & MIP_MTIP) && !(b & MIP_MTIP) && r[0] == n);

  /* 6 timer interrupt taken */
  n = r[4];
  CSRS(mie, MIP_MTIP);
  CSRS(mstatus, MSTATUS_MIE);
  *MTIMECMP(me) = *MTIME(me) + 300;
  fence_io();
  ok = wait_irq(r, n) && r[1] == IRQ_MTI;
  spin(100);
  ok &= !(CSRR(mip) & MIP_MTIP);
  check(&s, ok);

  /* 7 wfi wake-up on the timer (3000 ticks: the interrupt must not fire
   * before the wfi, or the wfi would wait for a second one) */
  n = r[4];
  a = *MTIME(me);
  *MTIMECMP(me) = a + 3000;
  fence_io();
  b = r[4];                              /* != n: fired before the wfi */
  if (b == n)
    __asm__ volatile ("wfi" ::: "memory");
  ok = wait_irq(r, n) && r[1] == IRQ_MTI && b == n;
  DIAG(me)[0] = a;                       /* mtime when armed */
  DIAG(me)[1] = *MTIME(me);              /* mtime after the wake-up */
  DIAG(me)[2] = (b != n);                /* 1 = interrupt before the wfi */
  dual_fence();
  CSRC(mstatus, MSTATUS_MIE);
  CSRC(mie, MIP_MTIP);
  check(&s, ok);

  /* 8 msip pending without enable */
  *MSIP(me) = 1; fence_io(); spin(100);
  a = CSRR(mip);
  ok = (a & MIP_MSIP) && (*MSIP(me) & 1);
  *MSIP(me) = 0; fence_io(); spin(100);
  ok &= !(CSRR(mip) & MIP_MSIP) && (*MSIP(me) & 1) == 0;
  check(&s, ok);

  /* 9 software interrupt taken */
  n = r[4];
  CSRS(mie, MIP_MSIP);
  CSRS(mstatus, MSTATUS_MIE);
  *MSIP(me) = 1;
  fence_io();
  ok = wait_irq(r, n) && r[1] == IRQ_MSI;
  spin(100);
  ok &= !(CSRR(mip) & MIP_MSIP);
  check(&s, ok);

  /* 10 IPI: hart 0 interrupts hart 1, then hart 1 interrupts hart 0 */
  *READY(me) = 0;
  BARRIER();
  for (unsigned target = 1; target <= 2; target++) {
    unsigned t = target & 1;             /* 1 then 0 */
    if (me == t) {
      n = r[4];
      *READY(me) = target;               /* MSIE and MIE are still set */
      fence_io();
      ok = wait_irq(r, n) && r[1] == IRQ_MSI;
      check(&s, ok);
    } else {
      uint64_t t0 = dual_cycles();
      while (*READY(other) != target)
        if (dual_cycles() - t0 > WAIT_CYCLES)
          break;
      *MSIP(other) = 1;                  /* remote msip write */
      fence_io();
    }
    BARRIER();
  }
  CSRC(mstatus, MSTATUS_MIE);
  CSRW(mie, 0);

  /* 11 MTIP / MSIP read-only in mip */
  a = CSRR(mip);
  CSRS(mip, MIP_MTIP | MIP_MSIP);
  b = CSRR(mip);
  check(&s, ((a ^ b) & (MIP_MTIP | MIP_MSIP)) == 0);

  BARRIER();
  /* 12 mtimesel rates: 0 full, 1 /8, 3 stopped (hart 1: its slice serves
   * the mtime address; hart 0 only counts the check). Last, because it
   * leaves core 1's mtime behind core 0's (each core has its own copy). */
  if (me == 0)
    check(&s, 1);
  else {
    uint64_t d0, d1, d3;
    a = *MTIME(me); spin(4000); d0 = *MTIME(me) - a;
    *MTIMESEL(me) = 1; fence_io(); spin(200);
    a = *MTIME(me); spin(4000); d1 = *MTIME(me) - a;
    *MTIMESEL(me) = 3; fence_io(); spin(200);
    a = *MTIME(me); spin(4000); d3 = *MTIME(me) - a;
    *MTIMESEL(me) = 0; fence_io(); spin(200);
    check(&s, d0 > 0 && d1 > 0 && d0 > 4 * d1 && d3 == 0);
  }

out:
  *MTIMECMP(me) = ~0ULL;
  *MSIP(me) = 0;
  *MTIMESEL(me) = 0;
  fence_io();
  *PROGRESS(me) = 0xFF;
  dual_fence();
  return s.fails ? (((uint64_t)s.fails << 16) | 0x6800 | s.first) : 0;
#undef BARRIER
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
  tohost_exit(run_clint());
}
