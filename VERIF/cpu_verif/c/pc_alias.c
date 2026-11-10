/* pc_alias.c
 *
 * BP-DV-074: instruction fetch from every kind of memory, on both harts one
 * after the other (hole review, 10 Nov 2026: the PC / fetch address high
 * bits never toggled, and the I$ uncached-fetch path is otherwise unused).
 * The same position-independent leaf function (forward branch, backward
 * branch, backward jal, ret) is run from:
 *
 *   1 its own DRAM address (reference result)
 *   2 DRAM aliases: address | 1 << k, k = 25..30 (the DRAM model wraps at
 *     32 MiB, so the alias holds the same code; cached fetch)
 *   3 a copy in the L1-uncached / L2-uncached DRAM window (0x1_0070_0800)
 *   4 a copy in the L1-uncached / L2-cached DRAM window (0x1_8078_0800)
 *   5 a copy in AXI I/O memory (0x0010_B000): uncached fetch over AXI
 *
 * Every run must return the reference result.
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7400 | (phase << 4) | step of the first failure.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define WIN_L2UC(h)  (0x100700800ULL + (uint64_t)(h) * 0x1000ULL)
#define WIN_L2C(h)   (0x180780800ULL + (uint64_t)(h) * 0x1000ULL)
#define AXI_CODE(h)  (0x0010B000ULL + (uint64_t)(h) * 0x100ULL)

__asm__ (
  ".text\n"
  ".option push\n"
  ".option norvc\n"
  ".align 6\n"
  ".global pa_leaf\n"
  "pa_leaf:\n"                   /* a0 = n -> mixed sum of n..1 */
  "  li t0, 0\n"
  "  mv t1, a0\n"
  "1: beqz t1, 3f\n"             /* forward branch */
  "  add t0, t0, t1\n"
  "  andi t2, t1, 1\n"
  "  bnez t2, 2f\n"
  "  xori t0, t0, 0x55\n"
  "2: addi t1, t1, -1\n"
  "  j 1b\n"                     /* backward jal */
  "3: mv a0, t0\n"
  "  ret\n"
  ".global pa_leaf_end\n"
  "pa_leaf_end:\n"
  ".option pop\n"
);
extern char pa_leaf[], pa_leaf_end[];

typedef uint64_t (*leaf_fn)(uint64_t);

static uint64_t call_at(uint64_t addr, uint64_t n)
{
  leaf_fn f = (leaf_fn)(uintptr_t)addr;
  return f(n);
}

static void copy_code(uint64_t dst)
{
  volatile uint32_t *d = (volatile uint32_t *)(uintptr_t)dst;
  const uint32_t *s = (const uint32_t *)pa_leaf;
  unsigned n = (unsigned)((pa_leaf_end - pa_leaf) / 4);
  for (unsigned i = 0; i < n; i++)
    d[i] = s[i];
  __asm__ volatile ("fence iorw, iorw\n fence.i" ::: "memory");
}

static uint64_t run_alias(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned fails = 0, first = 0;
  const uint64_t n = 23 + me;
  uint64_t ref, x;

#define CHECK(ph, st, val) do { if ((val) != ref) { if (!fails) first = ((ph) << 4) | (st); fails++; } } while (0)

  *PROGRESS(me) = 0x100;
  ref = call_at((uint64_t)(uintptr_t)pa_leaf, n);

  for (unsigned k = 25; k <= 30; k++) {
    *PROGRESS(me) = 0x200 | k;
    x = call_at((uint64_t)(uintptr_t)pa_leaf | (1ULL << k), n);
    CHECK(2, k - 25, x);
  }

  *PROGRESS(me) = 0x300;
  copy_code(WIN_L2UC(me));
  *PROGRESS(me) = 0x301;
  x = call_at(WIN_L2UC(me), n);
  CHECK(3, 0, x);

  *PROGRESS(me) = 0x400;
  copy_code(WIN_L2C(me));
  *PROGRESS(me) = 0x401;
  x = call_at(WIN_L2C(me), n);
  CHECK(4, 0, x);

  *PROGRESS(me) = 0x500;
  copy_code(AXI_CODE(me));
  *PROGRESS(me) = 0x501;
  x = call_at(AXI_CODE(me), n);
  CHECK(5, 0, x);

  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7400 | (first & 0xFF)) : 0;
#undef CHECK
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
  uint64_t rc;
  dual_turn_wait();
  rc = run_alias();
  dual_turn_pass();
  tohost_exit(rc);
}
