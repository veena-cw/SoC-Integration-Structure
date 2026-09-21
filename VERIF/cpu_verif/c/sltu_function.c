/* sltu_function.c
 * Directed unsigned SLTU instruction test for BlackParrot.
 *
 * Inline assembly forces RV64 SLTU:
 *   opcode = 7'b0110011, funct3 = 3'b011, funct7 = 7'b0000000
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define SLTU_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void flush_sltu_results(void)
{
  uintptr_t addr = (uintptr_t)SLTU_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_sltu_results(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x5710000000000000UL | i;
  }
}

static inline uint64_t sltu_function(uint64_t a, uint64_t b)
{
  uint64_t result;
  __asm__ volatile (
    "sltu %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );
  return result;
}

static void check_sltu(uint64_t a, uint64_t b, uint64_t expected,
                       uint64_t test_number)
{
  uint64_t result = sltu_function(a, b);
  SLTU_RESULTS_ADDR[test_number - 1] = result;

  if (result != expected)
    tohost_exit((test_number << 1) | 1);
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
  check_sltu(0x0000000000000000UL,
             0x0000000000000000UL,
             0, 1);

  check_sltu(0x0000000000000001UL,
             0x0000000000000002UL,
             1, 2);

  check_sltu(0x0000000000000002UL,
             0x0000000000000001UL,
             0, 3);

  /* Unsigned zero is less than the largest 64-bit value. */
  check_sltu(0x0000000000000000UL,
             0xFFFFFFFFFFFFFFFFUL,
             1, 4);

  check_sltu(0xFFFFFFFFFFFFFFFFUL,
             0x0000000000000000UL,
             0, 5);

  /* These values differ in the sign bit; SLTU compares them unsigned. */
  check_sltu(0x7FFFFFFFFFFFFFFFUL,
             0x8000000000000000UL,
             1, 6);

  check_sltu(0x8000000000000000UL,
             0x7FFFFFFFFFFFFFFFUL,
             0, 7);

  flush_sltu_results();
  evict_sltu_results();
  tohost_exit(0); /* all unsigned SLTU checks passed */
}
