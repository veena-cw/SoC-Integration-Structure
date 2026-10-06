"""
tiny-tpu Compiler Package

Compiles high-level neural network operations to TPU assembly.

Usage:
    from tiny_tpu.compiler import Compiler, ComputeGraph

    # Build compute graph
    graph = ComputeGraph()
    x = graph.input("x", shape=(128, 784))
    w = graph.weight("w", shape=(784, 128))
    y = graph.matmul(x, w)
    y = graph.relu(y)

    # Compile to assembly
    compiler = Compiler(tile_size=8)
    asm = compiler.compile(graph)
"""

from .compiler import (
    OpType,
    Tensor,
    Operation,
    ComputeGraph,
    MemoryAllocator,
    Compiler,
    compile_graph,
)

from .matmul_compiler import (
    TilingConfig,
    MatmulParams,
    MatmulCompiler,
    compile_matmul,
)

from .attention_compiler import (
    AttentionConfig,
    AttentionParams,
    AttentionCompiler,
    compile_attention,
)

__all__ = [
    # Main compiler
    'OpType',
    'Tensor',
    'Operation',
    'ComputeGraph',
    'MemoryAllocator',
    'Compiler',
    'compile_graph',
    # Matmul compiler
    'TilingConfig',
    'MatmulParams',
    'MatmulCompiler',
    'compile_matmul',
    # Attention compiler
    'AttentionConfig',
    'AttentionParams',
    'AttentionCompiler',
    'compile_attention',
]
