/* compressed_function.c
 * BP-DV-019: RV64C compressed instruction execution.
 *
 * The compressed_ops() routine uses explicit RVC mnemonics so the test image
 * exercises compressed arithmetic (C.LI/C.ADDI/C.ADD), C.LD/C.SD and C.LW/C.SW,
 * C.BEQZ/C.BNEZ, C.J, and C.JALR/C.JR. The resulting values are stored in
 * DRAM and checked before the zero tohost pass indication is written.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define ALIAS_STRIDE 0x4000UL

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe the tohost write. */
  }
}

/*
 * Output slots written by this routine:
 *   [1] C.LI/C.ADDI/C.ADD arithmetic result = 10
 *   [2] C.LD/C.SD result = 11
 *   [3] C.LW/C.SW result = 11
 *   [4] C.LW/C.SW mirror result = 11
 *   [5] C.BEQZ/C.BNEZ result = 3 (not-taken then taken paths)
 *   [6] C.J result = 1
 *   [7] C.JALR/C.JR result = 2
 */
__attribute__((naked, noinline, aligned(2), used))
static void compressed_ops(volatile uint64_t *out)
{
  __asm__ volatile (
    ".option push\n"
    ".option rvc\n"

    /* Compressed arithmetic and doubleword load/store. */
    "c.mv s0, a0\n"
    "c.li a0, 5\n"
    "c.addi a0, 3\n"
    "c.li a1, 2\n"
    "c.add a0, a1\n"
    "c.sd a0, 8(s0)\n"
    "c.ld a1, 8(s0)\n"
    "c.addi a1, 1\n"
    "c.sd a1, 16(s0)\n"

    /* Compressed word load/store. */
    "c.sw a1, 24(s0)\n"
    "c.lw a2, 24(s0)\n"
    "c.sd a2, 32(s0)\n"

    /* C.BEQZ is not taken; C.BNEZ is taken. Expected result is 1+2 = 3. */
    "c.li a2, 1\n"
    "c.li a3, 0\n"
    "c.beqz a2, 1f\n"
    "c.addi a3, 1\n"
    "c.bnez a2, 2f\n"
    "1: c.li a3, 31\n"
    "c.j 3f\n"
    "2: c.addi a3, 2\n"
    "3: c.sd a3, 40(s0)\n"

    /* C.J skips the wrong path and reaches the target. */
    "c.li a4, 0\n"
    "c.j 4f\n"
    "c.li a4, 31\n"
    "4: c.addi a4, 1\n"
    "c.sd a4, 48(s0)\n"

    /* C.JALR enters a local target; C.JR returns through the link register. */
    "c.li a5, 0\n"
    "c.mv s2, ra\n"
    "la s1, 5f\n"
    "c.jalr s1\n"
    "c.mv ra, s2\n"
    "c.addi a5, 1\n"
    "c.j 6f\n"
    "5: c.addi a5, 1\n"
    "c.jr ra\n"
    "6: c.sd a5, 56(s0)\n"

    "c.jr ra\n"
    ".option pop\n"
  );
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
    *alias = 0xC019000000000000ULL | i;
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

  compressed_ops(RESULT_ADDR);

  if (RESULT_ADDR[1] != 10)
    fail |= 1ULL << 0;
  if (RESULT_ADDR[2] != 11)
    fail |= 1ULL << 1;
  if (RESULT_ADDR[3] != 11)
    fail |= 1ULL << 2;
  if (RESULT_ADDR[4] != 11)
    fail |= 1ULL << 3;
  if (RESULT_ADDR[5] != 3)
    fail |= 1ULL << 4;
  if (RESULT_ADDR[6] != 1)
    fail |= 1ULL << 5;
  if (RESULT_ADDR[7] != 2)
    fail |= 1ULL << 6;

  RESULT_ADDR[0] = fail;
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? 1 : 0);
}
