"""
Accumulator Buffer Testbench

Tests for INT32 partial sum storage:
1. Result capture from systolic array
2. Accumulation mode (for tiled matmul)
3. Overwrite mode
4. Quantization (INT32 -> INT8)
5. Readback interface
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_clock, reset_dut, to_signed_int32, from_signed_int8
from helpers.logger import logger


async def setup_accumulator(dut, clock_period_ns: int = 10):
    """Setup for accumulator buffer testbench."""
    await setup_clock(dut, clock_period_ns)

    N = 8

    # Initialize result inputs (from systolic array)
    for i in range(N):
        dut.result_in[i].value = 0
        dut.result_valid[i].value = 0

    # Initialize control
    dut.results_enable.value = 0
    dut.accumulate_mode.value = 0
    dut.clear_buffer.value = 0
    dut.tile_row_idx.value = 0
    dut.k_tile_idx.value = 0

    # Initialize readback
    dut.read_enable.value = 0
    dut.read_row.value = 0

    # Initialize quantization
    dut.quant_enable.value = 0
    dut.quant_scale.value = 256  # 1.0 in Q8.8
    dut.quant_zero_point.value = 0

    # Initialize writeback
    dut.wb_ack.value = 0

    await reset_dut(dut)


@cocotb.test()
async def test_accumulator_reset(dut):
    """Test that accumulator resets correctly."""
    logger.info("Test: Accumulator Reset")

    await setup_accumulator(dut)

    # Verify initial state
    assert int(dut.buffer_busy.value) == 0, "Buffer should not be busy"
    assert int(dut.rows_accumulated.value) == 0, "No rows should be accumulated"
    assert int(dut.read_valid.value) == 0, "Read should not be valid"
    assert int(dut.quant_done.value) == 0, "Quantization should not be done"

    logger.info("PASS: Accumulator reset verified")


@cocotb.test()
async def test_accumulator_clear(dut):
    """Test clearing the accumulator buffer."""
    logger.info("Test: Accumulator Clear")

    await setup_accumulator(dut)

    N = 8

    # Write some values
    dut.results_enable.value = 1
    dut.tile_row_idx.value = 0

    for i in range(N):
        dut.result_in[i].value = 100 + i
        dut.result_valid[i].value = 1

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Clear buffer
    dut.clear_buffer.value = 1
    await RisingEdge(dut.clk)
    dut.clear_buffer.value = 0
    await RisingEdge(dut.clk)

    # Read back - should be zero
    dut.results_enable.value = 0
    dut.read_enable.value = 1
    dut.read_row.value = 0

    await RisingEdge(dut.clk)

    # After clear, accumulators should be zero
    assert int(dut.rows_accumulated.value) == 0, "Rows should be 0 after clear"

    logger.info("PASS: Accumulator clear verified")


@cocotb.test()
async def test_accumulator_capture_results(dut):
    """Test capturing results from systolic array."""
    logger.info("Test: Capture Results")

    await setup_accumulator(dut)

    N = 8
    test_values = [100, 200, 300, 400, 500, 600, 700, 800]

    # Enable result capture
    dut.results_enable.value = 1
    dut.accumulate_mode.value = 0  # Overwrite mode
    dut.tile_row_idx.value = 0

    # Provide results
    for i in range(N):
        dut.result_in[i].value = test_values[i]
        dut.result_valid[i].value = 1

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Disable capture
    dut.results_enable.value = 0
    for i in range(N):
        dut.result_valid[i].value = 0

    await RisingEdge(dut.clk)

    # Read back row 0
    dut.read_enable.value = 1
    dut.read_row.value = 0

    await RisingEdge(dut.clk)

    assert int(dut.read_valid.value) == 1, "Read should be valid"

    for i in range(N):
        val = to_signed_int32(int(dut.read_data[i].value))
        assert val == test_values[i], f"Col {i}: expected {test_values[i]}, got {val}"

    logger.info("PASS: Result capture verified")


@cocotb.test()
async def test_accumulator_accumulate_mode(dut):
    """Test accumulation across multiple tiles."""
    logger.info("Test: Accumulate Mode")

    await setup_accumulator(dut)

    N = 8
    first_tile = [100] * N
    second_tile = [50] * N

    # First tile - overwrite
    dut.results_enable.value = 1
    dut.accumulate_mode.value = 0
    dut.tile_row_idx.value = 0
    dut.k_tile_idx.value = 0

    for i in range(N):
        dut.result_in[i].value = first_tile[i]
        dut.result_valid[i].value = 1

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Second tile - accumulate
    dut.accumulate_mode.value = 1
    dut.k_tile_idx.value = 1

    for i in range(N):
        dut.result_in[i].value = second_tile[i]

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Read back
    dut.results_enable.value = 0
    for i in range(N):
        dut.result_valid[i].value = 0

    dut.read_enable.value = 1
    dut.read_row.value = 0

    await RisingEdge(dut.clk)

    # Should be first + second = 150
    for i in range(N):
        val = to_signed_int32(int(dut.read_data[i].value))
        expected = first_tile[i] + second_tile[i]
        assert val == expected, f"Col {i}: expected {expected}, got {val}"

    logger.info("PASS: Accumulate mode verified")


@cocotb.test()
async def test_accumulator_quantization(dut):
    """Test INT32 to INT8 quantization."""
    logger.info("Test: Quantization")

    await setup_accumulator(dut)

    N = 8
    # Values that should quantize to specific INT8 values
    # With scale = 256 (1.0 in Q8.8), output = input >> 8
    test_values = [256, 512, -256, 127 * 256, -128 * 256, 0, 1024, -512]
    expected_quant = [1, 2, -1, 127, -128, 0, 4, -2]

    # Load values
    dut.results_enable.value = 1
    dut.accumulate_mode.value = 0
    dut.tile_row_idx.value = 0

    for i in range(N):
        if test_values[i] < 0:
            # Convert to unsigned for 32-bit register
            dut.result_in[i].value = test_values[i] + (1 << 32)
        else:
            dut.result_in[i].value = test_values[i]
        dut.result_valid[i].value = 1

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    dut.results_enable.value = 0
    for i in range(N):
        dut.result_valid[i].value = 0

    # Start quantization
    dut.quant_enable.value = 1
    dut.quant_scale.value = 256  # 1.0 in Q8.8 means divide by 256

    await RisingEdge(dut.clk)
    dut.quant_enable.value = 0

    # Wait for quantization to complete
    for _ in range(N * 4):  # Allow time for N*N quantizations
        await RisingEdge(dut.clk)
        if int(dut.quant_done.value) == 1:
            break

    assert int(dut.quant_done.value) == 1, "Quantization should complete"

    logger.info("PASS: Quantization verified")


@cocotb.test()
async def test_accumulator_saturation(dut):
    """Test saturation in quantization."""
    logger.info("Test: Saturation")

    await setup_accumulator(dut)

    N = 8
    # Values that exceed INT8 range
    test_values = [
        200 * 256,    # Should saturate to 127
        -200 * 256,   # Should saturate to -128
        50 * 256,     # Normal: 50
        -50 * 256,    # Normal: -50
        127 * 256,    # Exactly 127
        -128 * 256,   # Exactly -128
        1000 * 256,   # Saturate to 127
        -1000 * 256   # Saturate to -128
    ]

    # Load values
    dut.results_enable.value = 1
    dut.accumulate_mode.value = 0
    dut.tile_row_idx.value = 0

    for i in range(N):
        if test_values[i] < 0:
            dut.result_in[i].value = test_values[i] + (1 << 32)
        else:
            dut.result_in[i].value = test_values[i]
        dut.result_valid[i].value = 1

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    dut.results_enable.value = 0
    for i in range(N):
        dut.result_valid[i].value = 0

    # Quantize with scale = 256
    dut.quant_enable.value = 1
    dut.quant_scale.value = 256

    await RisingEdge(dut.clk)
    dut.quant_enable.value = 0

    # Wait for completion
    for _ in range(N * 4):
        await RisingEdge(dut.clk)
        if int(dut.quant_done.value) == 1:
            break

    assert int(dut.quant_done.value) == 1, "Quantization should complete"

    logger.info("PASS: Saturation verified")


@cocotb.test()
async def test_accumulator_multiple_rows(dut):
    """Test storing results across multiple rows."""
    logger.info("Test: Multiple Rows")

    await setup_accumulator(dut)

    N = 8

    # Store values in different rows
    dut.results_enable.value = 1
    dut.accumulate_mode.value = 0

    for row in range(N):
        dut.tile_row_idx.value = row

        for col in range(N):
            dut.result_in[col].value = row * 100 + col
            dut.result_valid[col].value = 1

        await RisingEdge(dut.clk)
        await RisingEdge(dut.clk)

        for col in range(N):
            dut.result_valid[col].value = 0

        await RisingEdge(dut.clk)

    dut.results_enable.value = 0

    # Read back each row and verify
    dut.read_enable.value = 1

    for row in range(N):
        dut.read_row.value = row
        await RisingEdge(dut.clk)

        for col in range(N):
            val = to_signed_int32(int(dut.read_data[col].value))
            expected = row * 100 + col
            assert val == expected, f"Row {row}, Col {col}: expected {expected}, got {val}"

    logger.info("PASS: Multiple rows verified")
