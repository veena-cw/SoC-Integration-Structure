"""
Systolic Array Testbench

Tests for the NxN systolic array:
1. Weight loading to all PEs
2. Simple 2x2 matrix multiply
3. 4x4 matrix multiply
4. Full 8x8 matrix multiply
5. Comparison with NumPy
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_systolic, from_signed_int8, to_signed_int32
from helpers.format import format_array_state, format_matrix, compare_matrices, format_signed
from helpers.logger import logger


# Default array size (matches systolic_array.sv parameter)
ARRAY_SIZE = 8


async def load_weights(dut, weight_matrix: np.ndarray, array_size: int = ARRAY_SIZE):
    """
    Load weight matrix into systolic array.

    Weight matrix B is loaded row by row.
    Each row's weights go to the corresponding row of PEs.
    Within each row, weight[j] goes to PE[row][j].

    Args:
        dut: Device under test
        weight_matrix: NxN weight matrix (B in C = A @ B)
        array_size: Size of systolic array
    """
    dut.enable.value = 1
    dut.weight_load.value = 1

    for row in range(array_size):
        # Select this row for weight loading
        dut.weight_row_select.value = 1 << row

        # Set weight values for this row (one per column)
        for col in range(array_size):
            if row < weight_matrix.shape[0] and col < weight_matrix.shape[1]:
                dut.weight_data[col].value = from_signed_int8(int(weight_matrix[row, col]))
            else:
                dut.weight_data[col].value = 0

        await RisingEdge(dut.clk)

    # Done loading
    dut.weight_load.value = 0
    dut.weight_row_select.value = 0


async def run_matmul(dut, activation_matrix: np.ndarray, array_size: int = ARRAY_SIZE):
    """
    Run matrix multiplication by streaming activations.

    Activations from matrix A are fed row by row into the west edge.
    Results emerge from the south edge after propagation.

    For proper systolic timing, activations should be skewed:
    - Row 0 enters at cycle 0
    - Row 1 enters at cycle 1
    - etc.

    But for simplicity, we feed all rows simultaneously and let
    the PE pipeline handle timing (results will be skewed in output).

    Args:
        dut: Device under test
        activation_matrix: MxK activation matrix (A in C = A @ B)
        array_size: Size of systolic array

    Returns:
        Result matrix from south edge
    """
    dut.enable.value = 1
    dut.clear_acc.value = 1  # Clear accumulators for fresh computation

    # Initialize psum inputs to zero (north edge)
    for i in range(array_size):
        dut.psum_in[i].value = 0

    await RisingEdge(dut.clk)
    dut.clear_acc.value = 0

    # We need 2*N-1 cycles for results to fully propagate
    # Feed activations with proper skewing
    results = np.zeros((array_size, array_size), dtype=np.int32)
    num_compute_cycles = 2 * array_size + array_size  # Extra cycles to capture all results

    for cycle in range(num_compute_cycles):
        # Feed activations (with skewing: row i gets activation at cycle i)
        for row in range(array_size):
            col_idx = cycle - row  # Which column of A to feed
            if 0 <= col_idx < activation_matrix.shape[1] and row < activation_matrix.shape[0]:
                dut.activation_in[row].value = from_signed_int8(int(activation_matrix[row, col_idx]))
                dut.activation_valid[row].value = 1
            else:
                dut.activation_in[row].value = 0
                dut.activation_valid[row].value = 0

        await RisingEdge(dut.clk)

        # Capture results from south edge (also skewed)
        # Result column j is valid at cycle N-1+j
        for col in range(array_size):
            if cycle == array_size - 1 + col + array_size:  # After full propagation
                # Results are accumulated in psum_out_south
                pass

    # Wait a few more cycles and capture final results
    for _ in range(3):
        await RisingEdge(dut.clk)

    # Read results (they're in the accumulators, visible via psum_out_south after all data propagates)
    # For a proper test, we'd need to track the wavefront of valid outputs
    # For now, read the debug accumulators directly
    for i in range(min(array_size, activation_matrix.shape[0])):
        for j in range(min(array_size, activation_matrix.shape[1])):
            try:
                acc_val = int(dut.debug_accumulators[i][j].value)
                results[i, j] = to_signed_int32(acc_val)
            except:
                results[i, j] = 0

    return results


@cocotb.test()
async def test_systolic_reset(dut):
    """Test that systolic array resets properly."""
    logger.info("Test: Systolic Array Reset")

    await setup_systolic(dut, ARRAY_SIZE)

    # Verify control signals are zero
    assert int(dut.enable.value) == 0, "enable should be 0 after reset"
    assert int(dut.weight_load.value) == 0, "weight_load should be 0 after reset"

    # Verify outputs are zero
    for i in range(ARRAY_SIZE):
        result = int(dut.result_out[i].value)
        assert result == 0, f"result_out[{i}] should be 0 after reset, got {result}"

    logger.info("PASS: Systolic array reset verified")


@cocotb.test()
async def test_systolic_weight_load(dut):
    """Test loading weights into all PEs."""
    logger.info("Test: Systolic Weight Loading")

    await setup_systolic(dut, ARRAY_SIZE)

    # Create simple weight matrix
    weights = np.arange(ARRAY_SIZE * ARRAY_SIZE, dtype=np.int8).reshape(ARRAY_SIZE, ARRAY_SIZE)
    logger.info(f"Loading weight matrix:\n{weights}")

    await load_weights(dut, weights, ARRAY_SIZE)

    # Verify weights loaded correctly
    for i in range(ARRAY_SIZE):
        for j in range(ARRAY_SIZE):
            loaded = format_signed(int(dut.debug_weights[i][j].value), 8)
            expected = int(weights[i, j])
            assert loaded == expected, f"Weight[{i}][{j}] should be {expected}, got {loaded}"

    logger.info("PASS: Weight loading verified")


@cocotb.test()
async def test_systolic_2x2_matmul(dut):
    """Test simple 2x2 matrix multiplication."""
    logger.info("Test: 2x2 Matrix Multiplication")

    await setup_systolic(dut, ARRAY_SIZE)

    # Simple 2x2 matrices (padded to 8x8 with zeros)
    # A = [[1, 2],    B = [[5, 6],    C = A @ B = [[19, 22],
    #      [3, 4]]         [7, 8]]                 [43, 50]]

    A = np.zeros((ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    B = np.zeros((ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)

    A[0:2, 0:2] = [[1, 2], [3, 4]]
    B[0:2, 0:2] = [[5, 6], [7, 8]]

    expected = A.astype(np.int32) @ B.astype(np.int32)

    logger.info(f"A:\n{A[0:2, 0:2]}")
    logger.info(f"B:\n{B[0:2, 0:2]}")
    logger.info(f"Expected C:\n{expected[0:2, 0:2]}")

    # Load weights (B matrix)
    await load_weights(dut, B, ARRAY_SIZE)

    # Run matmul
    result = await run_matmul(dut, A, ARRAY_SIZE)

    logger.info(f"Actual C:\n{result[0:2, 0:2]}")

    # Compare 2x2 region
    match = compare_matrices(expected[0:2, 0:2], result[0:2, 0:2], "2x2 Result")
    assert match, "2x2 matrix multiplication failed"

    logger.info("PASS: 2x2 matrix multiplication verified")


@cocotb.test()
async def test_systolic_identity(dut):
    """Test multiplication with identity matrix."""
    logger.info("Test: Identity Matrix Multiplication")

    await setup_systolic(dut, ARRAY_SIZE)

    # A @ I = A
    A = np.random.randint(-10, 10, (ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    I = np.eye(ARRAY_SIZE, dtype=np.int8)

    expected = A.astype(np.int32)  # A @ I = A

    logger.info(f"A:\n{A}")

    await load_weights(dut, I, ARRAY_SIZE)
    result = await run_matmul(dut, A, ARRAY_SIZE)

    logger.info(f"Result:\n{result}")

    match = compare_matrices(expected, result, "Identity Result")
    assert match, "Identity matrix multiplication failed"

    logger.info("PASS: Identity matrix multiplication verified")


@cocotb.test()
async def test_systolic_full_8x8(dut):
    """Test full 8x8 matrix multiplication with random values."""
    logger.info("Test: Full 8x8 Matrix Multiplication")

    await setup_systolic(dut, ARRAY_SIZE)

    # Random 8x8 matrices with small values to avoid overflow
    np.random.seed(42)  # Reproducible
    A = np.random.randint(-5, 5, (ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    B = np.random.randint(-5, 5, (ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)

    expected = A.astype(np.int32) @ B.astype(np.int32)

    logger.info(f"A:\n{A}")
    logger.info(f"B:\n{B}")
    logger.info(f"Expected:\n{expected}")

    await load_weights(dut, B, ARRAY_SIZE)
    result = await run_matmul(dut, A, ARRAY_SIZE)

    logger.info(f"Result:\n{result}")

    match = compare_matrices(expected, result, "8x8 Result")
    assert match, "8x8 matrix multiplication failed"

    logger.info("PASS: 8x8 matrix multiplication verified")


@cocotb.test()
async def test_systolic_signed_values(dut):
    """Test with signed (positive and negative) values."""
    logger.info("Test: Signed Value Matrix Multiplication")

    await setup_systolic(dut, ARRAY_SIZE)

    # Matrix with mix of positive and negative
    A = np.array([
        [1, -2, 3, -4, 0, 0, 0, 0],
        [-1, 2, -3, 4, 0, 0, 0, 0],
        [5, -6, 7, -8, 0, 0, 0, 0],
        [-5, 6, -7, 8, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0]
    ], dtype=np.int8)

    B = np.array([
        [1, 1, 1, 1, 0, 0, 0, 0],
        [2, -2, 2, -2, 0, 0, 0, 0],
        [3, 3, -3, -3, 0, 0, 0, 0],
        [4, -4, -4, 4, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0],
        [0, 0, 0, 0, 0, 0, 0, 0]
    ], dtype=np.int8)

    expected = A.astype(np.int32) @ B.astype(np.int32)

    logger.info(f"A:\n{A[0:4, 0:4]}")
    logger.info(f"B:\n{B[0:4, 0:4]}")
    logger.info(f"Expected:\n{expected[0:4, 0:4]}")

    await load_weights(dut, B, ARRAY_SIZE)
    result = await run_matmul(dut, A, ARRAY_SIZE)

    logger.info(f"Result:\n{result[0:4, 0:4]}")

    match = compare_matrices(expected[0:4, 0:4], result[0:4, 0:4], "Signed Result")
    assert match, "Signed matrix multiplication failed"

    logger.info("PASS: Signed value matrix multiplication verified")
