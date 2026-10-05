/* axi_unaligned_access.c
 *
 * BP-DV-028: uncached loads/stores at every byte lane of the AXI data bus.
 *
 * The region at AXI_TEST_BASE is outside DRAM, so every access below goes
 * BedRock I/O -> bp_bedrock_axi4_bridge -> AXI4 -> cpu_axi_mem_model.
 * The AXI bus is 16 bytes wide, so an access at (addr % 16) != 0 uses the
 * upper byte lanes of WDATA/WSTRB and RDATA. The bridge must move the read
 * data from those lanes back to where BedRock expects it; a bridge that
 * passes RDATA through unchanged only works at offset 0.
 *
 * For each size in {1, 2, 4, 8} and each naturally aligned offset in a
 * 16-byte beat, the test stores a size/offset-unique pattern, loads it back
 * zero-extended and (for size < 8) sign-extended, and compares.
 *
 * tohost == 0 is pass. Any other value names the first failing access:
 *   tohost = (kind << 8) | (size << 4) | offset
 *   kind 1 = unsigned load mismatch (LBU/LHU/LWU/LD)
 *   kind 2 = signed load mismatch   (LB/LH/LW)
 * e.g. 0x188 = 8-byte load at offset 8, 0x23C = signed 4-byte load at 12.
 */

#include <stdint.h>
#include "dual_core.h"

#define AXI_TEST_BASE HART_IO(0x30020000UL)
#define AXI_BEAT_BYTES 16

#define KIND_UNSIGNED 1
#define KIND_SIGNED   2

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

/* Every byte differs per size/offset and the top bit of each byte is set,
 * so a value read from the wrong lane or with the wrong extension cannot
 * match by accident. */
static uint64_t pattern(unsigned size, unsigned offset)
{
  return 0x8F8E8D8C8B8A8988ULL
         ^ ((uint64_t)(offset + 1) * 0x0101010101010101ULL)
         ^ ((uint64_t)size << 3);
}

static uint64_t size_mask(unsigned size)
{
  return (size == 8) ? ~0ULL : ((1ULL << (8 * size)) - 1);
}

/* Accesses use inline asm so each one is exactly the named instruction.
 * At -O0, GCC builds a signed byte/halfword load from LBU/LHU plus shifts,
 * which would leave the core's own LB/LH sign extension untested. */
#define STORE_INSN(insn, addr, value) \
  __asm__ volatile (insn " %0, 0(%1)" :: "r"(value), "r"(addr) : "memory")
#define LOAD_INSN(insn, addr, value) \
  __asm__ volatile (insn " %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory")

static void store_sized(uintptr_t addr, unsigned size, uint64_t value)
{
  switch (size) {
    case 1: STORE_INSN("sb", addr, value); break;
    case 2: STORE_INSN("sh", addr, value); break;
    case 4: STORE_INSN("sw", addr, value); break;
    default: STORE_INSN("sd", addr, value); break;
  }
  io_fence();
}

static uint64_t load_unsigned(uintptr_t addr, unsigned size)
{
  uint64_t value;

  switch (size) {
    case 1: LOAD_INSN("lbu", addr, value); break;
    case 2: LOAD_INSN("lhu", addr, value); break;
    case 4: LOAD_INSN("lwu", addr, value); break;
    default: LOAD_INSN("ld", addr, value); break;
  }
  io_fence();
  return value;
}

static int64_t load_signed(uintptr_t addr, unsigned size)
{
  int64_t value;

  switch (size) {
    case 1: LOAD_INSN("lb", addr, value); break;
    case 2: LOAD_INSN("lh", addr, value); break;
    default: LOAD_INSN("lw", addr, value); break;
  }
  io_fence();
  return value;
}

static int64_t sign_extend(uint64_t value, unsigned size)
{
  switch (size) {
    case 1: return (int8_t)value;
    case 2: return (int16_t)value;
    case 4: return (int32_t)value;
    default: return (int64_t)value;
  }
}

static void check_lane(unsigned size, unsigned offset)
{
  uintptr_t addr = AXI_TEST_BASE + offset;
  uint64_t expected = pattern(size, offset) & size_mask(size);
  uint64_t code = ((uint64_t)size << 4) | offset;

  store_sized(addr, size, expected);

  if (load_unsigned(addr, size) != expected)
    tohost_exit((KIND_UNSIGNED << 8) | code);

  if ((size < 8) && (load_signed(addr, size) != sign_extend(expected, size)))
    tohost_exit((KIND_SIGNED << 8) | code);
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
  /* Offset 0 first for every size: lane 0 is the case that works even
   * without lane steering, so a failure there points at something other
   * than the bridge's byte-lane handling. */
  for (unsigned size = 1; size <= 8; size <<= 1)
    check_lane(size, 0);

  for (unsigned size = 1; size <= 8; size <<= 1)
    for (unsigned offset = size; offset < AXI_BEAT_BYTES; offset += size)
      check_lane(size, offset);

  /* Zero on the BP nonsynth host is the pass indication. */
  tohost_exit(0);
}
