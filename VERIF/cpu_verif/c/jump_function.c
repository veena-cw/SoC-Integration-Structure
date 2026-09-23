/* jump_function.c
 * BP-DV-008: directed RV64 JAL/JALR jump test.
 *
 * Each helper checks that the jump reaches its aligned target and that the
 * link register contains the address of the instruction after the jump.
 */

#include <stdint.h>

#define TOHOST_ADDR       ((volatile uint64_t *)0x00102000UL)
#define JUMP_RESULTS_ADDR ((volatile uint64_t *)0x80005000UL)

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

/* Return zero when JAL reaches the target and writes PC+4 to its link rd. */
__attribute__((noinline, used))
static uint64_t check_jal_link(void)
{
  uint64_t fail;

  __asm__ volatile (
    "li   t0, 0\n"
    "jal  t1, 1f\n"
    "li   t0, 1\n"          /* executed only if JAL does not jump */
    "1: auipc t2, 0\n"      /* target PC */
    "addi t3, t1, 4\n"      /* JAL link must be target PC - 4 */
    "sub  t3, t3, t2\n"
    "sltu t3, x0, t3\n"     /* link/target mismatch -> 1 */
    "or   t0, t0, t3\n"
    "mv   %0, t0\n"
    : "=r" (fail)
    :
    : "t0", "t1", "t2", "t3", "memory");

  return fail;
}

/* Return zero when JALR reaches an indirect, aligned target and writes PC+4. */
__attribute__((noinline, used))
static uint64_t check_jalr_link(void)
{
  uint64_t fail;

  __asm__ volatile (
    "li   t0, 0\n"
    "la   t1, 1f\n"         /* indirect target address */
    "jalr t2, 0(t1)\n"
    "li   t0, 1\n"          /* executed only if JALR does not jump */
    ".balign 4\n"
    "1: auipc t3, 0\n"      /* aligned target PC */
    "addi t4, t2, 4\n"      /* JALR link must be target PC - 4 */
    "sub  t4, t4, t3\n"
    "sltu t4, x0, t4\n"     /* link/target mismatch -> 1 */
    "or   t0, t0, t4\n"
    "mv   %0, t0\n"
    : "=r" (fail)
    :
    : "t0", "t1", "t2", "t3", "t4", "memory");

  return fail;
}

static void flush_jump_results(void)
{
  uintptr_t addr = (uintptr_t)JUMP_RESULTS_ADDR;

  /* CBO.FLUSH writes back and invalidates the result cache line. */
  __asm__ volatile (".insn i 0x0f, 2, x0, %0, 2" :: "r"(addr) : "memory");
}

static void evict_jump_results(void)
{
  /* Force the dirty result line through the write-back hierarchy. */
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *conflict_addr =
      (volatile uint64_t *)(0x80005000UL + (i * 0x4000UL));
    *conflict_addr = 0x4A554D5000000000UL | i; /* ASCII "JUMP" marker */
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
  uint64_t jal_fail = check_jal_link();
  JUMP_RESULTS_ADDR[0] = jal_fail;
  if (jal_fail != 0)
    tohost_exit(1);

  uint64_t jalr_fail = check_jalr_link();
  JUMP_RESULTS_ADDR[1] = jalr_fail;
  if (jalr_fail != 0)
    tohost_exit(2);

  flush_jump_results();
  evict_jump_results();
  tohost_exit(0); /* JAL/JALR targets and link registers passed. */
}
