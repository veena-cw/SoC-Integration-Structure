"""
Formatting utilities for tiny-tpu execution traces.
"""

from typing import List, Optional
from .logger import logger
import numpy as np


def format_binary(value: int, width: int = 8) -> str:
    """Format integer as binary string with specified width."""
    return format(value & ((1 << width) - 1), f'0{width}b')


def format_hex(value: int, width: int = 2) -> str:
    """Format integer as hex string with specified width."""
    return format(value & ((1 << (width * 4)) - 1), f'0{width}x')


def format_signed(value: int, width: int = 8) -> int:
    """Convert unsigned to signed integer."""
    max_val = 1 << (width - 1)
    if value >= max_val:
        return value - (1 << width)
    return value


def format_pe_state(dut, pe_id: str = "") -> str:
    """
    Format PE state for debugging.

    Args:
        dut: PE device under test
        pe_id: Optional identifier for the PE
    """
    lines = []
    lines.append(f"PE {pe_id} State:")

    # Weight
    weight = format_signed(int(dut.weight_debug.value), 8)
    lines.append(f"  Weight: {weight}")

    # Accumulator
    acc = format_signed(int(dut.acc_debug.value), 32)
    lines.append(f"  Accumulator: {acc}")

    # Inputs
    data_in = format_signed(int(dut.data_in_west.value), 8)
    psum_in = format_signed(int(dut.psum_in_north.value), 32)
    lines.append(f"  Data In (West): {data_in}")
    lines.append(f"  PSum In (North): {psum_in}")

    # Outputs
    data_out = format_signed(int(dut.data_out_east.value), 8)
    psum_out = format_signed(int(dut.psum_out_south.value), 32)
    lines.append(f"  Data Out (East): {data_out}")
    lines.append(f"  PSum Out (South): {psum_out}")

    return '\n'.join(lines)


def format_array_state(dut, array_size: int = 8) -> str:
    """
    Format systolic array state for debugging.

    Args:
        dut: Systolic array device under test
        array_size: Size of NxN array
    """
    lines = []
    lines.append("=" * 60)
    lines.append("Systolic Array State")
    lines.append("=" * 60)

    # Control signals
    lines.append(f"Enable: {int(dut.enable.value)}")
    lines.append(f"Weight Load: {int(dut.weight_load.value)}")
    lines.append(f"Clear Acc: {int(dut.clear_acc.value)}")

    # Weight matrix
    lines.append("\nWeight Matrix:")
    weight_str = "     "
    for j in range(array_size):
        weight_str += f"C{j:2d}  "
    lines.append(weight_str)

    for i in range(array_size):
        row_str = f"R{i}: "
        for j in range(array_size):
            try:
                w = format_signed(int(dut.debug_weights[i][j].value), 8)
                row_str += f"{w:4d} "
            except:
                row_str += "  ?  "
        lines.append(row_str)

    # Activations
    lines.append("\nActivation Inputs (West):")
    act_str = "    "
    for i in range(array_size):
        try:
            a = format_signed(int(dut.activation_in[i].value), 8)
            act_str += f"{a:4d} "
        except:
            act_str += "  ?  "
    lines.append(act_str)

    # Results
    lines.append("\nResults (South):")
    res_str = "    "
    for i in range(array_size):
        try:
            r = format_signed(int(dut.result_out[i].value), 32)
            res_str += f"{r:6d} "
        except:
            res_str += "   ?   "
    lines.append(res_str)

    return '\n'.join(lines)


def format_cycle(dut, cycle_id: int, array_size: int = 8, verbose: bool = False):
    """
    Log formatted state for a cycle.

    Args:
        dut: Device under test
        cycle_id: Current cycle number
        array_size: Size of NxN array
        verbose: Whether to print detailed state
    """
    logger.debug(f"\n{'='*60}")
    logger.debug(f"Cycle {cycle_id}")
    logger.debug(f"{'='*60}")

    if verbose:
        logger.debug(format_array_state(dut, array_size))


def format_matrix(matrix: np.ndarray, name: str = "Matrix") -> str:
    """Format numpy matrix for display."""
    lines = [f"{name} ({matrix.shape[0]}x{matrix.shape[1]}):"]
    for i, row in enumerate(matrix):
        row_str = f"  [{i}]: " + " ".join(f"{x:4d}" for x in row)
        lines.append(row_str)
    return '\n'.join(lines)


def compare_matrices(expected: np.ndarray, actual: np.ndarray, name: str = "Result") -> bool:
    """
    Compare expected and actual matrices, logging differences.

    Returns True if matrices match, False otherwise.
    """
    if expected.shape != actual.shape:
        logger.error(f"{name} shape mismatch: expected {expected.shape}, got {actual.shape}")
        return False

    match = np.array_equal(expected, actual)

    if match:
        logger.info(f"{name}: PASS - All {expected.size} values match")
    else:
        diff = expected != actual
        num_diff = np.sum(diff)
        logger.error(f"{name}: FAIL - {num_diff} values differ")

        # Show first few differences
        diff_indices = np.argwhere(diff)
        for idx in diff_indices[:5]:
            i, j = idx
            logger.error(f"  [{i},{j}]: expected {expected[i,j]}, got {actual[i,j]}")

        if len(diff_indices) > 5:
            logger.error(f"  ... and {len(diff_indices) - 5} more differences")

    return match
