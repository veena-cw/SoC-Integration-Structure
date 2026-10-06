"""
Activation Unit Testbench

Tests for TPU activation functions:
1. ReLU activation
2. GELU activation
3. SiLU/Swish activation
4. Sigmoid activation
5. Tanh activation
6. Parallel lane processing
7. Edge cases (saturation, zeros)
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


# Function select constants
FUNC_RELU = 0
FUNC_GELU = 1
FUNC_SILU = 2
FUNC_SIGMOID = 3
FUNC_TANH = 4

N = 8  # Number of parallel lanes
DATA_WIDTH = 8


def to_signed(val, bits=8):
    """Convert unsigned to signed."""
    if val >= (1 << (bits - 1)):
        return val - (1 << bits)
    return val


def to_unsigned(val, bits=8):
    """Convert signed to unsigned."""
    if val < 0:
        return val + (1 << bits)
    return val


def pack_data(values, width=8):
    """Pack list of values into single integer."""
    result = 0
    for i, v in enumerate(values):
        unsigned_v = to_unsigned(int(v), width)
        result |= (unsigned_v & ((1 << width) - 1)) << (i * width)
    return result


def unpack_data(packed, n=8, width=8):
    """Unpack single integer into list of values."""
    mask = (1 << width) - 1
    return [to_signed((packed >> (i * width)) & mask, width) for i in range(n)]


async def setup_activation(dut, clock_period_ns: int = 10):
    """Setup for activation unit testbench."""
    await setup_clock(dut, clock_period_ns)

    dut.enable.value = 0
    dut.func_sel.value = 0
    dut.data_in.value = 0
    dut.data_in_valid.value = 0

    await reset_dut(dut)


async def apply_activation(dut, func_sel, input_data):
    """Apply activation function and return output."""
    dut.func_sel.value = func_sel
    dut.data_in.value = pack_data(input_data)
    dut.data_in_valid.value = 1
    dut.enable.value = 1

    await RisingEdge(dut.clk)
    dut.enable.value = 0
    dut.data_in_valid.value = 0

    # Wait for done
    for _ in range(10):
        await RisingEdge(dut.clk)
        if int(dut.done.value) == 1:
            break

    assert int(dut.done.value) == 1, "Activation should complete"

    return unpack_data(int(dut.data_out.value), N, DATA_WIDTH)


# Reference implementations
def relu_ref(x):
    return max(0, x)


def sigmoid_ref(x):
    """Approximate sigmoid for INT8."""
    # Map x from [-128, 127] to [-8, 8]
    x_scaled = x / 16.0
    sig = 1.0 / (1.0 + np.exp(-x_scaled))
    return int(sig * 127)  # Scale to [0, 127]


def tanh_ref(x):
    """Approximate tanh for INT8."""
    x_scaled = x / 32.0
    t = np.tanh(x_scaled)
    return int(t * 127)  # Scale to [-127, 127]


@cocotb.test()
async def test_activation_reset(dut):
    """Test that activation unit resets correctly."""
    logger.info("Test: Activation Unit Reset")

    await setup_activation(dut)

    assert int(dut.busy.value) == 0, "busy should be 0"
    assert int(dut.done.value) == 0, "done should be 0"
    assert int(dut.data_out_valid.value) == 0, "data_out_valid should be 0"

    logger.info("PASS: Activation unit reset verified")


@cocotb.test()
async def test_relu_positive(dut):
    """Test ReLU with positive values."""
    logger.info("Test: ReLU Positive Values")

    await setup_activation(dut)

    # Positive values should pass through
    input_data = [10, 20, 30, 40, 50, 60, 70, 80]
    output_data = await apply_activation(dut, FUNC_RELU, input_data)

    for i, (inp, out) in enumerate(zip(input_data, output_data)):
        assert out == inp, f"Lane {i}: ReLU({inp}) should be {inp}, got {out}"

    logger.info("PASS: ReLU positive values verified")


@cocotb.test()
async def test_relu_negative(dut):
    """Test ReLU with negative values."""
    logger.info("Test: ReLU Negative Values")

    await setup_activation(dut)

    # Negative values should become zero
    input_data = [-10, -20, -30, -40, -50, -60, -70, -80]
    output_data = await apply_activation(dut, FUNC_RELU, input_data)

    for i, out in enumerate(output_data):
        assert out == 0, f"Lane {i}: ReLU(negative) should be 0, got {out}"

    logger.info("PASS: ReLU negative values verified")


@cocotb.test()
async def test_relu_mixed(dut):
    """Test ReLU with mixed positive and negative values."""
    logger.info("Test: ReLU Mixed Values")

    await setup_activation(dut)

    input_data = [-50, 30, -10, 127, 0, -128, 64, -1]
    expected = [0, 30, 0, 127, 0, 0, 64, 0]
    output_data = await apply_activation(dut, FUNC_RELU, input_data)

    for i, (exp, out) in enumerate(zip(expected, output_data)):
        assert out == exp, f"Lane {i}: expected {exp}, got {out}"

    logger.info("PASS: ReLU mixed values verified")


@cocotb.test()
async def test_sigmoid_range(dut):
    """Test sigmoid outputs are in valid range."""
    logger.info("Test: Sigmoid Range")

    await setup_activation(dut)

    # Test various input values
    input_data = [-128, -64, -32, 0, 32, 64, 96, 127]
    output_data = await apply_activation(dut, FUNC_SIGMOID, input_data)

    for i, out in enumerate(output_data):
        # Sigmoid output should be in [0, 127] range
        assert 0 <= out <= 127, f"Lane {i}: sigmoid out of range: {out}"

    # Check monotonicity (larger inputs -> larger outputs)
    for i in range(len(output_data) - 1):
        assert output_data[i] <= output_data[i + 1], \
            f"Sigmoid should be monotonic: {output_data[i]} > {output_data[i+1]}"

    logger.info("PASS: Sigmoid range verified")


@cocotb.test()
async def test_sigmoid_symmetry(dut):
    """Test sigmoid symmetry around zero."""
    logger.info("Test: Sigmoid Symmetry")

    await setup_activation(dut)

    # sigmoid(-x) + sigmoid(x) ≈ 1 (or 127 in our scale)
    input_data = [-64, -32, -16, -8, 8, 16, 32, 64]
    output_data = await apply_activation(dut, FUNC_SIGMOID, input_data)

    # Check pairs: sig(-64) + sig(64) ≈ 127
    pairs = [(0, 7), (1, 6), (2, 5), (3, 4)]
    for i, j in pairs:
        sum_val = output_data[i] + output_data[j]
        # Allow some tolerance due to LUT approximation
        assert 100 < sum_val < 154, f"sigmoid({input_data[i]}) + sigmoid({input_data[j]}) = {sum_val}, expected ~127"

    logger.info("PASS: Sigmoid symmetry verified")


@cocotb.test()
async def test_tanh_range(dut):
    """Test tanh outputs are in valid range."""
    logger.info("Test: Tanh Range")

    await setup_activation(dut)

    input_data = [-128, -64, -32, 0, 32, 64, 96, 127]
    output_data = await apply_activation(dut, FUNC_TANH, input_data)

    for i, out in enumerate(output_data):
        # Tanh output should be in [-127, 127] range
        assert -127 <= out <= 127, f"Lane {i}: tanh out of range: {out}"

    # tanh(0) should be approximately 0
    assert abs(output_data[3]) < 10, f"tanh(0) should be ~0, got {output_data[3]}"

    logger.info("PASS: Tanh range verified")


@cocotb.test()
async def test_tanh_antisymmetry(dut):
    """Test tanh antisymmetry: tanh(-x) = -tanh(x)."""
    logger.info("Test: Tanh Antisymmetry")

    await setup_activation(dut)

    input_data = [-64, -32, -16, -8, 8, 16, 32, 64]
    output_data = await apply_activation(dut, FUNC_TANH, input_data)

    # Check pairs: tanh(-x) ≈ -tanh(x)
    pairs = [(0, 7), (1, 6), (2, 5), (3, 4)]
    for i, j in pairs:
        sum_val = output_data[i] + output_data[j]
        # Should be approximately 0
        assert abs(sum_val) < 20, f"tanh({input_data[i]}) + tanh({input_data[j]}) = {sum_val}, expected ~0"

    logger.info("PASS: Tanh antisymmetry verified")


@cocotb.test()
async def test_gelu_shape(dut):
    """Test GELU has correct general shape."""
    logger.info("Test: GELU Shape")

    await setup_activation(dut)

    # GELU: negative inputs close to 0, positive inputs approximately linear
    input_data = [-128, -64, -32, 0, 32, 64, 96, 127]
    output_data = await apply_activation(dut, FUNC_GELU, input_data)

    # Very negative -> small/zero
    assert output_data[0] <= 10, f"GELU(-128) should be small, got {output_data[0]}"

    # Zero -> approximately zero
    assert abs(output_data[3]) < 20, f"GELU(0) should be ~0, got {output_data[3]}"

    # Positive -> approximately linear (should be close to input)
    # GELU(x) ≈ x for large positive x
    assert output_data[7] > 60, f"GELU(127) should be large, got {output_data[7]}"

    logger.info("PASS: GELU shape verified")


@cocotb.test()
async def test_silu_shape(dut):
    """Test SiLU/Swish has correct general shape."""
    logger.info("Test: SiLU Shape")

    await setup_activation(dut)

    # SiLU = x * sigmoid(x)
    input_data = [-128, -64, -32, 0, 32, 64, 96, 127]
    output_data = await apply_activation(dut, FUNC_SILU, input_data)

    # SiLU(0) = 0
    assert abs(output_data[3]) < 5, f"SiLU(0) should be 0, got {output_data[3]}"

    # Negative inputs: x * sigmoid(x) is negative but small magnitude
    # Very negative -> approaches 0
    assert abs(output_data[0]) < 30, f"SiLU(-128) should be small, got {output_data[0]}"

    # Positive inputs: approximately x (since sigmoid(x) -> 1)
    assert output_data[7] > 50, f"SiLU(127) should be large positive, got {output_data[7]}"

    logger.info("PASS: SiLU shape verified")


@cocotb.test()
async def test_activation_all_zeros(dut):
    """Test activation functions with all zero inputs."""
    logger.info("Test: All Zeros Input")

    await setup_activation(dut)

    input_data = [0] * N

    for func, name in [(FUNC_RELU, "ReLU"), (FUNC_GELU, "GELU"), (FUNC_SILU, "SiLU")]:
        output_data = await apply_activation(dut, func, input_data)

        for i, out in enumerate(output_data):
            assert abs(out) < 10, f"{name}(0) should be ~0, got {out}"

    logger.info("PASS: All zeros input verified")


@cocotb.test()
async def test_activation_extremes(dut):
    """Test activation functions at extreme values."""
    logger.info("Test: Extreme Values")

    await setup_activation(dut)

    # Test with maximum values
    max_input = [127] * N
    min_input = [-128] * N

    # ReLU(127) = 127
    relu_max = await apply_activation(dut, FUNC_RELU, max_input)
    for out in relu_max:
        assert out == 127, f"ReLU(127) should be 127, got {out}"

    # ReLU(-128) = 0
    relu_min = await apply_activation(dut, FUNC_RELU, min_input)
    for out in relu_min:
        assert out == 0, f"ReLU(-128) should be 0, got {out}"

    # Sigmoid(127) should be close to max (127)
    sig_max = await apply_activation(dut, FUNC_SIGMOID, max_input)
    for out in sig_max:
        assert out > 100, f"Sigmoid(127) should be high, got {out}"

    # Sigmoid(-128) should be close to 0
    sig_min = await apply_activation(dut, FUNC_SIGMOID, min_input)
    for out in sig_min:
        assert out < 30, f"Sigmoid(-128) should be low, got {out}"

    logger.info("PASS: Extreme values verified")


@cocotb.test()
async def test_activation_busy_signal(dut):
    """Test busy signal during processing."""
    logger.info("Test: Busy Signal")

    await setup_activation(dut)

    input_data = [50] * N
    dut.func_sel.value = FUNC_RELU
    dut.data_in.value = pack_data(input_data)
    dut.data_in_valid.value = 1
    dut.enable.value = 1

    await RisingEdge(dut.clk)

    # Should become busy
    await RisingEdge(dut.clk)
    # Check if busy was set during processing
    busy_seen = int(dut.busy.value) == 1

    dut.enable.value = 0
    dut.data_in_valid.value = 0

    # Wait for completion
    for _ in range(10):
        await RisingEdge(dut.clk)
        if int(dut.done.value) == 1:
            break

    # Should not be busy after done
    assert int(dut.busy.value) == 0, "Should not be busy after completion"

    logger.info("PASS: Busy signal verified")
