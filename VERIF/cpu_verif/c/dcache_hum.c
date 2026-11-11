/* dcache_hum.c
 *
 * BP-DV-083: D$ hit-under-miss (hole review, 11 Nov 2026: bp_be_dcache.sv
 * 1239-1240 - the e_primary -> e_serial transition on a second miss and the
 * cache-op arm of the e_ready -> e_serial/e_primary choice were never hit).
 * cfg 9 enables e_cfg_hit_under_miss. D$: 64 sets x 64 B, 8 ways (4 KiB per
 * way), so addr + k * 4 KiB maps to the same set.
 *
 * Per hart (own copy at +1 MiB), round r = 0..7:
 *   A = set r, B = set r+32 (misses), H = set r+16 (resident hit)
 *   0 store known values to A, B, H; evict A and B with 8 conflict lines
 *     each (k * 4 KiB), then reload H
 *   1 back to back: ld A (miss) ; ld H (hit under miss) ; ld B (second miss
 *     while primary) ; ld H
 *   2 store to H, then cbo.clean H right behind a load miss to A' (A
 *     evicted again), then ld H and ld A'
 * All loaded values are compared with what was stored.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x8300 | (step << 4) | round of the first failure.
 * Progress (step << 4 | round) at 0x0010_8400 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define BASE(h)      (0x81400000UL + (h) * HART_DRAM_STRIDE)
#define WAY          0x1000UL
#define LINE(h, set) ((volatile uint64_t *)(BASE(h) + (set) * 0x40UL))
#define CONFLICT(h, set, k) ((volatile uint64_t *)(BASE(h) + (k) * WAY + 0x10000UL + (set) * 0x40UL))

static void evict(unsigned me, unsigned set)
{
  /* 8 other lines of this set (offset 64 KiB keeps them clear of A/B/H) */
  for (unsigned k = 0; k < 8; k++)
    (void) *CONFLICT(me, set, k);
}

static uint64_t run_hum(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned fails = 0, first = 0;
  uint64_t a, h1, b, h2;

#define CHECK(p, rd, got, want) do { if ((got) != (want)) { \
    if (!fails) first = ((p) << 4) | (rd); fails++; } } while (0)

  for (unsigned r = 0; r < 8; r++) {
    volatile uint64_t *A = LINE(me, r), *B = LINE(me, r + 32), *H = LINE(me, r + 16);
    uint64_t va = 0xAAAA000000000000ULL | (r << 8) | me;
    uint64_t vb = 0xBBBB000000000000ULL | (r << 8) | me;
    uint64_t vh = 0xCCCC000000000000ULL | (r << 8) | me;

    /* 0 setup */
    *PROGRESS(me) = 0x00 | r;
    A[r & 7] = va;
    B[r & 7] = vb;
    H[r & 7] = vh;
    __asm__ volatile ("fence rw, rw" ::: "memory");
    evict(me, r);
    evict(me, r + 32);
    (void) H[r & 7];

    /* 1 miss, hit under miss, second miss, hit */
    *PROGRESS(me) = 0x10 | r;
    __asm__ volatile ("ld %0, 0(%4)\n ld %1, 0(%5)\n ld %2, 0(%6)\n ld %3, 0(%5)\n"
                      : "=&r"(a), "=&r"(h1), "=&r"(b), "=&r"(h2)
                      : "r"(&A[r & 7]), "r"(&H[r & 7]), "r"(&B[r & 7]) : "memory");
    CHECK(1, r, a, va);
    CHECK(1, r, h1, vh);
    CHECK(1, r, b, vb);
    CHECK(1, r, h2, vh);

    /* 2 dirty H, load miss on A, cbo.clean H, reload both */
    *PROGRESS(me) = 0x20 | r;
    evict(me, r);
    vh ^= 0x00FF00FF00000000ULL;
    __asm__ volatile ("sd %3, 0(%2)\n ld %0, 0(%4)\n .insn i 0x0f, 2, x0, %2, 1\n ld %1, 0(%2)\n"
                      : "=&r"(a), "=&r"(h1)
                      : "r"(&H[r & 7]), "r"(vh), "r"(&A[r & 7]) : "memory");
    CHECK(2, r, a, va);
    CHECK(2, r, h1, vh);
  }
#undef CHECK
  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x8300 | (first & 0xFF)) : 0;
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
  tohost_exit(run_hum());
}
