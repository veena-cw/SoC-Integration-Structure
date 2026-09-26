/* cache_miss_function.c
 * BP-DV-012: directed cold-cache/refill and repeated-hit test.
 *
 * Four independent 64-byte lines are loaded once, then loaded repeatedly.
 * The first pass exercises line fills; the later passes should be cache hits.
 * The values and pass/fail status are written to DRAM before tohost completes.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE 0x4000UL
#define CACHE_LINE_BYTES 64UL
#define LINE_COUNT 4UL

/* Exactly eight 64-bit words per line keeps each line 64-byte aligned and
 * makes the refill granularity explicit in the test image. */
__attribute__((aligned(64), used))
volatile uint64_t cache_lines[LINE_COUNT][8] = {
  { 0x1111111111111111ULL, 0x1111111111111112ULL,
    0x1111111111111113ULL, 0x1111111111111114ULL,
    0x1111111111111115ULL, 0x1111111111111116ULL,
    0x1111111111111117ULL, 0x1111111111111118ULL },
  { 0x2222222222222222ULL, 0x2222222222222223ULL,
    0x2222222222222224ULL, 0x2222222222222225ULL,
    0x2222222222222226ULL, 0x2222222222222227ULL,
    0x2222222222222228ULL, 0x2222222222222229ULL },
  { 0x3333333333333333ULL, 0x3333333333333334ULL,
    0x3333333333333335ULL, 0x3333333333333336ULL,
    0x3333333333333337ULL, 0x3333333333333338ULL,
    0x3333333333333339ULL, 0x333333333333333AULL },
  { 0x4444444444444444ULL, 0x4444444444444445ULL,
    0x4444444444444446ULL, 0x4444444444444447ULL,
    0x4444444444444448ULL, 0x4444444444444449ULL,
    0x444444444444444AULL, 0x444444444444444BULL }
};

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe the tohost write. */
  }
}

static uint64_t load_line_word(const volatile uint64_t *addr)
{
  uint64_t value;
  __asm__ volatile ("ld %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static void flush_result_line(void)
{
  uintptr_t addr = (uintptr_t)RESULT_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_result_line(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *alias =
      (volatile uint64_t *)(0x80005000UL + (i * ALIAS_STRIDE));
    *alias = 0xC012000000000000ULL | i;
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
  const uint64_t expected = 0x4444444444444444ULL;
  uint64_t cold_sum = 0;
  uint64_t repeat_sum = 0;
  uint64_t fail = 0;

  /* First access to each distinct line: four cold-line refill candidates. */
  for (uint64_t line = 0; line < LINE_COUNT; line++)
    cold_sum ^= load_line_word(&cache_lines[line][0]);

  /* Three complete repeats: the same line addresses should now hit. */
  for (uint64_t pass = 0; pass < 3; pass++)
    for (uint64_t line = 0; line < LINE_COUNT; line++)
      repeat_sum ^= load_line_word(&cache_lines[line][0]);

  if (cold_sum != expected)
    fail |= 1ULL << 0;
  if (repeat_sum != expected)
    fail |= 1ULL << 1;

  RESULT_ADDR[0] = fail;
  RESULT_ADDR[1] = cold_sum;
  RESULT_ADDR[2] = repeat_sum;
  RESULT_ADDR[3] = expected;
  RESULT_ADDR[4] = LINE_COUNT;
  RESULT_ADDR[5] = CACHE_LINE_BYTES;
  RESULT_ADDR[6] = 0xC0DE0120ULL;
  RESULT_ADDR[7] = 0x4849545F50415353ULL; /* "HIT_PASS" */
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? 1 : 0);
}
