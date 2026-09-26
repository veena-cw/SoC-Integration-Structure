/* illegal_trap_function.c
 * BP-DV-015: illegal-instruction exception, trap entry, and mret return.
 *
 * Two explicit illegal 32-bit encodings are executed. The machine trap
 * handler records mcause/mepc, advances mepc past the faulting instruction,
 * and returns with mret. The program reaches the result write only if both
 * trap entries and both returns complete correctly.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE 0x4000UL

/* [0] count, [1] last mcause, [2] last mepc, [3] handler error,
 * [4:5] mcause for the two traps, [6:7] mepc for the two traps. */
__attribute__((aligned(64), used))
volatile uint64_t trap_state[8] = { 0 };

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe the tohost write. */
  }
}

__attribute__((naked, aligned(4), used))
void illegal_trap_handler(void)
{
  __asm__ volatile (
    "la t1, trap_state\n"
    "ld t2, 0(t1)\n"
    "li t3, 2\n"
    "bgeu t2, t3, 2f\n"

    /* Record mcause in the per-trap slot and in the last-cause slot. */
    "csrr t5, mcause\n"
    "slli t3, t2, 3\n"
    "addi t3, t3, 32\n"
    "add t4, t1, t3\n"
    "sd t5, 0(t4)\n"
    "sd t5, 8(t1)\n"
    "li t3, 2\n"
    "bne t5, t3, 1f\n"

    /* Record mepc and return to the instruction after the illegal word. */
    "csrr t0, mepc\n"
    "slli t3, t2, 3\n"
    "addi t3, t3, 48\n"
    "add t4, t1, t3\n"
    "sd t0, 0(t4)\n"
    "sd t0, 16(t1)\n"
    "j 3f\n"

    /* Any unexpected exception is recorded as a handler error. */
    "1: li t3, 1\n"
    "sd t3, 24(t1)\n"
    "csrr t0, mepc\n"

    "3: addi t0, t0, 4\n"
    "csrw mepc, t0\n"
    "addi t2, t2, 1\n"
    "sd t2, 0(t1)\n"
    "mret\n"

    /* More than two traps means the test did not follow the expected path. */
    "2: li t3, 1\n"
    "sd t3, 24(t1)\n"
    "j 2b\n"
  );
}

/* Naked functions place the illegal word at the function entry address. */
__attribute__((naked, noinline, aligned(4), used))
void illegal_zero(void)
{
  __asm__ volatile (
    ".word 0x00000000\n"
    "ret\n"
  );
}

__attribute__((naked, noinline, aligned(4), used))
void illegal_ones(void)
{
  __asm__ volatile (
    ".word 0xffffffff\n"
    "ret\n"
  );
}

static void install_trap_handler(void)
{
  uintptr_t handler = (uintptr_t)&illegal_trap_handler;
  __asm__ volatile ("csrw mtvec, %0" :: "r"(handler) : "memory");
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
    *alias = 0xC015000000000000ULL | i;
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
  uint64_t expected_pc_zero = (uint64_t)(uintptr_t)&illegal_zero;
  uint64_t expected_pc_ones = (uint64_t)(uintptr_t)&illegal_ones;

  install_trap_handler();

  /* Each call must trap, advance mepc, execute mret, and return here. */
  illegal_zero();
  illegal_ones();

  if (trap_state[0] != 2)
    fail |= 1ULL << 0;
  if (trap_state[1] != 2 || trap_state[4] != 2 || trap_state[5] != 2)
    fail |= 1ULL << 1;
  if (trap_state[3] != 0)
    fail |= 1ULL << 2;
  if (trap_state[6] != expected_pc_zero || trap_state[7] != expected_pc_ones)
    fail |= 1ULL << 3;

  RESULT_ADDR[0] = fail;
  RESULT_ADDR[1] = trap_state[0];
  RESULT_ADDR[2] = trap_state[4];
  RESULT_ADDR[3] = trap_state[5];
  RESULT_ADDR[4] = trap_state[6];
  RESULT_ADDR[5] = trap_state[7];
  RESULT_ADDR[6] = expected_pc_zero;
  RESULT_ADDR[7] = expected_pc_ones;
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? 1 : 0);
}
