/* branch_function.c
 * BP-DV-007: directed RV64 conditional-branch test.
 *
 * Exercises taken and not-taken forward branches, plus taken and completed
 * backward branches. The result is written to DRAM and tohost is written
 * with zero only after every branch outcome is correct.
 */

#include <stdint.h>

#define TOHOST_ADDR         ((volatile uint64_t *)0x00102000UL)
#define BRANCH_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

/* A nonzero bit in the returned value identifies a wrong branch outcome. */
__attribute__((noinline, used))
static uint64_t check_branches(void)
{
  uint64_t fail;

  __asm__ volatile (
    "li   t0, 0\n"

    /* BEQ: taken forward, then not taken forward. */
    "li   t1, 5\n"
    "li   t2, 5\n"
    "beq  t1, t2, 1f\n"
    "ori  t0, t0, 0x001\n"
    "1:\n"
    "li   t1, 5\n"
    "li   t2, 6\n"
    "beq  t1, t2, 2f\n"
    "j    3f\n"
    "2: ori  t0, t0, 0x002\n"
    "3:\n"

    /* BNE: taken forward, then not taken forward. */
    "li   t1, 5\n"
    "li   t2, 6\n"
    "bne  t1, t2, 4f\n"
    "ori  t0, t0, 0x004\n"
    "4:\n"
    "li   t1, 5\n"
    "li   t2, 5\n"
    "bne  t1, t2, 5f\n"
    "j    6f\n"
    "5: ori  t0, t0, 0x008\n"
    "6:\n"

    /* Signed BLT/BGE: taken and not-taken forward cases. */
    "li   t1, -1\n"
    "li   t2, 1\n"
    "blt  t1, t2, 7f\n"
    "ori  t0, t0, 0x010\n"
    "7:\n"
    "li   t1, 1\n"
    "li   t2, -1\n"
    "blt  t1, t2, 8f\n"
    "j    9f\n"
    "8: ori  t0, t0, 0x020\n"
    "9:\n"
    "li   t1, 1\n"
    "li   t2, -1\n"
    "bge  t1, t2, 10f\n"
    "ori  t0, t0, 0x040\n"
    "10:\n"
    "li   t1, -1\n"
    "li   t2, 1\n"
    "bge  t1, t2, 11f\n"
    "j    12f\n"
    "11: ori  t0, t0, 0x080\n"
    "12:\n"

    /* Unsigned BLTU/BGEU: taken and not-taken forward cases. */
    "li   t1, 1\n"
    "li   t2, 2\n"
    "bltu t1, t2, 13f\n"
    "ori  t0, t0, 0x100\n"
    "13:\n"
    "li   t1, 2\n"
    "li   t2, 1\n"
    "bltu t1, t2, 14f\n"
    "j    15f\n"
    "14: ori  t0, t0, 0x200\n"
    "15:\n"
    "li   t1, 2\n"
    "li   t2, 1\n"
    "bgeu t1, t2, 16f\n"
    "ori  t0, t0, 0x400\n"
    "16:\n"
    "li   t1, 1\n"
    "li   t2, 2\n"
    "bgeu t1, t2, 17f\n"
    "j    18f\n"
    "17: li   t3, 0x800\n"
    "or   t0, t0, t3\n"
    "18:\n"

    /* BLT backward loop: taken several times, then not taken at the limit. */
    "li   t1, 0\n"
    "li   t2, 4\n"
    "19: addi t1, t1, 1\n"
    "blt  t1, t2, 19b\n"
    "bne  t1, t2, 20f\n"
    "j    21f\n"
    "20: li   t3, 0x1000\n"
    "or   t0, t0, t3\n"
    "21:\n"

    /* BNE backward loop: taken while the counter is nonzero. */
    "li   t1, 3\n"
    "22: addi t1, t1, -1\n"
    "bne  t1, x0, 22b\n"
    "bne  t1, x0, 23f\n"
    "j    24f\n"
    "23: li   t3, 0x2000\n"
    "or   t0, t0, t3\n"
    "24:\n"

    "mv   %0, t0\n"
    : "=r" (fail)
    :
    : "t0", "t1", "t2", "t3", "memory");

  return fail;
}

static void flush_branch_results(void)
{
  uintptr_t addr = (uintptr_t)BRANCH_RESULTS_ADDR;
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_branch_results(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x4252414E43480000UL | i; /* ASCII "BRANCH" marker */
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
  uint64_t branch_fail = check_branches();

  BRANCH_RESULTS_ADDR[0] = branch_fail;
  BRANCH_RESULTS_ADDR[1] = 0x4252414E43485053UL; /* "BRANCHPS" */

  if (branch_fail != 0)
    tohost_exit(branch_fail);

  flush_branch_results();
  evict_branch_results();
  tohost_exit(0); /* all conditional branch checks passed */
}
