/* i2c_write_read.c
 *
 * Directed test for the behavioral BedRock I2C model in
 * bp_nonsynth_host.sv.  Each test writes one byte through the I2C command
 * register, issues a read command, and checks the returned byte from the
 * I2C data register.
 */

#include <stdint.h>

#define TOHOST_ADDR  ((volatile uint64_t *)0x00102000UL)
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

static inline void io_fence(void)
{
  __asm__ volatile ("fence iorw, iorw" ::: "memory");
}

static void tohost_exit(uint64_t code)
{
  *TOHOST_ADDR = code;
  io_fence();

  while (1) {
    /* Wait for the simulation harness to observe tohost. */
  }
}

static void check_i2c_write_read(uint8_t slave_addr, uint8_t write_data,
                                 uint64_t test_number)
{
  /* CPU -> TB: write one byte to the selected I2C slave. */
  *I2C_CMD_ADDR = i2c_command(slave_addr, I2C_WRITE, write_data);
  io_fence();

  /* CPU -> TB: request a read from the same I2C slave. */
  *I2C_CMD_ADDR = i2c_command(slave_addr, I2C_READ, 0);
  io_fence();

  /* TB -> CPU: read the byte returned by the I2C model. */
  uint64_t read_data = *I2C_DATA_ADDR;
  io_fence();

  if ((read_data & 0xFF) != write_data)
    tohost_exit(0x200 | test_number);
}

static void start_main(void);

/* Initialize the stack before entering C code. */
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
  const uint8_t slave_addr = 0x50;

  check_i2c_write_read(slave_addr, 0x00, 1);
  check_i2c_write_read(slave_addr, 0x5A, 2);
  check_i2c_write_read(slave_addr, 0xFF, 3);

  /* Zero on the BP nonsynth host is the pass indication. */
  tohost_exit(0);
}
