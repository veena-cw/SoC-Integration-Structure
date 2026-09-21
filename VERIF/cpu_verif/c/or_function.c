/* or_function.c
 * Directed OR instruction test for BlackParrot.
 *
 * Inline assembly forces the RV64 integer OR instruction:
 *   opcode = 7'b0110011, funct3 = 3'b110, funct7 = 7'b0000000
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define OR_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void flush_or_results(void)
{
  uintptr_t addr = (uintptr_t)OR_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_or_results(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x0A00000000000000UL | i;
  }
}

static inline uint64_t or_function(uint64_t a, uint64_t b)
{
  uint64_t result;
  __asm__ volatile (
    "or %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );
  return result;
}

static void check_or(uint64_t a, uint64_t b, uint64_t expected,
                     uint64_t test_number)
{
  uint64_t result = or_function(a, b);
  OR_RESULTS_ADDR[test_number - 1] = result;

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
  check_or(0x0000000000000000UL,
           0x0000000000000000UL,
           0x0000000000000000UL, 1);

  check_or(0x0000000000000001UL,
           0x0000000000000002UL,
           0x0000000000000003UL, 2);

  check_or(0xAAAAAAAAAAAAAAAAUL,
           0x5555555555555555UL,
           0xFFFFFFFFFFFFFFFFUL, 3);

  check_or(0xF0F00F0FF0F00F0FUL,
           0x0FF00FF00FF00FF0UL,
           0xFFF00FFFFFF00FFFUL, 4);

  check_or(0x8000000000000000UL,
           0x0000000000000001UL,
           0x8000000000000001UL, 5);

  check_or(0xFFFF000000000000UL,
           0x0000FFFF00000000UL,
           0xFFFFFFFF00000000UL, 6);

  check_or(0xDEAD0000CAFE0000UL,
           0x0000BEEF0000BABEUL,
           0xDEADBEEFCAFEBABEUL, 7);

  flush_or_results();
  evict_or_results();
  tohost_exit(0); /* all OR checks passed */
}
