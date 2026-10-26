/* plic_irq.c
 *
 * BP-DV-058: external interrupts through the shared PLIC, on both harts at
 * the same time. The testbench drives plic_src_i with the PLIC testbench's
 * interrupt agent (VERIF/plic_verif/plic_tb/agent/irq_agent); this program
 * asks for source changes through a command mailbox in the host window:
 *
 *   0x0010_8E00  RAISE       sd mask: src |=  mask
 *   0x0010_8E08  DROP        sd mask: src &= ~mask
 *   0x0010_8E10  RAISE_LATE  sd mask: src |= mask after a delay (for wfi)
 *   0x0010_8E20  STATUS      ld: the src[63:0] the testbench drives now
 *
 * (cpu_tb/env/plic_irq_ctrl.sv applies the commands and updates STATUS.)
 *
 * PLIC (64 sources, 4 targets, 8 priority levels, register map as in
 * plic_reg_access.c): source index s has claim ID s+1, EL bit 1 = rising
 * edge, a target interrupts when the best enabled pending priority is
 * greater than its threshold, ties go to the lower ID.
 * Targets: hart h uses 2h (M external, mcause 11) and 2h+1 (S external,
 * mcause 9). Sources: hart 0 uses 1-5, hart 1 uses 33-37 (disjoint PLIC
 * words, so the harts never write the same register).
 *
 * Checks (per hart):
 *   1     CONFIG0/1
 *   2-9   PRIORITY0-7 reset values = plic_priority_config.svh defaults
 *         (read by both harts before either writes; barrier)
 *   10    claim with nothing pending returns 0 on both own targets
 *   11    level source -> M-external interrupt: mcause 11, claim = ID,
 *         handler drops the source and completes; no second interrupt,
 *         mip.MEIP clear afterwards
 *   12    level source still high at complete -> pends again (2 entries)
 *   13    source not enabled (IE = 0): no interrupt, MEIP clear;
 *         enabling it delivers the pending interrupt
 *   14    priority == threshold: no interrupt; lower threshold: interrupt
 *   15    priority 0: never; priority 1: interrupt
 *   16    priority order with MIE off, claimed by hand: higher priority
 *         first, equal priority -> lower ID first, then 0
 *   17    edge source pulsed 3 times while masked: exactly 3 claims
 *         (gateway pending counter), then 0
 *   18    S-target source -> S-external interrupt in M-mode (mcause 9),
 *         claimed on target 2h+1
 *   19    wfi is woken by an external interrupt raised while waiting
 *
 * Progress marker (check about to run) at 0x0010_8F00 (+0x10 per hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x5800 | first failing check.
 */

#include <stdint.h>
#include "dual_core.h"

/* ---- PLIC ---- */
#define PLIC_BASE          0x00500000UL
#define PLIC_REG(off)      ((volatile uint32_t *)(PLIC_BASE + (off)))
#define PLIC_CONFIG0       0x00
#define PLIC_CONFIG1       0x04
#define PLIC_EL(w)         (0x08 + 4 * (w))
#define PLIC_PRIORITY(w)   (0x10 + 4 * (w))
#define PLIC_IE(t, w)      (0x30 + 8 * (t) + 4 * (w))
#define PLIC_THRESHOLD(t)  (0x50 + 4 * (t))
#define PLIC_ID(t)         (0x60 + 4 * (t))
#define EXP_CONFIG0        0x00040040U
#define EXP_CONFIG1        0x00010008U

/* Reset priorities from DSN/ip/compute/plic/dsn/include/plic_priority_config.svh
 * (8 sources per word, 4-bit fields). */
static const uint32_t exp_priority[8] = {
  0x21211111U, 0x43232121U, 0x43434133U, 0x55521662U,
  0x77717415U, 0x55553300U, 0x11333362U, 0x00000000U
};

/* ---- testbench interrupt-source mailbox ---- */
#define IRQ_RAISE          ((volatile uint64_t *)0x00108E00UL)
#define IRQ_DROP           ((volatile uint64_t *)0x00108E08UL)
#define IRQ_RAISE_LATE     ((volatile uint64_t *)0x00108E10UL)
#define IRQ_STATUS         ((volatile uint64_t *)0x00108E20UL)
#define BARRIER_SLOT(h)    ((volatile uint64_t *)(0x00108E80UL + (h) * 16UL))
#define PROGRESS(h)        ((volatile uint64_t *)(0x00108F00UL + (h) * 16UL))

#define MCAUSE_MEXT        0x800000000000000BULL
#define MCAUSE_SEXT        0x8000000000000009ULL
#define MIE_MEIE           (1ULL << 11)
#define MIE_SEIE           (1ULL << 9)
#define MIP_MEIP           (1ULL << 11)
#define MSTATUS_MIE        (1ULL << 3)

#define WAIT_CYCLES        80000UL     /* for an interrupt / a source change */
#define QUIET_CYCLES       6000UL      /* "no interrupt" window */

#define CSRR(csr)        ({ uint64_t _v; __asm__ volatile ("csrr %0, " #csr : "=r"(_v) :: "memory"); _v; })
#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v)     __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v)     __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

enum { MODE_DROP = 0, MODE_KEEP = 1 };

/* Per-hart interrupt record, one cache line each. */
struct hstate {
  uint64_t count;          /* external interrupts taken */
  uint64_t cause[4];       /* mcause of the last 4 entries */
  uint64_t id[4];          /* claim ID of the last 4 entries */
  uint64_t mode;           /* MODE_DROP / MODE_KEEP */
  uint64_t keep;           /* MODE_KEEP: entries to complete without dropping */
  uint64_t bad;            /* unexpected traps */
  uint64_t pad[4];
};
static volatile struct hstate hs[NUM_HARTS] __attribute__((aligned(64)));

static inline uint32_t plic_rd(uint32_t off)             { return *PLIC_REG(off); }
static inline void     plic_wr(uint32_t off, uint32_t v) { *PLIC_REG(off) = v; }

static unsigned src_base(void) { return hart_id() ? 33 : 1; }
static unsigned tgt_m(void)    { return 2 * (unsigned)hart_id(); }
static unsigned tgt_s(void)    { return 2 * (unsigned)hart_id() + 1; }
static uint64_t bit(unsigned s) { return 1ULL << s; }

/* Write mask to a mailbox command and wait until STATUS shows it applied. */
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
/* Raise without waiting for STATUS: used when the interrupt is taken at
 * once - the handler may drop the source before STATUS is read back. */
static void raise_now(uint64_t mask) { *IRQ_RAISE = mask; dual_fence(); }
static int drop_src(uint64_t mask)  { return tb_cmd(IRQ_DROP, mask, 0); }

static void set_prio(unsigned s, unsigned p)
{
  uint32_t off = PLIC_PRIORITY(s / 8), sh = 4 * (s % 8);
  plic_wr(off, (plic_rd(off) & ~(0xFU << sh)) | ((p & 7U) << sh));
}
static void set_ie(unsigned t, uint64_t mask)
{
  plic_wr(PLIC_IE(t, 0), (uint32_t)mask);
  plic_wr(PLIC_IE(t, 1), (uint32_t)(mask >> 32));
}
static void set_edge(unsigned s, int edge)
{
  uint32_t off = PLIC_EL(s / 32), b = 1U << (s % 32);
  plic_wr(off, edge ? (plic_rd(off) | b) : (plic_rd(off) & ~b));
}
static uint32_t claim(unsigned t)               { return plic_rd(PLIC_ID(t)); }
static void     complete(unsigned t, uint32_t id) { plic_wr(PLIC_ID(t), id); }

/* ---- M-mode trap handler ---- */
void __attribute__((interrupt("machine"), aligned(4))) irq_handler(void)
{
  unsigned h = (unsigned)hart_id();
  uint64_t cause = CSRR(mcause);
  unsigned t;
  uint32_t id;
  uint64_t n = hs[h].count;

  if (cause == MCAUSE_MEXT)
    t = 2 * h;
  else if (cause == MCAUSE_SEXT)
    t = 2 * h + 1;
  else {
    hs[h].bad++;
    if (!(cause >> 63))                       /* exception: skip it */
      CSRW(mepc, CSRR(mepc) + 4);
    else                                      /* other interrupt: mask it */
      CSRC(mie, 1ULL << (cause & 63));
    return;
  }

  id = claim(t);
  hs[h].cause[n % 4] = cause;
  hs[h].id[n % 4]    = id;
  if (id != 0) {
    if (hs[h].mode == MODE_KEEP && hs[h].keep != 0)
      hs[h].keep--;                           /* level source stays high */
    else
      drop_src(bit(id - 1));
    complete(t, id);
  }
  hs[h].count = n + 1;
}

/* ---- checks ---- */
struct st { unsigned n, fails, first; };
static void check(struct st *s, int ok)
{
  s->n++;
  if (!ok) {
#ifdef DEBUG_DUMP
    {   /* failing check number and the handler record, as AXI writes:
         * 0x0010_9000 + hart*0x800: [0] check, [1] count, [2..5] cause,
         * [6..9] id, [10] bad, [11] mip */
      volatile uint64_t *p = (volatile uint64_t *)(0x00109000UL + hart_id() * 0x800UL);
      unsigned h = (unsigned)hart_id();
      p[0] = s->n; p[1] = hs[h].count;
      for (unsigned i = 0; i < 4; i++) { p[2 + i] = hs[h].cause[i]; p[6 + i] = hs[h].id[i]; }
      p[10] = hs[h].bad; p[11] = CSRR(mip);
      dual_fence();
    }
#endif
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

static int wait_count(uint64_t target)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (hs[hart_id()].count >= target)
      return 1;
  return 0;
}
/* 1 if no interrupt arrives for QUIET_CYCLES */
static int quiet(void)
{
  uint64_t c = hs[hart_id()].count, start = dual_cycles();
  while ((dual_cycles() - start) < QUIET_CYCLES)
    if (hs[hart_id()].count != c)
      return 0;
  return 1;
}
static int meip_clear(void)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < QUIET_CYCLES)
    if (!(CSRR(mip) & MIP_MEIP))
      return 1;
  return 0;
}
static int meip_set(void)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (CSRR(mip) & MIP_MEIP)
      return 1;
  return 0;
}
static int last_is(uint64_t cause, uint32_t id)
{
  unsigned h = (unsigned)hart_id();
  uint64_t n = hs[h].count - 1;
  return hs[h].cause[n % 4] == cause && hs[h].id[n % 4] == id;
}

static int barrier(uint64_t phase)
{
  uint64_t me = hart_id(), other = me ^ 1, start;
  dual_fence();
  *BARRIER_SLOT(me) = phase;
  dual_fence();
  start = dual_cycles();
  while ((dual_cycles() - start) < 4 * WAIT_CYCLES)
    if (*BARRIER_SLOT(other) >= phase)
      return 1;
  return 0;
}

static uint64_t run_irq(void)
{
  unsigned h = (unsigned)hart_id();
  unsigned sa = src_base(), sb = sa + 1, sc = sa + 2, se = sa + 3, ss = sa + 4;
  unsigned tm = tgt_m(), ts = tgt_s();
  struct st s = { 0, 0, 0 };
  uint64_t c0;

  CSRW(mtvec, irq_handler);
  CSRW(mie, 0);
  CSRC(mstatus, MSTATUS_MIE);
  CSRW(mideleg, 0);
  hs[h].count = 0;
  hs[h].mode = MODE_DROP;

  /* 1 configuration */
  progress(&s);
  check(&s, plic_rd(PLIC_CONFIG0) == EXP_CONFIG0 && plic_rd(PLIC_CONFIG1) == EXP_CONFIG1);

  /* 2-9 reset priorities, before any hart writes a priority */
  for (unsigned w = 0; w < 8; w++) {
    progress(&s);
    check(&s, plic_rd(PLIC_PRIORITY(w)) == exp_priority[w]);
  }
  if (!barrier(1))
    check(&s, 0);                             /* (counts as an extra failure) */

  /* common setup: own sources level, own targets threshold 0, nothing enabled */
  for (unsigned k = 0; k < 5; k++) {
    set_edge(sa + k, 0);
    set_prio(sa + k, 0);
  }
  set_ie(tm, 0);
  set_ie(ts, 0);
  plic_wr(PLIC_THRESHOLD(tm), 0);
  plic_wr(PLIC_THRESHOLD(ts), 0);

  /* 10 nothing pending */
  progress(&s);
  check(&s, claim(tm) == 0 && claim(ts) == 0);

  /* 11 level interrupt, M external */
  progress(&s);
  set_prio(sa, 3);
  set_ie(tm, bit(sa));
  CSRW(mie, MIE_MEIE);
  CSRS(mstatus, MSTATUS_MIE);
  c0 = hs[h].count;
  raise_now(bit(sa));
  check(&s, wait_count(c0 + 1) && quiet()
            && hs[h].count == c0 + 1 && last_is(MCAUSE_MEXT, sa + 1)
            && meip_clear() && hs[h].bad == 0);

  /* 12 still high at complete -> pends again */
  progress(&s);
  hs[h].mode = MODE_KEEP;
  hs[h].keep = 1;
  c0 = hs[h].count;
  raise_now(bit(sa));
  check(&s, wait_count(c0 + 2) && quiet()
            && hs[h].count == c0 + 2 && last_is(MCAUSE_MEXT, sa + 1)
            && hs[h].id[c0 % 4] == sa + 1);
  hs[h].mode = MODE_DROP;

  /* 13 not enabled -> nothing; enable -> delivered */
  progress(&s);
  set_ie(tm, 0);
  c0 = hs[h].count;
  {
    int ok = raise_src(bit(sa)) && quiet() && meip_clear();
    set_ie(tm, bit(sa));
    ok = ok && wait_count(c0 + 1) && quiet() && hs[h].count == c0 + 1
            && last_is(MCAUSE_MEXT, sa + 1);
    check(&s, ok);
  }

  /* 14 threshold */
  progress(&s);
  plic_wr(PLIC_THRESHOLD(tm), 3);             /* priority 3 is not > 3 */
  c0 = hs[h].count;
  {
    int ok = raise_src(bit(sa)) && quiet();
    plic_wr(PLIC_THRESHOLD(tm), 2);
    ok = ok && wait_count(c0 + 1) && quiet() && hs[h].count == c0 + 1
            && last_is(MCAUSE_MEXT, sa + 1);
    check(&s, ok);
  }
  plic_wr(PLIC_THRESHOLD(tm), 0);

  /* 15 priority 0 never interrupts */
  progress(&s);
  set_prio(sa, 0);
  c0 = hs[h].count;
  {
    int ok = raise_src(bit(sa)) && quiet();
    set_prio(sa, 1);
    ok = ok && wait_count(c0 + 1) && quiet() && hs[h].count == c0 + 1
            && last_is(MCAUSE_MEXT, sa + 1);
    check(&s, ok);
  }

  /* 16 priority order, claimed by hand with MIE off */
  progress(&s);
  CSRC(mstatus, MSTATUS_MIE);
  set_prio(sa, 2);
  set_prio(sb, 5);
  set_prio(sc, 2);
  set_ie(tm, bit(sa) | bit(sb) | bit(sc));
  {
    uint32_t i1, i2, i3, i4;
    int ok = raise_src(bit(sa) | bit(sb) | bit(sc)) && meip_set();
    i1 = claim(tm); drop_src(bit(sb)); complete(tm, i1);
    i2 = claim(tm); drop_src(bit(sa)); complete(tm, i2);
    i3 = claim(tm); drop_src(bit(sc)); complete(tm, i3);
    i4 = claim(tm);
    check(&s, ok && i1 == sb + 1 && i2 == sa + 1 && i3 == sc + 1 && i4 == 0);
  }

  /* 17 edge source: 3 pulses -> 3 claims */
  progress(&s);
  set_edge(se, 1);
  set_prio(se, 4);
  set_ie(tm, bit(se));
  {
    int ok = 1;
    uint32_t got = 0, id;
    for (unsigned p = 0; p < 3; p++)
      ok = ok && raise_src(bit(se)) && drop_src(bit(se));
    for (unsigned k = 0; k < 5; k++) {
      uint64_t start = dual_cycles();
      while ((dual_cycles() - start) < 200)   /* let the gateway re-pend */
        ;
      id = claim(tm);
      if (id == 0)
        break;
      ok = ok && id == se + 1;
      got++;
      complete(tm, id);
    }
    check(&s, ok && got == 3);
  }
  set_edge(se, 0);

  /* 18 S-target source -> S external interrupt */
  progress(&s);
  set_ie(tm, 0);
  set_prio(ss, 3);
  set_ie(ts, bit(ss));
  CSRW(mie, MIE_SEIE);
  CSRS(mstatus, MSTATUS_MIE);
  c0 = hs[h].count;
  raise_now(bit(ss));
  check(&s, wait_count(c0 + 1) && quiet()
            && hs[h].count == c0 + 1 && last_is(MCAUSE_SEXT, ss + 1));
  set_ie(ts, 0);

  /* 19 wfi woken by an interrupt raised while waiting */
  progress(&s);
  set_prio(sa, 3);
  set_ie(tm, bit(sa));
  CSRW(mie, MIE_MEIE);
  c0 = hs[h].count;
  *IRQ_RAISE_LATE = bit(sa);
  dual_fence();
  __asm__ volatile ("wfi" ::: "memory");
  /* (also: no unexpected trap anywhere in the run) */
  check(&s, wait_count(c0 + 1) && quiet() && hs[h].count == c0 + 1
            && last_is(MCAUSE_MEXT, sa + 1) && hs[h].bad == 0);

  /* done: interrupts off, nothing enabled, wait for the other hart */
  CSRC(mstatus, MSTATUS_MIE);
  CSRW(mie, 0);
  set_ie(tm, 0);
  (void)barrier(2);

  *PROGRESS(h) = 0xFF;
  dual_fence();
  return s.fails ? (((uint64_t)s.fails << 16) | 0x5800 | s.first) : 0;
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
  tohost_exit(run_irq());
}
