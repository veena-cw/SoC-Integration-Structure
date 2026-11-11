/* mem_exc.c
 *
 * BP-DV-080: memory exceptions not covered elsewhere (hole review, 10 Nov
 * 2026: bp_mmu.sv 166 / 173 / 174 - CBO on an uncached address never hit).
 * M-mode, both harts one after the other. A trap handler records mcause /
 * mtval and skips the (4-byte) instruction.
 *
 *   1 cbo.clean / cbo.flush / cbo.inval on uncached addresses (AXI I/O
 *     0x0010_A040 and the L1-uncached DRAM window 0x1_0070_0440): access
 *     fault (bp_mmu cached_fault_v), mcause 5 or 7, mtval = the address
 *   2 misaligned lh / lhu / lw / lwu / ld and sh / sw / sd at every
 *     misaligned offset of a dword: either a misaligned trap (mcause 4 / 6,
 *     mtval = the address) or, if the hardware handles it, the right data
 *     (checked against a byte model of the buffer)
 *   3 misaligned AMO / LR / SC (amoadd.w at +2, amoswap.d at +4, lr.d and
 *     sc.d at +4): must trap (AMOs never split), mcause 4..7, mtval = address
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x8000 | (phase << 6) | step of the first failure.
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 / hart).
 *
 * Written 10 Nov 2026, not yet run.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define IO_ADDR(h)   (0x0010A040ULL + (uint64_t)(h) * 0x100ULL)
#define UC_ADDR(h)   (0x100700440ULL + (uint64_t)(h) * 0x1000ULL)

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global me_trap\n"
  "me_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 24(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mtval\n"
  "  sd t0, 16(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 24(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char me_trap[];
static volatile uint64_t trec[NUM_HARTS][4] __attribute__((aligned(64)));
static volatile uint8_t buf[NUM_HARTS][64] __attribute__((aligned(64)));
static uint8_t model[64];

#define NORVC(s) ".option push\n .option norvc\n" s "\n .option pop\n"

static void reset_buf(volatile uint8_t *b)
{
  for (unsigned i = 0; i < 64; i++)
    b[i] = model[i] = (uint8_t)(0x30 + i * 7);
}

static uint64_t model_ld(unsigned off, unsigned size, int sign)
{
  uint64_t v = 0;
  for (unsigned i = 0; i < size; i++)
    v |= (uint64_t)model[off + i] << (8 * i);
  if (sign && size < 8 && (v >> (8 * size - 1)) & 1)
    v |= ~0ULL << (8 * size);
  return v;
}

static uint64_t run_exc(void)
{
  unsigned me = (unsigned)hart_id();
  volatile uint64_t *r = trec[me];
  volatile uint8_t *b = buf[me];
  unsigned fails = 0, first = 0;
  uint64_t x;

#define FAIL(ph, st) do { if (!fails) first = ((ph) << 6) | ((st) & 0x3F); fails++; } while (0)

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(me_trap));

  /* 1 CBO on uncached addresses */
  {
    const uint64_t addrs[2] = { IO_ADDR(me), UC_ADDR(me) };
    unsigned step = 0;
    for (unsigned i = 0; i < 2; i++) {
      uint64_t a = addrs[i];
      *PROGRESS(me) = 0x100 | step;
      r[0] = 0;
      __asm__ volatile (NORVC(".insn i 0x0f, 2, x0, %0, 1") :: "r"(a) : "memory");   /* cbo.clean */
      if (r[0] != 1 || (r[1] != 5 && r[1] != 7) || r[2] != a) FAIL(1, step);
      step++;
      *PROGRESS(me) = 0x100 | step;
      r[0] = 0;
      __asm__ volatile (NORVC(".insn i 0x0f, 2, x0, %0, 2") :: "r"(a) : "memory");   /* cbo.flush */
      if (r[0] != 1 || (r[1] != 5 && r[1] != 7) || r[2] != a) FAIL(1, step);
      step++;
      *PROGRESS(me) = 0x100 | step;
      r[0] = 0;
      __asm__ volatile (NORVC(".insn i 0x0f, 2, x0, %0, 0") :: "r"(a) : "memory");   /* cbo.inval */
      if (r[0] != 1 || (r[1] != 5 && r[1] != 7) || r[2] != a) FAIL(1, step);
      step++;
    }
  }

  /* 2 misaligned loads and stores */
  {
    unsigned step = 0;
    for (unsigned off = 1; off < 8; off++) {
      uintptr_t base = (uintptr_t)&b[8 + off];
#define MLOAD(insn, size, sign) do {                                           \
        *PROGRESS(me) = 0x200 | step;                                          \
        if (off % (size)) {                                                    \
          reset_buf(b); r[0] = 0;                                              \
          __asm__ volatile (NORVC(insn " %0, 0(%1)") : "=&r"(x) : "r"(base) : "memory"); \
          if (r[0]) { if ((r[1] != 4 && r[1] != 5) || r[2] != base) FAIL(2, step); } \
          else if (x != model_ld(8 + off, size, sign)) FAIL(2, step);          \
        }                                                                      \
        step++; } while (0)
#define MSTORE(insn, size) do {                                                \
        *PROGRESS(me) = 0x200 | step;                                          \
        if (off % (size)) {                                                    \
          uint64_t v = 0xF1E2D3C4B5A69788ULL ^ off;                            \
          reset_buf(b); r[0] = 0;                                              \
          __asm__ volatile (NORVC(insn " %0, 0(%1)") :: "r"(v), "r"(base) : "memory"); \
          if (r[0]) { if ((r[1] != 6 && r[1] != 7) || r[2] != base) FAIL(2, step); } \
          else {                                                               \
            for (unsigned i = 0; i < (size); i++) model[8 + off + i] = (uint8_t)(v >> (8 * i)); \
            for (unsigned i = 0; i < 64; i++) if (b[i] != model[i]) { FAIL(2, step); break; } \
          }                                                                    \
        }                                                                      \
        step++; } while (0)
      MLOAD("lh", 2, 1);  MLOAD("lhu", 2, 0);
      MLOAD("lw", 4, 1);  MLOAD("lwu", 4, 0);
      MLOAD("ld", 8, 0);
      MSTORE("sh", 2); MSTORE("sw", 4); MSTORE("sd", 8);
#undef MLOAD
#undef MSTORE
    }
  }

  /* 3 misaligned AMO / LR / SC: must trap */
  {
    uintptr_t a2 = (uintptr_t)&b[16 + 2], a4 = (uintptr_t)&b[16 + 4];
    uint64_t one = 1;
    *PROGRESS(me) = 0x300;
    r[0] = 0;
    __asm__ volatile (NORVC("amoadd.w %0, %2, (%1)") : "=&r"(x) : "r"(a2), "r"(one) : "memory");
    if (r[0] != 1 || r[1] < 4 || r[1] > 7 || r[2] != a2) FAIL(3, 0);
    *PROGRESS(me) = 0x301;
    r[0] = 0;
    __asm__ volatile (NORVC("amoswap.d %0, %2, (%1)") : "=&r"(x) : "r"(a4), "r"(one) : "memory");
    if (r[0] != 1 || r[1] < 4 || r[1] > 7 || r[2] != a4) FAIL(3, 1);
    *PROGRESS(me) = 0x302;
    r[0] = 0;
    __asm__ volatile (NORVC("lr.d %0, (%1)") : "=&r"(x) : "r"(a4) : "memory");
    if (r[0] != 1 || r[1] < 4 || r[1] > 7 || r[2] != a4) FAIL(3, 2);
    *PROGRESS(me) = 0x303;
    r[0] = 0;
    __asm__ volatile (NORVC("sc.d %0, %2, (%1)") : "=&r"(x) : "r"(a4), "r"(one) : "memory");
    if (r[0] != 1 || r[1] < 4 || r[1] > 7 || r[2] != a4) FAIL(3, 3);
  }
#undef FAIL

  *PROGRESS(me) = 0xFFFF;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x8000 | (first & 0xFFF)) : 0;
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
  uint64_t rc;
  dual_turn_wait();
  rc = run_exc();
  dual_turn_pass();
  tohost_exit(rc);
}
