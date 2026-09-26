/* width_function.c
 * BP-DV-010: RV64 memory-width test.
 *
 * Exercises signed/unsigned byte, halfword, and word loads plus byte,
 * halfword, and word stores at aligned, legal addresses. The initialized
 * bytes are part of the NBF image, so the load checks fetch data from memory.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE 0x4000UL

/* Little-endian memory image:
 *   byte 0      = 0x80          -> LB/LBU
 *   halfword 1  = 0x8001        -> LH/LHU (offset 2)
 *   word 1      = 0x80000001    -> LW    (offset 4)
 * Store destinations begin at offset 8 and remain naturally aligned.
 */
__attribute__((aligned(64), used))
volatile uint8_t width_memory[64] = {
  0x80, 0x00, 0x01, 0x80, 0x01, 0x00, 0x00, 0x80,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe the tohost write. */
  }
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
    *alias = 0xD710000000000000UL | i;
  }
}

static int64_t load_lb(const volatile void *addr)
{
  int64_t value;
  __asm__ volatile ("lb %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static uint64_t load_lbu(const volatile void *addr)
{
  uint64_t value;
  __asm__ volatile ("lbu %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static int64_t load_lh(const volatile void *addr)
{
  int64_t value;
  __asm__ volatile ("lh %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static uint64_t load_lhu(const volatile void *addr)
{
  uint64_t value;
  __asm__ volatile ("lhu %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static int64_t load_lw(const volatile void *addr)
{
  int64_t value;
  __asm__ volatile ("lw %0, 0(%1)" : "=r"(value) : "r"(addr) : "memory");
  return value;
}

static void store_sb(volatile void *addr, uint64_t value)
{
  __asm__ volatile ("sb %1, 0(%0)" :: "r"(addr), "r"(value) : "memory");
}

static void store_sh(volatile void *addr, uint64_t value)
{
  __asm__ volatile ("sh %1, 0(%0)" :: "r"(addr), "r"(value) : "memory");
}

static void store_sw(volatile void *addr, uint64_t value)
{
  __asm__ volatile ("sw %1, 0(%0)" :: "r"(addr), "r"(value) : "memory");
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
  volatile int8_t   *signed_bytes  = (volatile int8_t *)width_memory;
  volatile uint8_t  *unsigned_bytes = (volatile uint8_t *)width_memory;
  volatile int16_t  *signed_halves = (volatile int16_t *)(width_memory + 2);
  volatile uint16_t *unsigned_halves = (volatile uint16_t *)(width_memory + 2);
  volatile int32_t  *signed_words  = (volatile int32_t *)(width_memory + 4);
  volatile uint8_t  *store_bytes   = (volatile uint8_t *)(width_memory + 8);
  volatile uint16_t *store_halves  = (volatile uint16_t *)(width_memory + 10);
  volatile uint32_t *store_words   = (volatile uint32_t *)(width_memory + 12);

  uint64_t fail = 0;
  int64_t lb = load_lb(signed_bytes);
  uint64_t lbu = load_lbu(unsigned_bytes);
  int64_t lh = load_lh(signed_halves);
  uint64_t lhu = load_lhu(unsigned_halves);
  int64_t lw = load_lw(signed_words);
  uint64_t sb_read;
  uint64_t sh_read;
  uint64_t sw_read;

  if (lb != -128)
    fail |= 1ULL << 0;
  if (lbu != 0x80)
    fail |= 1ULL << 1;
  if (lh != -32767)
    fail |= 1ULL << 2;
  if (lhu != 0x8001)
    fail |= 1ULL << 3;
  if (lw != -2147483647LL)
    fail |= 1ULL << 4;

  store_sb(store_bytes, 0xA5);
  store_sh(store_halves, 0xBEEF);
  store_sw(store_words, 0xCAFEBABE);

  sb_read = load_lbu(store_bytes);
  sh_read = load_lhu(store_halves);
  sw_read = ((uint64_t)load_lw(store_words)) & 0xFFFFFFFFULL;
  if (sb_read != 0xA5)
    fail |= 1ULL << 5;
  if (sh_read != 0xBEEF)
    fail |= 1ULL << 6;
  if (sw_read != 0xCAFEBABE)
    fail |= 1ULL << 7;

  /* Keep all diagnostics within one cache line so the backing DRAM readback
   * observes the complete result record after flush/eviction. */
  RESULT_ADDR[0] = fail;
  RESULT_ADDR[1] = (uint64_t)lb;
  RESULT_ADDR[2] = lbu;
  RESULT_ADDR[3] = (uint64_t)lh;
  RESULT_ADDR[4] = lhu;
  RESULT_ADDR[5] = (uint64_t)lw;
  RESULT_ADDR[6] = sb_read | (sh_read << 8) | (sw_read << 24);
  RESULT_ADDR[7] = 0xB0D00100ULL;
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? 1 : 0);
}
