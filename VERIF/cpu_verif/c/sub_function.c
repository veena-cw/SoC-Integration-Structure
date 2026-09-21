/* sub_function.c
 * Directed SUB instruction test for BlackParrot.
 *
 * The inline assembly forces the compiler to emit the RV64 integer SUB
 * instruction:
 *   opcode = 7'b0110011, funct3 = 3'b000, funct7 = 7'b0100000
 */

#include <stdint.h>

/* bp_nonsynth_host maps the finish register at host base + 0x2000. */
#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
/* Keep the result buffer consistent with add_function.c. */
#define SUB_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void flush_sub_results(void)
{
  uintptr_t addr = (uintptr_t)SUB_RESULTS_ADDR;

  /* CBO.FLUSH uses immediate 2 and requires a cache-block-aligned address. */
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_sub_results(void)
{
  /* Addresses 16 KiB apart map to the same L2 set in this configuration. */
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x5AB0000000000000UL | i;
  }
}

static inline uint64_t sub_function(uint64_t a, uint64_t b)
{
  uint64_t result;

  __asm__ volatile (
    "sub %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );

  return result;
}

static void check_sub(uint64_t a, uint64_t b, uint64_t expected,
                      uint64_t test_number)
{
  uint64_t result = sub_function(a, b);

  /* Store each architectural SUB result in a dedicated DRAM buffer slot. */
  SUB_RESULTS_ADDR[test_number - 1] = result;

  if (result != expected)
    tohost_exit((test_number << 1) | 1); /* riscv-tests failure encoding */
}

/* Reset enters at 0x80000000. Initialize sp before calling compiled C code. */
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
  check_sub(0x0000000000000000UL,
            0x0000000000000000UL,
            0x0000000000000000UL, 1);

  check_sub(0x0000000000000001UL,
            0x0000000000000002UL,
            0xFFFFFFFFFFFFFFFFUL, 2);

  check_sub(0x00000000FFFFFFFFUL,
            0x0000000000000001UL,
            0x00000000FFFFFFFEUL, 3);

  check_sub(0x7FFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0x7FFFFFFFFFFFFFFEUL, 4);

  check_sub(0x8000000000000000UL,
            0xFFFFFFFFFFFFFFFFUL,
            0x8000000000000001UL, 5);

  check_sub(0xFFFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0xFFFFFFFFFFFFFFFEUL, 6);

  check_sub(0x123456789ABCDEF0UL,
            0x0FEDCBA987654321UL,
            0x02468ACF13579BCFUL, 7);

  /* Push the result line out of the write-back cache before reporting pass. */
  flush_sub_results();
  evict_sub_results();

  /* BlackParrot's bp_nonsynth_host treats zero as PASS. */
  tohost_exit(0); /* all SUB checks passed */
}
