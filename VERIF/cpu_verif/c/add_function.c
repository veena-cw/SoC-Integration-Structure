/* add_function.c
 * Directed ADD instruction test for BlackParrot.
 *
 * The inline assembly forces the compiler to emit the RV64 integer ADD
 * instruction:
 *   opcode = 7'b0110011, funct3 = 3'b000, funct7 = 7'b0000000
 */

#include <stdint.h>

/* bp_nonsynth_host maps the finish register at host base + 0x2000. */
#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
/* Reserved result buffer in the DRAM address space. The test image is small
 * and the stack grows down from 0x80004000, so this starts above both. */
#define ADD_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  /* Order result stores before the pass/fail notification. This fence does
   * not itself force dirty cache lines all the way to backing DRAM. */
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void flush_add_results(void)
{
  uintptr_t addr = (uintptr_t)ADD_RESULTS_ADDR;

  /* CBO.FLUSH uses immediate 2 and requires a cache-block-aligned address.
   * Emit it as an instruction word so this test still assembles with the
   * repository's base -march=rv64ima setting. */
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_add_results(void)
{
  /* The configured L2 has 256 sets, 4 ways, and 64-byte blocks. Addresses
   * separated by 16 KiB map to the same set; touching enough aliases forces
   * the result line out of the write-back L2 and into the DRAM model. */
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0xADD0000000000000UL | i;
  }
}

static inline uint64_t add_function(uint64_t a, uint64_t b)
{
  uint64_t result;

  __asm__ volatile (
    "add %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );

  return result;
}

static void check_add(uint64_t a, uint64_t b, uint64_t expected,
                      uint64_t test_number)
{
  uint64_t result = add_function(a, b);

  /* Store each architectural ADD result in a dedicated DRAM buffer slot. */
  ADD_RESULTS_ADDR[test_number - 1] = result;

  if (result != expected)
    tohost_exit((test_number << 1) | 1); /* riscv-tests failure encoding */
}

/* The BlackParrot reset PC is 0x80000000.  Place the test entry point first
 * in the image so reset begins in _start rather than in tohost_exit().
 *
 * The testbench does not provide a bootloader that initializes the RISC-V
 * stack pointer.  Keep this entry point naked so the compiler cannot emit a
 * stack-frame prologue before sp is initialized. */
static void start_main(void);

__attribute__((naked, section(".text.start"), used))
void _start(void)
{
  __asm__ volatile (
    "li sp, 0x80004000\n"
    "jal ra, start_main\n"
    "1: j 1b\n"
  );
}

static void start_main(void)
{
  check_add(0x0000000000000000UL,
            0x0000000000000000UL,
            0x0000000000000000UL, 1);

  check_add(0x0000000000000001UL,
            0x0000000000000002UL,
            0x0000000000000003UL, 2);

  check_add(0x00000000FFFFFFFFUL,
            0x0000000000000001UL,
            0x0000000100000000UL, 3);

  check_add(0x7FFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0x8000000000000000UL, 4);

  check_add(0x8000000000000000UL,
            0xFFFFFFFFFFFFFFFFUL,
            0x7FFFFFFFFFFFFFFFUL, 5);

  check_add(0xFFFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0x0000000000000000UL, 6);

  check_add(0x123456789ABCDEF0UL,
            0x0FEDCBA987654321UL,
            0x2222222222222211UL, 7);

  /* Push/invalidate the result cache line before ending the test so the
   * backing DRAM model can observe the stored values. */
  flush_add_results();
  evict_add_results();

  /* BlackParrot's bp_nonsynth_host treats zero as PASS. */
  tohost_exit(0); /* all ADD checks passed */
}
