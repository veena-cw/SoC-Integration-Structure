/* l2_uc_slices.c
 *
 * BP-DV-082: L1-uncached DRAM ops on every CCE / L2 slice (hole review,
 * 11 Nov 2026). In BP_CFG_ID=9 a DRAM address picks
 *   block offset [5:0], CCE = addr[6], L2 slice (in that CCE's tile) = addr[7]
 * (bp_me_dram_hash_encode). BP-DV-047 (l2_uncached_ops.c) only touches
 * offsets 0x00..0x1F, i.e. CCE 0 / slice 0, so slices[1].l2s.cache_controller
 * never reached e_uc_flush and bsg_cache's store-buffer hazard (sbuf_hazard,
 * bsg_cache.sv:159) was never hit.
 *
 * For each window (0 = 0x1_0070_0000 L2-uncached -> op + AFLINV,
 * e_uc_flush; 1 = 0x1_8078_0000 L2-cached; hart 1 at +0x1000) and each
 * block offset 0x00 / 0x40 / 0x80 / 0xC0 (CCE/slice 0/0, 1/0, 0/1, 1/1):
 *   1 sd / 2x sw / 4x sh / 8x sb into 4 dwords, read back with ld
 *   2 back-to-back sd then ld of the same dword (store buffer -> load hazard)
 *   3 back-to-back sw then lw / lbu of the same word
 *   4 sd to dword 0, sd to dword 1, ld dword 0 (two stores in the sbuf)
 * An M-mode trap handler counts and skips faulting instructions.
 *
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (traps << 16) | 0x8200 | (window << 7) | (block << 5) | first failing check
 * Progress (window << 12 | block << 8 | step) at 0x0010_8200 (+0x10 / hart).
 */

#include <stdint.h>
#include "dual_core.h"

#define WIN0  (0x100700000ULL + hart_id() * 0x1000ULL)
#define WIN1  (0x180780000ULL + hart_id() * 0x1000ULL)

static uint64_t trap_rec[NUM_HARTS][4] __attribute__((aligned(64)));

__asm__ (
  ".text\n"
  ".align 2\n"
  ".global m_trap\n"
  "m_trap:\n"
  "  csrrw t6, mscratch, t6\n"
  "  sd t0, 16(t6)\n"
  "  ld t0, 0(t6)\n"
  "  addi t0, t0, 1\n"
  "  sd t0, 0(t6)\n"
  "  csrr t0, mcause\n"
  "  sd t0, 8(t6)\n"
  "  csrr t0, mepc\n"
  "  addi t0, t0, 4\n"
  "  csrw mepc, t0\n"
  "  ld t0, 16(t6)\n"
  "  csrrw t6, mscratch, t6\n"
  "  mret\n"
);
extern char m_trap[];

#define ST(op, addr, v) __asm__ volatile (op " %1, 0(%0)" :: "r"(addr), "r"(v) : "memory")
#define LD(op, addr) ({ int64_t _v; __asm__ volatile (op " %0, 0(%1)" : "=r"(_v) : "r"(addr) : "memory"); _v; })

struct state { unsigned check, first_bad; };
static unsigned cur_tag;

static inline void progress(unsigned step)
{
  *(volatile uint64_t *)(0x00108200UL + hart_id() * 0x10UL) = ((uint64_t)cur_tag << 8) | step;
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

static void check(struct state *s, int64_t got, int64_t exp)
{
  s->check++;
  progress(s->check + 1);
  if (got != exp && s->first_bad == 0)
    s->first_bad = s->check;
}

static void run_block(struct state *s, uint64_t b, uint64_t salt)
{
  int64_t a, c;

  /* 1 sub-dword stores, ld back */
  progress(0x80);
  ST("sd", b + 0x00, 0x8877665544332211ULL ^ salt);
  ST("sw", b + 0x08, 0x9ABCDEF0ULL);
  ST("sw", b + 0x0C, 0x12345678ULL);
  ST("sh", b + 0x10, 0xF00DULL);
  ST("sh", b + 0x12, 0xBEEFULL);
  ST("sh", b + 0x14, 0x0123ULL);
  ST("sh", b + 0x16, 0x8001ULL);
  for (unsigned i = 0; i < 8; i++)
    ST("sb", b + 0x18 + i, (uint64_t)(0xF0 + i));
  check(s, LD("ld", b + 0x00), (int64_t)(0x8877665544332211ULL ^ salt));
  check(s, LD("ld", b + 0x08), (int64_t)0x123456789ABCDEF0ULL);
  check(s, LD("ld", b + 0x10), (int64_t)0x80010123BEEFF00DULL);
  check(s, LD("ld", b + 0x18), (int64_t)0xF7F6F5F4F3F2F1F0ULL);

  /* 2 sd then ld, same dword, back to back */
  __asm__ volatile ("sd %2, 0(%1)\n ld %0, 0(%1)\n"
                    : "=&r"(a) : "r"(b + 0x20), "r"(0x0BADF00D5EED0000ULL ^ salt) : "memory");
  check(s, a, (int64_t)(0x0BADF00D5EED0000ULL ^ salt));

  /* 3 sw then lw / lbu, same word */
  __asm__ volatile ("sw %3, 0(%2)\n lw %0, 0(%2)\n lbu %1, 3(%2)\n"
                    : "=&r"(a), "=&r"(c) : "r"(b + 0x28), "r"(0xC3A55A3CULL) : "memory");
  check(s, a, (int64_t)(int32_t)0xC3A55A3C);
  check(s, c, 0xC3);

  /* 4 two stores, then load of the first */
  __asm__ volatile ("sd %2, 0(%1)\n sd %3, 8(%1)\n ld %0, 0(%1)\n"
                    : "=&r"(a) : "r"(b + 0x30), "r"(0x1111222233334444ULL ^ salt),
                      "r"(0x5555666677778888ULL) : "memory");
  check(s, a, (int64_t)(0x1111222233334444ULL ^ salt));
  check(s, LD("ld", b + 0x38), (int64_t)0x5555666677778888ULL);
}

static uint64_t run_tests(void)
{
  uint64_t *r = trap_rec[hart_id()];
  uint64_t win[2];
  struct state s;

  win[0] = WIN0;
  win[1] = WIN1;
  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(m_trap));

  for (unsigned w = 0; w < 2; w++)
    for (unsigned blk = 0; blk < 4; blk++) {
      s.check = 0;
      s.first_bad = 0;
      cur_tag = (w << 4) | blk;
      run_block(&s, win[w] + blk * 0x40ULL, ((uint64_t)w << 40) | ((uint64_t)blk << 36) | hart_id());
      if (s.first_bad || r[0])
        return ((r[0] & 0xFF) << 16) | 0x8200 | (w << 7) | (blk << 5) | (s.first_bad & 0x1F);
    }
  progress(0xFF);
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

/* RISCV_CFLAGS=-DL2UC_SERIAL: hart 1 starts only after hart 0 finished
 * (isolates the two-hart interleaving on one CCE). */
static void start_main(void)
{
  uint64_t rc;
#ifdef L2UC_SERIAL
  dual_turn_wait();
#endif
  rc = run_tests();
#ifdef L2UC_SERIAL
  dual_turn_pass();
#endif
  tohost_exit(rc);
}
