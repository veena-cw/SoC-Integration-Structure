/* atomic_function.c
 * BP-DV-013: directed RV64A atomic-operation test.
 *
 * Exercises AMOSWAP/AMOADD/AMOXOR/AMOAND/AMOOR/AMOMIN/AMOMAX and their
 * unsigned variants, plus LR/SC success and reservation invalidation by an
 * intervening store. Results are written to DRAM before tohost is completed.
 */

#include <stdint.h>

#define TOHOST_ADDR         ((volatile uint64_t *)0x00102000UL)
#define ATOMIC_ADDR         ((volatile uint64_t *)0x80006000UL)
#define ATOMIC_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)
#define RESULT_COUNT        20UL

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static uint64_t amo_swap_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amoswap.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_add_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amoadd.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_xor_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amoxor.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_and_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amoand.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_or_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amoor.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_min_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amomin.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_max_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amomax.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_minu_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amominu.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t amo_maxu_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t old;
  __asm__ volatile ("amomaxu.d %0, %2, (%1)"
                    : "=r"(old)
                    : "r"(addr), "r"(value)
                    : "memory");
  return old;
}

static uint64_t lr_d(volatile uint64_t *addr)
{
  uint64_t value;
  __asm__ volatile ("lr.d %0, (%1)"
                    : "=r"(value)
                    : "r"(addr)
                    : "memory");
  return value;
}

static uint64_t sc_d(volatile uint64_t *addr, uint64_t value)
{
  uint64_t status;
  __asm__ volatile ("sc.d %0, %2, (%1)"
                    : "=r"(status)
                    : "r"(addr), "r"(value)
                    : "memory");
  return status;
}

static void flush_result_line(void)
{
  uintptr_t addr = (uintptr_t)ATOMIC_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_result_line(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0xA700000000000000UL | i;
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
  uint64_t fail = 0;
  uint64_t slot = 0;
  uint64_t old;
  uint64_t status;

#define CHECK_OLD_AND_MEM(operation, initial, operand, expected_old, expected_mem) \
  do { \
    *ATOMIC_ADDR = (uint64_t)(initial); \
    old = (operation)(ATOMIC_ADDR, (uint64_t)(operand)); \
    ATOMIC_RESULTS_ADDR[slot++] = old; \
    ATOMIC_RESULTS_ADDR[slot++] = *ATOMIC_ADDR; \
    if ((old != (uint64_t)(expected_old)) || \
        (*ATOMIC_ADDR != (uint64_t)(expected_mem))) \
      fail |= 1ULL << slot; \
  } while (0)

  CHECK_OLD_AND_MEM(amo_swap_d, 0x1111, 0x2222, 0x1111, 0x2222);
  CHECK_OLD_AND_MEM(amo_add_d,  10, 5, 10, 15);
  CHECK_OLD_AND_MEM(amo_xor_d,  0xF0, 0x0F, 0xF0, 0xFF);
  CHECK_OLD_AND_MEM(amo_and_d,  0xFF, 0x0F, 0xFF, 0x0F);
  CHECK_OLD_AND_MEM(amo_or_d,   0xF0, 0x0F, 0xF0, 0xFF);
  CHECK_OLD_AND_MEM(amo_min_d,  (uint64_t)-2, 1, (uint64_t)-2, (uint64_t)-2);
  CHECK_OLD_AND_MEM(amo_max_d,  (uint64_t)-2, 1, (uint64_t)-2, 1);
  CHECK_OLD_AND_MEM(amo_minu_d, 5, 3, 5, 3);
  CHECK_OLD_AND_MEM(amo_maxu_d, 5, 7, 5, 7);

  /* Successful LR/SC pair. */
  *ATOMIC_ADDR = 0x100;
  old = lr_d(ATOMIC_ADDR);
  status = sc_d(ATOMIC_ADDR, 0x200);
  ATOMIC_RESULTS_ADDR[slot++] = old;
  ATOMIC_RESULTS_ADDR[slot++] = status;
  ATOMIC_RESULTS_ADDR[slot++] = *ATOMIC_ADDR;
  if ((old != 0x100) || (status != 0) || (*ATOMIC_ADDR != 0x200))
    fail |= 1ULL << 18;

  /* A second LR changes the reservation address, so the following SC to the
   * original address must fail.  BlackParrot intentionally does not clear a
   * reservation for a normal same-hart store; see bp_be_dcache.sv. */
  *ATOMIC_ADDR = 0x300;
  *(ATOMIC_ADDR + 0x20) = 0x555;
  old = lr_d(ATOMIC_ADDR);
  (void)lr_d(ATOMIC_ADDR + 0x20);
  status = sc_d(ATOMIC_ADDR, 0x400);
  ATOMIC_RESULTS_ADDR[slot++] = old;
  ATOMIC_RESULTS_ADDR[slot++] = status;
  ATOMIC_RESULTS_ADDR[slot++] = *ATOMIC_ADDR;
  if ((old != 0x300) || (status == 0) || (*ATOMIC_ADDR != 0x300))
    fail |= 1ULL << 19;

  ATOMIC_RESULTS_ADDR[0] = fail;
  flush_result_line();
  evict_result_line();

  if (ATOMIC_RESULTS_ADDR[0] != 0)
    tohost_exit(1);
  tohost_exit(0); /* AMOs and LR/SC checks passed. */
}
