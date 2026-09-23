/* load_add_store.c
 * BP-DV-007: load two operands from the preloaded DRAM image, add them, and
 * store/check the result through the data-memory path.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE 0x4000UL

/* Initialized volatile data is embedded in the NBF image. The CPU reads these
 * values at runtime; they are not folded into the ADD instruction. */
__attribute__((aligned(64), used))
volatile uint64_t dram_operands[2] = {
  0x123456789ABCDEF0UL,
  0x0FEDCBA987654321UL
};

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the testbench to observe the tohost write. */
  }
}

static void flush_result_line(void)
{
  uintptr_t addr = (uintptr_t)RESULT_ADDR;

  /* CBO.FLUSH writes back and invalidates the result cache block. */
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_result_line(void)
{
  /* Force conflicting lines through the write-back cache hierarchy so the
   * result reaches backing DRAM before the readback. */
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *alias =
      (volatile uint64_t *)(0x80005000UL + (i * ALIAS_STRIDE));
    *alias = 0xDADD000000000000UL | i;
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
  const uint64_t expected_a = 0x123456789ABCDEF0UL;
  const uint64_t expected_b = 0x0FEDCBA987654321UL;
  const uint64_t expected_sum = 0x2222222222222211UL;
  uint64_t a = dram_operands[0];
  uint64_t b = dram_operands[1];
  uint64_t sum;

  /* Force a register-register ADD using the values loaded from memory. */
  __asm__ volatile (
    "add %0, %1, %2"
    : "=r"(sum)
    : "r"(a), "r"(b)
  );

  if (a != expected_a)
    tohost_exit(1);
  if (b != expected_b)
    tohost_exit(2);
  if (sum != expected_sum)
    tohost_exit(3);

  /* Store the computed sum to a DRAM-backed result slot. */
  RESULT_ADDR[0] = sum;
  flush_result_line();
  evict_result_line();

  /* Read back after writeback/invalidation and verify the stored value. */
  if (RESULT_ADDR[0] != expected_sum)
    tohost_exit(4);

  tohost_exit(0); /* Loads, ADD, result store, and readback all passed. */
}
