/* slt_function.c
 * Directed signed SLT instruction test for BlackParrot.
 *
 * Inline assembly forces RV64 SLT:
 *   opcode = 7'b0110011, funct3 = 3'b010, funct7 = 7'b0000000
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define SLT_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void flush_slt_results(void)
{
  uintptr_t addr = (uintptr_t)SLT_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_slt_results(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x5100000000000000UL | i;
  }
}

static inline uint64_t slt_function(uint64_t a, uint64_t b)
{
  uint64_t result;
  __asm__ volatile (
    "slt %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );
  return result;
}

static void check_slt(uint64_t a, uint64_t b, uint64_t expected,
                      uint64_t test_number)
{
  uint64_t result = slt_function(a, b);
  SLT_RESULTS_ADDR[test_number - 1] = result;

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
  /* Equal operands are not less-than. */
  check_slt(0x0000000000000000UL,
            0x0000000000000000UL,
            0, 1);

  check_slt(0x0000000000000001UL,
            0x0000000000000002UL,
            1, 2);

  check_slt(0x0000000000000002UL,
            0x0000000000000001UL,
            0, 3);

  /* Signed maximum is greater than -1. */
  check_slt(0x7FFFFFFFFFFFFFFFUL,
            0xFFFFFFFFFFFFFFFFUL,
            0, 4);

  /* Signed minimum is less than zero. */
  check_slt(0x8000000000000000UL,
            0x0000000000000000UL,
            1, 5);

  /* -1 is greater than signed minimum. */
  check_slt(0xFFFFFFFFFFFFFFFFUL,
            0x8000000000000000UL,
            0, 6);

  /* -1 is less than signed maximum. */
  check_slt(0xFFFFFFFFFFFFFFFFUL,
            0x7FFFFFFFFFFFFFFFUL,
            1, 7);

  flush_slt_results();
  evict_slt_results();
  tohost_exit(0); /* all signed SLT checks passed */
}
