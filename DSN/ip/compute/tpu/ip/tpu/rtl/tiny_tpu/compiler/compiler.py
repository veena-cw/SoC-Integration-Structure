"""
tiny-tpu Compiler

High-level compiler for neural network operations to TPU assembly.

Compiles a compute graph of operations (matmul, activations, etc.)
into optimized TPU assembly code with tiling and memory management.

Usage:
    from tiny_tpu.compiler import Compiler, ComputeGraph

    # Build compute graph
    graph = ComputeGraph()
    x = graph.input("x", shape=(128, 784))
    w1 = graph.weight("w1", shape=(784, 128))
    h = graph.matmul(x, w1)
    h = graph.relu(h)
    w2 = graph.weight("w2", shape=(128, 10))
    y = graph.matmul(h, w2)
    graph.output("y", y)

    # Compile to assembly
    compiler = Compiler(tile_size=8)
    asm = compiler.compile(graph)
"""

from typing import List, Dict, Optional, Tuple, Set
from dataclasses import dataclass, field
from enum import Enum, auto
import math


class OpType(Enum):
    """Types of compute operations."""
    INPUT = auto()
    WEIGHT = auto()
    OUTPUT = auto()
    MATMUL = auto()
    ADD = auto()
    RELU = auto()
    GELU = auto()
    SILU = auto()
    SOFTMAX = auto()
    LAYERNORM = auto()
    TRANSPOSE = auto()
    SCALE = auto()


@dataclass
class Tensor:
    """Represents a tensor in the compute graph."""
    name: str
    shape: Tuple[int, ...]
    dtype: str = "int8"
    address: int = 0  # Assigned during memory allocation

    @property
    def size(self) -> int:
        """Total number of elements."""
        result = 1
        for dim in self.shape:
            result *= dim
        return result

    @property
    def size_bytes(self) -> int:
        """Size in bytes."""
        return self.size  # INT8 = 1 byte per element


@dataclass
class Operation:
    """Represents an operation in the compute graph."""
    op_type: OpType
    inputs: List[str]  # Input tensor names
    outputs: List[str]  # Output tensor names
    params: Dict = field(default_factory=dict)  # Operation-specific parameters
    node_id: int = 0


class ComputeGraph:
    """
    Represents a compute graph of neural network operations.

    Build the graph using fluent API methods, then compile with Compiler.
    """

    def __init__(self):
        self.tensors: Dict[str, Tensor] = {}
        self.operations: List[Operation] = []
        self._node_counter = 0
        self._temp_counter = 0

    def _new_tensor(self, name: str, shape: Tuple[int, ...]) -> str:
        """Create a new tensor and return its name."""
        self.tensors[name] = Tensor(name=name, shape=shape)
        return name

    def _new_temp(self, shape: Tuple[int, ...]) -> str:
        """Create a new temporary tensor."""
        name = f"_temp_{self._temp_counter}"
        self._temp_counter += 1
        return self._new_tensor(name, shape)

    def _add_op(self, op_type: OpType, inputs: List[str],
                outputs: List[str], params: Dict = None) -> str:
        """Add an operation and return the output tensor name."""
        self.operations.append(Operation(
            op_type=op_type,
            inputs=inputs,
            outputs=outputs,
            params=params or {},
            node_id=self._node_counter
        ))
        self._node_counter += 1
        return outputs[0] if outputs else None

    def input(self, name: str, shape: Tuple[int, ...]) -> str:
        """Define an input tensor."""
        self._new_tensor(name, shape)
        return self._add_op(OpType.INPUT, [], [name])

    def weight(self, name: str, shape: Tuple[int, ...]) -> str:
        """Define a weight tensor."""
        self._new_tensor(name, shape)
        return self._add_op(OpType.WEIGHT, [], [name])

    def output(self, name: str, tensor: str) -> str:
        """Mark a tensor as an output."""
        return self._add_op(OpType.OUTPUT, [tensor], [name])

    def matmul(self, a: str, b: str, name: str = None) -> str:
        """Matrix multiply: C = A @ B."""
        a_tensor = self.tensors[a]
        b_tensor = self.tensors[b]

        # Output shape: (M, N) where A is (M, K) and B is (K, N)
        m = a_tensor.shape[0]
        n = b_tensor.shape[1]

        out_name = name or self._new_temp((m, n))
        if name and name not in self.tensors:
            self._new_tensor(name, (m, n))

        return self._add_op(OpType.MATMUL, [a, b], [out_name])

    def add(self, a: str, b: str, name: str = None) -> str:
        """Element-wise add: C = A + B."""
        a_tensor = self.tensors[a]
        out_name = name or self._new_temp(a_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, a_tensor.shape)
        return self._add_op(OpType.ADD, [a, b], [out_name])

    def relu(self, x: str, name: str = None) -> str:
        """ReLU activation."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        return self._add_op(OpType.RELU, [x], [out_name])

    def gelu(self, x: str, name: str = None) -> str:
        """GELU activation."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        return self._add_op(OpType.GELU, [x], [out_name])

    def silu(self, x: str, name: str = None) -> str:
        """SiLU/Swish activation."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        return self._add_op(OpType.SILU, [x], [out_name])

    def softmax(self, x: str, axis: int = -1, name: str = None) -> str:
        """Softmax activation."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        return self._add_op(OpType.SOFTMAX, [x], [out_name], {'axis': axis})

    def layernorm(self, x: str, gamma: str = None, beta: str = None, name: str = None) -> str:
        """Layer normalization."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        inputs = [x]
        if gamma:
            inputs.append(gamma)
        if beta:
            inputs.append(beta)
        return self._add_op(OpType.LAYERNORM, inputs, [out_name])

    def transpose(self, x: str, name: str = None) -> str:
        """Transpose a 2D tensor."""
        x_tensor = self.tensors[x]
        out_shape = (x_tensor.shape[1], x_tensor.shape[0])
        out_name = name or self._new_temp(out_shape)
        if name and name not in self.tensors:
            self._new_tensor(name, out_shape)
        return self._add_op(OpType.TRANSPOSE, [x], [out_name])

    def scale(self, x: str, factor: float, name: str = None) -> str:
        """Scale by a constant factor."""
        x_tensor = self.tensors[x]
        out_name = name or self._new_temp(x_tensor.shape)
        if name and name not in self.tensors:
            self._new_tensor(name, x_tensor.shape)
        return self._add_op(OpType.SCALE, [x], [out_name], {'factor': factor})


class MemoryAllocator:
    """
    Allocates memory addresses for tensors in the unified buffer.

    Memory layout:
        0x0000 - 0x4FFF: Activations (20KB)
        0x5000 - 0xAFFF: Weights (24KB)
        0xB000 - 0xFFFF: Outputs/Scratch (20KB)
    """

    ACTIVATION_BASE = 0x0000
    ACTIVATION_SIZE = 0x5000  # 20KB
    WEIGHT_BASE = 0x5000
    WEIGHT_SIZE = 0x6000      # 24KB
    OUTPUT_BASE = 0xB000
    OUTPUT_SIZE = 0x5000      # 20KB

    def __init__(self):
        self.activation_ptr = self.ACTIVATION_BASE
        self.weight_ptr = self.WEIGHT_BASE
        self.output_ptr = self.OUTPUT_BASE

    def allocate_activation(self, size: int) -> int:
        """Allocate space for an activation tensor."""
        if self.activation_ptr + size > self.ACTIVATION_BASE + self.ACTIVATION_SIZE:
            raise MemoryError(f"Activation memory overflow: need {size} bytes")
        addr = self.activation_ptr
        self.activation_ptr += size
        # Align to 8 bytes
        self.activation_ptr = (self.activation_ptr + 7) & ~7
        return addr

    def allocate_weight(self, size: int) -> int:
        """Allocate space for a weight tensor."""
        if self.weight_ptr + size > self.WEIGHT_BASE + self.WEIGHT_SIZE:
            raise MemoryError(f"Weight memory overflow: need {size} bytes")
        addr = self.weight_ptr
        self.weight_ptr += size
        self.weight_ptr = (self.weight_ptr + 7) & ~7
        return addr

    def allocate_output(self, size: int) -> int:
        """Allocate space for an output tensor."""
        if self.output_ptr + size > self.OUTPUT_BASE + self.OUTPUT_SIZE:
            raise MemoryError(f"Output memory overflow: need {size} bytes")
        addr = self.output_ptr
        self.output_ptr += size
        self.output_ptr = (self.output_ptr + 7) & ~7
        return addr


class Compiler:
    """
    Compiles a ComputeGraph to TPU assembly code.

    Handles tiling for large matrices, memory allocation,
    and instruction scheduling.
    """

    def __init__(self, tile_size: int = 8):
        """
        Initialize compiler.

        Args:
            tile_size: Size of tiles for tiled matrix multiply (default 8)
        """
        self.tile_size = tile_size
        self.allocator = MemoryAllocator()

    def compile(self, graph: ComputeGraph) -> str:
        """
        Compile compute graph to assembly.

        Args:
            graph: ComputeGraph to compile

        Returns:
            TPU assembly source code
        """
        lines = ["; tiny-tpu compiled program", ""]

        # Allocate memory for all tensors
        self._allocate_memory(graph)

        # Generate code for each operation
        for op in graph.operations:
            lines.append(f"; {op.op_type.name} {op.inputs} -> {op.outputs}")
            lines.extend(self._compile_op(graph, op))
            lines.append("")

        lines.append("    HALT")
        return "\n".join(lines)

    def _allocate_memory(self, graph: ComputeGraph):
        """Allocate memory addresses for all tensors."""
        for op in graph.operations:
            if op.op_type == OpType.INPUT:
                tensor = graph.tensors[op.outputs[0]]
                tensor.address = self.allocator.allocate_activation(tensor.size_bytes)
            elif op.op_type == OpType.WEIGHT:
                tensor = graph.tensors[op.outputs[0]]
                tensor.address = self.allocator.allocate_weight(tensor.size_bytes)
            elif op.op_type == OpType.OUTPUT:
                # Output uses same address as input
                pass
            else:
                # Intermediate results go to output region
                for out_name in op.outputs:
                    if out_name.startswith('_temp_'):
                        tensor = graph.tensors[out_name]
                        tensor.address = self.allocator.allocate_output(tensor.size_bytes)

    def _compile_op(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile a single operation."""
        if op.op_type == OpType.INPUT:
            return []  # No code needed for input declaration
        elif op.op_type == OpType.WEIGHT:
            return []  # No code needed for weight declaration
        elif op.op_type == OpType.OUTPUT:
            return []  # No code needed for output declaration
        elif op.op_type == OpType.MATMUL:
            return self._compile_matmul(graph, op)
        elif op.op_type == OpType.RELU:
            return self._compile_activation(graph, op, "ACT_RELU")
        elif op.op_type == OpType.GELU:
            return self._compile_activation(graph, op, "ACT_GELU")
        elif op.op_type == OpType.SILU:
            return self._compile_activation(graph, op, "ACT_SILU")
        elif op.op_type == OpType.SOFTMAX:
            return self._compile_softmax(graph, op)
        elif op.op_type == OpType.LAYERNORM:
            return self._compile_layernorm(graph, op)
        elif op.op_type == OpType.ADD:
            return self._compile_add(graph, op)
        elif op.op_type == OpType.TRANSPOSE:
            return self._compile_transpose(graph, op)
        elif op.op_type == OpType.SCALE:
            return self._compile_scale(graph, op)
        else:
            return [f"    ; Unsupported op: {op.op_type.name}"]

    def _compile_matmul(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile matrix multiply with tiling."""
        a_name, b_name = op.inputs
        c_name = op.outputs[0]

        a = graph.tensors[a_name]
        b = graph.tensors[b_name]
        c = graph.tensors[c_name]

        lines = []

        m, k1 = a.shape
        k2, n = b.shape

        if k1 != k2:
            raise ValueError(f"Matrix dimension mismatch: {a.shape} @ {b.shape}")

        k = k1

        # Calculate number of tiles
        m_tiles = math.ceil(m / self.tile_size)
        n_tiles = math.ceil(n / self.tile_size)
        k_tiles = math.ceil(k / self.tile_size)

        # For small matrices, generate simple code
        if m_tiles == 1 and n_tiles == 1 and k_tiles == 1:
            lines.append(f"    LOAD_W 0x{b.address:04X}")
            lines.append(f"    LOAD_A 0x{a.address:04X}")
            lines.append(f"    MATMUL")
            lines.append(f"    STORE 0x{c.address:04X}")
            return lines

        # Generate tiled loop
        lines.append(f"    ; Tiled matmul: ({m}x{k}) @ ({k}x{n}) -> ({m}x{n})")
        lines.append(f"    ; Tiles: M={m_tiles}, N={n_tiles}, K={k_tiles}")

        # For now, generate unrolled code (loops would require more complex control)
        for mi in range(m_tiles):
            for ni in range(n_tiles):
                first_k = True
                for ki in range(k_tiles):
                    # Calculate tile addresses
                    a_tile_addr = a.address + (mi * self.tile_size * k + ki * self.tile_size)
                    b_tile_addr = b.address + (ki * self.tile_size * n + ni * self.tile_size)
                    c_tile_addr = c.address + (mi * self.tile_size * n + ni * self.tile_size)

                    lines.append(f"    ; Tile M={mi}, N={ni}, K={ki}")
                    lines.append(f"    LOAD_W 0x{b_tile_addr:04X}")
                    lines.append(f"    LOAD_A 0x{a_tile_addr:04X}")

                    if first_k:
                        lines.append(f"    MATMUL")
                        first_k = False
                    else:
                        lines.append(f"    MATMUL.acc")

                # Store after all K tiles for this M,N
                lines.append(f"    STORE 0x{c_tile_addr:04X}")

        return lines

    def _compile_activation(self, graph: ComputeGraph, op: Operation, mnemonic: str) -> List[str]:
        """Compile activation function."""
        x_name = op.inputs[0]
        y_name = op.outputs[0]

        x = graph.tensors[x_name]
        y = graph.tensors[y_name]

        # If in-place, use same address
        if y_name.startswith('_temp_'):
            y.address = x.address

        return [
            f"    {mnemonic} 0x{x.address:04X}, 0x{y.address:04X}"
        ]

    def _compile_softmax(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile softmax operation."""
        x_name = op.inputs[0]
        y_name = op.outputs[0]

        x = graph.tensors[x_name]
        y = graph.tensors[y_name]

        axis = op.params.get('axis', -1)
        length = x.shape[axis] if axis < len(x.shape) else x.shape[-1]

        return [
            f"    SOFTMAX 0x{x.address:04X}, 0x{y.address:04X}, {length}"
        ]

    def _compile_layernorm(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile layer normalization."""
        x_name = op.inputs[0]
        y_name = op.outputs[0]

        x = graph.tensors[x_name]
        y = graph.tensors[y_name]

        length = x.shape[-1]

        return [
            f"    LAYERNORM 0x{x.address:04X}, 0x{y.address:04X}, {length}"
        ]

    def _compile_add(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile element-wise add."""
        a_name, b_name = op.inputs
        c_name = op.outputs[0]

        a = graph.tensors[a_name]
        b = graph.tensors[b_name]
        c = graph.tensors[c_name]

        return [
            f"    ADD 0x{c.address:04X}, 0x{a.address:04X}, 0x{b.address:04X}"
        ]

    def _compile_transpose(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile transpose."""
        x_name = op.inputs[0]
        y_name = op.outputs[0]

        x = graph.tensors[x_name]
        y = graph.tensors[y_name]

        return [
            f"    TRANSPOSE 0x{x.address:04X}, 0x{y.address:04X}"
        ]

    def _compile_scale(self, graph: ComputeGraph, op: Operation) -> List[str]:
        """Compile scale operation."""
        x_name = op.inputs[0]
        y_name = op.outputs[0]

        x = graph.tensors[x_name]
        y = graph.tensors[y_name]

        factor = op.params.get('factor', 1.0)
        # Convert to Q4.4 fixed point
        scale_int = int(factor * 16) & 0xFF

        return [
            f"    SCALE 0x{y.address:04X}, 0x{x.address:04X}, {scale_int}"
        ]


def compile_graph(graph: ComputeGraph, tile_size: int = 8) -> str:
    """
    Convenience function to compile a compute graph.

    Args:
        graph: ComputeGraph to compile
        tile_size: Tile size for tiled operations

    Returns:
        TPU assembly source code
    """
    compiler = Compiler(tile_size=tile_size)
    return compiler.compile(graph)


# Exported symbols
__all__ = [
    'OpType', 'Tensor', 'Operation', 'ComputeGraph',
    'MemoryAllocator', 'Compiler', 'compile_graph'
]
