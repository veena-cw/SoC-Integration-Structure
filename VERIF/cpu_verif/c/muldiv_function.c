/* muldiv_function.c
 * Directed RV64M multiply, divide, and remainder test for BP-DV-006.
 * Covers the RV64 and word-sized M-extension operations plus specified
 * divide-by-zero and signed-overflow behavior.
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define MULDIV_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)
#define MULDIV_RESULT_COUNT 25UL
#define CACHE_LINE_BYTES 64UL

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
  MULDIV_RESULTS_ADDR[test_number - 1] = result;
  if (result != expected)
    tohost_exit((test_number << 1) | 1);
}

#define CHECK_MULDIV(mnemonic, lhs_value, rhs_value, expected, number) \
  do { \
    uint64_t lhs = (uint64_t)(lhs_value); \
    uint64_t rhs = (uint64_t)(rhs_value); \
    uint64_t result; \
    __asm__ volatile (mnemonic " %0, %1, %2" \
                      : "=r"(result) \
                      : "r"(lhs), "r"(rhs)); \
    record_and_check(result, (uint64_t)(expected), (number)); \
  } while (0)

static void flush_results(void)
{
  for (uint64_t line = 0; line < (MULDIV_RESULT_COUNT + 7) / 8; line++) {
    uintptr_t addr = (uintptr_t)MULDIV_RESULTS_ADDR + (line * CACHE_LINE_BYTES);
    __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
  }
}

static void evict_results(void)
{
  for (uint64_t line = 0; line < (MULDIV_RESULT_COUNT + 7) / 8; line++) {
    for (uint64_t i = 1; i <= 20; i++) {
      volatile uint64_t *conflict_addr = (volatile uint64_t *)
        ((uintptr_t)MULDIV_RESULTS_ADDR + (line * CACHE_LINE_BYTES) + (i * 0x4000UL));
      *conflict_addr = 0x1A00000000000000UL | (line << 8) | i;
    }
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
  /* RV64 full-width multiply variants. */
  CHECK_MULDIV("mul", 0x8000000000000003UL, 2,
               0x0000000000000006UL, 1);
  CHECK_MULDIV("mulh", 0x7FFFFFFFFFFFFFFFUL, 0x7FFFFFFFFFFFFFFFUL,
               0x3FFFFFFFFFFFFFFFUL, 2);
  CHECK_MULDIV("mulhsu", 0xFFFFFFFFFFFFFFFEUL, 0x8000000000000001UL,
               0xFFFFFFFFFFFFFFFEUL, 3);
  CHECK_MULDIV("mulhu", 0x8000000000000003UL, 2,
               0x0000000000000001UL, 4);

  /* RV64 full-width signed/unsigned divide and remainder. */
  CHECK_MULDIV("div", 0x8000000000000003UL, 2,
               0xC000000000000002UL, 5);
  CHECK_MULDIV("divu", 0x8000000000000003UL, 2,
               0x4000000000000001UL, 6);
  CHECK_MULDIV("rem", 0x8000000000000003UL, 2,
               0xFFFFFFFFFFFFFFFFUL, 7);
  CHECK_MULDIV("remu", 0x8000000000000003UL, 2,
               0x0000000000000001UL, 8);

  /* RV64 word operations; results are sign-extended to 64 bits. */
  CHECK_MULDIV("mulw", 0xFFFFFFFF80000000UL, 3,
               0xFFFFFFFF80000000UL, 9);
  CHECK_MULDIV("divw", 0xFFFFFFFF80000000UL, 3,
               0xFFFFFFFFD5555556UL, 10);
  CHECK_MULDIV("divuw", 0xFFFFFFFF80000000UL, 3,
               0x000000002AAAAAAAUL, 11);
  CHECK_MULDIV("remw", 0xFFFFFFFF80000000UL, 3,
               0xFFFFFFFFFFFFFFFEUL, 12);
  CHECK_MULDIV("remuw", 0xFFFFFFFF80000000UL, 3,
               0x0000000000000002UL, 13);

  /* RISC-V M-extension divide-by-zero results. */
  CHECK_MULDIV("div", 0x123456789ABCDEF0UL, 0,
               0xFFFFFFFFFFFFFFFFUL, 14);
  CHECK_MULDIV("divu", 0x123456789ABCDEF0UL, 0,
               0xFFFFFFFFFFFFFFFFUL, 15);
  CHECK_MULDIV("rem", 0x123456789ABCDEF0UL, 0,
               0x123456789ABCDEF0UL, 16);
  CHECK_MULDIV("remu", 0x123456789ABCDEF0UL, 0,
               0x123456789ABCDEF0UL, 17);
  CHECK_MULDIV("divw", 0xFFFFFFFF80000001UL, 0,
               0xFFFFFFFFFFFFFFFFUL, 18);
  CHECK_MULDIV("divuw", 0xFFFFFFFF80000001UL, 0,
               0xFFFFFFFFFFFFFFFFUL, 19);
  CHECK_MULDIV("remw", 0xFFFFFFFF80000001UL, 0,
               0xFFFFFFFF80000001UL, 20);
  CHECK_MULDIV("remuw", 0xFFFFFFFF80000001UL, 0,
               0xFFFFFFFF80000001UL, 21);

  /* Signed division overflow: quotient is the dividend, remainder is zero. */
  CHECK_MULDIV("div", 0x8000000000000000UL, 0xFFFFFFFFFFFFFFFFUL,
               0x8000000000000000UL, 22);
  CHECK_MULDIV("rem", 0x8000000000000000UL, 0xFFFFFFFFFFFFFFFFUL,
               0x0000000000000000UL, 23);
  CHECK_MULDIV("divw", 0xFFFFFFFF80000000UL, 0xFFFFFFFFFFFFFFFFUL,
               0xFFFFFFFF80000000UL, 24);
  CHECK_MULDIV("remw", 0xFFFFFFFF80000000UL, 0xFFFFFFFFFFFFFFFFUL,
               0x0000000000000000UL, 25);

  flush_results();
  evict_results();
  tohost_exit(0); /* all multiply/divide/remainder checks passed */
}
