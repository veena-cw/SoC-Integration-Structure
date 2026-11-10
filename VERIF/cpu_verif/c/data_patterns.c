/* data_patterns.c
 *
 * BP-DV-070: data and address patterns through every memory path, on both
 * harts, to toggle the wide data/address buses (toggle coverage of
 * bp_core_tile / bp_core / bp_io_tile / bp_core_complex / AXI bridge).
 * Each hart uses its own regions (hart h at +h * 0x10000 / +h * 0x100).
 *
 *   1 cached DRAM lines (0x8180_0000): 0x5555.., 0xAAAA.., ~0, 0 and
 *     walking ones / walking zeros over all 64 bits, written, flushed to
 *     DRAM with cbo.flush (L1 and L2), read back after a refill
 *   2 high DRAM address bits: an aliased line at 0x8180_0000 | 1 << k,
 *     k = 25..30 (the DRAM model wraps at 32 MiB), one alias at a time:
 *     write, read back, flush
 *   3 L1-uncached DRAM (bit 32 window, 0x1_0070_0400 = L2-uncached and
 *     0x1_8078_0400 = L2-cached): sd/ld of the patterns
 *   4 AXI I/O (0x0010_A000): sd/ld of the patterns, and walking-one bytes
 *     (sb) to toggle every write strobe
 *
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 per hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7000 | (phase << 8) | index of the first failure.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)    ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DRAM_BASE(h)   (0x81800000ULL + (uint64_t)(h) * 0x10000ULL)
#define UC_L2UC(h)     (0x100700400ULL + (uint64_t)(h) * 0x1000ULL)
#define UC_L2C(h)      (0x180780400ULL + (uint64_t)(h) * 0x1000ULL)
#define AXI_IO(h)      (0x0010A000ULL + (uint64_t)(h) * 0x100ULL)

static inline void cbo_flush_line(uint64_t a)
{
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(a) : "memory");  /* cbo.flush */
}
static inline void fence_all(void) { __asm__ volatile ("fence iorw, iorw" ::: "memory"); }

struct st { unsigned fails, first; };

static void fail(struct st *s, unsigned phase, unsigned idx)
{
  if (!s->fails)
    s->first = ((phase & 0xF) << 8) | (idx & 0xFF);
  s->fails++;
}

static void progress(unsigned v)
{
  *PROGRESS(hart_id()) = v;
  dual_fence();
}

/* 4 fixed patterns + 64 walking ones + 64 walking zeros */
#define NPAT 132
static uint64_t pat(unsigned i)
{
  static const uint64_t fixed[4] = { 0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, ~0ULL, 0 };
  if (i < 4)   return fixed[i];
  if (i < 68)  return 1ULL << (i - 4);
  return ~(1ULL << (i - 68));
}

static uint64_t run_patterns(void)
{
  unsigned me = (unsigned)hart_id();
  struct st s = { 0, 0 };

  /* ---- 1 cached DRAM: 132 dwords = 17 lines (8 dwords / 64-byte line) */
  {
    volatile uint64_t *d = (volatile uint64_t *)DRAM_BASE(me);
    progress(0x100);
    for (unsigned i = 0; i < NPAT; i++)
      d[i] = pat(i);
    for (unsigned l = 0; l < (NPAT + 7) / 8; l++)
      cbo_flush_line((uint64_t)&d[l * 8]);
    fence_all();
    progress(0x101);
    for (unsigned i = 0; i < NPAT; i++)
      if (d[i] != pat(i))
        fail(&s, 1, i);
    /* the complement too, so every bit goes 1->0 and 0->1 in DRAM */
    for (unsigned i = 0; i < NPAT; i++)
      d[i] = ~pat(i);
    for (unsigned l = 0; l < (NPAT + 7) / 8; l++)
      cbo_flush_line((uint64_t)&d[l * 8]);
    fence_all();
    progress(0x102);
    for (unsigned i = 0; i < NPAT; i++)
      if (d[i] != ~pat(i))
        fail(&s, 1, 0x80 | (i & 0x7F));
  }

  /* ---- 2 high DRAM address bits via aliases, one at a time ---- */
  for (unsigned k = 25; k <= 30; k++) {
    volatile uint64_t *a = (volatile uint64_t *)((DRAM_BASE(me) + 0x8000ULL) | (1ULL << k));
    uint64_t v = 0xA11A500000000000ULL | ((uint64_t)k << 8) | me;
    progress(0x200 | k);
    a[0] = v;
    a[7] = ~v;
    if (a[0] != v || a[7] != ~v)
      fail(&s, 2, k);
    cbo_flush_line((uint64_t)a);
    fence_all();
    if (a[0] != v)                              /* refetched from DRAM */
      fail(&s, 2, 0x40 | k);
  }

  /* ---- 3 L1-uncached DRAM windows ---- */
  for (unsigned w = 0; w < 2; w++) {
    volatile uint64_t *u = (volatile uint64_t *)(w ? UC_L2C(me) : UC_L2UC(me));
    progress(0x300 | w);
    for (unsigned i = 0; i < NPAT; i += 1) {
      u[i & 7] = pat(i);
      if (u[i & 7] != pat(i))
        fail(&s, 3, (w << 7) | (i & 0x7F));
    }
  }

  /* ---- 4 AXI I/O: dwords and walking-one bytes ---- */
  {
    volatile uint64_t *io = (volatile uint64_t *)AXI_IO(me);
    volatile uint8_t  *iob = (volatile uint8_t *)AXI_IO(me);
    progress(0x400);
    for (unsigned i = 0; i < NPAT; i++) {
      io[i & 15] = pat(i);
      if (io[i & 15] != pat(i))
        fail(&s, 4, i);
    }
    progress(0x401);
    for (unsigned b = 0; b < 16; b++) {          /* each byte lane of a 128-bit beat */
      iob[0x80 + b] = (uint8_t)(1U << (b & 7));
      iob[0x90 + b] = (uint8_t)~(1U << (b & 7));
    }
    fence_all();
    for (unsigned b = 0; b < 16; b++)
      if (iob[0x80 + b] != (uint8_t)(1U << (b & 7)) || iob[0x90 + b] != (uint8_t)~(1U << (b & 7)))
        fail(&s, 4, 0x80 | b);
  }

  progress(0xFFF);
  return s.fails ? (((uint64_t)(s.fails & 0xF) << 16) | 0x7000 | (s.first & 0xFFF)) : 0;
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
  tohost_exit(run_patterns());
}
