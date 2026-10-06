"""
Tiny Transformer Conversion Script

Converts transformer block to TPU assembly.

Usage:
    python convert.py                        # Generate assembly
    python convert.py --seq-len 16           # Custom sequence length
    python convert.py --output transformer.asm
"""

import argparse
import os
import sys
import math
import numpy as np

# Add tiny_tpu to path
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

from model import MEMORY_MAP, DEFAULT_SEQ_LEN, DEFAULT_D_MODEL, DEFAULT_D_FF


def generate_transformer_assembly(seq_len: int = DEFAULT_SEQ_LEN,
                                   d_model: int = DEFAULT_D_MODEL,
                                   d_ff: int = DEFAULT_D_FF) -> str:
    """
    Generate TPU assembly for a transformer block.

    Architecture:
        # Self-attention with residual
        q = x @ W_Q
        k = x @ W_K
        v = x @ W_V
        scores = q @ k.T / sqrt(d)
        weights = softmax(scores)
        attn_out = weights @ v
        attn_out = attn_out @ W_O
        x = LayerNorm(x + attn_out)

        # FFN with residual
        ffn_hidden = GELU(x @ W_up)
        ffn_out = ffn_hidden @ W_down
        output = LayerNorm(x + ffn_out)

    Args:
        seq_len: Sequence length
        d_model: Model dimension
        d_ff: FFN hidden dimension

    Returns:
        Assembly source code
    """
    # Scale factor for attention
    scale = 1.0 / math.sqrt(d_model)
    scale_int = int(scale * 16) & 0xFF

    lines = []
    lines.append("; Tiny Transformer Block")
    lines.append(f"; seq_len={seq_len}, d_model={d_model}, d_ff={d_ff}")
    lines.append(";")
    lines.append("; Architecture:")
    lines.append(";   Self-Attention -> Add&Norm -> FFN -> Add&Norm")
    lines.append(";")
    lines.append("")

    # =========================================================================
    # Self-Attention Section
    # =========================================================================
    lines.append("; " + "=" * 60)
    lines.append("; SELF-ATTENTION")
    lines.append("; " + "=" * 60)
    lines.append("")

    # Save input for residual
    lines.append("; Save input for residual connection")
    lines.append(f"    ; Input is at 0x{MEMORY_MAP['input']:04X}")
    lines.append("")

    # Q projection: q = input @ W_Q + b_Q
    lines.append("; Q = input @ W_Q + b_Q")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_q']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['input']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['q']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['q']:04X}, 0x{MEMORY_MAP['b_q']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # K projection: k = input @ W_K + b_K
    lines.append("; K = input @ W_K + b_K")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_k']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['input']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['k']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['k']:04X}, 0x{MEMORY_MAP['b_k']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # V projection: v = input @ W_V + b_V
    lines.append("; V = input @ W_V + b_V")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_v']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['input']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['v']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['v']:04X}, 0x{MEMORY_MAP['b_v']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Attention scores: scores = Q @ K.T
    lines.append("; Transpose K")
    k_t_addr = MEMORY_MAP['scratch']
    lines.append(f"    TRANSPOSE 0x{MEMORY_MAP['k']:04X}, 0x{k_t_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    scores_addr = MEMORY_MAP['scratch'] + seq_len * d_model
    lines.append("; scores = Q @ K.T")
    lines.append(f"    LOAD_W 0x{k_t_addr:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['q']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{scores_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Scale scores (in-place)
    lines.append(f"; scores = scores / sqrt(d_model) [in-place]")
    lines.append(f"    SCALE 0x{scores_addr:04X}, {scale_int}")
    lines.append(f"    SYNC")
    lines.append("")

    # Softmax (in-place at scores_addr)
    lines.append("; weights = softmax(scores) [in-place]")
    for row in range(seq_len):
        row_addr = scores_addr + row * seq_len
        lines.append(f"    SOFTMAX 0x{row_addr:04X}, {seq_len}")
    lines.append(f"    SYNC")
    lines.append("")

    # Attention output: attn = weights @ V
    # Note: weights are now at scores_addr (in-place softmax)
    weights_addr = scores_addr
    lines.append("; attn = weights @ V")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['v']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{weights_addr:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['attn_out']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Output projection: attn_out = attn @ W_O + b_O
    lines.append("; attn_out = attn @ W_O + b_O")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_o']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['attn_out']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['attn_out']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['attn_out']:04X}, 0x{MEMORY_MAP['b_o']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # =========================================================================
    # First Add & Norm
    # =========================================================================
    lines.append("; " + "=" * 60)
    lines.append("; ADD & LAYERNORM 1")
    lines.append("; " + "=" * 60)
    lines.append("")

    # Add residual: x = input + attn_out
    lines.append("; x = input + attn_out (residual)")
    lines.append(f"    ADD 0x{MEMORY_MAP['input']:04X}, 0x{MEMORY_MAP['attn_out']:04X}, 0x{MEMORY_MAP['residual1']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # LayerNorm
    lines.append("; x = LayerNorm(x)")
    lines.append(f"    LAYERNORM 0x{MEMORY_MAP['residual1']:04X}, 0x{MEMORY_MAP['ln1_out']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # =========================================================================
    # Feed-Forward Network
    # =========================================================================
    lines.append("; " + "=" * 60)
    lines.append("; FEED-FORWARD NETWORK")
    lines.append("; " + "=" * 60)
    lines.append("")

    # FFN up: hidden = x @ W_up + b_up
    lines.append("; hidden = x @ W_up + b_up")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_up']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['ln1_out']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['ffn_hidden']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['ffn_hidden']:04X}, 0x{MEMORY_MAP['b_up']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # GELU activation (in-place)
    ffn_size = seq_len * d_ff
    lines.append("; hidden = GELU(hidden) [in-place]")
    lines.append(f"    ACT_GELU 0x{MEMORY_MAP['ffn_hidden']:04X}, {min(ffn_size, 255)}")
    lines.append(f"    SYNC")
    lines.append("")

    # FFN down: ffn_out = hidden @ W_down + b_down
    lines.append("; ffn_out = hidden @ W_down + b_down")
    lines.append(f"    LOAD_W 0x{MEMORY_MAP['w_down']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{MEMORY_MAP['ffn_hidden']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{MEMORY_MAP['ffn_out']:04X}")
    lines.append(f"    SYNC")
    lines.append(f"    ADD 0x{MEMORY_MAP['ffn_out']:04X}, 0x{MEMORY_MAP['b_down']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # =========================================================================
    # Second Add & Norm
    # =========================================================================
    lines.append("; " + "=" * 60)
    lines.append("; ADD & LAYERNORM 2")
    lines.append("; " + "=" * 60)
    lines.append("")

    # Add residual: output = ln1_out + ffn_out
    lines.append("; output = x + ffn_out (residual)")
    lines.append(f"    ADD 0x{MEMORY_MAP['ln1_out']:04X}, 0x{MEMORY_MAP['ffn_out']:04X}, 0x{MEMORY_MAP['residual2']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Final LayerNorm
    lines.append("; output = LayerNorm(output)")
    lines.append(f"    LAYERNORM 0x{MEMORY_MAP['residual2']:04X}, 0x{MEMORY_MAP['output']:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Done
    lines.append("; " + "=" * 60)
    lines.append("; Transformer block complete")
    lines.append(f"; Output at 0x{MEMORY_MAP['output']:04X}")
    lines.append("; " + "=" * 60)
    lines.append(f"    HALT")
    lines.append("")

    return "\n".join(lines)


def main():
    parser = argparse.ArgumentParser(description='Convert transformer to TPU format')
    parser.add_argument('--seq-len', type=int, default=DEFAULT_SEQ_LEN, help='Sequence length')
    parser.add_argument('--d-model', type=int, default=DEFAULT_D_MODEL, help='Model dimension')
    parser.add_argument('--d-ff', type=int, default=DEFAULT_D_FF, help='FFN dimension')
    parser.add_argument('--output', type=str, default=None, help='Output assembly file')
    parser.add_argument('--binary', type=str, default=None, help='Output binary file')
    args = parser.parse_args()

    # Setup paths
    model_dir = os.path.dirname(__file__)
    output_path = args.output or os.path.join(model_dir, 'transformer.asm')
    binary_path = args.binary or os.path.join(model_dir, 'transformer.bin')

    print("Tiny Transformer -> TPU Conversion")
    print("=" * 60)
    print(f"Sequence length: {args.seq_len}")
    print(f"Model dimension: {args.d_model}")
    print(f"FFN dimension: {args.d_ff}")

    # Generate assembly
    print("\nGenerating TPU assembly...")
    asm_code = generate_transformer_assembly(args.seq_len, args.d_model, args.d_ff)

    # Save assembly
    with open(output_path, 'w') as f:
        f.write(asm_code)
    print(f"Assembly saved to: {output_path}")

    # Count instructions
    instr_count = sum(1 for line in asm_code.split('\n')
                      if line.strip() and not line.strip().startswith(';'))
    print(f"Instructions: {instr_count}")

    # Assemble to binary
    print("\nAssembling to binary...")
    try:
        from tiny_tpu.assembler import Assembler
        assembler = Assembler()
        binary, symbols = assembler.assemble(asm_code)
        with open(binary_path, 'wb') as f:
            f.write(binary)
        print(f"Binary saved to: {binary_path} ({len(binary)} bytes)")
    except ImportError as e:
        print(f"Warning: Could not import assembler: {e}")
        print("Binary generation skipped")

    print("\n" + "=" * 60)
    print("Conversion complete!")


if __name__ == '__main__':
    main()
