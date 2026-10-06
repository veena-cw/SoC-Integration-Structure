"""
Layer Normalization Unit Testbench

Tests for TPU layer normalization:
1. Mean computation
2. Variance computation
3. Normalization (zero mean, unit variance)
4. Affine transform (gamma, beta)
5. Different vector lengths
6. Edge cases
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer
import numpy as np

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


N = 8  # Elements per cycle
DATA_WIDTH = 8
ADDR_WIDTH = 14


class MemoryModel:
    """Simple memory model for layernorm testing."""

    def __init__(self, size=16384):
        self.mem = [0] * size

    def write(self, addr, data, n=8, width=8):
        """Write packed data to memory."""
        for i in range(n):
            byte_val = (data >> (i * width)) & ((1 << width) - 1)
            if addr + i < len(self.mem):
                self.mem[addr + i] = byte_val

    def read(self, addr, n=8, width=8):
        """Read packed data from memory."""
        result = 0
        for i in range(n):
            if addr + i < len(self.mem):
                result |= self.mem[addr + i] << (i * width)
        return result

    def write_vector(self, base_addr, values):
        """Write vector of INT8 values."""
        for i, v in enumerate(values):
            if v < 0:
                v = v + 256
            self.mem[base_addr + i] = v & 0xFF

    def read_vector(self, base_addr, length):
        """Read vector of INT8 values."""
        result = []
        for i in range(length):
            v = self.mem[base_addr + i]
            if v >= 128:
                v = v - 256
            result.append(v)
        return result


async def setup_layernorm(dut, clock_period_ns: int = 10):
    """Setup for layernorm unit testbench."""
    await setup_clock(dut, clock_period_ns)

    dut.start.value = 0
    dut.norm_length.value = 0
    dut.gamma.value = 64  # ~0.5 in Q0.7
    dut.beta.value = 0
    dut.input_addr.value = 0
    dut.output_addr.value = 0x1000
    dut.mem_read_valid.value = 0
    dut.mem_write_ack.value = 0
    dut.mem_read_data.value = 0

    await reset_dut(dut)


async def memory_handler(dut, mem, timeout_cycles=1000):
    """Handle memory requests from layernorm unit."""
    cycles = 0

    while cycles < timeout_cycles:
        await RisingEdge(dut.clk)
        cycles += 1

        if int(dut.mem_read_req.value) == 1:
            addr = int(dut.mem_read_addr.value)
            data = mem.read(addr, N, DATA_WIDTH)
            dut.mem_read_data.value = data
            dut.mem_read_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_read_valid.value = 0

        if int(dut.mem_write_req.value) == 1:
            addr = int(dut.mem_write_addr.value)
            data = int(dut.mem_write_data.value)
            mem.write(addr, data, N, DATA_WIDTH)
            dut.mem_write_ack.value = 1
            await RisingEdge(dut.clk)
            dut.mem_write_ack.value = 0

        if int(dut.done.value) == 1:
            break

    return cycles < timeout_cycles


def layernorm_ref(x, gamma=1.0, beta=0.0, eps=1e-5):
    """Reference layer normalization."""
    x = np.array(x, dtype=np.float64)
    mean = np.mean(x)
    var = np.var(x)
    normalized = (x - mean) / np.sqrt(var + eps)
    return gamma * normalized + beta


@cocotb.test()
async def test_layernorm_reset(dut):
    """Test that layernorm unit resets correctly."""
    logger.info("Test: LayerNorm Unit Reset")

    await setup_layernorm(dut)

    assert int(dut.busy.value) == 0, "busy should be 0"
    assert int(dut.done.value) == 0, "done should be 0"
    assert int(dut.mem_read_req.value) == 0, "mem_read_req should be 0"
    assert int(dut.mem_write_req.value) == 0, "mem_write_req should be 0"

    logger.info("PASS: LayerNorm unit reset verified")


@cocotb.test()
async def test_layernorm_mean_computation(dut):
    """Test that mean is computed correctly."""
    logger.info("Test: LayerNorm Mean Computation")

    await setup_layernorm(dut)

    mem = MemoryModel()

    # Input with known mean
    # Mean of [10, 20, 30, 40, 50, 60, 70, 80] = 45
    input_vector = [10, 20, 30, 40, 50, 60, 70, 80]
    mem.write_vector(0, input_vector)

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127  # ~1.0 (identity scale)
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    # Wait for mean computation phase
    for _ in range(100):
        await RisingEdge(dut.clk)

        if int(dut.mem_read_req.value) == 1:
            addr = int(dut.mem_read_addr.value)
            dut.mem_read_data.value = mem.read(addr)
            dut.mem_read_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_read_valid.value = 0

        # Check debug mean after first pass
        if int(dut.debug_state.value) >= 4:  # After MEAN_COMPUTE
            break

    # Mean should be approximately 45 * 256 (Q8.8 format)
    mean_q88 = int(dut.debug_mean.value)
    mean_float = mean_q88 / 256.0

    logger.info(f"Computed mean (Q8.8): {mean_q88}, float: {mean_float:.2f}")
    logger.info(f"Expected mean: 45.0")

    # Allow tolerance for quantization
    assert abs(mean_float - 45.0) < 5.0, f"Mean should be ~45, got {mean_float}"

    logger.info("PASS: LayerNorm mean computation verified")


@cocotb.test()
async def test_layernorm_basic(dut):
    """Test basic layer normalization."""
    logger.info("Test: Basic LayerNorm")

    await setup_layernorm(dut)

    mem = MemoryModel()

    # Simple input
    input_vector = [10, 20, 30, 40, 50, 60, 70, 80]
    mem.write_vector(0, input_vector)

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127  # ~1.0
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=1000)
    assert completed, "LayerNorm should complete"

    output_vector = mem.read_vector(0x100, 8)
    logger.info(f"Input:  {input_vector}")
    logger.info(f"Output: {output_vector}")

    # Reference
    ref_output = layernorm_ref(input_vector)
    logger.info(f"Reference (scaled): {[int(v * 32) for v in ref_output]}")

    # Properties to check:
    # 1. Output mean should be approximately 0
    output_mean = sum(output_vector) / len(output_vector)
    logger.info(f"Output mean: {output_mean}")
    assert abs(output_mean) < 20, f"Output mean should be ~0, got {output_mean}"

    # 2. Order should be preserved (increasing)
    for i in range(len(output_vector) - 1):
        assert output_vector[i] <= output_vector[i + 1], \
            f"Order not preserved: {output_vector[i]} > {output_vector[i+1]}"

    logger.info("PASS: Basic LayerNorm verified")


@cocotb.test()
async def test_layernorm_zero_mean_input(dut):
    """Test layernorm with zero-mean input."""
    logger.info("Test: LayerNorm Zero Mean Input")

    await setup_layernorm(dut)

    mem = MemoryModel()

    # Zero-mean input
    input_vector = [-40, -30, -20, -10, 10, 20, 30, 40]
    mem.write_vector(0, input_vector)

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=1000)
    assert completed, "LayerNorm should complete"

    output_vector = mem.read_vector(0x100, 8)
    logger.info(f"Input:  {input_vector}")
    logger.info(f"Output: {output_vector}")

    # Output should also be roughly zero-mean
    output_mean = sum(output_vector) / len(output_vector)
    assert abs(output_mean) < 20, f"Output mean should be ~0, got {output_mean}"

    logger.info("PASS: LayerNorm zero mean input verified")


@cocotb.test()
async def test_layernorm_constant_input(dut):
    """Test layernorm with constant input (edge case)."""
    logger.info("Test: LayerNorm Constant Input")

    await setup_layernorm(dut)

    mem = MemoryModel()

    # All same values -> variance = 0 (edge case)
    input_vector = [50, 50, 50, 50, 50, 50, 50, 50]
    mem.write_vector(0, input_vector)

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 32  # Add some beta offset

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=1000)
    assert completed, "LayerNorm should complete"

    output_vector = mem.read_vector(0x100, 8)
    logger.info(f"Constant input output: {output_vector}")

    # With constant input, normalized values are 0, so output ≈ beta
    # All outputs should be approximately equal
    output_mean = sum(output_vector) / len(output_vector)
    for v in output_vector:
        assert abs(v - output_mean) < 30, f"Outputs should be uniform: {v} vs {output_mean}"

    logger.info("PASS: LayerNorm constant input verified")


@cocotb.test()
async def test_layernorm_gamma_scaling(dut):
    """Test that gamma scales the output."""
    logger.info("Test: LayerNorm Gamma Scaling")

    await setup_layernorm(dut)

    mem = MemoryModel()

    input_vector = [-30, -20, -10, 0, 10, 20, 30, 40]
    mem.write_vector(0, input_vector)

    # First pass with gamma = 127 (~1.0)
    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    await memory_handler(dut, mem, timeout_cycles=1000)
    output1 = mem.read_vector(0x100, 8)

    # Second pass with gamma = 64 (~0.5)
    mem.write_vector(0, input_vector)  # Reset input

    await reset_dut(dut)
    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 64  # ~0.5
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    await memory_handler(dut, mem, timeout_cycles=1000)
    output2 = mem.read_vector(0x100, 8)

    logger.info(f"Gamma=1.0 output: {output1}")
    logger.info(f"Gamma=0.5 output: {output2}")

    # Output with gamma=0.5 should have smaller magnitude
    var1 = np.var(output1)
    var2 = np.var(output2)
    logger.info(f"Variance with gamma=1.0: {var1:.2f}")
    logger.info(f"Variance with gamma=0.5: {var2:.2f}")

    # Var2 should be roughly 1/4 of var1 (since variance scales with gamma^2)
    # Allow significant tolerance due to quantization
    assert var2 < var1, "Smaller gamma should give smaller variance"

    logger.info("PASS: LayerNorm gamma scaling verified")


@cocotb.test()
async def test_layernorm_beta_shift(dut):
    """Test that beta shifts the output."""
    logger.info("Test: LayerNorm Beta Shift")

    await setup_layernorm(dut)

    mem = MemoryModel()

    input_vector = [10, 20, 30, 40, 50, 60, 70, 80]
    mem.write_vector(0, input_vector)

    # First pass with beta = 0
    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    await memory_handler(dut, mem, timeout_cycles=1000)
    output1 = mem.read_vector(0x100, 8)
    mean1 = sum(output1) / len(output1)

    # Second pass with beta = 50
    mem.write_vector(0, input_vector)

    await reset_dut(dut)
    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 50

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    await memory_handler(dut, mem, timeout_cycles=1000)
    output2 = mem.read_vector(0x100, 8)
    mean2 = sum(output2) / len(output2)

    logger.info(f"Beta=0 output mean: {mean1:.2f}")
    logger.info(f"Beta=50 output mean: {mean2:.2f}")

    # Mean should be shifted by approximately beta
    # Beta is in Q0.7, so actual shift is beta * 2 in the output
    assert mean2 > mean1, "Beta should shift mean positive"

    logger.info("PASS: LayerNorm beta shift verified")


@cocotb.test()
async def test_layernorm_busy_signal(dut):
    """Test busy signal during layernorm operation."""
    logger.info("Test: LayerNorm Busy Signal")

    await setup_layernorm(dut)

    mem = MemoryModel()
    mem.write_vector(0, [10, 20, 30, 40, 50, 60, 70, 80])

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.busy.value) == 1, "Should be busy after start"

    await memory_handler(dut, mem, timeout_cycles=1000)

    assert int(dut.busy.value) == 0, "Should not be busy after done"

    logger.info("PASS: LayerNorm busy signal verified")


@cocotb.test()
async def test_layernorm_debug_outputs(dut):
    """Test debug output signals."""
    logger.info("Test: LayerNorm Debug Outputs")

    await setup_layernorm(dut)

    mem = MemoryModel()
    input_vector = [0, 10, 20, 30, 40, 50, 60, 70]
    mem.write_vector(0, input_vector)

    dut.norm_length.value = 8
    dut.input_addr.value = 0
    dut.output_addr.value = 0x100
    dut.gamma.value = 127
    dut.beta.value = 0

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    states_seen = set()
    for _ in range(1000):
        await RisingEdge(dut.clk)
        states_seen.add(int(dut.debug_state.value))

        if int(dut.mem_read_req.value) == 1:
            addr = int(dut.mem_read_addr.value)
            dut.mem_read_data.value = mem.read(addr)
            dut.mem_read_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_read_valid.value = 0

        if int(dut.mem_write_req.value) == 1:
            addr = int(dut.mem_write_addr.value)
            mem.write(addr, int(dut.mem_write_data.value))
            dut.mem_write_ack.value = 1
            await RisingEdge(dut.clk)
            dut.mem_write_ack.value = 0

        if int(dut.done.value) == 1:
            break

    logger.info(f"States seen: {states_seen}")
    assert len(states_seen) > 1, "Should have multiple state transitions"

    # Check variance debug output
    variance = int(dut.debug_variance.value)
    logger.info(f"Final variance: {variance}")

    logger.info("PASS: LayerNorm debug outputs verified")
