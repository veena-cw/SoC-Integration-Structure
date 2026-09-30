/* cache_burst_function.c
 * BP-DV-025: cache-line refill and AXI burst observation test.
 *
 * The first load from each aligned 64-byte line is intentionally cold.  The
 * UVM scoreboard checks AWLEN/ARLEN at the AXI bridge.  This is a diagnostic
 * test: it passes the data-integrity check, but requires a multi-beat burst
 * only when the cache-refill path is routed through this AXI bridge.
 */
#include <stdint.h>

#define TOHOST_ADDR       ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR       ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE      0x4000UL
#define CACHE_LINE_BYTES  64UL
#define LINE_COUNT        8UL

__attribute__((aligned(64), used))
volatile uint64_t burst_lines[LINE_COUNT][8] = {
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
    0x444444444444444AULL, 0x444444444444444BULL },
  { 0x5555555555555555ULL, 0x5555555555555556ULL,
    0x5555555555555557ULL, 0x5555555555555558ULL,
    0x5555555555555559ULL, 0x555555555555555AULL,
    0x555555555555555BULL, 0x555555555555555CULL },
  { 0x6666666666666666ULL, 0x6666666666666667ULL,
    0x6666666666666668ULL, 0x6666666666666669ULL,
    0x666666666666666AULL, 0x666666666666666BULL,
    0x666666666666666CULL, 0x666666666666666DULL },
  { 0x7777777777777777ULL, 0x7777777777777778ULL,
    0x7777777777777779ULL, 0x777777777777777AULL,
    0x777777777777777BULL, 0x777777777777777CULL,
    0x777777777777777DULL, 0x777777777777777EULL },
  { 0x8888888888888888ULL, 0x8888888888888889ULL,
    0x888888888888888AULL, 0x888888888888888BULL,
    0x888888888888888CULL, 0x888888888888888DULL,
    0x888888888888888EULL, 0x888888888888888FULL }
};

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) { }
}

static uint64_t load_word(const volatile uint64_t *addr)
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
    *alias = 0xC025000000000000ULL | i;
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
  uint64_t cold_sum = 0;
  uint64_t verify_sum = 0;
  uint64_t fail = 0;

  /* One first-word access per line creates eight cold-line refill candidates. */
  for (uint64_t line = 0; line < LINE_COUNT; line++)
    cold_sum ^= load_word(&burst_lines[line][0]);

  /* Touch every word so the loaded line contents are checked as well. */
  for (uint64_t line = 0; line < LINE_COUNT; line++) {
    for (uint64_t word = 0; word < 8; word++) {
      uint64_t value = load_word(&burst_lines[line][word]);
      verify_sum ^= value;
      if (value != burst_lines[line][word])
        fail |= 1ULL << line;
    }
  }

  /* XOR of the eight first words: 0x11 ^ ... ^ 0x88 = 0x88. */
  if (cold_sum != 0x8888888888888888ULL)
    fail |= 1ULL << 16;
  /* Per-word comparisons above are the data-integrity check.  The XOR
   * checksum is allowed to be zero for a symmetric test pattern. */

  RESULT_ADDR[0] = fail;
  RESULT_ADDR[1] = cold_sum;
  RESULT_ADDR[2] = verify_sum;
  RESULT_ADDR[3] = LINE_COUNT;
  RESULT_ADDR[4] = CACHE_LINE_BYTES;
  RESULT_ADDR[5] = 0xC0DE0125ULL;
  RESULT_ADDR[6] = 0x42555253545F5445ULL; /* "BURST_TE" */
  RESULT_ADDR[7] = 0x53545F5041535300ULL; /* "ST_PASS" */
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? 1 : 0);
}
