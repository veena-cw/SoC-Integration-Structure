/* cache_replacement_function.c
 * BP-DV-020: directed cache conflict/replacement and re-access test.
 *
 * The active BlackParrot configuration has 64 sets, 8 ways, and 64-byte
 * lines. A 0x4000 stride is an integer multiple of the complete set span
 * (64 * 64 bytes), so these ten line addresses have the same set index but
 * different tags. Ten lines therefore exceed the eight available ways.
 */
#include <stdint.h>
#include "dual_core.h"

#define RESULT_ADDR       ((volatile uint64_t *)HART_DRAM(0x80005000UL))
#define CONFLICT_BASE     HART_DRAM(0x80010000UL)
#define CONFLICT_STRIDE   0x4000UL
#define CONFLICT_LINES    10UL

static uint64_t load_line(uint64_t index)
{
  volatile uint64_t *addr =
    (volatile uint64_t *)(CONFLICT_BASE + index * CONFLICT_STRIDE);
  uint64_t value;
  __asm__ volatile ("ld %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static void store_line(uint64_t index, uint64_t value)
{
  volatile uint64_t *addr =
    (volatile uint64_t *)(CONFLICT_BASE + index * CONFLICT_STRIDE);
  __asm__ volatile ("sd %0, 0(%1)" :: "r"(value), "r"(addr) : "memory");
}

static void start_main(void);

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
  uint64_t expected[CONFLICT_LINES];
  uint64_t warm_sum = 0;
  uint64_t replacement_sum = 0;
  uint64_t reread_sum = 0;
  uint64_t fail = 0;

  for (uint64_t i = 0; i < CONFLICT_LINES; i++) {
    expected[i] = 0xD020000000000000ULL | i;
    store_line(i, expected[i]);
  }
  for (uint64_t i = 0; i < CONFLICT_LINES; i++)
    warm_sum ^= load_line(i);

  /* These accesses occur after the set is over-subscribed. */
  replacement_sum ^= load_line(0);
  replacement_sum ^= load_line(1);

  for (uint64_t i = 0; i < CONFLICT_LINES; i++)
    reread_sum ^= load_line(i);

  for (uint64_t i = 0; i < CONFLICT_LINES; i++) {
    uint64_t value = load_line(i);
    if (value != expected[i])
      fail |= 1ULL << i;
  }
  if (warm_sum == 0 || reread_sum == 0)
    fail |= 1ULL << 16;

  RESULT_ADDR[0] = fail;
  RESULT_ADDR[1] = warm_sum;
  RESULT_ADDR[2] = replacement_sum;
  RESULT_ADDR[3] = reread_sum;
  RESULT_ADDR[4] = CONFLICT_LINES;
  RESULT_ADDR[5] = CONFLICT_STRIDE;
  RESULT_ADDR[6] = 0xC0DE0120ULL;
  RESULT_ADDR[7] = 0x4556494354494F4EULL; /* "EVICTION" */
  __asm__ volatile ("fence rw, rw" ::: "memory");

  tohost_exit(fail ? 1 : 0);
}
