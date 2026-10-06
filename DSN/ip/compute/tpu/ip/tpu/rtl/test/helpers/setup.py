"""
Setup utilities for tiny-tpu cocotb testbenches.
"""

from typing import List, Optional
import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np


async def setup_clock(dut, period_ns: int = 10):
    """
    Setup clock for simulation.

    Args:
        dut: Device under test
        period_ns: Clock period in nanoseconds (default 10ns = 100MHz)
    """
    clock = Clock(dut.clk, period_ns, units="ns")
    cocotb.start_soon(clock.start())


async def reset_dut(dut, cycles: int = 2):
    """
    Reset the DUT for specified cycles.

    Args:
        dut: Device under test
        cycles: Number of clock cycles to hold reset
    """
    dut.reset.value = 1
    for _ in range(cycles):
        await RisingEdge(dut.clk)
    dut.reset.value = 0
    await RisingEdge(dut.clk)


async def setup_pe(dut, clock_period_ns: int = 10):
    """
    Setup for Processing Element testbench.

    Args:
        dut: PE device under test
        clock_period_ns: Clock period in nanoseconds
    """
    # Setup clock
    await setup_clock(dut, clock_period_ns)

    # Initialize inputs
    dut.enable.value = 0
    dut.weight_load.value = 0
    dut.clear_acc.value = 0
    dut.data_in_west.value = 0
    dut.psum_in_north.value = 0

    # Reset
    await reset_dut(dut)


async def setup_systolic(dut, array_size: int = 8, clock_period_ns: int = 10):
    """
    Setup for Systolic Array testbench.

    Args:
        dut: Systolic array device under test
        array_size: Size of NxN array
        clock_period_ns: Clock period in nanoseconds
    """
    # Setup clock
    await setup_clock(dut, clock_period_ns)

    # Initialize control signals
    dut.enable.value = 0
    dut.weight_load.value = 0
    dut.clear_acc.value = 0
    dut.weight_row_select.value = 0

    # Initialize data inputs (arrays)
    for i in range(array_size):
        dut.weight_data[i].value = 0
        dut.activation_in[i].value = 0
        dut.psum_in[i].value = 0
        dut.activation_valid[i].value = 0

    # Reset
    await reset_dut(dut)


async def setup(dut, config: dict = None):
    """
    General setup function for any TPU module.

    Args:
        dut: Device under test
        config: Configuration dictionary
    """
    config = config or {}
    clock_period = config.get('clock_period_ns', 10)

    await setup_clock(dut, clock_period)
    await reset_dut(dut)


def to_signed_int8(value: int) -> int:
    """Convert unsigned 8-bit value to signed."""
    if value >= 128:
        return value - 256
    return value


def from_signed_int8(value: int) -> int:
    """Convert signed value to unsigned 8-bit."""
    if value < 0:
        return value + 256
    return value & 0xFF


def to_signed_int32(value: int) -> int:
    """Convert unsigned 32-bit value to signed."""
    if value >= 2**31:
        return value - 2**32
    return value


def matrix_to_list(matrix: np.ndarray, signed: bool = True) -> List[List[int]]:
    """
    Convert NumPy matrix to list of lists for cocotb.

    Args:
        matrix: Input numpy array
        signed: Whether values are signed (default True)
    """
    result = []
    for row in matrix:
        if signed:
            result.append([from_signed_int8(int(x)) for x in row])
        else:
            result.append([int(x) & 0xFF for x in row])
    return result
