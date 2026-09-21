/* add_function.c
 * Directed ADD instruction test for BlackParrot.
 *
 * The inline assembly forces the compiler to emit the RV64 integer ADD
 * instruction:
 *   opcode = 7'b0110011, funct3 = 3'b000, funct7 = 7'b0000000
 */

#include <stdint.h>

/* bp_nonsynth_host maps the finish register at host base + 0x2000. */
#define TOHOST_ADDR ((volatile uint64_t *)0x00102000UL)
#define I2C_CMD_ADDR ((volatile uint64_t *)0x30010000UL)
#define I2C_DATA_ADDR ((volatile uint64_t *)0x30010008UL)

#define I2C_WRITE 0
#define I2C_READ  1

static inline uint64_t i2c_command(uint8_t slave_addr, uint8_t rw,
                                   uint8_t data)
{
  return ((uint64_t)slave_addr << 16) |
         ((uint64_t)rw << 8) |
         (uint64_t)data;
}

static void tohost_exit(uint64_t code)
{
  *TOHOST_ADDR = code;
  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static inline uint64_t add_function(uint64_t a, uint64_t b)
{
  uint64_t result;

  __asm__ volatile (
    "add %0, %1, %2"
    : "=r"(result)
    : "r"(a), "r"(b)
  );

  return result;
}

static void check_add(uint64_t a, uint64_t b, uint64_t expected,
                      uint64_t test_number)
{
  uint64_t result = add_function(a, b);

  if (result != expected)
    tohost_exit((test_number << 1) | 1); /* riscv-tests failure encoding */
}

static void check_i2c_direct(void)
{
  const uint8_t slave_addr = 0x50;
  const uint8_t write_data = 0x5A;

  /* Direct DUT-to-testbench BedRock write into the I2C model. */
  *I2C_CMD_ADDR = i2c_command(slave_addr, I2C_WRITE, write_data);

  /* Direct DUT-to-testbench BedRock read request. */
  *I2C_CMD_ADDR = i2c_command(slave_addr, I2C_READ, 0);
  uint64_t read_data = *I2C_DATA_ADDR;

  if ((read_data & 0xFF) != write_data)
    tohost_exit(0x101); /* I2C readback failure */
}

/* The BlackParrot reset PC is 0x80000000.  Place the test entry point first
 * in the image so reset begins in _start rather than in tohost_exit().
 *
 * The testbench does not provide a bootloader that initializes the RISC-V
 * stack pointer.  Keep this entry point naked so the compiler cannot emit a
 * stack-frame prologue before sp is initialized. */
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
  check_i2c_direct();

  check_add(0x0000000000000000UL,
            0x0000000000000000UL,
            0x0000000000000000UL, 1);

  check_add(0x0000000000000001UL,
            0x0000000000000002UL,
            0x0000000000000003UL, 2);

  check_add(0x00000000FFFFFFFFUL,
            0x0000000000000001UL,
            0x0000000100000000UL, 3);

  check_add(0x7FFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0x8000000000000000UL, 4);

  check_add(0x8000000000000000UL,
            0xFFFFFFFFFFFFFFFFUL,
            0x7FFFFFFFFFFFFFFFUL, 5);

  check_add(0xFFFFFFFFFFFFFFFFUL,
            0x0000000000000001UL,
            0x0000000000000000UL, 6);

  check_add(0x123456789ABCDEF0UL,
            0x0FEDCBA987654321UL,
            0x2222222222222211UL, 7);

  /* BlackParrot's bp_nonsynth_host treats zero as PASS. */
  tohost_exit(0); /* all ADD checks passed */
}
