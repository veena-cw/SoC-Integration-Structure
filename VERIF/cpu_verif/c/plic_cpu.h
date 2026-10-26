/* plic_cpu.h - shared PLIC helpers for the CPU-level PLIC tests
 * (BP-DV-059 plic_reg_full.c, BP-DV-060/061 plic_irq_scenarios.c).
 *
 * PLIC: 64 sources, 4 targets, 8 priority levels (map as in
 * plic_reg_access.c). Source index s has claim ID s+1. Target t is
 * delivered to core t/2: MEIP (mip bit 11) for even t, SEIP (bit 9) for odd.
 *
 * Interrupt sources are driven by the PLIC testbench's interrupt agent
 * through cpu_tb/env/plic_irq_ctrl.sv (mailbox at 0x0010_8E00, see
 * plic_irq.c).
 */
#ifndef PLIC_CPU_H
#define PLIC_CPU_H

#include <stdint.h>
#include "dual_core.h"

#define PLIC_BASE          0x00500000UL
#define PLIC_REG(off)      ((volatile uint32_t *)(PLIC_BASE + (off)))
#define PLIC_CONFIG0       0x00
#define PLIC_CONFIG1       0x04
#define PLIC_EL(w)         (0x08 + 4 * (w))
#define PLIC_PRIORITY(w)   (0x10 + 4 * (w))
#define PLIC_IE(t, w)      (0x30 + 8 * (t) + 4 * (w))
#define PLIC_THRESHOLD(t)  (0x50 + 4 * (t))
#define PLIC_ID(t)         (0x60 + 4 * (t))
#define PLIC_SOURCES       64
#define PLIC_TARGETS       4
#define PLIC_PRIORITIES    8
#define EXP_CONFIG0        0x00040040U
#define EXP_CONFIG1        0x00010008U
#define PRIORITY_MASK      0x77777777U     /* 3 bits per 4-bit field */
#define THRESHOLD_MASK     0x00000007U

/* Reset priorities from DSN/ip/compute/plic/dsn/include/plic_priority_config.svh */
static const uint32_t plic_exp_priority[8] = {
  0x21211111U, 0x43232121U, 0x43434133U, 0x55521662U,
  0x77717415U, 0x55553300U, 0x11333362U, 0x00000000U
};

/* testbench source mailbox (plic_irq_ctrl) */
#define IRQ_RAISE          ((volatile uint64_t *)0x00108E00UL)
#define IRQ_DROP           ((volatile uint64_t *)0x00108E08UL)
#define IRQ_STATUS         ((volatile uint64_t *)0x00108E20UL)
#define PLIC_PROGRESS(h)   ((volatile uint64_t *)(0x00108F00UL + (h) * 16UL))

#define MIP_MEIP           (1ULL << 11)
#define MIP_SEIP           (1ULL << 9)
#define WAIT_CYCLES        80000UL
#define SETTLE_CYCLES      600UL     /* src/irq/complete -> mip, through the CDC */

#define CSRR(csr)  ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })

static inline uint32_t plic_rd(uint32_t off)             { return *PLIC_REG(off); }
static inline void     plic_wr(uint32_t off, uint32_t v) { *PLIC_REG(off) = v; }
static inline uint64_t sbit(unsigned s)                  { return 1ULL << s; }

static void delay(uint64_t cycles)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < cycles)
    ;
}

/* ---- checks: numbered, per hart ---- */
struct st { unsigned n, fails, first; };
static void check(struct st *s, int ok)
{
  s->n++;
  if (!ok) {
#ifdef DEBUG_DUMP
    *(volatile uint64_t *)(0x00109400UL + hart_id() * 0x800UL) = s->n;
    dual_fence();
#endif
    if (s->fails == 0)
      s->first = s->n;
    s->fails++;
  }
}
static void progress(struct st *s)
{
  *PLIC_PROGRESS(hart_id()) = s->n + 1;
  dual_fence();
}
static uint64_t st_result(struct st *s, uint32_t tag)
{
  return s->fails ? (((uint64_t)s->fails << 16) | tag | s->first) : 0;
}

/* ---- interrupt sources ---- */
static int tb_cmd(volatile uint64_t *cmd, uint64_t mask, int set)
{
  uint64_t start;
  *cmd = mask;
  dual_fence();
  start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if ((*IRQ_STATUS & mask) == (set ? mask : 0))
      return 1;
  return 0;
}
static int raise_src(uint64_t mask) { return tb_cmd(IRQ_RAISE, mask, 1); }
static int drop_src(uint64_t mask)  { return tb_cmd(IRQ_DROP, mask, 0); }

/* ---- PLIC registers ---- */
static void set_priority(unsigned s, unsigned p)
{
  uint32_t off = PLIC_PRIORITY(s / 8), sh = 4 * (s % 8);
  plic_wr(off, (plic_rd(off) & ~(0xFU << sh)) | ((p & 7U) << sh));
}
static void set_enable(unsigned t, uint64_t mask)
{
  plic_wr(PLIC_IE(t, 0), (uint32_t)mask);
  plic_wr(PLIC_IE(t, 1), (uint32_t)(mask >> 32));
}
static void set_threshold(unsigned t, unsigned th) { plic_wr(PLIC_THRESHOLD(t), th); }
static uint32_t claim(unsigned t)                  { return plic_rd(PLIC_ID(t)); }
static void complete(unsigned t, uint32_t id)      { plic_wr(PLIC_ID(t), id); }

/* ---- remote mip: core 1 samples its own mip for core 0 ----
 * Cached, coherent mailbox (no AXI traffic while core 1 waits). */
struct remote_mip {
  volatile uint64_t req, ack, mip, done;
  uint64_t pad[4];
};
static struct remote_mip rmip __attribute__((aligned(64)));

static void remote_mip_server(void)            /* core 1 */
{
  uint64_t seen = 0;
  while (!rmip.done) {
    uint64_t r = rmip.req;
    if (r != seen) {
      rmip.mip = CSRR(mip);
      __asm__ volatile ("fence rw, rw" ::: "memory");
      rmip.ack = r;
      seen = r;
    }
  }
}
static uint64_t core_mip(unsigned core)        /* called by core 0 */
{
  uint64_t r, start;
  if (core == 0)
    return CSRR(mip);
  r = rmip.req + 1;
  rmip.req = r;
  __asm__ volatile ("fence rw, rw" ::: "memory");
  start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (rmip.ack == r) {
      __asm__ volatile ("fence rw, rw" ::: "memory");
      return rmip.mip;
    }
  return ~0ULL;                                 /* no answer */
}
static int irq_of(unsigned t)
{
  uint64_t m = core_mip(t / 2);
  if (m == ~0ULL)
    return -1;
  return (m & ((t & 1) ? MIP_SEIP : MIP_MEIP)) ? 1 : 0;
}
/* After SETTLE_CYCLES, target t's interrupt line must read v (waits up to
 * WAIT_CYCLES for it to get there). */
static int irq_is(unsigned t, int v)
{
  uint64_t start;
  delay(SETTLE_CYCLES);
  start = dual_cycles();
  do {
    if (irq_of(t) == v)
      return 1;
  } while ((dual_cycles() - start) < WAIT_CYCLES);
  return 0;
}
/* 4-bit view {t3,t2,t1,t0} of all targets */
static unsigned irq_all(void)
{
  unsigned v = 0;
  delay(SETTLE_CYCLES);
  for (unsigned t = 0; t < PLIC_TARGETS; t++)
    v |= (irq_of(t) == 1) << t;
  return v;
}

/* Reset the parts of the PLIC a scenario uses: nothing enabled, threshold
 * 0, all testbench sources low. */
static void plic_quiet(void)
{
  for (unsigned t = 0; t < PLIC_TARGETS; t++) {
    set_enable(t, 0);
    set_threshold(t, 0);
  }
  drop_src(~0ULL);
}

#endif
