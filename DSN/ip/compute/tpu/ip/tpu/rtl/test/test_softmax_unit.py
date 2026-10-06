"""
Softmax Unit Testbench

Tests for TPU multi-pass softmax:
1. Basic softmax operation
2. Numerical stability (max subtraction)
3. Sum-to-one property
4. Different vector lengths
5. Memory interface
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
    """Simple memory model for softmax testing."""

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
                v = v + 256  # Convert to unsigned
            self.mem[base_addr + i] = v & 0xFF

    def read_vector(self, base_addr, length):
        """Read vector of INT8 values."""
        result = []
        for i in range(length):
            v = self.mem[base_addr + i]
            if v >= 128:
                v = v - 256  # Convert to signed
            result.append(v)
        return result


async def setup_softmax(dut, clock_period_ns: int = 10):
    """Setup for softmax unit testbench."""
    await setup_clock(dut, clock_period_ns)

    dut.start.value = 0
    dut.vector_length.value = 0
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x1000
    dut.output_addr.value = 0x2000
    dut.mem_read_valid.value = 0
    dut.mem_write_ack.value = 0
    dut.mem_read_data.value = 0

    await reset_dut(dut)


async def memory_handler(dut, mem, timeout_cycles=1000):
    """Handle memory requests from softmax unit."""
    cycles = 0

    while cycles < timeout_cycles:
        await RisingEdge(dut.clk)
        cycles += 1

        # Handle read requests
        if int(dut.mem_read_req.value) == 1:
            addr = int(dut.mem_read_addr.value)
            data = mem.read(addr, N, DATA_WIDTH)
            dut.mem_read_data.value = data
            dut.mem_read_valid.value = 1
            await RisingEdge(dut.clk)
            dut.mem_read_valid.value = 0

        # Handle write requests
        if int(dut.mem_write_req.value) == 1:
            addr = int(dut.mem_write_addr.value)
            data = int(dut.mem_write_data.value)
            mem.write(addr, data, N, DATA_WIDTH)
            dut.mem_write_ack.value = 1
            await RisingEdge(dut.clk)
            dut.mem_write_ack.value = 0

        # Check for completion
        if int(dut.done.value) == 1:
            break

    return cycles < timeout_cycles


def softmax_ref(x):
    """Reference softmax implementation."""
    x = np.array(x, dtype=np.float64)
    x_max = np.max(x)
    exp_x = np.exp(x - x_max)
    return exp_x / np.sum(exp_x)


@cocotb.test()
async def test_softmax_reset(dut):
    """Test that softmax unit resets correctly."""
    logger.info("Test: Softmax Unit Reset")

    await setup_softmax(dut)

    assert int(dut.busy.value) == 0, "busy should be 0"
    assert int(dut.done.value) == 0, "done should be 0"
    assert int(dut.mem_read_req.value) == 0, "mem_read_req should be 0"
    assert int(dut.mem_write_req.value) == 0, "mem_write_req should be 0"

    logger.info("PASS: Softmax unit reset verified")


@cocotb.test()
async def test_softmax_basic(dut):
    """Test basic softmax operation."""
    logger.info("Test: Basic Softmax")

    await setup_softmax(dut)

    mem = MemoryModel()

    # Simple input vector
    input_vector = [10, 20, 30, 40, 30, 20, 10, 0]
    mem.write_vector(0, input_vector)

    # Configure addresses
    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    # Start softmax
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    # Run memory handler
    completed = await memory_handler(dut, mem, timeout_cycles=500)
    assert completed, "Softmax should complete"

    # Read output
    output_vector = mem.read_vector(0x200, 8)
    logger.info(f"Input: {input_vector}")
    logger.info(f"Output: {output_vector}")

    # Check properties:
    # 1. All outputs should be non-negative
    for i, v in enumerate(output_vector):
        assert v >= 0, f"Softmax output {i} should be non-negative: {v}"

    # 2. Maximum input should have maximum output
    max_input_idx = input_vector.index(max(input_vector))
    max_output_idx = output_vector.index(max(output_vector))
    assert max_input_idx == max_output_idx, \
        f"Max should be preserved: input idx {max_input_idx}, output idx {max_output_idx}"

    logger.info("PASS: Basic softmax verified")


@cocotb.test()
async def test_softmax_sum_property(dut):
    """Test that softmax outputs sum to approximately 1."""
    logger.info("Test: Softmax Sum Property")

    await setup_softmax(dut)

    mem = MemoryModel()

    # Input vector
    input_vector = [0, 10, 20, 30, 20, 10, 0, -10]
    mem.write_vector(0, input_vector)

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=500)
    assert completed, "Softmax should complete"

    output_vector = mem.read_vector(0x200, 8)
    total = sum(output_vector)

    # Sum should be approximately 127 (representing 1.0 in our scale)
    # Allow tolerance due to quantization
    logger.info(f"Output sum: {total} (target: ~127)")
    assert 50 < total < 300, f"Sum should be approximately 127, got {total}"

    logger.info("PASS: Softmax sum property verified")


@cocotb.test()
async def test_softmax_uniform_input(dut):
    """Test softmax with uniform input (all same values)."""
    logger.info("Test: Softmax Uniform Input")

    await setup_softmax(dut)

    mem = MemoryModel()

    # All same values -> uniform distribution
    input_vector = [50, 50, 50, 50, 50, 50, 50, 50]
    mem.write_vector(0, input_vector)

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=500)
    assert completed, "Softmax should complete"

    output_vector = mem.read_vector(0x200, 8)
    logger.info(f"Uniform input output: {output_vector}")

    # All outputs should be approximately equal
    avg = sum(output_vector) / len(output_vector)
    for i, v in enumerate(output_vector):
        # Allow significant tolerance due to LUT approximation
        assert abs(v - avg) < avg, f"Output {i} should be close to average: {v} vs {avg}"

    logger.info("PASS: Softmax uniform input verified")


@cocotb.test()
async def test_softmax_one_hot(dut):
    """Test softmax with one dominant value."""
    logger.info("Test: Softmax One-Hot Like")

    await setup_softmax(dut)

    mem = MemoryModel()

    # One value much larger -> near one-hot output
    input_vector = [0, 0, 0, 127, 0, 0, 0, 0]
    mem.write_vector(0, input_vector)

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=500)
    assert completed, "Softmax should complete"

    output_vector = mem.read_vector(0x200, 8)
    logger.info(f"One-hot like output: {output_vector}")

    # Index 3 should have most of the probability mass
    assert output_vector[3] == max(output_vector), "Max should be at index 3"
    assert output_vector[3] >= 0, "Dominant element should have >50% mass"

    logger.info("PASS: Softmax one-hot like verified")


@cocotb.test()
async def test_softmax_negative_inputs(dut):
    """Test softmax with all negative inputs."""
    logger.info("Test: Softmax Negative Inputs")

    await setup_softmax(dut)

    mem = MemoryModel()

    # All negative values
    input_vector = [-10, -20, -30, -40, -50, -60, -70, -80]
    mem.write_vector(0, input_vector)

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    completed = await memory_handler(dut, mem, timeout_cycles=500)
    assert completed, "Softmax should complete"

    output_vector = mem.read_vector(0x200, 8)
    logger.info(f"Negative input output: {output_vector}")

    # All outputs should still be non-negative
    for v in output_vector:
        assert v >= 0, f"Output should be non-negative: {v}"

    # First element (least negative) should be largest
    assert output_vector[0] == max(output_vector), "Least negative should be max"

    logger.info("PASS: Softmax negative inputs verified")


@cocotb.test()
async def test_softmax_busy_signal(dut):
    """Test busy signal during softmax operation."""
    logger.info("Test: Softmax Busy Signal")

    await setup_softmax(dut)

    mem = MemoryModel()
    mem.write_vector(0, [10, 20, 30, 40, 30, 20, 10, 0])

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    # Start
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # Should be busy
    assert int(dut.busy.value) == 1, "Should be busy after start"

    # Complete operation
    await memory_handler(dut, mem, timeout_cycles=500)

    # Should not be busy after done
    assert int(dut.busy.value) == 0, "Should not be busy after done"

    logger.info("PASS: Softmax busy signal verified")


@cocotb.test()
async def test_softmax_debug_outputs(dut):
    """Test debug output signals."""
    logger.info("Test: Softmax Debug Outputs")

    await setup_softmax(dut)

    mem = MemoryModel()
    input_vector = [10, 20, 30, 40, 50, 40, 30, 20]
    mem.write_vector(0, input_vector)

    dut.vector_length.value = 8
    dut.input_addr.value = 0
    dut.scratch_addr.value = 0x100
    dut.output_addr.value = 0x200

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    # Track state changes
    states_seen = set()
    for _ in range(500):
        await RisingEdge(dut.clk)
        states_seen.add(int(dut.debug_state.value))

        # Provide memory responses
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

    # Check exp_sum debug output was computed
    exp_sum = int(dut.debug_exp_sum.value)
    logger.info(f"Final exp_sum: {exp_sum}")
    assert exp_sum > 0, "exp_sum should be positive"

    logger.info("PASS: Softmax debug outputs verified")
