/* cfg_regs.c
 *
 * BP-DV-072: per-tile configuration registers (bp_me_cfg_slice) accessed by
 * software, plus the whole-cache CMOs being illegal on the coherent build
 * (hole review, 10 Nov 2026). Requires the two-core build (BP_CFG_ID=9).
 *
 * The cfg device of tile t is at (t << 24) | 0x0020_0000 (local address,
 * tile field above the 24-bit device offset). Each hart, one at a time:
 *
 *   1 reads every register of both tiles: freeze = 0, npc, did, cord,
 *     host_did, hio_mask, I$/D$/CCE mode = normal (1), cce ucode (read
 *     only - not checked: the CCE is past uncached mode). The two tiles
 *     must report different cords and the same did / host_did.
 *   2 read-only registers (did, cord, host_did) ignore writes on its own tile
 *   3 npc: 0x5555.., 0xAAAA.., ~0, 0 and walking ones read back masked
 *     to the 39-bit vaddr, then restored (npc is only used when the tile
 *     unfreezes, so changing it later has no effect)
 *   4 hio_mask: the same patterns read back masked to 7 bits, then restored
 *   5 freeze / I$ / D$ / CCE mode written with their current value (write
 *     path, no change); a cce ucode write is ignored while the CCE is in
 *     normal mode
 *   6 D$ in nonspec mode (2): run a small loop that loads, stores and
 *     calls through a function pointer, check its result, restore. (I$
 *     nonspec hangs the FE on a speculative hit - see phase 6 comment.)
 *   7 cmo.inval.all / cmo.clean.all / cmo.flush.all (MISC-MEM funct3 7)
 *     must raise an illegal-instruction trap (mcause 2): the RTL decodes
 *     them as illegal when the D$ is coherent ("TODO: Implement for
 *     multicore" in bp_be_instr_decoder.sv)
 *   any trap before phase 7 (a cfg access faulting) fails check 13
 *
 * Progress marker (phase << 8 | step) at 0x0010_8400 (+0x10 / hart);
 * mask of failing checks at 0x0010_8700 (+0x10 / hart).
 * tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 = pass, else
 *   (fail_count << 16) | 0x7200 | first failing check id.
 */

#include <stdint.h>
#include "dual_core.h"

#define PROGRESS(h)  ((volatile uint64_t *)(0x00108400UL + (h) * 16UL))
#define DIAG(h)      (*(volatile uint64_t *)(0x00108700UL + (h) * 16UL))

#define CFG(t, off)  ((volatile uint64_t *)((((uintptr_t)(t)) << 24) | 0x00200000UL | (off)))
#define R_FREEZE     0x0008UL
#define R_NPC        0x0010UL
#define R_DID        0x0020UL
#define R_CORD       0x0028UL
#define R_HOST_DID   0x0030UL
#define R_HIO_MASK   0x0038UL
#define R_IC_MODE    0x0208UL
#define R_DC_MODE    0x0408UL
#define R_CCE_MODE   0x0608UL
#define R_UCODE(i)   (0x8000UL + (i) * 8UL)

#define MODE_NORMAL  1
#define MODE_NONSPEC 2
#define NPC_MASK     ((1ULL << 39) - 1)
#define HIO_MASK     0x7FULL

/* trap handler: count, remember mcause, skip the 4-byte instruction */
__asm__ (
  ".text\n"
  ".align 2\n"
  ".global cfg_trap\n"
  "cfg_trap:\n"
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
extern char cfg_trap[];
static volatile uint64_t trec[NUM_HARTS][4] __attribute__((aligned(64)));

#define NPAT 68
static uint64_t pat(unsigned i)
{
  static const uint64_t fixed[4] = { 0x5555555555555555ULL, 0xAAAAAAAAAAAAAAAAULL, ~0ULL, 0 };
  return i < 4 ? fixed[i] : 1ULL << (i - 4);
}

/* work for the nonspec phase: loads, stores and an indirect call */
static volatile uint64_t work_buf[NUM_HARTS][16] __attribute__((aligned(64)));
static uint64_t __attribute__((noinline)) mix(uint64_t a, uint64_t b) { return (a << 3) ^ (b + 0x9E37ULL); }
static uint64_t (*volatile mix_fp)(uint64_t, uint64_t) = mix;

static uint64_t work(unsigned me)
{
  volatile uint64_t *b = work_buf[me];
  uint64_t acc = 0;
  for (unsigned i = 0; i < 16; i++)
    b[i] = i * 0x0101010101010101ULL;
  for (unsigned i = 0; i < 16; i++)
    acc = mix_fp(acc, b[i]);
  return acc;
}

static void progress(unsigned me, unsigned v) { *PROGRESS(me) = v; }

static uint64_t run_cfg(void)
{
  unsigned me = (unsigned)hart_id();
  unsigned peer = me ^ 1;
  volatile uint64_t *r = trec[me];
  unsigned fails = 0, first = 0;
  uint64_t failmask = 0;
  uint64_t v, x;

#define FAIL(id) do { if (!fails) first = (id); fails++; failmask |= 1ULL << (id); } while (0)

  __asm__ volatile ("csrw mscratch, %0" :: "r"(r));
  __asm__ volatile ("csrw mtvec, %0" :: "r"(cfg_trap));

  /* 1 reads of both tiles */
  progress(me, 0x100);
  uint64_t cord[2], did[2], hdid[2];
  for (unsigned t = 0; t < 2; t++) {
    if (*CFG(t, R_FREEZE) != 0)           FAIL(1);
    (void) *CFG(t, R_NPC);
    did[t]  = *CFG(t, R_DID);
    cord[t] = *CFG(t, R_CORD);
    hdid[t] = *CFG(t, R_HOST_DID);
    (void) *CFG(t, R_HIO_MASK);
    if (*CFG(t, R_IC_MODE)  != MODE_NORMAL) FAIL(2);
    if (*CFG(t, R_DC_MODE)  != MODE_NORMAL) FAIL(2);
    if (*CFG(t, R_CCE_MODE) != MODE_NORMAL) FAIL(2);
    for (unsigned i = 0; i < 4; i++)
      (void) *CFG(t, R_UCODE(i * 37));
  }
  if (cord[0] == cord[1])                    FAIL(3);
  if (did[0] != did[1] || hdid[0] != hdid[1]) FAIL(3);
  (void) peer;

  /* 2 read-only registers ignore writes */
  progress(me, 0x200);
  *CFG(me, R_DID) = ~did[me];
  *CFG(me, R_CORD) = ~cord[me];
  *CFG(me, R_HOST_DID) = ~hdid[me];
  if (*CFG(me, R_DID) != did[me] || *CFG(me, R_CORD) != cord[me] ||
      *CFG(me, R_HOST_DID) != hdid[me])
    FAIL(4);

  /* 3 npc */
  progress(me, 0x300);
  uint64_t npc_save = *CFG(me, R_NPC);
  for (unsigned p = 0; p < NPAT; p++) {
    v = pat(p);
    *CFG(me, R_NPC) = v;
    x = *CFG(me, R_NPC);
    if (x != (v & NPC_MASK)) FAIL(5);
  }
  *CFG(me, R_NPC) = npc_save;
  if (*CFG(me, R_NPC) != npc_save) FAIL(5);

  /* 4 hio_mask */
  progress(me, 0x400);
  uint64_t hio_save = *CFG(me, R_HIO_MASK);
  for (unsigned p = 0; p < NPAT; p++) {
    v = pat(p);
    *CFG(me, R_HIO_MASK) = v;
    x = *CFG(me, R_HIO_MASK);
    if (x != (v & HIO_MASK)) FAIL(6);
  }
  *CFG(me, R_HIO_MASK) = hio_save;
  if (*CFG(me, R_HIO_MASK) != hio_save) FAIL(6);

  /* 5 same-value writes; ucode write ignored in normal CCE mode */
  progress(me, 0x500);
  *CFG(me, R_FREEZE) = 0;
  *CFG(me, R_IC_MODE) = MODE_NORMAL;
  *CFG(me, R_DC_MODE) = MODE_NORMAL;
  *CFG(me, R_CCE_MODE) = MODE_NORMAL;
  uint64_t uc = *CFG(me, R_UCODE(5));
  *CFG(me, R_UCODE(5)) = ~uc;
  if (*CFG(me, R_FREEZE) != 0 || *CFG(me, R_IC_MODE) != MODE_NORMAL ||
      *CFG(me, R_DC_MODE) != MODE_NORMAL || *CFG(me, R_CCE_MODE) != MODE_NORMAL)
    FAIL(7);

  /* 6 nonspec D$ (step markers) */
  progress(me, 0x600);
  uint64_t ref = work(me);
  progress(me, 0x610);
  *CFG(me, R_DC_MODE) = MODE_NONSPEC;
  progress(me, 0x611);
  if (*CFG(me, R_DC_MODE) != MODE_NONSPEC) FAIL(8);
  progress(me, 0x612);
  x = work(me);
  progress(me, 0x613);
  *CFG(me, R_DC_MODE) = MODE_NORMAL;
  progress(me, 0x614);
  if (x != ref) FAIL(9);

  /* I$ nonspec is not exercised: with icache_mode = nonspec every fetch is
   * speculative (PMA nonidem) and a speculative fetch that HITS raises
   * neither hit_v_o nor miss_v_o (bp_fe_icache.sv:425-426, same upstream),
   * so the FE stalls - the core hung right after the mode write (10 Nov). */

  /* 7 whole-cache CMOs are illegal on the coherent build */
  progress(me, 0x700);
  static const uint64_t want = 2;               /* illegal instruction */
  if (r[0] != 0) FAIL(13);                      /* a cfg access trapped */
  r[0] = 0; r[1] = 0;
  __asm__ volatile (".insn i 0x0f, 7, x0, x0, 0" ::: "memory");  /* cmo.inval.all */
  if (r[0] != 1 || r[1] != want) FAIL(10);
  r[0] = 0; r[1] = 0;
  __asm__ volatile (".insn i 0x0f, 7, x0, x0, 1" ::: "memory");  /* cmo.clean.all */
  if (r[0] != 1 || r[1] != want) FAIL(11);
  r[0] = 0; r[1] = 0;
  __asm__ volatile (".insn i 0x0f, 7, x0, x0, 2" ::: "memory");  /* cmo.flush.all */
  if (r[0] != 1 || r[1] != want) FAIL(12);
  r[0] = 0;

  progress(me, 0xFFFF);
  DIAG(me) = failmask;
  dual_fence();
  return fails ? (((uint64_t)(fails & 0xFF) << 16) | 0x7200 | (first & 0xFF)) : 0;
#undef FAIL
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
  dual_turn_wait();          /* one hart at a time: hart 0, then hart 1 */
  rc = run_cfg();
  dual_turn_pass();
  tohost_exit(rc);
}
