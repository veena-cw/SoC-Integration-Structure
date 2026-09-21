/* shift_function.c
 * Directed RV64 shift test for BP-DV-005.
 * Exercises SLLI/SRLI/SRAI and register SLL/SRL/SRA, including
 * RV64 variable-shift amount masking.
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define SHIFT_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

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
  SHIFT_RESULTS_ADDR[test_number - 1] = result;
  if (result != expected)
    tohost_exit((test_number << 1) | 1);
}

#define CHECK_SHIFT_IMMEDIATE(mnemonic, source_value, shift_amount, expected, number) \
  do { \
    uint64_t source = (uint64_t)(source_value); \
    uint64_t result; \
    __asm__ volatile (mnemonic " %0, %1, %2" \
                      : "=r"(result) \
                      : "r"(source), "i"(shift_amount)); \
    record_and_check(result, (uint64_t)(expected), (number)); \
  } while (0)

#define CHECK_SHIFT_VARIABLE(mnemonic, source_value, shift_value, expected, number) \
  do { \
    uint64_t source = (uint64_t)(source_value); \
    uint64_t shift = (uint64_t)(shift_value); \
    uint64_t result; \
    __asm__ volatile (mnemonic " %0, %1, %2" \
                      : "=r"(result) \
                      : "r"(source), "r"(shift)); \
    record_and_check(result, (uint64_t)(expected), (number)); \
  } while (0)

static void flush_results(void)
{
  uintptr_t addr = (uintptr_t)SHIFT_RESULTS_ADDR;
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
  /* Immediate shifts exercise the largest legal RV64 shift amount. */
  CHECK_SHIFT_IMMEDIATE("slli", 0x0000000000000001UL, 63,
                        0x8000000000000000UL, 1);
  CHECK_SHIFT_IMMEDIATE("srli", 0x8000000000000000UL, 63,
                        0x0000000000000001UL, 2);
  CHECK_SHIFT_IMMEDIATE("srai", 0x8000000000000000UL, 63,
                        0xFFFFFFFFFFFFFFFFUL, 3);

  /* Register shifts: logical left/right and sign-extending arithmetic right. */
  CHECK_SHIFT_VARIABLE("sll", 0x0123456789ABCDEFUL, 4,
                       0x123456789ABCDEF0UL, 4);
  CHECK_SHIFT_VARIABLE("srl", 0x8000000000000000UL, 4,
                       0x0800000000000000UL, 5);
  CHECK_SHIFT_VARIABLE("sra", 0x8000000000000000UL, 4,
                       0xF800000000000000UL, 6);

  /* RV64 variable shifts use only rs2[5:0]: 65 behaves as shift by 1. */
  CHECK_SHIFT_VARIABLE("sll", 0x0000000000000001UL, 65,
                       0x0000000000000002UL, 7);
  CHECK_SHIFT_VARIABLE("srl", 0x8000000000000001UL, 65,
                       0x4000000000000000UL, 8);

  flush_results();
  evict_results();
  tohost_exit(0); /* all shift checks passed */
}
