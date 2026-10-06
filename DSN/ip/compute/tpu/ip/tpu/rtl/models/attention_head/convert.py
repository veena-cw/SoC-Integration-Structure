"""
Attention Head Conversion Script

Converts attention head computation to TPU assembly.

Usage:
    python convert.py                        # Generate assembly
    python convert.py --seq-len 16           # Custom sequence length
    python convert.py --output attention.asm # Specify output
"""

import argparse
import os
import sys
import math
import numpy as np

# Add tiny_tpu to path
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

from model import MEMORY_MAP, DEFAULT_SEQ_LEN, DEFAULT_D_HEAD


def generate_attention_assembly(seq_len: int = DEFAULT_SEQ_LEN,
                                d_head: int = DEFAULT_D_HEAD) -> str:
    """
    Generate TPU assembly for single-head attention.

    Attention computation:
        1. K_T = transpose(K)
        2. scores = Q @ K_T
        3. scores = scores * scale
        4. weights = softmax(scores)
        5. output = weights @ V

    Args:
        seq_len: Sequence length
        d_head: Head dimension

    Returns:
        Assembly source code
    """
    # Memory addresses
    q_addr = MEMORY_MAP['q']
    k_addr = MEMORY_MAP['k']
    v_addr = MEMORY_MAP['v']
    output_addr = MEMORY_MAP['output']
    scratch_addr = MEMORY_MAP['scratch']
    k_t_addr = MEMORY_MAP['k_transpose']

    # Intermediate addresses
    scores_addr = scratch_addr
    weights_addr = scratch_addr + seq_len * seq_len

    # Scale factor: 1/sqrt(d_head)
    scale = 1.0 / math.sqrt(d_head)
    # Convert to Q4.4 fixed point for SCALE instruction
    scale_int = int(scale * 16) & 0xFF

    lines = []
    lines.append("; Single-Head Attention")
    lines.append(f"; seq_len={seq_len}, d_head={d_head}")
    lines.append(f"; scale = 1/sqrt({d_head}) = {scale:.6f}")
    lines.append(";")
    lines.append(f"; Memory Map:")
    lines.append(f";   Q:        0x{q_addr:04X} ({seq_len}x{d_head})")
    lines.append(f";   K:        0x{k_addr:04X} ({seq_len}x{d_head})")
    lines.append(f";   V:        0x{v_addr:04X} ({seq_len}x{d_head})")
    lines.append(f";   Output:   0x{output_addr:04X} ({seq_len}x{d_head})")
    lines.append(f";   K^T:      0x{k_t_addr:04X} ({d_head}x{seq_len})")
    lines.append(f";   Scores:   0x{scores_addr:04X} ({seq_len}x{seq_len})")
    lines.append(f";   Weights:  0x{weights_addr:04X} ({seq_len}x{seq_len})")
    lines.append(";")
    lines.append("")

    # Step 1: Transpose K
    lines.append("; ============================================")
    lines.append("; Step 1: K_T = transpose(K)")
    lines.append(f"; ({seq_len}x{d_head}) -> ({d_head}x{seq_len})")
    lines.append("; ============================================")
    lines.append(f"    TRANSPOSE 0x{k_addr:04X}, 0x{k_t_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Step 2: scores = Q @ K_T
    lines.append("; ============================================")
    lines.append("; Step 2: scores = Q @ K^T")
    lines.append(f"; ({seq_len}x{d_head}) @ ({d_head}x{seq_len}) -> ({seq_len}x{seq_len})")
    lines.append("; ============================================")
    lines.append(f"    LOAD_W 0x{k_t_addr:04X}  ; Load K^T as weights")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{q_addr:04X}    ; Load Q as activations")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{scores_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Step 3: Scale scores (in-place)
    lines.append("; ============================================")
    lines.append("; Step 3: scores = scores / sqrt(d_k) [in-place]")
    lines.append(f"; scale = {scale:.6f} (Q4.4: {scale_int})")
    lines.append("; ============================================")
    lines.append(f"    SCALE 0x{scores_addr:04X}, {scale_int}")
    lines.append(f"    SYNC")
    lines.append("")

    # Step 4: Softmax (row-wise, in-place at scores_addr)
    # Note: SOFTMAX operates in-place, so we work directly on scores
    # The result stays at scores_addr (we'll use it as weights)
    lines.append("; ============================================")
    lines.append("; Step 4: weights = softmax(scores) [in-place]")
    lines.append(f"; Apply softmax to each row ({seq_len} elements)")
    lines.append("; ============================================")
    for row in range(seq_len):
        row_addr = scores_addr + row * seq_len
        lines.append(f"    SOFTMAX 0x{row_addr:04X}, {seq_len}  ; Row {row}")
    lines.append(f"    SYNC")
    lines.append("")

    # Update weights_addr to point to scores (since softmax is in-place)
    weights_addr = scores_addr

    # Step 5: output = weights @ V
    lines.append("; ============================================")
    lines.append("; Step 5: output = weights @ V")
    lines.append(f"; ({seq_len}x{seq_len}) @ ({seq_len}x{d_head}) -> ({seq_len}x{d_head})")
    lines.append("; ============================================")
    lines.append(f"    LOAD_W 0x{v_addr:04X}      ; Load V as weights")
    lines.append(f"    SYNC")
    lines.append(f"    LOAD_A 0x{weights_addr:04X} ; Load attention weights")
    lines.append(f"    SYNC")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append(f"    STORE 0x{output_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Done
    lines.append("; ============================================")
    lines.append("; Attention complete")
    lines.append(f"; Output at 0x{output_addr:04X}")
    lines.append("; ============================================")
    lines.append(f"    HALT")
    lines.append("")

    return "\n".join(lines)


def generate_test_data_binary(seq_len: int, d_head: int, seed: int = 42) -> dict:
    """
    Generate test Q, K, V matrices and pack as binary.

    Args:
        seq_len: Sequence length
        d_head: Head dimension
        seed: Random seed

    Returns:
        Dict with binary data for each matrix
    """
    np.random.seed(seed)

    # Generate random matrices
    q = np.random.randn(seq_len, d_head).astype(np.float32)
    k = np.random.randn(seq_len, d_head).astype(np.float32)
    v = np.random.randn(seq_len, d_head).astype(np.float32)

    # Quantize to INT8
    def quantize(arr):
        scale = np.abs(arr).max() / 127.0 if np.abs(arr).max() > 0 else 1.0
        return np.round(arr / scale).clip(-128, 127).astype(np.int8), scale

    q_int8, q_scale = quantize(q)
    k_int8, k_scale = quantize(k)
    v_int8, v_scale = quantize(v)

    return {
        'q': q_int8.tobytes(),
        'k': k_int8.tobytes(),
        'v': v_int8.tobytes(),
        'q_float': q,
        'k_float': k,
        'v_float': v,
        'scales': {'q': q_scale, 'k': k_scale, 'v': v_scale}
    }


def main():
    parser = argparse.ArgumentParser(description='Convert attention head to TPU format')
    parser.add_argument('--seq-len', type=int, default=DEFAULT_SEQ_LEN, help='Sequence length')
    parser.add_argument('--d-head', type=int, default=DEFAULT_D_HEAD, help='Head dimension')
    parser.add_argument('--output', type=str, default=None, help='Output assembly file')
    parser.add_argument('--binary', type=str, default=None, help='Output binary file')
    parser.add_argument('--test-data', action='store_true', help='Generate test data')
    args = parser.parse_args()

    # Setup paths
    model_dir = os.path.dirname(__file__)
    output_path = args.output or os.path.join(model_dir, 'attention.asm')
    binary_path = args.binary or os.path.join(model_dir, 'attention.bin')

    print("Attention Head -> TPU Conversion")
    print("=" * 60)
    print(f"Sequence length: {args.seq_len}")
    print(f"Head dimension: {args.d_head}")

    # Generate assembly
    print("\nGenerating TPU assembly...")
    asm_code = generate_attention_assembly(args.seq_len, args.d_head)

    # Save assembly
    with open(output_path, 'w') as f:
        f.write(asm_code)
    print(f"Assembly saved to: {output_path}")

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

    # Generate test data if requested
    if args.test_data:
        print("\nGenerating test data...")
        test_data = generate_test_data_binary(args.seq_len, args.d_head)

        # Save test data
        test_path = os.path.join(model_dir, 'test_data.npz')
        np.savez(test_path,
                 q=test_data['q_float'],
                 k=test_data['k_float'],
                 v=test_data['v_float'])
        print(f"Test data saved to: {test_path}")

        # Save INT8 binary data
        for name in ['q', 'k', 'v']:
            bin_path = os.path.join(model_dir, f'{name}_int8.bin')
            with open(bin_path, 'wb') as f:
                f.write(test_data[name])
            print(f"  {name}: {bin_path}")

    print("\n" + "=" * 60)
    print("Conversion complete!")
    print(f"\nTo run attention:")
    print(f"  1. Load Q to address 0x{MEMORY_MAP['q']:04X}")
    print(f"  2. Load K to address 0x{MEMORY_MAP['k']:04X}")
    print(f"  3. Load V to address 0x{MEMORY_MAP['v']:04X}")
    print(f"  4. Execute program")
    print(f"  5. Read output from 0x{MEMORY_MAP['output']:04X}")


if __name__ == '__main__':
    main()
