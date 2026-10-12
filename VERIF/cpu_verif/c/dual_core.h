/* dual_core.h
 *
 * Shared support for running the CPU DV C tests on the two-core build
 * (BP_CFG_ID=9, e_bp_multicore_2_cfg). Both harts boot the same image at
 * 0x8000_0000 and run the whole test; each hart works in its own copy of
 * every memory region so the two runs do not interfere:
 *
 *   stack        : sp = 0x8000_4000 + mhartid * 1 MiB      (DUAL_CORE_STACK_INIT)
 *   DRAM data    : addr + mhartid * 1 MiB                   (HART_DRAM)
 *   AXI I/O data : addr + mhartid * 4 KiB                   (HART_IO)
 *
 * 1 MiB is a multiple of every L1/L2 way size, so hart 1's copy of an
 * address maps to the same cache set as hart 0's; cache-conflict tests keep
 * their conflict pattern on both harts.
 *
 * Reporting (tohost_exit): hart 1 posts its result to a mailbox in the
 * host-device window and parks; hart 0 waits for it (bounded) and writes
 *
 *   tohost = (hart1_result << 32) | hart0_result      0 = both harts passed
 *
 * Each result is the test's own failure code (low 32 bits; a nonzero code
 * with zero low bits reports as 1). hart1_result = 0xFFFFFFFF means hart 1
 * never reported.
 */

#ifndef DUAL_CORE_H
#define DUAL_CORE_H

#include <stdint.h>

#define NUM_HARTS          2

#ifndef TOHOST_ADDR
#define TOHOST_ADDR        ((volatile uint64_t *)0x00102000UL)
#endif

#define HART_DRAM_STRIDE   0x00100000UL   /* 1 MiB */
#define HART_IO_STRIDE     0x00001000UL   /* 4 KiB */

/* Hart-1 -> hart-0 mailbox, host-device window (uncached, via AXI). All
 * slots have addr[3] = 0. */
#define DUAL_MAILBOX_RESULT ((volatile uint64_t *)0x00108000UL)
#define DUAL_MAILBOX_DONE   ((volatile uint64_t *)0x00108010UL)
#define DUAL_MAILBOX_TURN   ((volatile uint64_t *)0x00108020UL)
#define DUAL_DONE_MARKER    0xD0D0D0D0C0C0C0C1ULL
#define DUAL_HART1_NO_REPORT 0xFFFFFFFFULL

/* Bound on waiting for the other hart: 200k cycles = 2 ms at the TB's
 * 100 MHz clock, far longer than the harts ever drift apart. */
#define DUAL_WAIT_CYCLES    200000UL

static inline uint64_t hart_id(void)
{
  uint64_t h;
  __asm__ volatile ("csrr %0, mhartid" : "=r"(h));
  return h;
}

static inline uint64_t dual_cycles(void)
{
  uint64_t c;
  __asm__ volatile ("rdcycle %0" : "=r"(c));
  return c;
}

static inline void dual_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

#define HART_DRAM(addr) ((uintptr_t)(addr) + hart_id() * HART_DRAM_STRIDE)
#define HART_IO(addr)   ((uintptr_t)(addr) + hart_id() * HART_IO_STRIDE)

/* Use in place of "li sp, 0x80004000\n" in a naked _start. */
#define DUAL_CORE_STACK_INIT \
  "csrr t0, mhartid\n"       \
  "li sp, 0x80004000\n"      \
  "slli t0, t0, 20\n"        \
  "add sp, sp, t0\n"

/* Wait (bounded) until *flag == DUAL_DONE_MARKER. Returns 1 if seen. */
static inline int dual_wait_marker(volatile uint64_t *flag)
{
  uint64_t start = dual_cycles();
  while ((dual_cycles() - start) < DUAL_WAIT_CYCLES)
    if (*flag == DUAL_DONE_MARKER)
      return 1;
  return 0;
}

/* Serialize a section that uses a resource the harts cannot share (e.g.
 * the single I2C model register): hart 1 waits for hart 0 to finish it. */
static inline void dual_turn_wait(void)
{
  if (hart_id() != 0)
    (void) dual_wait_marker(DUAL_MAILBOX_TURN);
}

static inline void dual_turn_pass(void)
{
  if (hart_id() == 0) {
    dual_fence();
    *DUAL_MAILBOX_TURN = DUAL_DONE_MARKER;
    dual_fence();
  }
}

/* CBO.FLUSH of one cache block. In the two-core build cbo.flush never
 * completes: the issuing core hangs (single-core is fine). The tests only
 * use it to push result buffers out to DRAM for the TB's DMA log; their
 * pass/fail does not depend on it. So it is a compiler barrier by default;
 * build with RISCV_CFLAGS=-DDUAL_CORE_USE_CBO_FLUSH to emit the real
 * instruction once the RTL supports it. */
static inline void cbo_flush(uintptr_t addr)
{
#ifdef DUAL_CORE_USE_CBO_FLUSH
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
#else
  (void) addr;
  __asm__ volatile ("" ::: "memory");
#endif
}

static inline uint64_t dual_lo32(uint64_t code)
{
  if (code == 0)
    return 0;
  return (code & 0xFFFFFFFFULL) ? (code & 0xFFFFFFFFULL) : 1;
}

static void tohost_exit(uint64_t code) __attribute__((noreturn, unused));
static void tohost_exit(uint64_t code)
{
  uint64_t hart1 = DUAL_HART1_NO_REPORT;

  dual_fence();

  if (hart_id() != 0) {
    /* Hart 1: post the result, then DONE, then park. */
    *DUAL_MAILBOX_RESULT = code;
    dual_fence();
    *DUAL_MAILBOX_DONE = DUAL_DONE_MARKER;
    dual_fence();
    while (1) {
    }
  }

  /* Hart 0: report both harts. */
  if (dual_wait_marker(DUAL_MAILBOX_DONE))
    hart1 = dual_lo32(*DUAL_MAILBOX_RESULT);

  *TOHOST_ADDR = (hart1 << 32) | dual_lo32(code);
  dual_fence();
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

#endif /* DUAL_CORE_H */
