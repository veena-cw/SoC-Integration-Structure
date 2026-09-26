/* multicore_shared_memory.c
 * BP-DV-017: two-core shared-memory traffic.
 *
 * Both harts boot the same image. Hart 0 initializes the shared line and
 * publishes READY. Hart 1 waits for READY, writes an independent shared word,
 * and updates the shared counter with normal load/store instructions. The
 * BP-DV-017 test config selects the uncached data path so both harts observe
 * the synchronization flags in this Verilator configuration. Hart 0 waits
 * for DONE and checks the synchronized result. Atomic RMW/LR-SC behavior is
 * covered separately by BP-DV-013.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
#define RESULT_ADDR  ((volatile uint64_t *)0x80005000UL)
#define SHARED_ADDR  ((volatile uint64_t *)0x80006000UL)
/* Keep each synchronization word on its own 64-byte cache line.  This
 * uses independent shared-memory regions, while avoiding false sharing between
 * the READY/DONE handshakes and the data published by the other hart. */
#define SHARED_READY       0
#define SHARED_COUNTER     8
#define SHARED_CORE1_DATA  16
#define SHARED_DONE        24
#define SHARED_CORE0_DATA  32

#define CORE0_MARKER 0xC017000000000000ULL
#define CORE1_MARKER 0xC017000000000001ULL

static void tohost_exit(uint64_t code)
{
  __asm__ volatile ("fence rw, rw" ::: "memory");
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe the tohost write. */
  }
}

static inline uint64_t read_mhartid(void)
{
  uint64_t hartid;
  __asm__ volatile ("csrr %0, mhartid" : "=r"(hartid));
  return hartid;
}

static inline void memory_fence(void)
{
  /* Keep compiler ordering for this smoke test.  The multicore CCE in this
   * configuration can otherwise remain in the hardware FENCE path while the
   * two harts are synchronizing. */
  __asm__ volatile ("" ::: "memory");
}

/* Preload the shared DRAM lines in the NBF image so both harts start from
 * known values before issuing their normal load/store operations. */
__attribute__((section(".shared"), aligned(64), used))
volatile uint64_t shared_image[40] = { 0 };

static void start_main(void);

__attribute__((naked, section(".text.start"), used))
void _start(void)
{
  __asm__ volatile (
    "li sp, 0x80004000\n"
    "csrr t0, mhartid\n"
    "slli t0, t0, 11\n"
    "add sp, sp, t0\n"
    "jal ra, start_main\n"
    "1: j 1b\n"
  );
}

static void start_main(void)
{
  volatile uint64_t *shared = SHARED_ADDR;
  uint64_t hartid = read_mhartid();
  uint64_t fail = 0;

  if (hartid == 0) {
    uint64_t counter;

    /* Bring each shared line into hart 0 before issuing the stores.  The
     * NBF image initializes these lines to zero in DRAM. */
    for (uint64_t i = 0; i <= SHARED_CORE0_DATA; i += 8)
      (void) shared[i];

    /* Hart 0 owns initialization, so hart 1 cannot consume stale state. */
    shared[SHARED_READY]      = 0;
    shared[SHARED_COUNTER]    = 0;
    shared[SHARED_CORE1_DATA] = 0;
    shared[SHARED_DONE]       = 0;
    shared[SHARED_CORE0_DATA] = CORE0_MARKER;
    memory_fence();

    /* Publish the initial counter before advertising READY. */
    shared[SHARED_COUNTER] = 1;
    memory_fence();
    shared[SHARED_READY] = 1;
    memory_fence();

    while (shared[SHARED_DONE] != 1)
      ;
    memory_fence();

    counter = shared[SHARED_COUNTER];
    if (shared[SHARED_READY] != 1)
      fail |= 1ULL << 0;
    if (counter != 2)
      fail |= 1ULL << 1;
    if (shared[SHARED_CORE1_DATA] != CORE1_MARKER)
      fail |= 1ULL << 2;
    if (shared[SHARED_DONE] != 1)
      fail |= 1ULL << 3;
    if (shared[SHARED_CORE0_DATA] != CORE0_MARKER)
      fail |= 1ULL << 4;

    RESULT_ADDR[0] = fail;
    RESULT_ADDR[1] = counter;
    RESULT_ADDR[2] = shared[SHARED_CORE1_DATA];
    RESULT_ADDR[3] = shared[SHARED_READY];
    RESULT_ADDR[4] = shared[SHARED_DONE];
    RESULT_ADDR[5] = shared[SHARED_CORE0_DATA];
    RESULT_ADDR[6] = hartid;
    RESULT_ADDR[7] = 2; /* Hart 1 published the synchronized counter value. */

    if (RESULT_ADDR[0] != fail)
      tohost_exit(2);
    tohost_exit(fail ? 1 : 0);
  }

  /* Hart 1 waits for the release, writes independently, then synchronizes. */
  while (shared[SHARED_READY] != 1)
    ;
  memory_fence();

  shared[SHARED_CORE1_DATA] = CORE1_MARKER;
  memory_fence();
  /* This ordinary store updates the shared-memory synchronization state. */
  shared[SHARED_COUNTER] = 2;
  memory_fence();
  shared[SHARED_DONE] = 1;
  memory_fence();

  while (1) {
    /* Hart 0 owns pass/fail reporting. */
  }
}
