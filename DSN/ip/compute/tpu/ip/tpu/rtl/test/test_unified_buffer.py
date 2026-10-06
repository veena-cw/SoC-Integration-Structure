"""
Unified Buffer Testbench

Tests for the 64KB dual-port SRAM:
1. Basic read/write operations
2. Dual-port concurrent access
3. Byte enable functionality
4. Address space validation
5. Reset behavior
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import random

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


async def setup_buffer(dut, clock_period_ns: int = 10):
    """Setup for unified buffer testbench."""
    await setup_clock(dut, clock_period_ns)

    # Initialize Port A
    dut.port_a_en.value = 0
    dut.port_a_we.value = 0
    dut.port_a_addr.value = 0
    dut.port_a_wdata.value = 0
    dut.port_a_byte_en.value = 0xF

    # Initialize Port B
    dut.port_b_en.value = 0
    dut.port_b_we.value = 0
    dut.port_b_addr.value = 0
    dut.port_b_wdata.value = 0
    dut.port_b_byte_en.value = 0xF

    await reset_dut(dut)


@cocotb.test()
async def test_buffer_reset(dut):
    """Test that buffer resets correctly."""
    logger.info("Test: Unified Buffer Reset")

    await setup_buffer(dut)

    # Verify outputs after reset
    assert int(dut.port_a_valid.value) == 0, "port_a_valid should be 0 after reset"
    assert int(dut.port_b_valid.value) == 0, "port_b_valid should be 0 after reset"
    assert int(dut.busy.value) == 0, "busy should be 0"

    logger.info("PASS: Buffer reset verified")


@cocotb.test()
async def test_buffer_write_read_port_a(dut):
    """Test basic write and read on Port A."""
    logger.info("Test: Port A Write/Read")

    await setup_buffer(dut)

    test_addr = 0x100
    test_data = 0xDEADBEEF

    # Write data
    dut.port_a_en.value = 1
    dut.port_a_we.value = 1
    dut.port_a_addr.value = test_addr
    dut.port_a_wdata.value = test_data
    dut.port_a_byte_en.value = 0xF

    await RisingEdge(dut.clk)

    # Read data back
    dut.port_a_we.value = 0

    await RisingEdge(dut.clk)

    # Check result
    assert int(dut.port_a_valid.value) == 1, "Read should be valid"
    read_data = int(dut.port_a_rdata.value)
    assert read_data == test_data, f"Expected {test_data:08X}, got {read_data:08X}"

    logger.info("PASS: Port A write/read verified")


@cocotb.test()
async def test_buffer_write_read_port_b(dut):
    """Test basic write and read on Port B."""
    logger.info("Test: Port B Write/Read")

    await setup_buffer(dut)

    test_addr = 0x200
    test_data = 0xCAFEBABE

    # Write data
    dut.port_b_en.value = 1
    dut.port_b_we.value = 1
    dut.port_b_addr.value = test_addr
    dut.port_b_wdata.value = test_data
    dut.port_b_byte_en.value = 0xF

    await RisingEdge(dut.clk)

    # Read data back
    dut.port_b_we.value = 0

    await RisingEdge(dut.clk)

    # Check result
    assert int(dut.port_b_valid.value) == 1, "Read should be valid"
    read_data = int(dut.port_b_rdata.value)
    assert read_data == test_data, f"Expected {test_data:08X}, got {read_data:08X}"

    logger.info("PASS: Port B write/read verified")


@cocotb.test()
async def test_buffer_dual_port_access(dut):
    """Test simultaneous access from both ports."""
    logger.info("Test: Dual Port Access")

    await setup_buffer(dut)

    addr_a = 0x100
    addr_b = 0x200
    data_a = 0x11111111
    data_b = 0x22222222

    # Write from both ports simultaneously (to different addresses)
    dut.port_a_en.value = 1
    dut.port_a_we.value = 1
    dut.port_a_addr.value = addr_a
    dut.port_a_wdata.value = data_a
    dut.port_a_byte_en.value = 0xF

    dut.port_b_en.value = 1
    dut.port_b_we.value = 1
    dut.port_b_addr.value = addr_b
    dut.port_b_wdata.value = data_b
    dut.port_b_byte_en.value = 0xF

    await RisingEdge(dut.clk)

    # Read back from opposite ports
    dut.port_a_we.value = 0
    dut.port_a_addr.value = addr_b  # Read B's data from A

    dut.port_b_we.value = 0
    dut.port_b_addr.value = addr_a  # Read A's data from B

    await RisingEdge(dut.clk)

    # Verify cross-read
    read_a = int(dut.port_a_rdata.value)
    read_b = int(dut.port_b_rdata.value)

    assert read_a == data_b, f"Port A should read B's data: expected {data_b:08X}, got {read_a:08X}"
    assert read_b == data_a, f"Port B should read A's data: expected {data_a:08X}, got {read_b:08X}"

    logger.info("PASS: Dual port access verified")


@cocotb.test()
async def test_buffer_byte_enable(dut):
    """Test byte-selective writes."""
    logger.info("Test: Byte Enable")

    await setup_buffer(dut)

    test_addr = 0x300

    # Write full word first
    dut.port_a_en.value = 1
    dut.port_a_we.value = 1
    dut.port_a_addr.value = test_addr
    dut.port_a_wdata.value = 0xFFFFFFFF
    dut.port_a_byte_en.value = 0xF

    await RisingEdge(dut.clk)

    # Write only byte 1 (bits 15:8)
    dut.port_a_wdata.value = 0x00AA0000
    dut.port_a_byte_en.value = 0b0010  # Only byte 1

    await RisingEdge(dut.clk)

    # Read back
    dut.port_a_we.value = 0
    dut.port_a_byte_en.value = 0xF

    await RisingEdge(dut.clk)

    # Should be 0xFFAAFFFF (byte 1 changed to 0xAA, but the write was AA at byte 1 position)
    # Actually: wdata[15:8] = 0xAA -> mem byte 1 = 0xAA
    expected = 0xFFAAFFFF
    read_data = int(dut.port_a_rdata.value)
    assert read_data == expected, f"Expected {expected:08X}, got {read_data:08X}"

    logger.info("PASS: Byte enable verified")


@cocotb.test()
async def test_buffer_sequential_addresses(dut):
    """Test sequential address writes and reads."""
    logger.info("Test: Sequential Addresses")

    await setup_buffer(dut)

    base_addr = 0x400
    num_words = 16

    # Write sequential data
    dut.port_a_en.value = 1
    dut.port_a_we.value = 1
    dut.port_a_byte_en.value = 0xF

    for i in range(num_words):
        dut.port_a_addr.value = base_addr + i
        dut.port_a_wdata.value = i * 0x01010101
        await RisingEdge(dut.clk)

    # Read back and verify
    dut.port_a_we.value = 0

    for i in range(num_words):
        dut.port_a_addr.value = base_addr + i
        await RisingEdge(dut.clk)

        expected = i * 0x01010101
        read_data = int(dut.port_a_rdata.value)
        assert read_data == expected, f"Addr {base_addr+i}: expected {expected:08X}, got {read_data:08X}"

    logger.info("PASS: Sequential addresses verified")


@cocotb.test()
async def test_buffer_random_access(dut):
    """Test random address patterns."""
    logger.info("Test: Random Access")

    await setup_buffer(dut)

    random.seed(42)  # Reproducible
    test_count = 20

    # Generate random addresses and data
    test_cases = []
    for _ in range(test_count):
        addr = random.randint(0, 0x3FFF)  # 14-bit address space
        data = random.randint(0, 0xFFFFFFFF)
        test_cases.append((addr, data))

    # Write all
    dut.port_a_en.value = 1
    dut.port_a_we.value = 1
    dut.port_a_byte_en.value = 0xF

    for addr, data in test_cases:
        dut.port_a_addr.value = addr
        dut.port_a_wdata.value = data
        await RisingEdge(dut.clk)

    # Shuffle and read back
    random.shuffle(test_cases)
    dut.port_a_we.value = 0

    for addr, expected in test_cases:
        dut.port_a_addr.value = addr
        await RisingEdge(dut.clk)

        read_data = int(dut.port_a_rdata.value)
        assert read_data == expected, f"Addr {addr:04X}: expected {expected:08X}, got {read_data:08X}"

    logger.info("PASS: Random access verified")
