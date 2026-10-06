"""
Matrix Multiplication Testbench

Comprehensive tests for matrix multiplication:
1. Various matrix sizes
2. Edge cases (zeros, ones, identity)
3. Stress tests with random data
4. NumPy comparison for correctness verification
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge
import numpy as np

from helpers.setup import setup_systolic, from_signed_int8, to_signed_int32
from helpers.format import format_matrix, compare_matrices, format_signed
from helpers.logger import logger


ARRAY_SIZE = 8


async def load_weights(dut, weight_matrix: np.ndarray):
    """Load weight matrix into systolic array."""
    dut.enable.value = 1
    dut.weight_load.value = 1

    for row in range(ARRAY_SIZE):
        dut.weight_row_select.value = 1 << row
        for col in range(ARRAY_SIZE):
            if row < weight_matrix.shape[0] and col < weight_matrix.shape[1]:
                dut.weight_data[col].value = from_signed_int8(int(weight_matrix[row, col]))
            else:
                dut.weight_data[col].value = 0
        await RisingEdge(dut.clk)

    dut.weight_load.value = 0
    dut.weight_row_select.value = 0


async def compute_matmul(dut, A: np.ndarray, B: np.ndarray) -> np.ndarray:
    """
    Compute C = A @ B using the systolic array.

    Args:
        dut: Device under test
        A: MxK activation matrix
        B: KxN weight matrix

    Returns:
        MxN result matrix
    """
    M, K = A.shape
    K2, N = B.shape
    assert K == K2, f"Matrix dimension mismatch: A is {M}x{K}, B is {K2}x{N}"

    # Pad matrices to array size
    A_padded = np.zeros((ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    B_padded = np.zeros((ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    A_padded[:M, :K] = A
    B_padded[:K, :N] = B

    # Load weights
    await load_weights(dut, B_padded)

    # Run computation
    dut.enable.value = 1
    dut.clear_acc.value = 1
    for i in range(ARRAY_SIZE):
        dut.psum_in[i].value = 0
    await RisingEdge(dut.clk)
    dut.clear_acc.value = 0

    # Feed activations with skewing
    num_cycles = 3 * ARRAY_SIZE
    for cycle in range(num_cycles):
        for row in range(ARRAY_SIZE):
            col_idx = cycle - row
            if 0 <= col_idx < ARRAY_SIZE:
                dut.activation_in[row].value = from_signed_int8(int(A_padded[row, col_idx]))
                dut.activation_valid[row].value = 1
            else:
                dut.activation_in[row].value = 0
                dut.activation_valid[row].value = 0
        await RisingEdge(dut.clk)

    # Wait for pipeline drain
    for _ in range(ARRAY_SIZE):
        for row in range(ARRAY_SIZE):
            dut.activation_in[row].value = 0
            dut.activation_valid[row].value = 0
        await RisingEdge(dut.clk)

    # Extract results
    result = np.zeros((ARRAY_SIZE, ARRAY_SIZE), dtype=np.int32)
    for i in range(ARRAY_SIZE):
        for j in range(ARRAY_SIZE):
            try:
                val = int(dut.debug_accumulators[i][j].value)
                result[i, j] = to_signed_int32(val)
            except:
                pass

    return result[:M, :N]


def numpy_matmul(A: np.ndarray, B: np.ndarray) -> np.ndarray:
    """Reference implementation using NumPy."""
    return A.astype(np.int32) @ B.astype(np.int32)


@cocotb.test()
async def test_matmul_zeros(dut):
    """Test multiplication with zero matrix."""
    logger.info("Test: Zero Matrix")

    await setup_systolic(dut, ARRAY_SIZE)

    A = np.zeros((4, 4), dtype=np.int8)
    B = np.random.randint(-5, 5, (4, 4), dtype=np.int8)

    expected = numpy_matmul(A, B)
    result = await compute_matmul(dut, A, B)

    assert np.all(result == 0), "Zero matrix multiplication should give zero result"
    logger.info("PASS: Zero matrix test")


@cocotb.test()
async def test_matmul_ones(dut):
    """Test multiplication with ones matrix."""
    logger.info("Test: Ones Matrix")

    await setup_systolic(dut, ARRAY_SIZE)

    A = np.ones((4, 4), dtype=np.int8)
    B = np.ones((4, 4), dtype=np.int8)

    expected = numpy_matmul(A, B)
    result = await compute_matmul(dut, A, B)

    # Each element should be 4 (sum of 4 ones)
    match = compare_matrices(expected, result, "Ones Matrix")
    assert match, "Ones matrix multiplication failed"
    logger.info("PASS: Ones matrix test")


@cocotb.test()
async def test_matmul_identity(dut):
    """Test A @ I = A."""
    logger.info("Test: Identity Matrix (A @ I = A)")

    await setup_systolic(dut, ARRAY_SIZE)

    A = np.random.randint(-10, 10, (ARRAY_SIZE, ARRAY_SIZE), dtype=np.int8)
    I = np.eye(ARRAY_SIZE, dtype=np.int8)

    expected = A.astype(np.int32)
    result = await compute_matmul(dut, A, I)

    match = compare_matrices(expected, result, "Identity Test")
    assert match, "Identity test failed"
    logger.info("PASS: Identity matrix test")


@cocotb.test()
async def test_matmul_random_small(dut):
    """Test with small random matrices."""
    logger.info("Test: Random Small Matrices")

    await setup_systolic(dut, ARRAY_SIZE)

    np.random.seed(123)

    for trial in range(5):
        size = np.random.randint(2, 6)
        A = np.random.randint(-5, 5, (size, size), dtype=np.int8)
        B = np.random.randint(-5, 5, (size, size), dtype=np.int8)

        expected = numpy_matmul(A, B)
        result = await compute_matmul(dut, A, B)

        match = compare_matrices(expected, result, f"Trial {trial+1} ({size}x{size})")
        assert match, f"Random small matrix test {trial+1} failed"

    logger.info("PASS: Random small matrices test")


@cocotb.test()
async def test_matmul_full_8x8(dut):
    """Test full 8x8 random matrix multiplication."""
    logger.info("Test: Full 8x8 Random Matrix")

    await setup_systolic(dut, ARRAY_SIZE)

    np.random.seed(42)
    A = np.random.randint(-5, 6, (8, 8), dtype=np.int8)
    B = np.random.randint(-5, 6, (8, 8), dtype=np.int8)

    logger.info(format_matrix(A, "A"))
    logger.info(format_matrix(B, "B"))

    expected = numpy_matmul(A, B)
    logger.info(format_matrix(expected, "Expected C"))

    result = await compute_matmul(dut, A, B)
    logger.info(format_matrix(result, "Actual C"))

    match = compare_matrices(expected, result, "8x8 Full Test")
    assert match, "Full 8x8 test failed"
    logger.info("PASS: Full 8x8 matrix test")


@cocotb.test()
async def test_matmul_negative_values(dut):
    """Test with predominantly negative values."""
    logger.info("Test: Negative Values")

    await setup_systolic(dut, ARRAY_SIZE)

    A = np.array([
        [-1, -2, -3, -4],
        [-5, -6, -7, -8],
        [-1, -1, -1, -1],
        [-2, -2, -2, -2]
    ], dtype=np.int8)

    B = np.array([
        [-1, -1, -1, -1],
        [-2, -2, -2, -2],
        [-3, -3, -3, -3],
        [-4, -4, -4, -4]
    ], dtype=np.int8)

    expected = numpy_matmul(A, B)
    result = await compute_matmul(dut, A, B)

    match = compare_matrices(expected, result, "Negative Values")
    assert match, "Negative values test failed"
    logger.info("PASS: Negative values test")


@cocotb.test()
async def test_matmul_mixed_signs(dut):
    """Test with mixed positive and negative values."""
    logger.info("Test: Mixed Signs")

    await setup_systolic(dut, ARRAY_SIZE)

    A = np.array([
        [1, -2, 3, -4],
        [-5, 6, -7, 8],
        [9, -10, 11, -12],
        [-13, 14, -15, 16]
    ], dtype=np.int8)

    B = np.array([
        [-1, 2, -3, 4],
        [5, -6, 7, -8],
        [-9, 10, -11, 12],
        [13, -14, 15, -16]
    ], dtype=np.int8)

    expected = numpy_matmul(A, B)
    result = await compute_matmul(dut, A, B)

    logger.info(f"Expected:\n{expected}")
    logger.info(f"Result:\n{result}")

    match = compare_matrices(expected, result, "Mixed Signs")
    assert match, "Mixed signs test failed"
    logger.info("PASS: Mixed signs test")


@cocotb.test()
async def test_matmul_stress(dut):
    """Stress test with multiple random matrices."""
    logger.info("Test: Stress Test (20 random matrices)")

    await setup_systolic(dut, ARRAY_SIZE)

    np.random.seed(999)
    passed = 0
    failed = 0

    for trial in range(20):
        A = np.random.randint(-8, 8, (8, 8), dtype=np.int8)
        B = np.random.randint(-8, 8, (8, 8), dtype=np.int8)

        expected = numpy_matmul(A, B)
        result = await compute_matmul(dut, A, B)

        if np.array_equal(expected, result):
            passed += 1
        else:
            failed += 1
            logger.error(f"Trial {trial+1} FAILED")

    logger.info(f"Stress test results: {passed} passed, {failed} failed")
    assert failed == 0, f"Stress test had {failed} failures"
    logger.info("PASS: Stress test completed")
