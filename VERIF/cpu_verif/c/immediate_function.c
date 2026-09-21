/* immediate_function.c
 * Directed RV64 immediate arithmetic/logical instruction test.
 * Exercises ADDI, SLTI, SLTIU, ANDI, ORI, and XORI. Shift-immediate
 * instructions are covered by the separate BP-DV-005 shift test.
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define IMM_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void record_and_check(uint64_t result, uint64_t expected,
                             uint64_t test_number)
{
  IMM_RESULTS_ADDR[test_number - 1] = result;
  if (result != expected)
    tohost_exit((test_number << 1) | 1);
}

/* The immediate operand must remain a compile-time constant for the
 * assembler to encode it in the I-type instruction. */
#define CHECK_IMMEDIATE(mnemonic, source_value, immediate_value, expected, number) \
  do { \
    uint64_t source = (uint64_t)(source_value); \
    uint64_t result; \
    __asm__ volatile (mnemonic " %0, %1, %2" \
                      : "=r"(result) \
                      : "r"(source), "i"(immediate_value)); \
    record_and_check(result, (uint64_t)(expected), (number)); \
  } while (0)

static void flush_results(void)
{
  uintptr_t addr = (uintptr_t)IMM_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_results(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x1A00000000000000UL | i;
  }
}

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
  /* ADDI: signed-boundary wrap, then sign-extended immediate -1. */
  CHECK_IMMEDIATE("addi", 0x7FFFFFFFFFFFFFFFUL, 1,
                  0x8000000000000000UL, 1);
  CHECK_IMMEDIATE("addi", 0x0000000000000000UL, -1,
                  0xFFFFFFFFFFFFFFFFUL, 2);

  /* SLTI compares signed values: -1 is less than +1. */
  CHECK_IMMEDIATE("slti", 0xFFFFFFFFFFFFFFFFUL, 1, 1, 3);

  /* SLTIU sign-extends -1, then compares the operands as unsigned values. */
  CHECK_IMMEDIATE("sltiu", 0x7FFFFFFFFFFFFFFFUL, -1, 1, 4);

  CHECK_IMMEDIATE("andi", 0x123456789ABCDEF0UL, 0x0FF,
                  0x00000000000000F0UL, 5);
  CHECK_IMMEDIATE("ori", 0x0000000000001200UL, 0x055,
                  0x0000000000001255UL, 6);
  CHECK_IMMEDIATE("xori", 0xAAAAAAAAAAAAAAAAUL, 0x0FF,
                  0xAAAAAAAAAAAAAA55UL, 7);

  flush_results();
  evict_results();
  tohost_exit(0); /* all immediate arithmetic/logical checks passed */
}
