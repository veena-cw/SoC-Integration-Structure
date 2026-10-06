"""
Processing Element (PE) Testbench

Tests for the fundamental compute unit of the systolic array:
1. Weight loading
2. Single MAC operation
3. Multiple MAC operations with accumulation
4. Signed arithmetic (positive and negative values)
5. Reset behavior
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_pe, to_signed_int8, from_signed_int8, to_signed_int32
from helpers.format import format_pe_state, format_signed
from helpers.logger import logger


@cocotb.test()
async def test_pe_reset(dut):
    """Test that PE resets to zero state."""
    logger.info("Test: PE Reset")

    await setup_pe(dut)

    # Verify all outputs are zero after reset
    assert int(dut.data_out_east.value) == 0, "data_out_east should be 0 after reset"
    assert int(dut.psum_out_south.value) == 0, "psum_out_south should be 0 after reset"
    assert int(dut.weight_debug.value) == 0, "weight should be 0 after reset"
    assert int(dut.acc_debug.value) == 0, "accumulator should be 0 after reset"

    logger.info("PASS: PE reset verified")


@cocotb.test()
async def test_pe_weight_load(dut):
    """Test loading a weight into the PE."""
    logger.info("Test: PE Weight Load")

    await setup_pe(dut)

    # Load weight = 5
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 5  # Weight value
    dut.psum_in_north.value = 0

    await RisingEdge(dut.clk)

    # Weight should be loaded
    weight = format_signed(int(dut.weight_debug.value), 8)
    assert weight == 5, f"Weight should be 5, got {weight}"

    # Stop weight loading
    dut.weight_load.value = 0

    await RisingEdge(dut.clk)

    # Weight should remain stable
    weight = format_signed(int(dut.weight_debug.value), 8)
    assert weight == 5, f"Weight should still be 5, got {weight}"

    logger.info("PASS: Weight loading verified")


@cocotb.test()
async def test_pe_single_mac(dut):
    """Test a single multiply-accumulate operation."""
    logger.info("Test: PE Single MAC")

    await setup_pe(dut)

    # Load weight = 3
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 3
    await RisingEdge(dut.clk)

    # Compute: 4 * 3 + 0 = 12
    dut.weight_load.value = 0
    dut.data_in_west.value = 4  # Activation
    dut.psum_in_north.value = 0  # No incoming partial sum

    await RisingEdge(dut.clk)

    # Check result
    psum_out = to_signed_int32(int(dut.psum_out_south.value))
    assert psum_out == 12, f"psum_out should be 12 (4*3+0), got {psum_out}"

    # Check activation forwarding
    data_out = format_signed(int(dut.data_out_east.value), 8)
    assert data_out == 4, f"data_out should forward activation (4), got {data_out}"

    logger.info("PASS: Single MAC verified")


@cocotb.test()
async def test_pe_mac_with_psum(dut):
    """Test MAC with incoming partial sum."""
    logger.info("Test: PE MAC with Partial Sum")

    await setup_pe(dut)

    # Load weight = 5
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 5
    await RisingEdge(dut.clk)

    # Compute: 7 * 5 + 100 = 135
    dut.weight_load.value = 0
    dut.data_in_west.value = 7  # Activation
    dut.psum_in_north.value = 100  # Incoming partial sum

    await RisingEdge(dut.clk)

    psum_out = to_signed_int32(int(dut.psum_out_south.value))
    assert psum_out == 135, f"psum_out should be 135 (7*5+100), got {psum_out}"

    logger.info("PASS: MAC with partial sum verified")


@cocotb.test()
async def test_pe_signed_arithmetic(dut):
    """Test signed multiplication with negative values."""
    logger.info("Test: PE Signed Arithmetic")

    await setup_pe(dut)

    # Load weight = -3 (in 2's complement 8-bit: 253)
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = from_signed_int8(-3)
    await RisingEdge(dut.clk)

    # Verify weight loaded correctly
    weight = format_signed(int(dut.weight_debug.value), 8)
    assert weight == -3, f"Weight should be -3, got {weight}"

    # Compute: 4 * (-3) + 0 = -12
    dut.weight_load.value = 0
    dut.data_in_west.value = 4  # Positive activation

    await RisingEdge(dut.clk)

    psum_out = to_signed_int32(int(dut.psum_out_south.value))
    assert psum_out == -12, f"psum_out should be -12 (4*-3), got {psum_out}"

    logger.info("PASS: Signed arithmetic verified")


@cocotb.test()
async def test_pe_negative_times_negative(dut):
    """Test negative times negative."""
    logger.info("Test: PE Negative x Negative")

    await setup_pe(dut)

    # Load weight = -5
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = from_signed_int8(-5)
    await RisingEdge(dut.clk)

    # Compute: (-7) * (-5) + 0 = 35
    dut.weight_load.value = 0
    dut.data_in_west.value = from_signed_int8(-7)

    await RisingEdge(dut.clk)

    psum_out = to_signed_int32(int(dut.psum_out_south.value))
    assert psum_out == 35, f"psum_out should be 35 (-7*-5), got {psum_out}"

    logger.info("PASS: Negative x Negative verified")


@cocotb.test()
async def test_pe_accumulation(dut):
    """Test multiple MAC operations with local accumulation."""
    logger.info("Test: PE Accumulation")

    await setup_pe(dut)

    # Load weight = 2
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 2
    await RisingEdge(dut.clk)

    # First computation with clear: 3 * 2 = 6
    dut.weight_load.value = 0
    dut.clear_acc.value = 1
    dut.data_in_west.value = 3
    dut.psum_in_north.value = 0

    await RisingEdge(dut.clk)

    acc = to_signed_int32(int(dut.acc_debug.value))
    assert acc == 6, f"Accumulator should be 6 after first MAC, got {acc}"

    # Second computation with accumulate: 4 * 2 + previous = 8 + 6 = 14
    dut.clear_acc.value = 0
    dut.data_in_west.value = 4

    await RisingEdge(dut.clk)

    acc = to_signed_int32(int(dut.acc_debug.value))
    assert acc == 14, f"Accumulator should be 14 after second MAC, got {acc}"

    # Third computation: 5 * 2 + 14 = 24
    dut.data_in_west.value = 5

    await RisingEdge(dut.clk)

    acc = to_signed_int32(int(dut.acc_debug.value))
    assert acc == 24, f"Accumulator should be 24 after third MAC, got {acc}"

    logger.info("PASS: Accumulation verified")


@cocotb.test()
async def test_pe_data_forwarding(dut):
    """Test that data is forwarded east with 1-cycle delay."""
    logger.info("Test: PE Data Forwarding")

    await setup_pe(dut)

    # Load weight (required for compute mode)
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 1
    await RisingEdge(dut.clk)

    # Send sequence of activations
    dut.weight_load.value = 0
    test_values = [10, 20, 30, 40, 50]

    for i, val in enumerate(test_values):
        dut.data_in_west.value = val
        await RisingEdge(dut.clk)

        if i > 0:
            # Check previous value forwarded
            data_out = format_signed(int(dut.data_out_east.value), 8)
            expected = test_values[i-1]
            assert data_out == expected, f"Cycle {i}: data_out should be {expected}, got {data_out}"

    logger.info("PASS: Data forwarding verified")


@cocotb.test()
async def test_pe_enable_disable(dut):
    """Test that PE holds state when disabled."""
    logger.info("Test: PE Enable/Disable")

    await setup_pe(dut)

    # Load weight and compute
    dut.enable.value = 1
    dut.weight_load.value = 1
    dut.data_in_west.value = 3
    await RisingEdge(dut.clk)

    dut.weight_load.value = 0
    dut.data_in_west.value = 7
    await RisingEdge(dut.clk)

    # Record state
    psum_before = int(dut.psum_out_south.value)
    data_before = int(dut.data_out_east.value)

    # Disable PE and change inputs
    dut.enable.value = 0
    dut.data_in_west.value = 99
    dut.psum_in_north.value = 999

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # State should not change
    psum_after = int(dut.psum_out_south.value)
    data_after = int(dut.data_out_east.value)

    assert psum_before == psum_after, f"psum_out changed while disabled"
    assert data_before == data_after, f"data_out changed while disabled"

    logger.info("PASS: Enable/Disable verified")
