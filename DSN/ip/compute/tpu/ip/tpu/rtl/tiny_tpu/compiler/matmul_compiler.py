"""
tiny-tpu Matrix Multiply Compiler

Specialized compiler for tiled matrix multiplication with
double-buffering and optimal loop ordering.

Generates efficient assembly for large matrix multiplies
that don't fit in the systolic array.
"""

from typing import List, Tuple, Optional
from dataclasses import dataclass
import math


@dataclass
class TilingConfig:
    """Configuration for tiled matrix multiply."""
    tile_m: int = 8  # Tile size in M dimension
    tile_n: int = 8  # Tile size in N dimension
    tile_k: int = 8  # Tile size in K dimension
    double_buffer: bool = True  # Use double buffering


@dataclass
class MatmulParams:
    """Parameters for a matrix multiply operation."""
    m: int  # Rows of A (and C)
    n: int  # Cols of B (and C)
    k: int  # Cols of A / Rows of B
    addr_a: int  # Address of matrix A
    addr_b: int  # Address of matrix B
    addr_c: int  # Address of matrix C
    stride_a: int = 0  # Row stride for A (0 = dense)
    stride_b: int = 0  # Row stride for B (0 = dense)
    stride_c: int = 0  # Row stride for C (0 = dense)
    accumulate: bool = False  # Accumulate into C


class MatmulCompiler:
    """
    Specialized compiler for tiled matrix multiplication.

    Generates assembly code with:
    - Tiling for arbitrary matrix sizes
    - K-tile accumulation for inner products
    - Optional double-buffering hints
    - Loop structure for hardware loop controller
    """

    def __init__(self, config: TilingConfig = None):
        """
        Initialize matmul compiler.

        Args:
            config: Tiling configuration (uses defaults if None)
        """
        self.config = config or TilingConfig()

    def compile(self, params: MatmulParams) -> List[str]:
        """
        Compile a matrix multiply to assembly.

        Args:
            params: Matrix multiply parameters

        Returns:
            List of assembly lines
        """
        lines = []

        # Calculate tile counts
        m_tiles = math.ceil(params.m / self.config.tile_m)
        n_tiles = math.ceil(params.n / self.config.tile_n)
        k_tiles = math.ceil(params.k / self.config.tile_k)

        total_tiles = m_tiles * n_tiles * k_tiles

        lines.append(f"; Matrix multiply: ({params.m}x{params.k}) @ ({params.k}x{params.n})")
        lines.append(f"; Tiling: {m_tiles}x{n_tiles}x{k_tiles} = {total_tiles} tiles")
        lines.append("")

        # Compute strides
        stride_a = params.stride_a if params.stride_a else params.k
        stride_b = params.stride_b if params.stride_b else params.n
        stride_c = params.stride_c if params.stride_c else params.n

        # Generate loop nest: M -> N -> K (inner)
        # This ordering maximizes weight reuse
        if total_tiles == 1:
            # Simple case: single tile
            lines.extend(self._compile_single_tile(params))
        elif k_tiles == 1:
            # No K tiling needed
            lines.extend(self._compile_mn_tiled(params, m_tiles, n_tiles, stride_a, stride_b, stride_c))
        else:
            # Full tiling with K accumulation
            lines.extend(self._compile_full_tiled(
                params, m_tiles, n_tiles, k_tiles,
                stride_a, stride_b, stride_c
            ))

        return lines

    def _compile_single_tile(self, params: MatmulParams) -> List[str]:
        """Compile single-tile matmul (fits in array)."""
        lines = [
            f"    LOAD_W 0x{params.addr_b:04X}",
            f"    LOAD_A 0x{params.addr_a:04X}",
        ]

        if params.accumulate:
            lines.append("    MATMUL.acc")
        else:
            lines.append("    MATMUL")

        lines.append(f"    STORE 0x{params.addr_c:04X}")
        return lines

    def _compile_mn_tiled(self, params: MatmulParams,
                          m_tiles: int, n_tiles: int,
                          stride_a: int, stride_b: int, stride_c: int) -> List[str]:
        """Compile M-N tiled matmul (no K accumulation)."""
        lines = []

        tile_m = self.config.tile_m
        tile_n = self.config.tile_n

        for mi in range(m_tiles):
            for ni in range(n_tiles):
                # Calculate tile boundaries
                m_start = mi * tile_m
                n_start = ni * tile_n

                # Calculate addresses
                a_addr = params.addr_a + m_start * stride_a
                b_addr = params.addr_b + n_start
                c_addr = params.addr_c + m_start * stride_c + n_start

                lines.append(f"; Tile M={mi}, N={ni}")
                lines.append(f"    LOAD_W 0x{b_addr:04X}")
                lines.append(f"    LOAD_A 0x{a_addr:04X}")

                if params.accumulate:
                    lines.append("    MATMUL.acc")
                else:
                    lines.append("    MATMUL")

                lines.append(f"    STORE 0x{c_addr:04X}")
                lines.append("")

        return lines

    def _compile_full_tiled(self, params: MatmulParams,
                            m_tiles: int, n_tiles: int, k_tiles: int,
                            stride_a: int, stride_b: int, stride_c: int) -> List[str]:
        """Compile fully tiled matmul with K accumulation."""
        lines = []

        tile_m = self.config.tile_m
        tile_n = self.config.tile_n
        tile_k = self.config.tile_k

        for mi in range(m_tiles):
            for ni in range(n_tiles):
                # Calculate output tile address
                m_start = mi * tile_m
                n_start = ni * tile_n
                c_addr = params.addr_c + m_start * stride_c + n_start

                for ki in range(k_tiles):
                    # Calculate K-tile boundaries
                    k_start = ki * tile_k

                    # Calculate addresses for this K tile
                    a_addr = params.addr_a + m_start * stride_a + k_start
                    b_addr = params.addr_b + k_start * stride_b + n_start

                    lines.append(f"; Tile M={mi}, N={ni}, K={ki}")
                    lines.append(f"    LOAD_W 0x{b_addr:04X}")
                    lines.append(f"    LOAD_A 0x{a_addr:04X}")

                    # First K tile: clear accumulator (unless global accumulate)
                    # Subsequent K tiles: always accumulate
                    if ki == 0 and not params.accumulate:
                        lines.append("    MATMUL")
                    else:
                        lines.append("    MATMUL.acc")

                # Store after all K tiles
                lines.append(f"    STORE 0x{c_addr:04X}")
                lines.append("")

        return lines

    def compile_with_loops(self, params: MatmulParams) -> List[str]:
        """
        Compile using hardware loop instructions.

        Generates more compact code using LOOP instructions
        instead of unrolled tile loops.
        """
        lines = []

        # Calculate tile counts
        m_tiles = math.ceil(params.m / self.config.tile_m)
        n_tiles = math.ceil(params.n / self.config.tile_n)
        k_tiles = math.ceil(params.k / self.config.tile_k)

        stride_a = params.stride_a if params.stride_a else params.k
        stride_b = params.stride_b if params.stride_b else params.n
        stride_c = params.stride_c if params.stride_c else params.n

        lines.append(f"; Tiled matmul with hardware loops")
        lines.append(f"; M={params.m}, N={params.n}, K={params.k}")
        lines.append(f"; Tiles: {m_tiles}x{n_tiles}x{k_tiles}")
        lines.append("")

        # Setup base addresses in registers (conceptual)
        lines.append(f"; r0 = A base, r1 = B base, r2 = C base")
        lines.append("")

        # M loop (level 0)
        lines.append("loop_m:")
        lines.append(f"    ; N loop (level 1)")

        # N loop (level 1)
        lines.append("loop_n:")
        lines.append(f"    ; K loop (level 2)")

        # K loop (level 2)
        lines.append("loop_k:")
        lines.append("    LOAD_W [r1]      ; Load B tile")
        lines.append("    LOAD_A [r0]      ; Load A tile")
        lines.append("    MATMUL.acc       ; Accumulate")
        lines.append(f"    LOOP 2, {k_tiles}, @loop_k")
        lines.append("")

        # After K loop: store result
        lines.append("    STORE [r2]       ; Store C tile")
        lines.append(f"    LOOP 1, {n_tiles}, @loop_n")
        lines.append("")

        # After N loop
        lines.append(f"    LOOP 0, {m_tiles}, @loop_m")
        lines.append("")

        return lines


def compile_matmul(m: int, n: int, k: int,
                   addr_a: int, addr_b: int, addr_c: int,
                   tile_size: int = 8,
                   accumulate: bool = False) -> str:
    """
    Convenience function to compile a matrix multiply.

    Args:
        m, n, k: Matrix dimensions (A is MxK, B is KxN, C is MxN)
        addr_a, addr_b, addr_c: Memory addresses
        tile_size: Tile size for tiling
        accumulate: Add to existing C values

    Returns:
        Assembly source code
    """
    config = TilingConfig(tile_m=tile_size, tile_n=tile_size, tile_k=tile_size)
    compiler = MatmulCompiler(config)

    params = MatmulParams(
        m=m, n=n, k=k,
        addr_a=addr_a, addr_b=addr_b, addr_c=addr_c,
        accumulate=accumulate
    )

    lines = compiler.compile(params)
    return "\n".join(lines)


# Exported symbols
__all__ = [
    'TilingConfig', 'MatmulParams', 'MatmulCompiler', 'compile_matmul'
]
