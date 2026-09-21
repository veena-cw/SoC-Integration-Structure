/* bp_dv_003_alu.c
 * Test ID: BP-DV-003 | Feature: ALU Operations
 * Exercises ADD/SUB/AND/OR/XOR/SLT/SLTU with boundary operands and reports
 * riscv-tests-style pass/fail by writing to the memory-mapped tohost address.
 *
 * Build (RISC-V SDK toolchain, see docs/eval_guide.md):
 *   riscv64-unknown-elf-gcc -march=rv64ima -mabi=lp64 -nostdlib -O0 \
 *       -T link.ld bp_dv_003_alu.c -o bp_dv_003_alu.elf
 * Convert to NBF (bp_common/software/py/nbf.py) before loading via nbf_load_seq.
 */

#include <stdint.h>

#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)

static void tohost_exit(uint64_t code) {
  *TOHOST_ADDR = code;
  while (1) { /* spin until the simulation harness observes tohost */ }
}

static inline uint64_t check(uint64_t got, uint64_t expected, int testnum) {
  if (got != expected)
    tohost_exit((uint64_t)((testnum << 1) | 1)); /* riscv-tests fail encoding */
  return got;
}

int _start(void) {
  uint64_t a, b, r;

  /* boundary operands: 0, 1, -1, INT64_MIN, INT64_MAX */
  const uint64_t vals[5] = {
    0x0000000000000000UL,
    0x0000000000000001UL,
    0xFFFFFFFFFFFFFFFFUL,
    0x8000000000000000UL,
    0x7FFFFFFFFFFFFFFFUL
  };

  int t = 1;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      a = vals[i];
      b = vals[j];

      r = a + b;                        check(r, (uint64_t)(a + b), t++);
      r = a - b;                        check(r, (uint64_t)(a - b), t++);
      r = a & b;                        check(r, a & b, t++);
      r = a | b;                        check(r, a | b, t++);
      r = a ^ b;                        check(r, a ^ b, t++);
      r = ((int64_t)a < (int64_t)b);    check(r, ((int64_t)a < (int64_t)b), t++);
      r = (a < b);                      check(r, (a < b) ? 1UL : 0UL, t++);
    }
  }

  tohost_exit(1); /* all checks passed */
  return 0;
}
