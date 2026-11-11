/* addr_sweep.c
 *
 * BP-DV-077: walking-one address sweeps through the paths whose address
 * bits never toggled (hole review, 10 Nov 2026). Harts run one after the
 * other (dual_turn), so they never share a line.
 *
 *   1 loopback device (bp_me_loopback): sd + ld at LOCAL(tile, dev, 1 << k),
 *     tile 0 and 1, dev 6 and 15, k = 3..19 (offset bits). Tiles >= 2 do
 *     not exist, so tile-field bits 25..30 are not reachable.
 *   2 cacheable DRAM through the CCE directory: B | 1 << k, B = 0x8100_0000
 *     + hart * 0x20, k = 6..23 (stays inside the 32 MiB DRAM model, away
 *     from code and stacks at 0x8000_0000..0x8020_0000). Each dword gets
 *     its own address as data; all are read back after the whole sweep.
 *     k = 12..23 all map to D$ set 0, so the set overflows and lines with
 *     high address bits (e.g. bit 21) are evicted (directory LRU address).
 *   3 instruction fetch from new tags: a position-independent leaf copied
 *     to (0x8100_0800 | 1 << k), k = 12..23, and to nine lines 4 KiB apart
 *     from 0x8140_0800 (same I$ set: fills all 8 ways, then replaces);
 *     each copy is executed and must return the reference result.
 *   4 byte / half loads from AXI I/O at 0x0010_A001..07 (low address bits
 *     0..2 of the outbound I/O request)
 *
 * Phase 1 and 4 values are not checked (loopback echoes the request data;
 * the AXI slave returns memory contents); a trap fails the test.
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7700 | (phase << 4) | step of the first failure.
 *
 * Written 10 Nov 2026, not yet run.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define LOCAL(tile, dev, off) (((uint64_t)(tile) << 24) | ((uint64_t)(dev) << 20) | (off))
#define DRAM_B(h)    (0x81000000ULL + (uint64_t)(h) * 0x20ULL)
#define CODE_B       0x81000800ULL
#define SET_B        0x81400800ULL
#define AXI_IO       0x0010A000ULL

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global as_trap\n"
  "as_trap:\n"                    /* count, skip a 4-byte instruction */
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  ".option push\n"
  ".option norvc\n"
  ".align 6\n"
  ".global as_leaf\n"
  "as_leaf:\n"                    /* a0 = n -> mixed sum of n..1 */
  "  li t0, 0\n"
  "  mv t1, a0\n"
  "1: beqz t1, 3f\n"
  "  add t0, t0, t1\n"
  "  andi t2, t1, 1\n"
  "  bnez t2, 2f\n"
  "  xori t0, t0, 0x55\n"
  "2: addi t1, t1, -1\n"
  "  j 1b\n"
  "3: mv a0, t0\n"
  "  ret\n"
  ".global as_leaf_end\n"
  "as_leaf_end:\n"
  ".option pop\n"
);
extern char as_trap[], as_leaf[], as_leaf_end[];
static volatile uint64_t trec[NUM_HARTS][4] __attribute__((aligned(64)));

typedef uint64_t (*leaf_fn)(uint64_t);

static inline void sd64(uint64_t a, uint64_t v)
{
  __asm__ volatile (".option push\n .option norvc\n sd %1, 0(%0)\n .option pop" :: "r"(a), "r"(v) : "memory");
}
static inline uint64_t ld64(uint64_t a)
{
  uint64_t v;
  __asm__ volatile (".option push\n .option norvc\n ld %0, 0(%1)\n .option pop" : "=r"(v) : "r"(a) : "memory");
  return v;
}

static void copy_leaf(uint64_t dst)
{
  volatile uint32_t *d = (volatile uint32_t *)(uintptr_t)dst;
  const uint32_t *s = (const uint32_t *)as_leaf;
  unsigned n = (unsigned)((as_leaf_end - as_leaf) / 4);
  for (unsigned i = 0; i < n; i++)
    d[i] = s[i];
}

static uint64_t run_sweep(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  unsigned fails = 0, first = 0;
  uint64_t sink = 0, x, ref;
  const uint64_t n = 19 + me;

#define FAIL(ph, st) do { if (!fails) first = ((ph) << 4) | ((st) & 0xF); fails++; } while (0)
#define MARK(ph, st) (*PROGRESS(me) = ((ph) << 8) | (st))

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(as_trap));

  /* 1 loopback offsets */
  {
    static const unsigned devs[2] = { 6, 15 };
    unsigned step = 0;
    for (unsigned tile = 0; tile < 2; tile++)
      for (unsigned d = 0; d < 2; d++)
        for (unsigned k = 3; k <= 19; k++, step++) {
          uint64_t a = LOCAL(tile, devs[d], 1ULL << k);
          uint64_t before = r[0];
          MARK(1, step);
          sd64(a, a ^ 0x5A5A5A5A5A5A5A5AULL);
          sink += ld64(a);
          if (r[0] != before) FAIL(1, step);
        }
  }

  /* 2 cacheable DRAM, walking address bit */
  for (unsigned k = 6; k <= 23; k++) {
    uint64_t a = DRAM_B(me) | (1ULL << k);
    MARK(2, k);
    sd64(a, a);
  }
  __asm__ volatile ("fence rw, rw" ::: "memory");
  for (unsigned k = 6; k <= 23; k++) {
    uint64_t a = DRAM_B(me) | (1ULL << k);
    MARK(2, 0x80 | k);
    if (ld64(a) != a) FAIL(2, k);
  }

  /* 3 instruction fetch from new tags / a full I$ set */
  MARK(3, 0);
  ref = ((leaf_fn)(uintptr_t)as_leaf)(n);
  for (unsigned k = 12; k <= 23; k++)
    copy_leaf(CODE_B | (1ULL << k));
  for (unsigned i = 0; i < 9; i++)
    copy_leaf(SET_B + i * 0x1000ULL);
  __asm__ volatile ("fence rw, rw\n fence.i" ::: "memory");
  for (unsigned k = 12; k <= 23; k++) {
    MARK(3, k);
    x = ((leaf_fn)(uintptr_t)(CODE_B | (1ULL << k)))(n);
    if (x != ref) FAIL(3, k);
  }
  for (unsigned pass = 0; pass < 2; pass++)
    for (unsigned i = 0; i < 9; i++) {
      MARK(3, 0x40 | (pass << 4) | i);
      x = ((leaf_fn)(uintptr_t)(SET_B + i * 0x1000ULL))(n);
      if (x != ref) FAIL(3, 0x40 | i);
    }

  /* 4 byte / half loads at odd AXI I/O addresses */
  for (unsigned o = 1; o < 8; o++) {
    uint64_t before = r[0];
    MARK(4, o);
    sink += *(volatile uint8_t *)(uintptr_t)(AXI_IO + o);
    if (o < 7)
      sink += *(volatile uint16_t *)(uintptr_t)(AXI_IO + (o & ~1U));
    if (r[0] != before) FAIL(4, o);
  }

  *(volatile uint64_t *)(0x00108900UL + me * 0x100UL) = sink;
  if (r[0]) FAIL(5, 0);
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7700 | (first & 0xFF)) : 0;
#undef FAIL
#undef MARK
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
  rc = run_sweep();
  dual_turn_pass();
  tohost_exit(rc);
}
