/* cbo_ops.c
 *
 * BP-DV-032/033/034: RISC-V Zicbom cache-block operations on both harts.
 * Each test selects one operation with CBO_OP (see cbo_clean.c,
 * cbo_flush.c, cbo_inval.c), so a hang in one operation cannot hide the
 * result of another.
 *
 *   CBO_OP 1 = cbo.clean : write the block back if dirty, keep it cached
 *   CBO_OP 2 = cbo.flush : write the block back if dirty, then invalidate
 *   CBO_OP 0 = cbo.inval : invalidate the block (dirty data may be
 *                          discarded or written back - both are legal)
 *
 * Per hart, on its own DRAM line (HART_DRAM):
 *   1. load the line            (bring it into the cache, record old value)
 *   2. store a pattern          (make the line dirty)
 *   3. execute the CBO op       (encoded with .insn: -march has no Zicbom)
 *   4. load the line back and check
 *        clean / flush : must read the pattern
 *        inval         : must read the pattern or the old value
 *   5. store/load again         (the line is still usable after the op)
 *
 * Progress markers: before and after the CBO op, each hart writes
 * (op << 8) | step to CBO_PROGRESS (+ hartid * 16), an uncached address in
 * the host window. They appear in the AXI log ("AXI WRITE ... addr=
 * 0000000000108100"/...108110), so if a hart hangs the log shows the last
 * step it reached:
 *   step 1 = about to execute the CBO op, step 2 = CBO op completed
 *
 * tohost (dual_core.h): (hart1_result << 32) | hart0_result; per hart
 *   0 = pass, otherwise (op << 8) | failing check:
 *     0x?03 = read-back after the op is wrong
 *     0x?05 = line not usable after the op
 *   hart1_result 0xFFFFFFFF = hart 1 never reported (e.g. hung in the op).
 */

#include <stdint.h>
#include "dual_core.h"

#ifndef CBO_OP
#define CBO_OP 2
#endif

#define CBO_LINE_ADDR  0x80008000UL   /* per hart via HART_DRAM, 64 B aligned */
#define CBO_WORDS      8              /* one 64-byte cache block */
#define CBO_PROGRESS   0x00108100UL   /* host window, per hart +16 B */

static inline void progress(uint64_t step)
{
  volatile uint64_t *p =
      (volatile uint64_t *)(CBO_PROGRESS + hart_id() * 16);
  *p = ((uint64_t)CBO_OP << 8) | step;
  dual_fence();
}

static inline void cbo_op(uintptr_t addr)
{
#if CBO_OP == 0
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 0" :: "r"(addr) : "memory");  /* cbo.inval */
#elif CBO_OP == 1
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 1" :: "r"(addr) : "memory");  /* cbo.clean */
#else
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");  /* cbo.flush */
#endif
}

static uint64_t pattern(unsigned word, uint64_t salt)
{
  return 0xC0B0000000000000ULL ^ (salt << 32) ^ ((uint64_t)hart_id() << 24)
         ^ ((uint64_t)CBO_OP << 16) ^ word;
}

static uint64_t run_cbo(void)
{
  volatile uint64_t *line = (volatile uint64_t *)HART_DRAM(CBO_LINE_ADDR);
  uint64_t old[CBO_WORDS];
  const uint64_t fail = (uint64_t)CBO_OP << 8;

  /* 1. bring the line into the cache and record its old contents */
  for (unsigned i = 0; i < CBO_WORDS; i++)
    old[i] = line[i];
  (void) old;   /* only cbo.inval checks against the old value */

  /* 2. make it dirty */
  for (unsigned i = 0; i < CBO_WORDS; i++)
    line[i] = pattern(i, 1);

  /* 3. the cache-block operation, bracketed by AXI progress markers */
  progress(1);
  cbo_op((uintptr_t)line);
  progress(2);

  /* 4. read back */
  for (unsigned i = 0; i < CBO_WORDS; i++) {
    uint64_t v = line[i];
#if CBO_OP == 0
    if (v != pattern(i, 1) && v != old[i])
      return fail | 0x03;
#else
    if (v != pattern(i, 1))
      return fail | 0x03;
#endif
  }

  /* 5. the line is still usable */
  for (unsigned i = 0; i < CBO_WORDS; i++)
    line[i] = pattern(i, 2);
  for (unsigned i = 0; i < CBO_WORDS; i++)
    if (line[i] != pattern(i, 2))
      return fail | 0x05;

  return 0;
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
  tohost_exit(run_cbo());
}
