/* axi_block_dual_core.c
 *
 * BP-DV-030: the BP-DV-029 block test run on both cores at the same time.
 * Requires the two-core build (BP_CFG_ID=9, e_bp_multicore_2_cfg).
 *
 * Both harts boot this image. Each hart uses its own 256 B AXI-mapped block
 * (16 x 128-bit AXI beats), so their AXI traffic interleaves through the one
 * shared bp_bedrock_axi4_bridge without overlapping data:
 *
 *   hart 0 : 0x0010_4000 - 0x0010_40FF
 *   hart 1 : 0x0010_4100 - 0x0010_41FF
 *
 * The blocks are in the host-device window (0x0010_xxxx, where tohost also
 * lives). BP-DV-031 (axi_block_dual_core_3002.c) runs this same program at
 * 0x3002_0000, so both I/O windows are covered on two cores.
 *
 * Each hart runs three separate phases:
 *   1. write : 32 x SD, one 8-byte pattern per dword
 *   2. read  : 32 x LD of the same addresses into a buffer in DRAM
 *   3. check : compare the buffer against the expected patterns
 *
 * Every ...8 dword is on AXI lanes 8-15. A bridge that does not move read
 * data from those lanes down to [63:0] fails 16 of the 32 dwords per hart.
 *
 * Result handshake: hart 1 posts its result and then a DONE marker to the
 * AXI region at offsets 0xF00 / 0xF10. Both have addr[3] = 0, so the lane
 * bug cannot corrupt the handshake itself. Hart 0 polls for DONE (bounded),
 * then reports both results:
 *
 *   per-hart result r = 0, or (mismatch_count << 16) | 0x1000 | first_offset
 *   tohost = (r1 << 32) | r0          (0 = both harts passed)
 *   r1 = 0xFFFFFFFF if hart 1 never posted DONE
 *
 * e.g. 0x00101008_00101008 = each hart: 16 mismatches, first at offset 0x08.
 */

#include <stdint.h>

#define TOHOST_ADDR      ((volatile uint64_t *)0x00102000UL)
/* Overridable so BP-DV-031 (axi_block_dual_core_3002.c) can run this same
 * program at 0x3002_0000. */
#ifndef AXI_BLOCK_BASE
#define AXI_BLOCK_BASE   0x00104000UL
#endif
#define AXI_BLOCK_BYTES  0x100
#define NUM_DWORDS       (AXI_BLOCK_BYTES / 8)
#define NUM_HARTS        2

/* Hart-1 -> hart-0 handshake, in the AXI region, both with addr[3] = 0. */
#define HART1_RESULT     ((volatile uint64_t *)(AXI_BLOCK_BASE + 0xF00))
#define HART1_DONE       ((volatile uint64_t *)(AXI_BLOCK_BASE + 0xF10))
#define DONE_MARKER      0xD0D0D0D0C0C0C0C1ULL
#define DONE_POLL_LIMIT  500
#define HART1_NO_REPORT  0xFFFFFFFFULL

__attribute__((aligned(64)))
static uint64_t readback[NUM_HARTS][NUM_DWORDS];

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

static inline uint64_t read_mhartid(void)
{
  uint64_t hartid;
  __asm__ volatile ("csrr %0, mhartid" : "=r"(hartid));
  return hartid;
}

static void tohost_exit(uint64_t code)
{
  *TOHOST_ADDR = code;
  io_fence();

  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

/* Unique per hart and offset, with distinct upper and lower 32-bit halves,
 * so data from the wrong dword, half or hart cannot match. */
static uint64_t pattern(uint64_t hartid, unsigned offset)
{
  return 0xA5A50000C3C30000ULL
         | ((uint64_t)(0x1000 + (hartid << 9) + offset) << 32)
         | (uint64_t)(0x2000 + (hartid << 9) + offset);
}

/* Write, read back and compare this hart's block. Returns 0 on pass. */
static uint64_t run_block(uint64_t hartid)
{
  volatile uint64_t *block =
      (volatile uint64_t *)(AXI_BLOCK_BASE + hartid * AXI_BLOCK_BYTES);
  uint64_t *buf = readback[hartid];
  unsigned mismatches = 0;
  unsigned first_bad = 0;

  /* Phase 1: write the whole block. */
  for (unsigned i = 0; i < NUM_DWORDS; i++)
    block[i] = pattern(hartid, i * 8);
  io_fence();

  /* Phase 2: read the whole block back. */
  for (unsigned i = 0; i < NUM_DWORDS; i++)
    buf[i] = block[i];
  io_fence();

  /* Phase 3: compare everything, remembering the first failure. */
  for (unsigned i = 0; i < NUM_DWORDS; i++) {
    if (buf[i] != pattern(hartid, i * 8)) {
      if (mismatches == 0)
        first_bad = i * 8;
      mismatches++;
    }
  }

  if (mismatches == 0)
    return 0;
  return ((uint64_t)mismatches << 16) | 0x1000 | first_bad;
}

static void start_main(void);

/* One 2 KB stack per hart, as in BP-DV-017. */
__attribute__((naked, section(".text.start"), used))
void _start(void)
{
  __asm__ volatile (
    "li sp, 0x80004000\n"
    "csrr t0, mhartid\n"
    "slli t0, t0, 11\n"
    "add sp, sp, t0\n"
    "jal ra, start_main\n"
    "1: j 1b\n"
  );
}

static void start_main(void)
{
  uint64_t hartid = read_mhartid();
  uint64_t result = run_block(hartid);

  if (hartid != 0) {
    /* Hart 1: post the result first, then DONE, then park. */
    *HART1_RESULT = result;
    io_fence();
    *HART1_DONE = DONE_MARKER;
    io_fence();
    while (1) {
      /* Hart 0 owns pass/fail reporting. */
    }
  }

  /* Hart 0: wait (bounded) for hart 1, then report both results. */
  uint64_t hart1_result = HART1_NO_REPORT;
  for (unsigned poll = 0; poll < DONE_POLL_LIMIT; poll++) {
    if (*HART1_DONE == DONE_MARKER) {
      hart1_result = *HART1_RESULT & 0xFFFFFFFFULL;
      break;
    }
  }

  tohost_exit((hart1_result << 32) | (result & 0xFFFFFFFFULL));
}
