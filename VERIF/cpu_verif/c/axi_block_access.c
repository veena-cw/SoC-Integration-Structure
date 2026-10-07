/* axi_block_access.c
 *
 * BP-DV-029: write a whole AXI-mapped block, read it all back, then compare.
 *
 * The block 0x3002_0000 - 0x3002_00FF (256 B = 16 x 128-bit AXI beats) is
 * outside DRAM, so every access goes BedRock I/O -> bp_bedrock_axi4_bridge
 * -> AXI4 -> cpu_axi_mem_model. The flow is done in three separate phases
 * rather than write/read/compare per location:
 *
 *   1. write : 32 x SD, one 8-byte pattern per dword, offsets 0x00..0xF8
 *   2. read  : 32 x LD of the same offsets into a buffer in DRAM
 *   3. check : compare the buffer against the expected patterns
 *
 * MMIO lane convention (bp_bedrock_axi4_bridge): every 8-byte access
 * travels in WDATA/RDATA[63:0] with WSTRB[15:8] = 0, whether its address
 * ends in ...0 or ...8; the AXI monitor flags any MMIO beat that uses
 * [127:64]. Half of the 32 dwords are at ...8 addresses, which is where a
 * lane mismatch between bridge and slave would show up.
 *
 * tohost == 0 is pass. Otherwise:
 *   tohost = (mismatch_count << 16) | 0x1000 | first_failing_offset
 * e.g. 0x101008 = 16 mismatches, first at offset 0x08 (0x3002_0008).
 */

#include <stdint.h>
#include "dual_core.h"

#define AXI_BLOCK_BASE  HART_IO(0x30020000UL)
#define AXI_BLOCK_BYTES 0x100
#define NUM_DWORDS      (AXI_BLOCK_BYTES / 8)

static uint64_t readback[NUM_HARTS][NUM_DWORDS];

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

/* Unique per offset, with distinct upper and lower 32-bit halves, so data
 * from the wrong dword or the wrong half of the beat cannot match. */
static uint64_t pattern(unsigned offset)
{
  return 0xA5A50000C3C30000ULL
         | ((uint64_t)(0x1000 + offset) << 32)
         | (uint64_t)(0x2000 + offset);
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
  volatile uint64_t *block = (volatile uint64_t *)AXI_BLOCK_BASE;
  unsigned mismatches = 0;
  unsigned first_bad = 0;

  /* Phase 1: write the whole block. */
  for (unsigned i = 0; i < NUM_DWORDS; i++)
    block[i] = pattern(i * 8);
  io_fence();

  /* Phase 2: read the whole block back. */
  for (unsigned i = 0; i < NUM_DWORDS; i++)
    readback[hart_id()][i] = block[i];
  io_fence();

  /* Phase 3: compare everything, remembering the first failure. */
  for (unsigned i = 0; i < NUM_DWORDS; i++) {
    if (readback[hart_id()][i] != pattern(i * 8)) {
      if (mismatches == 0)
        first_bad = i * 8;
      mismatches++;
    }
  }

  if (mismatches != 0)
    tohost_exit(((uint64_t)mismatches << 16) | 0x1000 | first_bad);

  /* Zero on the BP nonsynth host is the pass indication. */
  tohost_exit(0);
}
