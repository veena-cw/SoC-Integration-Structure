"""
tiny-tpu Cycle-Accurate Simulator

Simulates TPU execution at the cycle level for debugging and verification.

Features:
- Cycle-accurate instruction execution
- Memory model with latency
- Systolic array simulation
- Execution trace generation
- Performance counters

Usage:
    from tiny_tpu.simulator import Simulator
    from tiny_tpu.assembler import assemble

    binary, _ = assemble(source_code)
    sim = Simulator()
    sim.load_program(binary)
    sim.load_weights(weights, 0x5000)
    sim.load_activations(inputs, 0x0000)

    trace = sim.run(max_cycles=10000)
    outputs = sim.read_memory(0xB000, size=1024)
"""

from typing import List, Dict, Optional, Tuple, Callable
from dataclasses import dataclass, field
from enum import Enum, auto
import numpy as np
import struct


class SimState(Enum):
    """Simulator execution state."""
    IDLE = auto()
    RUNNING = auto()
    HALTED = auto()
    ERROR = auto()


@dataclass
class ExecutionTrace:
    """Trace of simulator execution."""
    cycles: int = 0
    instructions_executed: int = 0
    memory_reads: int = 0
    memory_writes: int = 0
    matmul_cycles: int = 0
    activation_cycles: int = 0
    stall_cycles: int = 0
    trace_log: List[str] = field(default_factory=list)


@dataclass
class PerformanceCounters:
    """Hardware performance counters."""
    cycles: int = 0
    instructions: int = 0
    loads: int = 0
    stores: int = 0
    matmuls: int = 0
    activations: int = 0
    stalls: int = 0


class Memory:
    """
    Simulated unified buffer memory.

    64KB total:
    - 0x0000-0x4FFF: Activations
    - 0x5000-0xAFFF: Weights
    - 0xB000-0xFFFF: Outputs
    """

    SIZE = 0x10000  # 64KB

    def __init__(self):
        self.data = bytearray(self.SIZE)
        self.read_latency = 2  # cycles
        self.write_latency = 1  # cycles

    def read_byte(self, addr: int) -> int:
        """Read a single byte."""
        if 0 <= addr < self.SIZE:
            return self.data[addr]
        return 0

    def write_byte(self, addr: int, value: int):
        """Write a single byte."""
        if 0 <= addr < self.SIZE:
            self.data[addr] = value & 0xFF

    def read_word(self, addr: int) -> int:
        """Read a 32-bit word (little-endian)."""
        return (self.read_byte(addr) |
                (self.read_byte(addr + 1) << 8) |
                (self.read_byte(addr + 2) << 16) |
                (self.read_byte(addr + 3) << 24))

    def write_word(self, addr: int, value: int):
        """Write a 32-bit word (little-endian)."""
        self.write_byte(addr, value & 0xFF)
        self.write_byte(addr + 1, (value >> 8) & 0xFF)
        self.write_byte(addr + 2, (value >> 16) & 0xFF)
        self.write_byte(addr + 3, (value >> 24) & 0xFF)

    def read_block(self, addr: int, size: int) -> bytes:
        """Read a block of memory."""
        return bytes(self.data[addr:addr + size])

    def write_block(self, addr: int, data: bytes):
        """Write a block of memory."""
        for i, b in enumerate(data):
            if addr + i < self.SIZE:
                self.data[addr + i] = b

    def load_array(self, addr: int, array: np.ndarray):
        """Load a numpy array into memory."""
        flat = array.astype(np.int8).flatten()
        self.write_block(addr, flat.tobytes())

    def read_array(self, addr: int, shape: Tuple[int, ...]) -> np.ndarray:
        """Read a numpy array from memory."""
        size = 1
        for s in shape:
            size *= s
        data = self.read_block(addr, size)
        return np.frombuffer(data, dtype=np.int8).reshape(shape)


class SystolicArray:
    """
    Simulated 8x8 systolic array.

    Weight-stationary dataflow:
    - Weights are loaded first and held
    - Activations stream through
    - Partial sums accumulate
    """

    N = 8  # Array dimension

    def __init__(self):
        self.weights = np.zeros((self.N, self.N), dtype=np.int8)
        self.accumulators = np.zeros((self.N, self.N), dtype=np.int32)
        self.enabled = False
        self.weight_loaded = False
        self.compute_cycles = 0

    def load_weights(self, weights: np.ndarray):
        """Load weight matrix into array."""
        self.weights = weights[:self.N, :self.N].astype(np.int8)
        self.weight_loaded = True

    def clear_accumulators(self):
        """Clear accumulator registers."""
        self.accumulators = np.zeros((self.N, self.N), dtype=np.int32)

    def compute(self, activations: np.ndarray, accumulate: bool = False) -> np.ndarray:
        """
        Perform matrix multiply.

        Args:
            activations: NxN activation matrix
            accumulate: Add to existing accumulators

        Returns:
            NxN result matrix
        """
        act = activations[:self.N, :self.N].astype(np.int32)
        weights = self.weights.astype(np.int32)

        result = act @ weights

        if accumulate:
            self.accumulators += result
        else:
            self.accumulators = result

        # Compute takes 2N-1 cycles
        self.compute_cycles = 2 * self.N - 1

        return self.accumulators.copy()

    def get_result(self) -> np.ndarray:
        """Get current accumulator values."""
        return self.accumulators.copy()


class Simulator:
    """
    Cycle-accurate TPU simulator.

    Simulates the complete TPU pipeline including:
    - Instruction fetch and decode
    - Memory operations
    - Systolic array compute
    - Activation functions
    """

    # Opcodes (must match decoder.sv)
    OP_NOP = 0x00
    OP_LOAD_W = 0x01
    OP_LOAD_A = 0x02
    OP_MATMUL = 0x03
    OP_STORE = 0x04
    OP_ACT_RELU = 0x05
    OP_ACT_GELU = 0x06
    OP_ACT_SILU = 0x07
    OP_SOFTMAX = 0x08
    OP_ADD = 0x09
    OP_LAYERNORM = 0x0A
    OP_TRANSPOSE = 0x0B
    OP_SCALE = 0x0C
    OP_SYNC = 0x0D
    OP_LOOP = 0x0E
    OP_HALT = 0x0F

    def __init__(self, verbose: bool = False):
        """
        Initialize simulator.

        Args:
            verbose: Enable detailed trace output
        """
        self.verbose = verbose
        self.memory = Memory()
        self.array = SystolicArray()

        # Instruction memory (separate from data memory)
        self.program: List[int] = []
        self.pc = 0

        # State
        self.state = SimState.IDLE
        self.counters = PerformanceCounters()
        self.trace = ExecutionTrace()

        # Temporary storage
        self.weight_buffer = np.zeros((8, 8), dtype=np.int8)
        self.activation_buffer = np.zeros((8, 8), dtype=np.int8)
        self.result_buffer = np.zeros((8, 8), dtype=np.int32)

        # Loop state (3 levels)
        self.loop_counts = [0, 0, 0]
        self.loop_targets = [0, 0, 0]
        self.loop_active = [False, False, False]

    def reset(self):
        """Reset simulator state."""
        self.pc = 0
        self.state = SimState.IDLE
        self.counters = PerformanceCounters()
        self.trace = ExecutionTrace()
        self.array.clear_accumulators()
        self.loop_counts = [0, 0, 0]
        self.loop_targets = [0, 0, 0]
        self.loop_active = [False, False, False]

    def load_program(self, binary: bytes):
        """
        Load program binary into instruction memory.

        Args:
            binary: Compiled TPU program binary
        """
        self.program = []
        for i in range(0, len(binary), 4):
            word = struct.unpack('<I', binary[i:i+4])[0]
            self.program.append(word)
        self.reset()

    def load_weights(self, weights: np.ndarray, addr: int):
        """Load weights into memory."""
        self.memory.load_array(addr, weights)

    def load_activations(self, activations: np.ndarray, addr: int):
        """Load activations into memory."""
        self.memory.load_array(addr, activations)

    def read_memory(self, addr: int, size: int) -> bytes:
        """Read from memory."""
        return self.memory.read_block(addr, size)

    def read_output(self, addr: int, shape: Tuple[int, ...]) -> np.ndarray:
        """Read output array from memory."""
        return self.memory.read_array(addr, shape)

    def step(self) -> bool:
        """
        Execute one instruction.

        Returns:
            True if execution should continue, False if halted
        """
        if self.pc >= len(self.program):
            self.state = SimState.HALTED
            return False

        # Fetch instruction
        inst = self.program[self.pc]
        self.counters.cycles += 1

        # Decode
        opcode = (inst >> 24) & 0xFF
        flags = (inst >> 20) & 0xF
        dst = (inst >> 16) & 0xF
        src1 = (inst >> 8) & 0xFF
        src2 = inst & 0xFF

        accumulate = bool(flags & 0x1)

        if self.verbose:
            self._log(f"PC={self.pc:04X}: {opcode:02X} flags={flags:X} dst={dst} src1={src1:02X} src2={src2:02X}")

        # Execute
        self.pc += 1
        self.counters.instructions += 1

        if opcode == self.OP_NOP:
            pass

        elif opcode == self.OP_LOAD_W:
            addr = (src1 << 8) | src2
            self._load_weights(addr)
            self.counters.loads += 1

        elif opcode == self.OP_LOAD_A:
            addr = (src1 << 8) | src2
            self._load_activations(addr)
            self.counters.loads += 1

        elif opcode == self.OP_MATMUL:
            self._execute_matmul(accumulate)
            self.counters.matmuls += 1

        elif opcode == self.OP_STORE:
            addr = (src1 << 8) | src2
            self._store_result(addr)
            self.counters.stores += 1

        elif opcode == self.OP_ACT_RELU:
            # Encoding: addr = (src1 << 8) | (dst << 4), size = src2
            addr = (src1 << 8) | (dst << 4)
            size = src2 if src2 > 0 else 64  # Default to 64 if size is 0
            self._execute_relu_memory(addr, size)
            self.counters.activations += 1

        elif opcode == self.OP_ACT_GELU:
            # Encoding: addr = (src1 << 8) | (dst << 4), size = src2
            addr = (src1 << 8) | (dst << 4)
            size = src2 if src2 > 0 else 64
            self._execute_gelu_memory(addr, size)
            self.counters.activations += 1

        elif opcode == self.OP_ACT_SILU:
            # Encoding: addr = (src1 << 8) | (dst << 4), size = src2
            addr = (src1 << 8) | (dst << 4)
            size = src2 if src2 > 0 else 64
            self._execute_silu_memory(addr, size)
            self.counters.activations += 1

        elif opcode == self.OP_SOFTMAX:
            addr = (src1 << 8) | src2
            length = dst
            self._execute_softmax(addr, length)
            self.counters.activations += 1

        elif opcode == self.OP_ADD:
            # flags=0: 2-operand in-place (dst = dst + src)
            #   dst_addr = src1 << 8 (256-byte aligned)
            #   src_addr = (dst << 12) | (src2 << 4) (16-byte aligned)
            # flags=1: 3-operand (dst = src1 + src2)
            #   src1_addr = src1 << 8
            #   src2_addr = src2 << 8
            #   dst_addr = dst << 12
            if flags == 0:
                dst_addr = src1 << 8
                src_addr = (dst << 12) | (src2 << 4)
                self._execute_add(dst_addr, src_addr, dst_addr)
            else:
                src1_addr = src1 << 8
                src2_addr = src2 << 8
                dst_addr = dst << 12
                self._execute_add(src1_addr, src2_addr, dst_addr)
            self.counters.cycles += 2

        elif opcode == self.OP_LAYERNORM:
            # Encoding: src_addr = src1 << 8, dst_addr = src2 << 8, size = dst
            # If size=0, default to 64 (8x8 tile)
            src_addr = src1 << 8
            dst_addr = src2 << 8
            size = dst if dst > 0 else 64  # Default 8x8 = 64 elements
            self._execute_layernorm_full(src_addr, dst_addr, size)
            self.counters.activations += 1

        elif opcode == self.OP_TRANSPOSE:
            # Encoding: src_addr = src1 << 8, dst_addr = src2 << 8, size = dst
            src_addr = src1 << 8
            dst_addr = src2 << 8
            size = dst if dst > 0 else 8  # Default 8x8
            self._execute_transpose(src_addr, dst_addr, size)
            self.counters.cycles += size * size  # Rough cycle estimate

        elif opcode == self.OP_SCALE:
            # Encoding: addr = (src1 << 8) | (dst << 4), scale = src2
            addr = (src1 << 8) | (dst << 4)
            scale = src2
            self._execute_scale_memory(addr, scale)

        elif opcode == self.OP_SYNC:
            # Wait for pending operations (no-op in simulator)
            pass

        elif opcode == self.OP_LOOP:
            level = dst & 0x3
            count = src1
            target = src2

            if not self.loop_active[level]:
                # Start loop
                self.loop_counts[level] = count
                self.loop_targets[level] = target
                self.loop_active[level] = True
            else:
                # Check loop
                self.loop_counts[level] -= 1
                if self.loop_counts[level] > 0:
                    self.pc = target
                else:
                    self.loop_active[level] = False

        elif opcode == self.OP_HALT:
            self.state = SimState.HALTED
            return False

        else:
            self._log(f"Unknown opcode: {opcode:02X}")

        return True

    def run(self, max_cycles: int = 100000) -> ExecutionTrace:
        """
        Run program until halt or max cycles.

        Args:
            max_cycles: Maximum cycles to execute

        Returns:
            Execution trace
        """
        self.state = SimState.RUNNING

        while self.counters.cycles < max_cycles:
            if not self.step():
                break

        self.trace.cycles = self.counters.cycles
        self.trace.instructions_executed = self.counters.instructions
        self.trace.memory_reads = self.counters.loads
        self.trace.memory_writes = self.counters.stores
        self.trace.matmul_cycles = self.counters.matmuls * (2 * 8 - 1)
        self.trace.activation_cycles = self.counters.activations

        return self.trace

    def _log(self, msg: str):
        """Add message to trace log."""
        self.trace.trace_log.append(f"[{self.counters.cycles:6d}] {msg}")
        if self.verbose:
            print(msg)

    def _load_weights(self, addr: int):
        """Load weights from memory."""
        self.weight_buffer = self.memory.read_array(addr, (8, 8))
        self.array.load_weights(self.weight_buffer)
        self.counters.cycles += self.memory.read_latency
        self._log(f"LOAD_W from 0x{addr:04X}")

    def _load_activations(self, addr: int):
        """Load activations from memory."""
        self.activation_buffer = self.memory.read_array(addr, (8, 8))
        self.counters.cycles += self.memory.read_latency
        self._log(f"LOAD_A from 0x{addr:04X}")

    def _execute_matmul(self, accumulate: bool):
        """Execute matrix multiply."""
        self.result_buffer = self.array.compute(self.activation_buffer, accumulate)
        self.counters.cycles += 2 * 8 - 1  # Pipeline latency
        self._log(f"MATMUL {'(acc)' if accumulate else ''}")

    def _store_result(self, addr: int):
        """Store result to memory."""
        # Quantize INT32 to INT8
        result_int8 = np.clip(self.result_buffer >> 8, -128, 127).astype(np.int8)
        self.memory.load_array(addr, result_int8)
        self.counters.cycles += self.memory.write_latency
        self._log(f"STORE to 0x{addr:04X}")

    def _execute_relu(self):
        """Apply ReLU activation to result buffer."""
        self.result_buffer = np.maximum(self.result_buffer, 0)
        self._log("ACT_RELU (buffer)")

    def _execute_relu_memory(self, addr: int, size: int):
        """Apply ReLU activation in memory."""
        data = self.memory.read_array(addr, (size,))
        result = np.maximum(data, 0).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"ACT_RELU at 0x{addr:04X}, size={size}")

    def _execute_gelu(self):
        """Apply GELU activation to result buffer (approximation)."""
        x = self.result_buffer.astype(np.float32) / 256.0
        self.result_buffer = (x * 0.5 * (1 + np.tanh(0.7978845608 * (x + 0.044715 * x**3))) * 256).astype(np.int32)
        self._log("ACT_GELU (buffer)")

    def _execute_gelu_memory(self, addr: int, size: int):
        """Apply GELU activation in memory."""
        data = self.memory.read_array(addr, (size,)).astype(np.float32)
        # GELU approximation: x * 0.5 * (1 + tanh(sqrt(2/pi) * (x + 0.044715 * x^3)))
        gelu = data * 0.5 * (1 + np.tanh(0.7978845608 * (data + 0.044715 * data**3)))
        result = np.clip(gelu, -128, 127).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"ACT_GELU at 0x{addr:04X}, size={size}")

    def _execute_silu(self):
        """Apply SiLU activation to result buffer."""
        x = self.result_buffer.astype(np.float32) / 256.0
        sigmoid = 1.0 / (1.0 + np.exp(-x))
        self.result_buffer = (x * sigmoid * 256).astype(np.int32)
        self._log("ACT_SILU (buffer)")

    def _execute_silu_memory(self, addr: int, size: int):
        """Apply SiLU activation in memory."""
        data = self.memory.read_array(addr, (size,)).astype(np.float32)
        sigmoid = 1.0 / (1.0 + np.exp(-np.clip(data, -128, 127)))
        silu = data * sigmoid
        result = np.clip(silu, -128, 127).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"ACT_SILU at 0x{addr:04X}, size={size}")

    def _execute_transpose(self, src_addr: int, dst_addr: int, size: int):
        """Transpose a matrix in memory."""
        # Read source matrix
        data = self.memory.read_array(src_addr, (size, size))
        # Transpose
        transposed = data.T.copy()
        # Write to destination
        self.memory.load_array(dst_addr, transposed)
        self._log(f"TRANSPOSE 0x{src_addr:04X} -> 0x{dst_addr:04X}, size={size}x{size}")

    def _execute_add(self, src1_addr: int, src2_addr: int, dst_addr: int, size: int = 64):
        """Element-wise addition of two arrays in memory."""
        # Read both source arrays
        data1 = self.memory.read_array(src1_addr, (size,)).astype(np.int16)
        data2 = self.memory.read_array(src2_addr, (size,)).astype(np.int16)
        # Add and clip to INT8 range
        result = np.clip(data1 + data2, -128, 127).astype(np.int8)
        # Write to destination
        self.memory.load_array(dst_addr, result)
        self._log(f"ADD 0x{src1_addr:04X} + 0x{src2_addr:04X} -> 0x{dst_addr:04X}, size={size}")

    def _execute_softmax(self, addr: int, length: int):
        """Apply softmax (simplified)."""
        data = self.memory.read_array(addr, (length,)).astype(np.float32)
        data = data - np.max(data)  # Numerical stability
        exp_data = np.exp(data)
        softmax = exp_data / np.sum(exp_data)
        result = (softmax * 127).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"SOFTMAX at 0x{addr:04X}, len={length}")

    def _execute_layernorm(self, addr: int, length: int):
        """Apply layer normalization (simplified, in-place)."""
        data = self.memory.read_array(addr, (length,)).astype(np.float32)
        mean = np.mean(data)
        var = np.var(data)
        normalized = (data - mean) / np.sqrt(var + 1e-5)
        result = np.clip(normalized * 32, -128, 127).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"LAYERNORM at 0x{addr:04X}, len={length}")

    def _execute_layernorm_full(self, src_addr: int, dst_addr: int, size: int):
        """Apply layer normalization with separate src/dst addresses."""
        data = self.memory.read_array(src_addr, (size,)).astype(np.float32)
        mean = np.mean(data)
        var = np.var(data)
        normalized = (data - mean) / np.sqrt(var + 1e-5)
        result = np.clip(normalized * 32, -128, 127).astype(np.int8)
        self.memory.load_array(dst_addr, result)
        self._log(f"LAYERNORM 0x{src_addr:04X} -> 0x{dst_addr:04X}, size={size}")

    def _execute_scale(self, scale: int):
        """Scale result buffer."""
        # scale is Q4.4, so divide by 16
        self.result_buffer = (self.result_buffer * scale) >> 4
        self._log(f"SCALE by {scale}/16")

    def _execute_scale_memory(self, addr: int, scale: int, size: int = 64):
        """Scale data in memory (in-place)."""
        # Read data
        data = self.memory.read_array(addr, (size,)).astype(np.int32)
        # Scale is Q4.4 fixed point, so divide by 16
        scaled = (data * scale) >> 4
        # Clip and write back
        result = np.clip(scaled, -128, 127).astype(np.int8)
        self.memory.load_array(addr, result)
        self._log(f"SCALE at 0x{addr:04X} by {scale}/16, size={size}")


def simulate(binary: bytes, weights: Dict[int, np.ndarray] = None,
             activations: Dict[int, np.ndarray] = None,
             max_cycles: int = 100000,
             verbose: bool = False) -> Tuple[ExecutionTrace, Simulator]:
    """
    Convenience function to simulate a program.

    Args:
        binary: Compiled program binary
        weights: Dict of addr -> weight array to load
        activations: Dict of addr -> activation array to load
        max_cycles: Maximum cycles to run
        verbose: Enable verbose output

    Returns:
        Tuple of (trace, simulator) for inspecting results
    """
    sim = Simulator(verbose=verbose)
    sim.load_program(binary)

    if weights:
        for addr, arr in weights.items():
            sim.load_weights(arr, addr)

    if activations:
        for addr, arr in activations.items():
            sim.load_activations(arr, addr)

    trace = sim.run(max_cycles)
    return trace, sim


# Exported symbols
__all__ = [
    'SimState', 'ExecutionTrace', 'PerformanceCounters',
    'Memory', 'SystolicArray', 'Simulator', 'simulate'
]
