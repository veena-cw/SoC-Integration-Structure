/* vm_sv39.c
 *
 * BP-DV-036: Sv39 virtual memory on both harts - page-table walks, TLB
 * capacity misses, 4K/2M/1G pages, page faults (load/store/instruction,
 * A/D bits, U-bit/SUM, misaligned superpage) and sfence.vma.
 *
 * Each hart builds its own page tables (HART_DRAM) and runs S-mode C code
 * with satp = Sv39. Page faults are not delegated: they trap to the M-mode
 * handler, which logs mcause/mstatus/mepc/mtval and skips the faulting
 * instruction (or, for the instruction-fetch fault, returns to M).
 *
 * Virtual address map (identical on both harts, per-hart physical pages):
 *   0x8000_0000 1G  identity gigapage, RWX   code, data, stack, records
 *   0xC000_0000 1G  alias gigapage -> 0x8000_0000, RW           (step 3)
 *   0x4000_0000 4K  -> data page, RW                            (step 1)
 *   0x4000_1000 4K  -> read-only, not executable                (steps 5, 6*)
 *   0x4000_2000 16 x 4K -> TLB pages, RW                        (step 4)
 *   0x4001_2000 4K  A = 0                                       (step 5)
 *   0x4001_3000 4K  D = 0                                       (step 5)
 *   0x4001_4000 4K  U = 1                                       (steps 5, 8)
 *   0x4001_5000 4K  remapped page                               (step 7)
 *   0x4020_0000 2M  -> megapage, RW                             (step 2)
 *   0x4040_0000 2M  invalid                                     (step 5)
 *   0x4060_0000 2M  misaligned megapage (PPN[0] != 0)           (step 5)
 *
 * BlackParrot raises a page fault for A = 0, or D = 0 on a store (Svade),
 * rather than updating the PTE: bp_be_ptw.sv ad_fault.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0; per hart 0 = pass, else
 *   (step << 8) | detail
 *   detail 0x01 trap count, 0x1n/0x2n/0x3n wrong cause/mtval/mepc of trap n,
 *          0x40 data seen through the mapping wrong, 0x50 S-side check failed
 */

#include <stdint.h>
#include "dual_core.h"

#define PRIV_S 1

/* Per-hart trap record, identity-mapped. Offsets used by the asm. */
#define REC_BASE       0x8000A000UL
#define REC_M_ACTION   0
#define REC_M_RESUME   8
#define REC_M_COUNT    16
#define REC_M_LOG      64        /* 8 x 32 B: cause, status, epc, tval */
#define REC_S_RESULT   600       /* S-side check result (0 = ok)      */

/* Per-hart physical pages (HART_DRAM adds hartid * 1 MiB). */
#define PT_ROOT        0x80030000UL
#define PT_L1          0x80031000UL
#define PT_L0          0x80032000UL
#define PA_PAGE4K      0x80040000UL
#define PA_ALIAS       0x80041000UL   /* written through the 1G alias      */
#define PA_RO          0x80042000UL
#define PA_UPAGE       0x80044000UL
#define PA_REMAP_A     0x80045000UL
#define PA_REMAP_B     0x80046000UL
#define PA_ADPAGE      0x80047000UL
#define PA_TLB         0x80050000UL   /* 16 x 4K */
#define PA_MEGA_BASE   0x80400000UL   /* + hartid * 2 MiB (2M-aligned)      */

/* Virtual addresses */
#define VA_PAGE4K      0x40000000UL
#define VA_RO          0x40001000UL
#define VA_TLB         0x40002000UL
#define VA_A0          0x40012000UL
#define VA_D0          0x40013000UL
#define VA_UPAGE       0x40014000UL
#define VA_REMAP       0x40015000UL
#define VA_MEGA        0x40200000UL
#define VA_INVALID     0x40400000UL
#define VA_MISALIGNED  0x40600000UL
#define VA_ALIAS_BASE  0xC0000000UL   /* -> 0x8000_0000 */

#define TLB_PAGES      16

/* Steps to run. Default: all except step 6, the instruction page fault,
 * which currently hangs the core (Jira) and runs on its own in BP-DV-037
 * (vm_sv39_ifetch_fault.c: VM_STEPS = 1 << 6). */
#ifndef VM_STEPS
#define VM_STEPS 0x1BEu   /* steps 1-5, 7, 8 */
#endif

#define CAUSE_ILLEGAL  2
#define CAUSE_IPF      12
#define CAUSE_LPF      13
#define CAUSE_SPF      15

#define PTE_V (1UL << 0)
#define PTE_R (1UL << 1)
#define PTE_W (1UL << 2)
#define PTE_X (1UL << 3)
#define PTE_U (1UL << 4)
#define PTE_A (1UL << 6)
#define PTE_D (1UL << 7)
#define PTE(pa, flags) ((((uint64_t)(pa)) >> 12) << 10 | (flags))
#define PTE_TABLE(pa)  PTE(pa, PTE_V)

/* ------------------------------------------------------------------ */
/* M-mode trap handler (same scheme as priv_modes.c).                   */
/* ------------------------------------------------------------------ */
__asm__ (
  ".text\n"
  ".align 2\n"
  ".global vm_m_trap\n"
  "vm_m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 32(t6)\n"
  "  sd t1, 40(t6)\n"
  "  sd t2, 48(t6)\n"
  "  ld t0, 16(t6)\n"
  "  andi t1, t0, 7\n"
  "  slli t1, t1, 5\n"
  "  add t1, t1, t6\n"
  "  csrr t2, mcause\n"
  "  sd t2, 64(t1)\n"
  "  csrr t2, mstatus\n"
  "  sd t2, 72(t1)\n"
  "  csrr t2, mepc\n"
  "  sd t2, 80(t1)\n"
  "  csrr t2, mtval\n"
  "  sd t2, 88(t1)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  bnez t0, 1f\n"
  "  csrr t1, mepc\n"
  "  addi t1, t1, 4\n"
  "  csrw mepc, t1\n"
  "  j 2f\n"
  "1:\n"
  "  ld t1, 8(t6)\n"
  "  csrw mepc, t1\n"
  "  li t1, 0x1800\n"
  "  csrs mstatus, t1\n"
  "  sd zero, 0(t6)\n"
  "2:\n"
  "  ld t0, 32(t6)\n"
  "  ld t1, 40(t6)\n"
  "  ld t2, 48(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"

  /* S-mode C functions return here: request "return to M", then trap. */
  ".align 2\n"
  ".global vm_s_exit\n"
  "vm_s_exit:\n"
  "  li t0, 1\n"
  "  sd t0, 0(tp)\n"
  "  csrr t0, mstatus\n"           /* illegal in S -> M handler -> resume */
  "1: j 1b\n"
);

extern char vm_m_trap[], vm_s_exit[];

/* ------------------------------------------------------------------ */
/* M-side helpers                                                       */
/* ------------------------------------------------------------------ */
static inline volatile uint64_t *rec(void)
{
  return (volatile uint64_t *)HART_DRAM(REC_BASE);
}
#define REC_U64(off)  (rec()[(off) / 8])

static inline volatile uint64_t *pa64(uintptr_t pa)
{
  return (volatile uint64_t *)pa;
}

static inline void sfence_vma(void)
{
  __asm__ volatile ("sfence.vma zero, zero" ::: "memory");
}

/* Run fn() in S mode. tp = this hart's record (S code cannot read
 * mhartid); fn returns to vm_s_exit, whose trap brings us back here. */
static void run_in_s(void (*fn)(void))
{
  volatile uint64_t *r = rec();

  r[REC_M_COUNT / 8] = 0;
  r[REC_S_RESULT / 8] = 0;
  __asm__ volatile (
    "sd zero, 0(%0)\n"
    "la t0, 1f\n"
    "sd t0, 8(%0)\n"
    "mv tp, %0\n"
    "la ra, vm_s_exit\n"
    "csrw mepc, %1\n"
    "li t0, 0x1800\n"
    "csrc mstatus, t0\n"
    "li t0, 0x0800\n"
    "csrs mstatus, t0\n"          /* MPP = S */
    "mret\n"
    "1:\n"
    :
    : "r"(r), "r"(fn)
    : "t0", "t1", "t2", "t3", "t4", "t5", "t6",
      "a0", "a1", "a2", "a3", "a4", "a5", "a6", "a7", "ra", "memory");
}

/* ------------------------------------------------------------------ */
/* S-mode code (runs translated). Uses tp for the record.               */
/* ------------------------------------------------------------------ */
static inline volatile uint64_t *srec(void)
{
  uint64_t r;
  __asm__ volatile ("mv %0, tp" : "=r"(r));
  return (volatile uint64_t *)r;
}

static inline void s_fail(uint64_t code)
{
  if (srec()[REC_S_RESULT / 8] == 0)
    srec()[REC_S_RESULT / 8] = code;
}

/* Accesses that are expected to fault: exact single instructions so the
 * handler's mepc + 4 skip lands on the next one. */
static inline void s_load_fault(uintptr_t va)
{
  __asm__ volatile ("ld t0, 0(%0)" :: "r"(va) : "t0", "memory");
}

static inline void s_store_fault(uintptr_t va)
{
  __asm__ volatile ("sd zero, 0(%0)" :: "r"(va) : "memory");
}

static void s_step1_4k(void)
{
  *(volatile uint64_t *)(VA_PAGE4K + 0x10) = 0x4B4B000000000001ULL;
}

static void s_step2_mega(void)
{
  *(volatile uint64_t *)(VA_MEGA + 0x1238) = 0x2B2B000000000002ULL;
}

static void s_step3_giga(uintptr_t alias_va)
{
  *(volatile uint64_t *)alias_va = 0x1C1C000000000003ULL;
}

static void s_step3_entry(void)
{
  /* VA_ALIAS_BASE + (PA - 0x8000_0000); the PA is per hart, so it was
   * placed in the record by M (srec()[REC_S_RESULT+8]). */
  s_step3_giga((uintptr_t)srec()[(REC_S_RESULT + 8) / 8]);
}

static void s_step4_tlb(void)
{
  for (unsigned k = 0; k < TLB_PAGES; k++)
    *(volatile uint64_t *)(VA_TLB + k * 0x1000 + 0x18) = 0xD0D0000000000000ULL | k;
  for (unsigned k = 0; k < TLB_PAGES; k++)
    if (*(volatile uint64_t *)(VA_TLB + k * 0x1000 + 0x18) != (0xD0D0000000000000ULL | k))
      s_fail(0x50 | k);
}

static void s_step5_faults(void)
{
  s_load_fault(VA_INVALID);        /* 0: unmapped            -> 13 */
  s_store_fault(VA_RO);            /* 1: read-only page      -> 15 */
  s_load_fault(VA_A0);             /* 2: A = 0               -> 13 */
  s_store_fault(VA_D0);            /* 3: store with D = 0    -> 15 */
  s_load_fault(VA_UPAGE);          /* 4: U page, SUM = 0     -> 13 */
  s_load_fault(VA_MISALIGNED);     /* 5: misaligned megapage -> 13 */
  /* still legal afterwards: load the RO page (no fault) */
  if (*(volatile uint64_t *)VA_RO != 0x50AD000000000005ULL)
    s_fail(0x55);
}

static void s_step6_ifetch(void)
{
  srec()[REC_M_ACTION / 8] = 1;    /* the fault itself returns to M */
  __asm__ volatile ("jalr ra, 0(%0)" :: "r"(VA_RO) : "ra", "memory");
}

static void s_step7a_read(void)
{
  if (*(volatile uint64_t *)VA_REMAP != 0xAAAA000000000007ULL)
    s_fail(0x57);
}

static void s_step7b_sfence_read(void)
{
  sfence_vma();
  if (*(volatile uint64_t *)VA_REMAP != 0xBBBB000000000007ULL)
    s_fail(0x58);
}

static void s_step8_sum(void)
{
  if (*(volatile uint64_t *)VA_UPAGE != 0x0505000000000008ULL)
    s_fail(0x59);
}

/* ------------------------------------------------------------------ */
/* M-side test driver                                                   */
/* ------------------------------------------------------------------ */
static void build_page_tables(void)
{
  volatile uint64_t *root = pa64(HART_DRAM(PT_ROOT));
  volatile uint64_t *l1   = pa64(HART_DRAM(PT_L1));
  volatile uint64_t *l0   = pa64(HART_DRAM(PT_L0));
  uintptr_t mega = PA_MEGA_BASE + hart_id() * 0x200000UL;
  const uint64_t rwad = PTE_V | PTE_R | PTE_W | PTE_A | PTE_D;

  for (unsigned i = 0; i < 512; i++) {
    root[i] = 0;
    l1[i] = 0;
    l0[i] = 0;
  }

  root[2] = PTE(0x80000000UL, rwad | PTE_X);        /* identity gigapage */
  root[3] = PTE(0x80000000UL, rwad);                /* alias gigapage    */
  root[1] = PTE_TABLE(HART_DRAM(PT_L1));            /* 0x4000_0000 ..    */

  l1[0] = PTE_TABLE(HART_DRAM(PT_L0));
  l1[1] = PTE(mega, rwad);                          /* megapage          */
  /* l1[2] stays 0: invalid */
  l1[3] = PTE(mega + 0x1000UL, PTE_V | PTE_R | PTE_A); /* misaligned     */

  l0[0] = PTE(HART_DRAM(PA_PAGE4K), rwad);
  l0[1] = PTE(HART_DRAM(PA_RO), PTE_V | PTE_R | PTE_A);
  for (unsigned k = 0; k < TLB_PAGES; k++)
    l0[2 + k] = PTE(HART_DRAM(PA_TLB) + k * 0x1000UL, rwad);
  l0[18] = PTE(HART_DRAM(PA_ADPAGE), PTE_V | PTE_R | PTE_W);           /* A=0 */
  l0[19] = PTE(HART_DRAM(PA_ADPAGE), PTE_V | PTE_R | PTE_W | PTE_A);   /* D=0 */
  l0[20] = PTE(HART_DRAM(PA_UPAGE), rwad | PTE_U);
  l0[21] = PTE(HART_DRAM(PA_REMAP_A), rwad);

  *pa64(HART_DRAM(PA_RO))      = 0x50AD000000000005ULL;
  *pa64(HART_DRAM(PA_UPAGE))   = 0x0505000000000008ULL;
  *pa64(HART_DRAM(PA_REMAP_A)) = 0xAAAA000000000007ULL;
  *pa64(HART_DRAM(PA_REMAP_B)) = 0xBBBB000000000007ULL;

  __asm__ volatile ("fence rw, rw" ::: "memory");
}

struct exp_trap {
  uint64_t cause;
  uint64_t tval;   /* checked if != ~0 */
  uint64_t epc;    /* checked if != 0  */
};

static uint64_t check_log(unsigned step, const struct exp_trap *e, unsigned n)
{
  uint64_t base = (uint64_t)step << 8;

  if (REC_U64(REC_M_COUNT) != n)
    return base | 0x01;
  for (unsigned i = 0; i < n; i++) {
    uint64_t cause = REC_U64(REC_M_LOG + i * 32);
    uint64_t epc   = REC_U64(REC_M_LOG + i * 32 + 16);
    uint64_t tval  = REC_U64(REC_M_LOG + i * 32 + 24);
    if (cause != e[i].cause)
      return base | 0x10 | i;
    if (e[i].tval != ~0ULL && tval != e[i].tval)
      return base | 0x20 | i;
    if (e[i].epc && epc != e[i].epc)
      return base | 0x30 | i;
  }
  return 0;
}

static uint64_t s_result(unsigned step)
{
  uint64_t r = REC_U64(REC_S_RESULT);
  return r ? (((uint64_t)step << 8) | r) : 0;
}

/* Progress marker, visible in the AXI log ("AXI WRITE ... addr=...1082x0"):
 * (step << 8) | 1 before a step's S-mode run, (step << 8) | 2 after it. */
#define VM_PROGRESS 0x00108200UL
static void vm_progress(unsigned step, unsigned phase)
{
  *(volatile uint64_t *)(VM_PROGRESS + hart_id() * 16) = ((uint64_t)step << 8) | phase;
  dual_fence();
}

/* Only the exit trap (illegal CSR read in vm_s_exit) is expected. */
static const struct exp_trap only_exit[] = { { CAUSE_ILLEGAL, ~0ULL, 0 } };

static uint64_t run_vm_tests(void)
{
  uint64_t rc;
  uintptr_t mega = PA_MEGA_BASE + hart_id() * 0x200000UL;

  __asm__ volatile ("csrw mtvec, %0" :: "r"(vm_m_trap));
  __asm__ volatile ("csrw mscratch, %0" :: "r"(rec()));
  __asm__ volatile ("csrw medeleg, zero");
  __asm__ volatile ("csrw mideleg, zero");

  build_page_tables();
  {
    uint64_t satp = (8UL << 60) | (HART_DRAM(PT_ROOT) >> 12);   /* Sv39 */
    __asm__ volatile ("csrw satp, %0" :: "r"(satp));
    sfence_vma();
  }

  if (VM_STEPS & (1u << 1)) {
    /* Step 1: 4K page */
    vm_progress(1, 1);
    run_in_s(s_step1_4k);
    vm_progress(1, 2);
    if ((rc = check_log(1, only_exit, 1)) != 0) return rc;
    if (*pa64(HART_DRAM(PA_PAGE4K) + 0x10) != 0x4B4B000000000001ULL) return (1 << 8) | 0x40;
  }

  if (VM_STEPS & (1u << 2)) {
    /* Step 2: 2M megapage */
    vm_progress(2, 1);
    run_in_s(s_step2_mega);
    vm_progress(2, 2);
    if ((rc = check_log(2, only_exit, 1)) != 0) return rc;
    if (*pa64(mega + 0x1238) != 0x2B2B000000000002ULL) return (2 << 8) | 0x40;
  }

  if (VM_STEPS & (1u << 3)) {
    /* Step 3: 1G alias gigapage */
    REC_U64(REC_S_RESULT + 8) = VA_ALIAS_BASE + (HART_DRAM(PA_ALIAS) - 0x80000000UL);
    vm_progress(3, 1);
    run_in_s(s_step3_entry);
    vm_progress(3, 2);
    if ((rc = check_log(3, only_exit, 1)) != 0) return rc;
    if (*pa64(HART_DRAM(PA_ALIAS)) != 0x1C1C000000000003ULL) return (3 << 8) | 0x40;
  }

  if (VM_STEPS & (1u << 4)) {
    /* Step 4: 16 pages through an 8-entry TLB */
    vm_progress(4, 1);
    run_in_s(s_step4_tlb);
    vm_progress(4, 2);
    if ((rc = check_log(4, only_exit, 1)) != 0) return rc;
    if ((rc = s_result(4)) != 0) return rc;
    for (unsigned k = 0; k < TLB_PAGES; k++)
      if (*pa64(HART_DRAM(PA_TLB) + k * 0x1000UL + 0x18) != (0xD0D0000000000000ULL | k))
        return (4 << 8) | 0x40 | k;
  }

  if (VM_STEPS & (1u << 5)) {
    /* Step 5: page faults, each with mtval = faulting VA */
    {
      static const struct exp_trap e[] = {
        { CAUSE_LPF, VA_INVALID,    0 },
        { CAUSE_SPF, VA_RO,         0 },
        { CAUSE_LPF, VA_A0,         0 },
        { CAUSE_SPF, VA_D0,         0 },
        { CAUSE_LPF, VA_UPAGE,      0 },
        { CAUSE_LPF, VA_MISALIGNED, 0 },
        { CAUSE_ILLEGAL, ~0ULL,     0 },     /* exit */
      };
      vm_progress(5, 1);
      run_in_s(s_step5_faults);
      vm_progress(5, 2);
      if ((rc = check_log(5, e, 7)) != 0) return rc;
      if ((rc = s_result(5)) != 0) return rc;
      if (*pa64(HART_DRAM(PA_RO)) != 0x50AD000000000005ULL) return (5 << 8) | 0x40;
    }
  }

  if (VM_STEPS & (1u << 6)) {
    /* Step 6: instruction page fault on a non-executable page */
    {
      static const struct exp_trap e[] = { { CAUSE_IPF, VA_RO, VA_RO } };
      vm_progress(6, 1);
      run_in_s(s_step6_ifetch);
      vm_progress(6, 2);
      if ((rc = check_log(6, e, 1)) != 0) return rc;
    }
  }

  if (VM_STEPS & (1u << 7)) {
    /* Step 7: remap a page; after sfence.vma S must see the new page */
    vm_progress(7, 1);
    run_in_s(s_step7a_read);
    vm_progress(7, 2);
    if ((rc = check_log(7, only_exit, 1)) != 0) return rc;
    if ((rc = s_result(7)) != 0) return rc;
    pa64(HART_DRAM(PT_L0))[21] = PTE(HART_DRAM(PA_REMAP_B), PTE_V | PTE_R | PTE_W | PTE_A | PTE_D);
    __asm__ volatile ("fence rw, rw" ::: "memory");
    vm_progress(7, 1);
    run_in_s(s_step7b_sfence_read);
    vm_progress(7, 2);
    if ((rc = check_log(7, only_exit, 1)) != 0) return rc;
    if ((rc = s_result(7)) != 0) return rc;
  }

  if (VM_STEPS & (1u << 8)) {
    /* Step 8: SUM = 1 lets S read the U page */
    __asm__ volatile ("csrs mstatus, %0" :: "r"(1UL << 18));
    vm_progress(8, 1);
    run_in_s(s_step8_sum);
    vm_progress(8, 2);
    __asm__ volatile ("csrc mstatus, %0" :: "r"(1UL << 18));
    if ((rc = check_log(8, only_exit, 1)) != 0) return rc;
    if ((rc = s_result(8)) != 0) return rc;
  }

  __asm__ volatile ("csrw satp, zero");
  sfence_vma();
  return 0;
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
  tohost_exit(run_vm_tests());
}
