/* compressed_function.c
 * BP-DV-019: RV64C compressed instruction execution.
 *
 * The compressed_ops() routine uses explicit RVC mnemonics so the test image
 * exercises compressed arithmetic (C.LI/C.ADDI/C.ADD), C.LD/C.SD and C.LW/C.SW,
 * C.BEQZ/C.BNEZ, C.J, and C.JALR/C.JR. compressed_ops2() adds C.SRAI,
 * C.ANDI, C.AND, C.XOR, C.ADDW, C.SUBW, C.ADDI16SP with C.SWSP/C.LWSP, and
 * c_ebreak() executes C.EBREAK (M-mode breakpoint, mcause 3; the trap
 * handler skips 2 bytes for a compressed instruction). The resulting
 * values are stored in DRAM and checked before the zero tohost pass
 * indication is written. A nonzero tohost bit n = check n failed.
 */

#include <stdint.h>
#include "dual_core.h"

#define RESULT_ADDR  ((volatile uint64_t *)HART_DRAM(0x80005000UL))
#define ALIAS_STRIDE 0x4000UL

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

/*
 * Output slots written by compressed_ops2 (a0 = out, plain sd stores):
 *   [8]  C.SRAI:  -32 >> 2 (arithmetic) = -8
 *   [9]  C.ANDI:  31 & 12 = 12
 *   [10] C.AND:   13 & 11 = 9
 *   [11] C.XOR:   13 ^ 11 = 6
 *   [12] C.ADDW:  0x7fffffff + 1 = 0xffffffff80000000 (sign-extended)
 *   [13] C.SUBW:  0x80000000 - 1 = 0x7fffffff
 *   [14] C.ADDI16SP / C.SWSP / C.LWSP round trip = 0x12345678
 */
__attribute__((naked, noinline, aligned(2), used))
static void compressed_ops2(volatile uint64_t *out)
{
  __asm__ volatile (
    ".option push\n"
    ".option rvc\n"
    "c.li a1, -32\n"
    "c.srai a1, 2\n"
    "sd a1, 64(a0)\n"
    "c.li a2, 31\n"
    "c.andi a2, 12\n"
    "sd a2, 72(a0)\n"
    "c.li a3, 13\n"
    "c.li a4, 11\n"
    "c.and a3, a4\n"
    "sd a3, 80(a0)\n"
    "c.li a3, 13\n"
    "c.xor a3, a4\n"
    "sd a3, 88(a0)\n"
    "li a4, 0x7fffffff\n"
    "c.li a5, 1\n"
    "c.addw a4, a5\n"
    "sd a4, 96(a0)\n"
    "li a4, 1\n"
    "slli a4, a4, 31\n"            /* 0x0000_0000_8000_0000 */
    "c.subw a4, a5\n"
    "sd a4, 104(a0)\n"
    "c.addi16sp sp, -32\n"
    "li a2, 0x12345678\n"
    "c.swsp a2, 12(sp)\n"
    "c.lwsp a3, 12(sp)\n"
    "c.addi16sp sp, 32\n"
    "sd a3, 112(a0)\n"
    "c.jr ra\n"
    ".option pop\n"
  );
}

/* C.EBREAK site and an M-mode handler that records the trap and skips the
 * 2- or 4-byte instruction at mepc. Record: [0] count, [1] mcause, [2] mepc. */
static uint64_t ctrap[NUM_HARTS][6] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".option push\n"
  ".option rvc\n"
  ".balign 4\n"                    /* mtvec needs 4-byte alignment; padded */
  ".option norvc\n"                /* while RVC is on (c.nop allowed)     */
  ".global c_trap\n"
  "c_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 24(t6)\n"
  "  sd t1, 32(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mepc\n"
  "  sd t0, 16(t6)\n"
  "  lhu t1, 0(t0)\n"
  "  andi t1, t1, 3\n"
  "  addi t0, t0, 2\n"             /* compressed: +2 */
  "  addi t1, t1, -3\n"
  "  bnez t1, 1f\n"
  "  addi t0, t0, 2\n"             /* 32-bit: +4 */
  "1:\n"
  "  csrw mepc, t0\n"
  "  ld t0, 24(t6)\n"
  "  ld t1, 32(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
  ".option rvc\n"
  ".align 1\n"
  ".global c_ebreak\n"
  "c_ebreak:\n"
  "  c.ebreak\n"
  "  c.jr ra\n"
  ".option pop\n"
);
extern char c_trap[];
extern void c_ebreak(void);

static void flush_result_line(void)
{
  uintptr_t addr = (uintptr_t)RESULT_ADDR;
  cbo_flush(addr);
}

static void evict_result_line(void)
{
  for (uint64_t i = 1; i <= 20; i++) {
    volatile uint64_t *alias =
      (volatile uint64_t *)(HART_DRAM(0x80005000UL) + (i * ALIAS_STRIDE));
    *alias = 0xC019000000000000ULL | i;
  }
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
  uint64_t fail = 0;

  compressed_ops(RESULT_ADDR);
  compressed_ops2(RESULT_ADDR);

  /* C.EBREAK: one breakpoint trap at c_ebreak, execution continues */
  {
    uint64_t *r = ctrap[hart_id()];
    uint64_t old_mtvec;
    __asm__ volatile ("csrr %0, mtvec" : "=r"(old_mtvec));
    __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
    __asm__ volatile ("csrw mtvec, %0" :: "r"(c_trap));
    c_ebreak();
    __asm__ volatile ("csrw mtvec, %0" :: "r"(old_mtvec));
    RESULT_ADDR[15] = (r[0] == 1 && r[1] == 3 && r[2] == (uint64_t)(uintptr_t)c_ebreak);
  }

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
  if (RESULT_ADDR[8] != (uint64_t)(int64_t)-8)
    fail |= 1ULL << 7;
  if (RESULT_ADDR[9] != 12)
    fail |= 1ULL << 8;
  if (RESULT_ADDR[10] != 9)
    fail |= 1ULL << 9;
  if (RESULT_ADDR[11] != 6)
    fail |= 1ULL << 10;
  if (RESULT_ADDR[12] != 0xFFFFFFFF80000000ULL)
    fail |= 1ULL << 11;
  if (RESULT_ADDR[13] != 0x7FFFFFFFULL)
    fail |= 1ULL << 12;
  if (RESULT_ADDR[14] != 0x12345678ULL)
    fail |= 1ULL << 13;
  if (RESULT_ADDR[15] != 1)
    fail |= 1ULL << 14;

  RESULT_ADDR[0] = fail;
  flush_result_line();
  evict_result_line();

  if (RESULT_ADDR[0] != fail)
    tohost_exit(2);
  tohost_exit(fail ? (0x1900 | fail) : 0);
}
