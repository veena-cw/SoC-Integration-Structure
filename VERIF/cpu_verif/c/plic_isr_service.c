/* plic_isr_service.c
 *
 * BP-DV-062: interrupt service order - claim, service the peripheral,
 * complete. Hart 0 takes real M-external interrupts (mtvec handler, mcause
 * 11) from target 0; hart 1 only reports pass.
 *
 * The "peripheral" is a PLIC source driven by the PLIC testbench's
 * interrupt agent through plic_irq_ctrl (see plic_cpu.h). Its status
 * register is the mailbox STATUS word (bit s = device s requesting) and
 * clearing the device is the mailbox DROP command, so the ISR does what a
 * driver does:
 *
 *   1. claim     ld PLIC ID(0)        -> which device (ID = source + 1)
 *   2. service   ld device status     -> device must still be requesting
 *                sd device clear      -> device drops its level IRQ line
 *   3. complete  sw PLIC ID(0) = ID   -> gateway accepts the source again
 *   4. mret
 *
 * Each handler entry records what it saw at every step.
 *
 * Checks (hart 0):
 *   1  claim with nothing pending returns 0
 *   2  level source s7 (ID 8) -> one entry: mcause 11, claim = 8, device
 *      status bit set when serviced, clear after the device clear
 *   3  while claimed and the device still high, mip.MEIP is low (the PLIC
 *      does not forward a claimed source)
 *   4  after complete + mret: no second entry, MEIP low, claim returns 0
 *   5  two devices pending (s7 priority 2, s12 priority 5): two entries,
 *      s12 first then s7, each serviced (own status bit set) before its
 *      complete, then nothing pending
 *   6  wrong order - complete before servicing a level device: the
 *      source pends again at complete, so a second entry follows whose
 *      service finds the device already idle (spurious). Shows why the
 *      handler must service before completing.
 *   7  no unexpected trap during the run
 *
 * Progress marker (check about to run) at 0x0010_8F00.
 * tohost: (hart1 << 32) | hart0; hart 0 = 0 pass, else
 *   (fail_count << 16) | 0x6200 | first failing check.
 */

#include "plic_cpu.h"

#define MCAUSE_MEXT        0x800000000000000BULL
#define MIE_MEIE           (1ULL << 11)
#define MSTATUS_MIE        (1ULL << 3)
#define QUIET_CYCLES       6000UL      /* "no interrupt" window */

#define CSRW(csr, v)     __asm__ volatile ("csrw " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRS(csr, v)     __asm__ volatile ("csrs " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")
#define CSRC(csr, v)     __asm__ volatile ("csrc " #csr ", %0" :: "r"((uint64_t)(v)) : "memory")

#define DEV_A              7           /* claim ID 8 */
#define DEV_B              12          /* claim ID 13 */
#define TGT                0           /* core 0 M external */

enum { ORDER_SERVICE_FIRST = 0, ORDER_COMPLETE_FIRST = 1 };

/* What one handler entry saw. */
struct entry {
  uint64_t cause;
  uint64_t id;            /* claimed ID */
  uint64_t status_svc;    /* device status read during service */
  uint64_t status_clr;    /* device status after the device clear */
  uint64_t meip_claimed;  /* 1 if MEIP still high while claimed */
};

#define MAX_ENTRIES        8
static volatile struct entry log[MAX_ENTRIES] __attribute__((aligned(64)));
static volatile uint64_t n_entries;
static volatile uint64_t order;
static volatile uint64_t bad;           /* unexpected traps */

/* 1 if MEIP reads low within WAIT_CYCLES */
static int meip_low(void)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (!(CSRR(mip) & MIP_MEIP))
      return 1;
  return 0;
}

static void service(volatile struct entry *e, uint32_t id)
{
  uint64_t dev = sbit(id - 1);
  e->status_svc = *IRQ_STATUS & dev;    /* read the device's status */
  drop_src(dev);                        /* clear it at the device */
  e->status_clr = *IRQ_STATUS & dev;
}

/* ---- M-mode trap handler ---- */
void __attribute__((interrupt("machine"), aligned(4))) irq_handler(void)
{
  uint64_t cause = CSRR(mcause);
  uint64_t n = n_entries;
  volatile struct entry *e = &log[n % MAX_ENTRIES];
  uint32_t id;

  if (cause != MCAUSE_MEXT) {
    bad++;
    if (!(cause >> 63))                       /* exception: skip it */
      CSRW(mepc, CSRR(mepc) + 4);
    else                                      /* other interrupt: mask it */
      CSRC(mie, 1ULL << (cause & 63));
    return;
  }

  id = claim(TGT);                            /* 1. claim */
  e->cause = cause;
  e->id = id;
  e->status_svc = e->status_clr = 0;
  e->meip_claimed = 0;

  if (id != 0) {
    if (order == ORDER_SERVICE_FIRST) {
      e->meip_claimed = !meip_low();          /* device still high here */
      service(e, id);                         /* 2. service the device */
      complete(TGT, id);                      /* 3. complete */
    } else {
      complete(TGT, id);                      /* wrong: complete first */
      dual_fence();
      delay(SETTLE_CYCLES);                   /* gateway sees src still high */
      service(e, id);
    }
  }
  n_entries = n + 1;
}                                             /* 4. mret */

static int wait_entries(uint64_t target)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < WAIT_CYCLES)
    if (n_entries >= target)
      return 1;
  return 0;
}
/* 1 if no handler entry for QUIET_CYCLES */
static int quiet(void)
{
  uint64_t c = n_entries, start = dual_cycles();
  while ((dual_cycles() - start) < QUIET_CYCLES)
    if (n_entries != c)
      return 0;
  return 1;
}
static void set_level(unsigned s)
{
  uint32_t off = PLIC_EL(s / 32);
  plic_wr(off, plic_rd(off) & ~(1U << (s % 32)));
}
/* Entry k was a correctly serviced interrupt of device s. */
static int served_ok(uint64_t k, unsigned s)
{
  volatile struct entry *e = &log[k % MAX_ENTRIES];
  return e->cause == MCAUSE_MEXT && e->id == s + 1
      && e->status_svc == sbit(s) && e->status_clr == 0;
}

static uint64_t run_isr(void)
{
  struct st s = { 0, 0, 0 };
  uint64_t c0;

  CSRW(mtvec, irq_handler);
  CSRW(mie, 0);
  CSRC(mstatus, MSTATUS_MIE);
  CSRW(mideleg, 0);
  n_entries = 0;
  order = ORDER_SERVICE_FIRST;

  plic_quiet();
  set_level(DEV_A);
  set_level(DEV_B);

  /* 1 nothing pending */
  progress(&s);
  check(&s, claim(TGT) == 0);

  /* 2-4 one device: claim -> service -> complete */
  set_priority(DEV_A, 3);
  set_enable(TGT, sbit(DEV_A));
  CSRW(mie, MIE_MEIE);
  CSRS(mstatus, MSTATUS_MIE);
  c0 = n_entries;
  progress(&s);
  *IRQ_RAISE = sbit(DEV_A);                   /* handler may drop it at once */
  dual_fence();
  check(&s, wait_entries(c0 + 1) && served_ok(c0, DEV_A));
  progress(&s);
  check(&s, log[c0 % MAX_ENTRIES].meip_claimed == 0);
  progress(&s);
  check(&s, quiet() && n_entries == c0 + 1 && meip_low() && claim(TGT) == 0);

  /* 5 two devices pending: higher priority served first, each before complete */
  progress(&s);
  CSRC(mstatus, MSTATUS_MIE);
  set_priority(DEV_A, 2);
  set_priority(DEV_B, 5);
  set_enable(TGT, sbit(DEV_A) | sbit(DEV_B));
  c0 = n_entries;
  {
    int ok = raise_src(sbit(DEV_A) | sbit(DEV_B));
    CSRS(mstatus, MSTATUS_MIE);
    ok = ok && wait_entries(c0 + 2) && quiet() && n_entries == c0 + 2
            && served_ok(c0, DEV_B) && served_ok(c0 + 1, DEV_A)
            && meip_low() && claim(TGT) == 0;   /* (MEIP stays high while
                                                   s12 is claimed: s7 pends) */
    check(&s, ok);
  }

  /* 6 wrong order: complete before service -> spurious second entry */
  progress(&s);
  set_enable(TGT, sbit(DEV_A));
  order = ORDER_COMPLETE_FIRST;
  c0 = n_entries;
  *IRQ_RAISE = sbit(DEV_A);
  dual_fence();
  {
    volatile struct entry *e1 = &log[c0 % MAX_ENTRIES];
    volatile struct entry *e2 = &log[(c0 + 1) % MAX_ENTRIES];
    int ok = wait_entries(c0 + 2) && quiet() && n_entries == c0 + 2;
    ok = ok && e1->id == DEV_A + 1 && e1->status_svc == sbit(DEV_A)
            && e2->id == DEV_A + 1 && e2->status_svc == 0;   /* spurious */
    check(&s, ok);
  }
  order = ORDER_SERVICE_FIRST;

  /* 7 no unexpected trap */
  progress(&s);
  check(&s, bad == 0);

  CSRC(mstatus, MSTATUS_MIE);
  CSRW(mie, 0);
  plic_quiet();
  *PLIC_PROGRESS(0) = 0xFF;
  dual_fence();
  return st_result(&s, 0x6200);
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
  tohost_exit(hart_id() == 0 ? run_isr() : 0);
}
