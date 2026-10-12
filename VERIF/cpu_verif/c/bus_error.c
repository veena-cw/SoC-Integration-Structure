/* bus_error.c
 *
 * BP-DV-043: AXI bus errors (SLVERR / DECERR) on uncached MMIO accesses.
 *
 * The AXI agent answers every access in two windows with an error response
 * (set by bp_dv_043_bus_error_test, see cpu_axi_agent_driver):
 *   SLVERR (BRESP/RRESP = 2'b10) : 0x3003_0000 - 0x3003_1FFF
 *   DECERR (BRESP/RRESP = 2'b11) : 0x3004_0000 - 0x3004_1FFF
 * Errored writes are not stored; errored reads return 0xDEADBEEF_0BAD0BAD
 * on every lane.
 *
 * Expected CPU behaviour (RISC-V privileged spec): an access that gets a bus
 * error raises an access fault - load access fault (mcause 5) or store/AMO
 * access fault (mcause 7) - with mtval = the faulting address, and the
 * load must not write the error data to its destination register.
 *
 * Each hart (own 4 KiB slice of every window, HART_IO):
 *   1. control : sd + ld to a normal AXI address (0x3002_x000) - no trap,
 *                data matches
 *   2. sd to the SLVERR window, fence          - expect store access fault
 *   3. ld from the SLVERR window               - expect load access fault
 *   4. sd to the DECERR window, fence          - expect store access fault
 *   5. ld from the DECERR window               - expect load access fault
 *   6. recovery: control access again          - the bus still works
 *
 * The M-mode trap handler records mcause/mtval/mepc and skips the faulting
 * instruction (built without RVC, so every instruction is 4 bytes). A load
 * that traps leaves its destination at LD_SENTINEL.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 * 0x4300 | bits:
 *   0x01 control access failed (trap or wrong data)
 *   0x02 SLVERR store: no trap
 *   0x04 SLVERR load : no trap
 *   0x08 DECERR store: no trap
 *   0x10 DECERR load : no trap
 *   0x20 a trap was taken but mcause/mtval were wrong
 *   0x40 a load without trap returned the error data (0xDEADBEEF_0BAD0BAD)
 *   0x80 recovery access failed (bus wedged after the error)
 * A design that ignores AXI errors gives 0x435e per hart.
 */

#include <stdint.h>
#include "dual_core.h"

#define OK_ADDR       HART_IO(0x30020000UL)
#define SLVERR_ADDR   HART_IO(0x30030000UL)
#define DECERR_ADDR   HART_IO(0x30040000UL)

#define ERR_RDATA     0xDEADBEEF0BAD0BADULL
#define LD_SENTINEL   0x5E5E5E5E5E5E5E5EULL
#define CAUSE_LD_ACC  5
#define CAUSE_ST_ACC  7

/* Per-hart trap record; mscratch points at it. */
struct trap_rec {
  uint64_t count, mcause, mtval, mepc, save_t0, save_t1, pad[2];
};
static struct trap_rec rec[NUM_HARTS] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 32(t6)\n"
  "  sd t1, 40(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t1, mcause\n"
  "  sd t1, 8(t6)\n"
  "  csrr t1, mtval\n"
  "  sd t1, 16(t6)\n"
  "  csrr t1, mepc\n"
  "  sd t1, 24(t6)\n"
  "  addi t1, t1, 4\n"            /* skip the faulting instruction */
  "  csrw mepc, t1\n"
  "  ld t0, 32(t6)\n"
  "  ld t1, 40(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char m_trap[];

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

static inline void store64(uintptr_t addr, uint64_t v)
{
  __asm__ volatile ("sd %1, 0(%0)" :: "r"(addr), "r"(v) : "memory");
}

static inline uint64_t load64(uintptr_t addr)
{
  uint64_t v;
  __asm__ volatile ("mv %0, %2\n"
                    "ld %0, 0(%1)\n"
                    : "=&r"(v) : "r"(addr), "r"(LD_SENTINEL) : "memory");
  return v;
}

/* Expect one access fault with `cause` at `addr` since `before`. Returns the
 * failure bits: `no_trap_bit` if nothing trapped, 0x20 on wrong cause/mtval. */
static unsigned expect_fault(struct trap_rec *r, uint64_t before,
                             unsigned cause, uintptr_t addr, unsigned no_trap_bit)
{
  if (r->count == before)
    return no_trap_bit;
  if (r->mcause != cause || r->mtval != addr)
    return 0x20;
  return 0;
}

static unsigned control_access(uint64_t pattern)
{
  store64(OK_ADDR, pattern);
  io_fence();
  return (load64(OK_ADDR) == pattern) ? 0 : 0x01;
}

static uint64_t run_bus_error_tests(void)
{
  struct trap_rec *r = &rec[hart_id()];
  unsigned fail = 0;
  uint64_t n, v;

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(m_trap));

  /* 1. control */
  n = r->count;
  fail |= control_access(0x1111222233334444ULL + hart_id());
  if (r->count != n)
    fail |= 0x01;

  /* 2./3. SLVERR store and load */
  n = r->count;
  store64(SLVERR_ADDR, 0xA5A5A5A5A5A5A5A5ULL);
  io_fence();
  fail |= expect_fault(r, n, CAUSE_ST_ACC, SLVERR_ADDR, 0x02);

  n = r->count;
  v = load64(SLVERR_ADDR + 8);
  fail |= expect_fault(r, n, CAUSE_LD_ACC, SLVERR_ADDR + 8, 0x04);
  if (r->count == n && v == ERR_RDATA)
    fail |= 0x40;

  /* 4./5. DECERR store and load */
  n = r->count;
  store64(DECERR_ADDR, 0x5A5A5A5A5A5A5A5AULL);
  io_fence();
  fail |= expect_fault(r, n, CAUSE_ST_ACC, DECERR_ADDR, 0x08);

  n = r->count;
  v = load64(DECERR_ADDR + 8);
  fail |= expect_fault(r, n, CAUSE_LD_ACC, DECERR_ADDR + 8, 0x10);
  if (r->count == n && v == ERR_RDATA)
    fail |= 0x40;

  /* 6. recovery */
  if (control_access(0x5555666677778888ULL + hart_id()))
    fail |= 0x80;

  return fail ? (0x4300 | fail) : 0;
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
  tohost_exit(run_bus_error_tests());
}
