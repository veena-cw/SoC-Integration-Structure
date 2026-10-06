"""
Weight FIFO Testbench

Tests for the double-buffered weight FIFO:
1. Prefetch operation
2. Drain to systolic array
3. Double buffering swap
4. Weight data integrity
5. Row-by-row weight loading
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_clock, reset_dut, from_signed_int8, to_signed_int8
from helpers.logger import logger


async def setup_weight_fifo(dut, clock_period_ns: int = 10):
    """Setup for weight FIFO testbench."""
    await setup_clock(dut, clock_period_ns)

    # Initialize control inputs
    dut.prefetch_start.value = 0
    dut.prefetch_base_addr.value = 0
    dut.prefetch_rows.value = 8
    dut.drain_enable.value = 0
    dut.drain_row_done.value = 0

    # Initialize memory interface (simulated responses)
    dut.mem_rdata.value = 0
    dut.mem_valid.value = 0

    await reset_dut(dut)


async def simulate_memory_response(dut, data_array, base_addr):
    """
    Simulate memory responses for prefetch.
    data_array: List of 32-bit words to return
    """
    word_idx = 0
    while word_idx < len(data_array):
        await RisingEdge(dut.clk)
        if int(dut.mem_req.value) == 1:
            # Return data on next cycle
            await RisingEdge(dut.clk)
            dut.mem_rdata.value = data_array[word_idx]
            dut.mem_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_valid.value = 0
            word_idx += 1


@cocotb.test()
async def test_fifo_reset(dut):
    """Test that FIFO resets correctly."""
    logger.info("Test: Weight FIFO Reset")

    await setup_weight_fifo(dut)

    # Verify initial state
    assert int(dut.buffer_empty.value) == 1, "Buffer should be empty after reset"
    assert int(dut.buffer_ready.value) == 0, "Buffer should not be ready after reset"
    assert int(dut.prefetch_done.value) == 0, "Prefetch should not be done"
    assert int(dut.prefetch_busy.value) == 0, "Prefetch should not be busy"

    logger.info("PASS: Weight FIFO reset verified")


@cocotb.test()
async def test_fifo_prefetch_request(dut):
    """Test that prefetch generates memory requests."""
    logger.info("Test: Prefetch Request Generation")

    await setup_weight_fifo(dut)

    # Start prefetch
    dut.prefetch_start.value = 1
    dut.prefetch_base_addr.value = 0x1400  # Weight region
    dut.prefetch_rows.value = 8

    await RisingEdge(dut.clk)
    dut.prefetch_start.value = 0

    # Should become busy
    await RisingEdge(dut.clk)
    assert int(dut.prefetch_busy.value) == 1, "Prefetch should be busy"

    # Should generate memory request
    await RisingEdge(dut.clk)
    assert int(dut.mem_req.value) == 1, "Should generate memory request"

    logger.info("PASS: Prefetch request generation verified")


@cocotb.test()
async def test_fifo_prefetch_complete(dut):
    """Test complete prefetch cycle."""
    logger.info("Test: Prefetch Complete")

    await setup_weight_fifo(dut)

    N = 8
    # For 8 rows, need 8 * (8/4) = 16 words (4 INT8 weights per 32-bit word)
    num_words = (N * N) // 4

    # Create test weight data (16 words = 64 weights)
    # Pack as 4 INT8 values per 32-bit word
    test_weights = list(range(64))  # 0 to 63
    weight_words = []
    for i in range(0, 64, 4):
        word = (test_weights[i] |
                (test_weights[i+1] << 8) |
                (test_weights[i+2] << 16) |
                (test_weights[i+3] << 24))
        weight_words.append(word)

    # Start prefetch
    dut.prefetch_start.value = 1
    dut.prefetch_base_addr.value = 0x1400
    dut.prefetch_rows.value = 8

    await RisingEdge(dut.clk)
    dut.prefetch_start.value = 0

    # Simulate memory responses
    for word in weight_words:
        # Wait for memory request
        while int(dut.mem_req.value) == 0:
            await RisingEdge(dut.clk)

        # Provide response
        await RisingEdge(dut.clk)
        dut.mem_rdata.value = word
        dut.mem_valid.value = 1
        await RisingEdge(dut.clk)
        dut.mem_valid.value = 0

    # Wait for done
    for _ in range(5):
        await RisingEdge(dut.clk)
        if int(dut.prefetch_done.value) == 1:
            break

    assert int(dut.prefetch_done.value) == 1, "Prefetch should be done"
    assert int(dut.buffer_ready.value) == 1, "Buffer should be ready"

    logger.info("PASS: Prefetch complete verified")


@cocotb.test()
async def test_fifo_drain_weights(dut):
    """Test draining weights to systolic array."""
    logger.info("Test: Drain Weights")

    await setup_weight_fifo(dut)

    N = 8
    # Create simple test pattern: row i has value i in all columns
    weight_words = []
    for row in range(N):
        for word_in_row in range(N // 4):
            val = row
            word = val | (val << 8) | (val << 16) | (val << 24)
            weight_words.append(word)

    # Prefetch weights
    dut.prefetch_start.value = 1
    dut.prefetch_base_addr.value = 0x1400
    dut.prefetch_rows.value = N

    await RisingEdge(dut.clk)
    dut.prefetch_start.value = 0

    # Provide memory responses
    for word in weight_words:
        while int(dut.mem_req.value) == 0:
            await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)
        dut.mem_rdata.value = word
        dut.mem_valid.value = 1
        await RisingEdge(dut.clk)
        dut.mem_valid.value = 0

    # Wait for ready
    while int(dut.buffer_ready.value) == 0:
        await RisingEdge(dut.clk)

    # Enable drain
    dut.drain_enable.value = 1

    # Drain N rows
    for row in range(N):
        await RisingEdge(dut.clk)

        # Check weight_valid
        assert int(dut.weight_valid.value) == 1, f"Row {row}: weight should be valid"

        # Check row select is one-hot
        row_sel = int(dut.weight_row_select.value)
        expected_sel = 1 << row
        assert row_sel == expected_sel, f"Row {row}: expected select {expected_sel:02X}, got {row_sel:02X}"

        # Check weights (all should be row number)
        for col in range(N):
            weight = to_signed_int8(int(dut.weight_out[col].value))
            assert weight == row, f"Row {row}, Col {col}: expected {row}, got {weight}"

        # Signal row done
        dut.drain_row_done.value = 1
        await RisingEdge(dut.clk)
        dut.drain_row_done.value = 0

    logger.info("PASS: Drain weights verified")


@cocotb.test()
async def test_fifo_row_select_sequence(dut):
    """Test that row select progresses correctly."""
    logger.info("Test: Row Select Sequence")

    await setup_weight_fifo(dut)

    N = 8
    # Simple weight data
    weight_words = [0x03020100, 0x07060504] * (N * N // 8)

    # Prefetch
    dut.prefetch_start.value = 1
    dut.prefetch_base_addr.value = 0x1400
    dut.prefetch_rows.value = N
    await RisingEdge(dut.clk)
    dut.prefetch_start.value = 0

    for word in weight_words:
        while int(dut.mem_req.value) == 0:
            await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)
        dut.mem_rdata.value = word
        dut.mem_valid.value = 1
        await RisingEdge(dut.clk)
        dut.mem_valid.value = 0

    while int(dut.buffer_ready.value) == 0:
        await RisingEdge(dut.clk)

    # Check row select sequence
    dut.drain_enable.value = 1
    expected_selects = [0x01, 0x02, 0x04, 0x08, 0x10, 0x20, 0x40, 0x80]

    for i, expected in enumerate(expected_selects):
        await RisingEdge(dut.clk)
        actual = int(dut.weight_row_select.value)
        assert actual == expected, f"Cycle {i}: expected select {expected:02X}, got {actual:02X}"

        dut.drain_row_done.value = 1
        await RisingEdge(dut.clk)
        dut.drain_row_done.value = 0

    logger.info("PASS: Row select sequence verified")
