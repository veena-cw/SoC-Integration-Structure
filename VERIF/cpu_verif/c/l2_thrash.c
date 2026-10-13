/* l2_thrash.c
 *
 * BP-DV-046: L1/L2 capacity and conflict thrashing with dirty evictions
 * (both harts).
 *
 * Geometry (e_bp_multicore_2_cfg):
 *   L1 D$ : 64 sets x 8 ways x 64 B, write-back       set = addr[11:6]
 *   L2    : 2 tiles x 2 slices x 256 sets x 4 ways x 64 B, write-back
 *           (bp_me_dram_hash_encode: tile = addr[6], slice = addr[7],
 *            set = addr[15:8], tag above)
 * Addresses 64 KiB apart therefore fall into the same L1 set AND the same
 * L2 tile/slice/set. Each "group" below is NUM_WAYS lines 64 KiB apart:
 * more lines than either cache has ways, so every pass evicts dirty lines
 * from L1 into L2 and from L2 out to DRAM, and re-reads them from DRAM.
 *
 * Per hart (hart 1 is offset by 0x1000, so the harts use other sets):
 *   groups  : NUM_SETS L2 sets (step 0x100) x 4 lines (offsets 0x00, 0x40,
 *             0x80, 0xC0 - both tiles, both slices) = 32 groups
 *   lines   : 32 groups x NUM_WAYS (10) = 320 lines, one dword each
 *   pass 1  : write pattern A to every line, groups in order
 *   pass 2  : read back and compare (all lines were evicted at least once)
 *   pass 3  : write pattern B, groups and ways in reverse order
 *   pass 4  : read back and compare
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (pass << 24) | (first_bad_line << 12) | 0x400 | min(mismatches, 0x3ff)
 *   with pass = 2 or 4 (the read-back pass that failed first).
 */

#include <stdint.h>
#include "dual_core.h"

#define REGION_BASE  (0x80400000UL + hart_id() * 0x1000UL)
#define WAY_STRIDE   0x10000UL      /* 64 KiB: same L1 set, same L2 tile/slice/set */
#define NUM_WAYS     10             /* > L1 (8) and > L2 (4) associativity */
#define NUM_SETS     8              /* L2 sets used, step 0x100 */
#define SUB_LINES    4              /* 0x00/0x40/0x80/0xC0: both tiles, both slices */
#define NUM_GROUPS   (NUM_SETS * SUB_LINES)
#define NUM_LINES    (NUM_GROUPS * NUM_WAYS)

static inline volatile uint64_t *line_ptr(unsigned group, unsigned way)
{
  uintptr_t set_off = (uintptr_t)(group / SUB_LINES) * 0x100UL;
  uintptr_t sub_off = (uintptr_t)(group % SUB_LINES) * 0x40UL;
  return (volatile uint64_t *)(REGION_BASE + set_off + sub_off + way * WAY_STRIDE);
}

static uint64_t pattern(unsigned line, unsigned pass)
{
  return ((uint64_t)(0xA0 + pass) << 56)
         | ((uint64_t)hart_id() << 48)
         | ((uint64_t)line << 16)
         | (uint64_t)(0x5A5A ^ line);
}

static unsigned check_pass(unsigned pass, unsigned *first_bad)
{
  unsigned bad = 0;
  for (unsigned g = 0; g < NUM_GROUPS; g++)
    for (unsigned w = 0; w < NUM_WAYS; w++) {
      unsigned line = g * NUM_WAYS + w;
      if (*line_ptr(g, w) != pattern(line, pass)) {
        if (bad == 0)
          *first_bad = line;
        bad++;
      }
    }
  return bad;
}

static uint64_t run_l2_thrash(void)
{
  unsigned bad, first_bad = 0;

  /* pass 1: pattern A, in order */
  for (unsigned g = 0; g < NUM_GROUPS; g++)
    for (unsigned w = 0; w < NUM_WAYS; w++)
      *line_ptr(g, w) = pattern(g * NUM_WAYS + w, 1);

  /* pass 2 */
  bad = check_pass(1, &first_bad);
  if (bad)
    return (2ULL << 24) | ((uint64_t)first_bad << 12) | 0x400 | (bad > 0x3ff ? 0x3ff : bad);

  /* pass 3: pattern B, reverse order (different eviction victims) */
  for (int g = NUM_GROUPS - 1; g >= 0; g--)
    for (int w = NUM_WAYS - 1; w >= 0; w--)
      *line_ptr(g, w) = pattern(g * NUM_WAYS + w, 3);

  /* pass 4 */
  bad = check_pass(3, &first_bad);
  if (bad)
    return (4ULL << 24) | ((uint64_t)first_bad << 12) | 0x400 | (bad > 0x3ff ? 0x3ff : bad);

  return 0;
}

static void start_main(void);

/* Initialize the stack before entering C code. */
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
  tohost_exit(run_l2_thrash());
}
