"""
tiny-tpu Attention Compiler

Specialized compiler for attention mechanisms in transformers.

Compiles:
- Single attention head: Q @ K^T -> scale -> softmax -> @ V
- Multi-head attention with parallel or sequential heads
- Self-attention and cross-attention patterns
"""

from typing import List, Tuple, Optional
from dataclasses import dataclass
import math


@dataclass
class AttentionConfig:
    """Configuration for attention compilation."""
    tile_size: int = 8
    use_flash_attention: bool = False  # Not yet implemented
    causal_mask: bool = False  # For decoder attention


@dataclass
class AttentionParams:
    """Parameters for an attention operation."""
    seq_len: int       # Sequence length (both Q and K/V for self-attention)
    d_model: int       # Model dimension
    d_head: int        # Per-head dimension
    n_heads: int       # Number of attention heads
    # Memory addresses
    addr_q: int        # Query matrix address
    addr_k: int        # Key matrix address
    addr_v: int        # Value matrix address
    addr_out: int      # Output address
    addr_scratch: int  # Scratch space for intermediates


class AttentionCompiler:
    """
    Compiles attention mechanisms to TPU assembly.

    Attention computation:
        scores = Q @ K^T / sqrt(d_k)
        weights = softmax(scores)
        output = weights @ V
    """

    def __init__(self, config: AttentionConfig = None):
        """
        Initialize attention compiler.

        Args:
            config: Attention configuration
        """
        self.config = config or AttentionConfig()

    def compile_single_head(self, params: AttentionParams, head_idx: int = 0) -> List[str]:
        """
        Compile a single attention head.

        Args:
            params: Attention parameters
            head_idx: Which head to compile (for address calculation)

        Returns:
            List of assembly lines
        """
        lines = []

        seq_len = params.seq_len
        d_head = params.d_head

        # Calculate scale factor: 1/sqrt(d_head)
        scale = 1.0 / math.sqrt(d_head)
        # Convert to Q4.4 fixed point
        scale_int = int(scale * 16) & 0xFF

        # Calculate head-specific addresses
        head_offset = head_idx * d_head
        q_addr = params.addr_q + head_offset
        k_addr = params.addr_k + head_offset
        v_addr = params.addr_v + head_offset
        out_addr = params.addr_out + head_offset

        # Scratch addresses
        scores_addr = params.addr_scratch
        weights_addr = params.addr_scratch + seq_len * seq_len

        lines.append(f"; Attention head {head_idx}")
        lines.append(f"; Q, K, V: ({seq_len}x{d_head}), scale={scale:.4f}")
        lines.append("")

        # Step 1: Compute Q @ K^T
        lines.append("; Step 1: scores = Q @ K^T")
        lines.append(f"    ; Transpose K first")
        lines.append(f"    TRANSPOSE 0x{k_addr:04X}, 0x{params.addr_scratch + 0x1000:04X}")
        lines.append(f"    SYNC")
        lines.append(f"    LOAD_W 0x{params.addr_scratch + 0x1000:04X}  ; K^T")
        lines.append(f"    LOAD_A 0x{q_addr:04X}  ; Q")
        lines.append(f"    MATMUL")
        lines.append(f"    STORE 0x{scores_addr:04X}")
        lines.append("")

        # Step 2: Scale scores
        lines.append("; Step 2: scores = scores / sqrt(d_k)")
        lines.append(f"    SCALE 0x{scores_addr:04X}, 0x{scores_addr:04X}, {scale_int}")
        lines.append("")

        # Step 3: Softmax
        lines.append("; Step 3: weights = softmax(scores)")
        # Apply softmax to each row (seq_len elements)
        for row in range(seq_len):
            row_addr = scores_addr + row * seq_len
            weight_row_addr = weights_addr + row * seq_len
            lines.append(f"    SOFTMAX 0x{row_addr:04X}, 0x{weight_row_addr:04X}, {seq_len}")
        lines.append("")

        # Step 4: Compute weights @ V
        lines.append("; Step 4: output = weights @ V")
        lines.append(f"    LOAD_W 0x{v_addr:04X}  ; V")
        lines.append(f"    LOAD_A 0x{weights_addr:04X}  ; Attention weights")
        lines.append(f"    MATMUL")
        lines.append(f"    STORE 0x{out_addr:04X}")
        lines.append("")

        return lines

    def compile_multi_head(self, params: AttentionParams) -> List[str]:
        """
        Compile multi-head attention.

        Args:
            params: Attention parameters

        Returns:
            List of assembly lines
        """
        lines = []

        lines.append(f"; Multi-head attention: {params.n_heads} heads")
        lines.append(f"; Sequence length: {params.seq_len}, d_model: {params.d_model}")
        lines.append("")

        for h in range(params.n_heads):
            lines.extend(self.compile_single_head(params, h))
            lines.append(f"    SYNC  ; Finish head {h}")
            lines.append("")

        return lines

    def compile_self_attention(self, seq_len: int, d_model: int, n_heads: int,
                               addr_input: int, addr_wq: int, addr_wk: int,
                               addr_wv: int, addr_wo: int, addr_output: int,
                               addr_scratch: int) -> List[str]:
        """
        Compile full self-attention with projections.

        Self-attention:
            Q = input @ W_Q
            K = input @ W_K
            V = input @ W_V
            attn = attention(Q, K, V)
            output = attn @ W_O

        Args:
            seq_len: Sequence length
            d_model: Model dimension
            n_heads: Number of attention heads
            addr_*: Memory addresses for matrices
            addr_scratch: Scratch space

        Returns:
            List of assembly lines
        """
        lines = []
        d_head = d_model // n_heads

        lines.append("; Self-attention with projections")
        lines.append(f"; seq_len={seq_len}, d_model={d_model}, n_heads={n_heads}")
        lines.append("")

        # Compute Q, K, V projections
        q_addr = addr_scratch
        k_addr = addr_scratch + seq_len * d_model
        v_addr = addr_scratch + 2 * seq_len * d_model
        attn_scratch = addr_scratch + 3 * seq_len * d_model

        # Q = input @ W_Q
        lines.append("; Q = input @ W_Q")
        lines.append(f"    LOAD_W 0x{addr_wq:04X}")
        lines.append(f"    LOAD_A 0x{addr_input:04X}")
        lines.append("    MATMUL")
        lines.append(f"    STORE 0x{q_addr:04X}")
        lines.append("")

        # K = input @ W_K
        lines.append("; K = input @ W_K")
        lines.append(f"    LOAD_W 0x{addr_wk:04X}")
        lines.append(f"    LOAD_A 0x{addr_input:04X}")
        lines.append("    MATMUL")
        lines.append(f"    STORE 0x{k_addr:04X}")
        lines.append("")

        # V = input @ W_V
        lines.append("; V = input @ W_V")
        lines.append(f"    LOAD_W 0x{addr_wv:04X}")
        lines.append(f"    LOAD_A 0x{addr_input:04X}")
        lines.append("    MATMUL")
        lines.append(f"    STORE 0x{v_addr:04X}")
        lines.append("")

        lines.append("    SYNC  ; Wait for projections")
        lines.append("")

        # Attention
        attn_params = AttentionParams(
            seq_len=seq_len,
            d_model=d_model,
            d_head=d_head,
            n_heads=n_heads,
            addr_q=q_addr,
            addr_k=k_addr,
            addr_v=v_addr,
            addr_out=attn_scratch,
            addr_scratch=attn_scratch + seq_len * d_model
        )

        lines.extend(self.compile_multi_head(attn_params))

        # Output projection: output = attn @ W_O
        lines.append("; Output projection: output = attn @ W_O")
        lines.append(f"    LOAD_W 0x{addr_wo:04X}")
        lines.append(f"    LOAD_A 0x{attn_scratch:04X}")
        lines.append("    MATMUL")
        lines.append(f"    STORE 0x{addr_output:04X}")
        lines.append("")

        return lines


def compile_attention(seq_len: int, d_head: int,
                      addr_q: int, addr_k: int, addr_v: int,
                      addr_out: int, addr_scratch: int,
                      tile_size: int = 8) -> str:
    """
    Convenience function to compile single-head attention.

    Args:
        seq_len: Sequence length
        d_head: Head dimension
        addr_q, addr_k, addr_v: Input addresses
        addr_out: Output address
        addr_scratch: Scratch space address
        tile_size: Tile size for matmul

    Returns:
        Assembly source code
    """
    config = AttentionConfig(tile_size=tile_size)
    compiler = AttentionCompiler(config)

    params = AttentionParams(
        seq_len=seq_len,
        d_model=d_head,
        d_head=d_head,
        n_heads=1,
        addr_q=addr_q,
        addr_k=addr_k,
        addr_v=addr_v,
        addr_out=addr_out,
        addr_scratch=addr_scratch
    )

    lines = compiler.compile_single_head(params)
    lines.append("    HALT")
    return "\n".join(lines)


# Exported symbols
__all__ = [
    'AttentionConfig', 'AttentionParams', 'AttentionCompiler',
    'compile_attention'
]
