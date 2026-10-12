/* plic_reg_access.c
 *
 * BP-DV-042: CPU writes and reads the shared PLIC registers (two cores).
 *
 * Path: core lw/sw to 0x0050_0000 + offset (local device plic_dev_gp = 5)
 *   -> bp_core PLIC port -> bp_plic_shared_top (arbiter)
 *   -> bp_bedrock_ahb3lite_bridge (HADDR = addr - 0x0050_0000, 32-bit AHB)
 *   -> ahb3lite_plic_top (64 sources, 4 targets, 8 priority levels).
 *
 * Register map for that configuration (32-bit registers, from
 * plic_dynamic_registers.sv; not the standard SiFive layout):
 *
 *   0x00 CONFIG0   RO  {TARGETS, SOURCES}            = 0x0004_0040
 *   0x04 CONFIG1   RO  {15'h0, HAS_TH, PRIORITIES}   = 0x0001_0008
 *   0x08 EL0       RW  edge/level, sources 31:0
 *   0x0C EL1       RW  edge/level, sources 63:32
 *   0x10-0x2C      RW  PRIORITY, 8 sources per word, 4-bit fields (3 used)
 *   0x30-0x4C      RW  IE, target t at 0x30 + 8t (2 words)
 *   0x50-0x5C      RW  THRESHOLD, target t at 0x50 + 4t (3 bits)
 *   0x60-0x6C      RW  ID (claim/complete), target t at 0x60 + 4t
 *
 * Targets: 0/1 = core 0 M/S, 2/3 = core 1 M/S.
 *
 * The harts run one after the other (hart 0, then hart 1), so each
 * register access is easy to follow in the AHB log. Each hart:
 *   1. reads CONFIG0/1 and checks them
 *   2. writes its own registers: one EL word, one PRIORITY word, the IE
 *      words and THRESHOLD of its two targets
 *   3. reads every one of them back and compares
 *   4. reads its targets' ID registers: 0, no source is active (plic_src_i
 *      is tied to 0 in the testbench)
 * Hart 1 then also reads hart 0's registers, which shows both cores
 * reach the same (shared) PLIC.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (number of failed checks << 16) | 0x4200 | first failing check (1-based)
 * Hart 1 = 0xFFFFFFFF: hart 1 never reported (e.g. its access hung).
 */

#include <stdint.h>
#include "dual_core.h"

#define PLIC_BASE        0x00500000UL
#define PLIC_REG(off)    ((volatile uint32_t *)(PLIC_BASE + (off)))

#define PLIC_CONFIG0     0x00
#define PLIC_CONFIG1     0x04
#define PLIC_EL(w)       (0x08 + 4 * (w))
#define PLIC_PRIORITY(w) (0x10 + 4 * (w))
#define PLIC_IE(t, w)    (0x30 + 8 * (t) + 4 * (w))
#define PLIC_THRESHOLD(t) (0x50 + 4 * (t))
#define PLIC_ID(t)       (0x60 + 4 * (t))

#define EXP_CONFIG0      0x00040040U   /* TARGETS = 4, SOURCES = 64 */
#define EXP_CONFIG1      0x00010008U   /* HAS_THRESHOLD = 1, PRIORITIES = 8 */

#define NUM_REG_WRITES   8

struct plic_wr {
  uint32_t off;
  uint32_t val;
};

/* Per-hart register writes: hart h owns EL word h, PRIORITY word h and
 * targets 2h / 2h+1. Values only use implemented bits (priority and
 * threshold fields are 3 bits), so the read-back must match exactly. */
static const struct plic_wr plic_writes[NUM_HARTS][NUM_REG_WRITES] = {
  { { PLIC_EL(0),         0xA5A50F0FU },
    { PLIC_PRIORITY(0),   0x76543210U },
    { PLIC_IE(0, 0),      0x11223344U },
    { PLIC_IE(0, 1),      0x55667788U },
    { PLIC_IE(1, 0),      0x99AABBCCU },
    { PLIC_IE(1, 1),      0xDDEEFF01U },
    { PLIC_THRESHOLD(0),  0x00000005U },
    { PLIC_THRESHOLD(1),  0x00000002U } },
  { { PLIC_EL(1),         0x5A5AF0F0U },
    { PLIC_PRIORITY(1),   0x01234567U },
    { PLIC_IE(2, 0),      0x12345678U },
    { PLIC_IE(2, 1),      0x9ABCDEF0U },
    { PLIC_IE(3, 0),      0x0F1E2D3CU },
    { PLIC_IE(3, 1),      0x4B5A6978U },
    { PLIC_THRESHOLD(2),  0x00000006U },
    { PLIC_THRESHOLD(3),  0x00000001U } },
};

/* Per-hart counters: both harts run this image and share its globals. */
struct check_state {
  unsigned check_no;
  unsigned fail_count;
  unsigned first_fail;
};

static void check(struct check_state *st, uint32_t got, uint32_t exp)
{
  st->check_no++;
  if (got != exp) {
    if (st->fail_count == 0)
      st->first_fail = st->check_no;
    st->fail_count++;
  }
}

static uint64_t run_plic_tests(void)
{
  unsigned h = (unsigned) hart_id();
  struct check_state st = { 0, 0, 0 };

  /* 1. Read-only configuration registers. */
  check(&st, *PLIC_REG(PLIC_CONFIG0), EXP_CONFIG0);
  check(&st, *PLIC_REG(PLIC_CONFIG1), EXP_CONFIG1);

  /* 2. Write this hart's registers. */
  for (unsigned i = 0; i < NUM_REG_WRITES; i++)
    *PLIC_REG(plic_writes[h][i].off) = plic_writes[h][i].val;
  dual_fence();

  /* 3. Read them back. */
  for (unsigned i = 0; i < NUM_REG_WRITES; i++)
    check(&st, *PLIC_REG(plic_writes[h][i].off), plic_writes[h][i].val);

  /* 4. No source is active, so there is nothing to claim. */
  check(&st, *PLIC_REG(PLIC_ID(2 * h)), 0);
  check(&st, *PLIC_REG(PLIC_ID(2 * h + 1)), 0);

  /* Hart 1: hart 0's values must still be there (one shared PLIC). */
  if (h == 1)
    for (unsigned i = 0; i < NUM_REG_WRITES; i++)
      check(&st, *PLIC_REG(plic_writes[0][i].off), plic_writes[0][i].val);

  if (st.fail_count == 0)
    return 0;
  return ((uint64_t) st.fail_count << 16) | 0x4200 | st.first_fail;
}

static void start_main(void);

/* Initialize the stack before entering C code. */
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
  uint64_t result;

  dual_turn_wait();
  result = run_plic_tests();
  dual_turn_pass();
  tohost_exit(result);
}
