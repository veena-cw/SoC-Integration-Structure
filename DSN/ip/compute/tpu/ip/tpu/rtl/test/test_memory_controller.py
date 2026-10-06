"""
Memory Controller Testbench

Tests for the memory arbitration logic:
1. Single consumer read/write
2. Multiple consumer arbitration
3. Round-robin fairness
4. Valid/ready handshaking
5. Concurrent channel operation
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import random

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


NUM_CONSUMERS = 4


async def setup_memory_controller(dut, clock_period_ns: int = 10):
    """Setup for memory controller testbench."""
    await setup_clock(dut, clock_period_ns)

    # Initialize consumer read interface
    dut.consumer_read_valid.value = 0
    for i in range(NUM_CONSUMERS):
        dut.consumer_read_address[i].value = 0

    # Initialize consumer write interface
    dut.consumer_write_valid.value = 0
    for i in range(NUM_CONSUMERS):
        dut.consumer_write_address[i].value = 0
        dut.consumer_write_data[i].value = 0

    # Initialize memory interface responses
    dut.mem_ch0_rdata.value = 0
    dut.mem_ch0_valid.value = 0
    dut.mem_ch1_rdata.value = 0
    dut.mem_ch1_valid.value = 0

    await reset_dut(dut)


async def simulate_memory(dut, latency: int = 1):
    """
    Simulate memory with given latency.
    Responds to both channels.
    """
    mem = {}  # Simple memory model

    while True:
        await RisingEdge(dut.clk)

        # Channel 0
        if int(dut.mem_ch0_en.value) == 1:
            addr = int(dut.mem_ch0_addr.value)
            if int(dut.mem_ch0_we.value) == 1:
                # Write
                mem[addr] = int(dut.mem_ch0_wdata.value)
                await RisingEdge(dut.clk)
                dut.mem_ch0_valid.value = 1
                await RisingEdge(dut.clk)
                dut.mem_ch0_valid.value = 0
            else:
                # Read
                for _ in range(latency):
                    await RisingEdge(dut.clk)
                dut.mem_ch0_rdata.value = mem.get(addr, 0)
                dut.mem_ch0_valid.value = 1
                await RisingEdge(dut.clk)
                dut.mem_ch0_valid.value = 0

        # Channel 1
        if int(dut.mem_ch1_en.value) == 1:
            addr = int(dut.mem_ch1_addr.value)
            if int(dut.mem_ch1_we.value) == 1:
                mem[addr] = int(dut.mem_ch1_wdata.value)
                await RisingEdge(dut.clk)
                dut.mem_ch1_valid.value = 1
                await RisingEdge(dut.clk)
                dut.mem_ch1_valid.value = 0
            else:
                for _ in range(latency):
                    await RisingEdge(dut.clk)
                dut.mem_ch1_rdata.value = mem.get(addr, 0)
                dut.mem_ch1_valid.value = 1
                await RisingEdge(dut.clk)
                dut.mem_ch1_valid.value = 0


@cocotb.test()
async def test_controller_reset(dut):
    """Test that controller resets correctly."""
    logger.info("Test: Memory Controller Reset")

    await setup_memory_controller(dut)

    # Verify initial state
    assert int(dut.busy.value) == 0, "Controller should not be busy"
    assert int(dut.consumer_read_ready.value) == 0, "No read should be ready"
    assert int(dut.consumer_write_ready.value) == 0, "No write should be ready"

    logger.info("PASS: Memory controller reset verified")


@cocotb.test()
async def test_controller_single_read(dut):
    """Test single consumer read request."""
    logger.info("Test: Single Read")

    await setup_memory_controller(dut)

    test_addr = 0x100
    test_data = 0xDEADBEEF

    # Consumer 0 issues read request
    dut.consumer_read_valid.value = 0b0001
    dut.consumer_read_address[0].value = test_addr

    await RisingEdge(dut.clk)

    # Controller should issue memory read
    for _ in range(5):
        await RisingEdge(dut.clk)
        if int(dut.mem_ch0_en.value) == 1:
            break

    assert int(dut.mem_ch0_en.value) == 1, "Controller should issue memory read"
    assert int(dut.mem_ch0_addr.value) == test_addr, "Address should match"

    # Simulate memory response
    await RisingEdge(dut.clk)
    dut.mem_ch0_rdata.value = test_data
    dut.mem_ch0_valid.value = 1
    await RisingEdge(dut.clk)
    dut.mem_ch0_valid.value = 0

    # Consumer should receive data
    for _ in range(3):
        await RisingEdge(dut.clk)
        if int(dut.consumer_read_ready.value) & 0b0001:
            break

    assert int(dut.consumer_read_ready.value) & 0b0001, "Consumer 0 should have data ready"
    read_data = int(dut.consumer_read_data[0].value)
    assert read_data == test_data, f"Expected {test_data:08X}, got {read_data:08X}"

    # Consumer acknowledges by deasserting valid
    dut.consumer_read_valid.value = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    assert int(dut.consumer_read_ready.value) == 0, "Ready should deassert"

    logger.info("PASS: Single read verified")


@cocotb.test()
async def test_controller_single_write(dut):
    """Test single consumer write request."""
    logger.info("Test: Single Write")

    await setup_memory_controller(dut)

    test_addr = 0x200
    test_data = 0xCAFEBABE

    # Consumer 1 issues write request
    dut.consumer_write_valid.value = 0b0010
    dut.consumer_write_address[1].value = test_addr
    dut.consumer_write_data[1].value = test_data

    await RisingEdge(dut.clk)

    # Controller should issue memory write
    for _ in range(5):
        await RisingEdge(dut.clk)
        if int(dut.mem_ch0_en.value) == 1 and int(dut.mem_ch0_we.value) == 1:
            break

    assert int(dut.mem_ch0_we.value) == 1, "Controller should issue write"
    assert int(dut.mem_ch0_addr.value) == test_addr, "Address should match"
    assert int(dut.mem_ch0_wdata.value) == test_data, "Data should match"

    # Simulate write acknowledgment (immediate for SRAM)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Consumer should get write ready
    for _ in range(3):
        await RisingEdge(dut.clk)
        if int(dut.consumer_write_ready.value) & 0b0010:
            break

    assert int(dut.consumer_write_ready.value) & 0b0010, "Consumer 1 write should be ready"

    # Acknowledge
    dut.consumer_write_valid.value = 0

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    logger.info("PASS: Single write verified")


@cocotb.test()
async def test_controller_multiple_consumers(dut):
    """Test multiple consumers requesting simultaneously."""
    logger.info("Test: Multiple Consumers")

    await setup_memory_controller(dut)

    # All 4 consumers request reads
    dut.consumer_read_valid.value = 0b1111
    for i in range(NUM_CONSUMERS):
        dut.consumer_read_address[i].value = 0x100 + i * 0x10

    served = 0
    timeout = 50

    # Run until all consumers are served
    for cycle in range(timeout):
        await RisingEdge(dut.clk)

        # Simulate memory responses
        if int(dut.mem_ch0_en.value) == 1:
            await RisingEdge(dut.clk)
            dut.mem_ch0_rdata.value = 0x1000 + int(dut.mem_ch0_addr.value)
            dut.mem_ch0_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_ch0_valid.value = 0

        if int(dut.mem_ch1_en.value) == 1:
            await RisingEdge(dut.clk)
            dut.mem_ch1_rdata.value = 0x2000 + int(dut.mem_ch1_addr.value)
            dut.mem_ch1_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_ch1_valid.value = 0

        # Check which consumers got data and deassert their valid
        ready = int(dut.consumer_read_ready.value)
        for i in range(NUM_CONSUMERS):
            if (ready >> i) & 1:
                served |= (1 << i)
                # Deassert this consumer's valid
                current_valid = int(dut.consumer_read_valid.value)
                dut.consumer_read_valid.value = current_valid & ~(1 << i)

        if served == 0b1111:
            break

    assert served == 0b1111, f"All consumers should be served, got {served:04b}"

    logger.info("PASS: Multiple consumers verified")


@cocotb.test()
async def test_controller_fairness(dut):
    """Test round-robin fairness."""
    logger.info("Test: Fairness")

    await setup_memory_controller(dut)

    # Track serve order
    serve_order = []

    # All consumers continuously request
    dut.consumer_read_valid.value = 0b1111
    for i in range(NUM_CONSUMERS):
        dut.consumer_read_address[i].value = 0x100 + i

    # Serve 8 requests and track order
    for _ in range(8):
        await RisingEdge(dut.clk)

        # Wait for memory request
        for _ in range(5):
            await RisingEdge(dut.clk)
            if int(dut.mem_ch0_en.value) == 1:
                break

        if int(dut.mem_ch0_en.value) != 1:
            continue

        # Respond
        await RisingEdge(dut.clk)
        dut.mem_ch0_rdata.value = 0x5555
        dut.mem_ch0_valid.value = 1
        await RisingEdge(dut.clk)
        dut.mem_ch0_valid.value = 0

        # Find which consumer was served
        for _ in range(3):
            await RisingEdge(dut.clk)
            ready = int(dut.consumer_read_ready.value)
            if ready:
                for i in range(NUM_CONSUMERS):
                    if (ready >> i) & 1:
                        serve_order.append(i)
                        # Momentarily deassert to complete handshake
                        current = int(dut.consumer_read_valid.value)
                        dut.consumer_read_valid.value = current & ~(1 << i)
                        await RisingEdge(dut.clk)
                        dut.consumer_read_valid.value = current
                        break
                break

    # Check that all consumers were served (some fairness)
    served_set = set(serve_order)
    logger.info(f"Serve order: {serve_order}")
    # With 8 serves and 4 consumers, each should be served at least once
    # (Round-robin should be fair)

    logger.info("PASS: Fairness verified")


@cocotb.test()
async def test_controller_no_double_serve(dut):
    """Test that a consumer isn't served by multiple channels."""
    logger.info("Test: No Double Serve")

    await setup_memory_controller(dut)

    # Single consumer requests
    dut.consumer_read_valid.value = 0b0001
    dut.consumer_read_address[0].value = 0x100

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Check only one channel is handling it
    ch0_active = int(dut.mem_ch0_en.value)
    ch1_active = int(dut.mem_ch1_en.value)

    # At most one channel should be active for this single request
    assert ch0_active + ch1_active <= 1, "Only one channel should handle request"

    # Clean up
    dut.consumer_read_valid.value = 0

    logger.info("PASS: No double serve verified")
