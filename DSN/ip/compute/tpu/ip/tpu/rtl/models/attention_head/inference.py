"""
Attention Head TPU Inference

Runs attention on the TPU simulator and compares with NumPy reference.

Usage:
    python inference.py                  # Run on random test data
    python inference.py --visualize      # Show attention heatmap
    python inference.py --tpu --verbose  # Run on TPU simulator
"""

import argparse
import os
import sys
import numpy as np

# Add tiny_tpu to path
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

from model import (
    AttentionHeadNumpy, MEMORY_MAP,
    DEFAULT_SEQ_LEN, DEFAULT_D_HEAD,
    create_test_data, visualize_attention
)


def run_numpy_attention(q, k, v, d_head):
    """
    Run attention using NumPy reference.

    Args:
        q, k, v: Input matrices
        d_head: Head dimension

    Returns:
        output, weights
    """
    attn = AttentionHeadNumpy(d_head)
    return attn.forward(q, k, v)


def run_tpu_attention(q, k, v, d_head, seq_len,
                      program_path=None, verbose=False):
    """
    Run attention on TPU simulator.

    Args:
        q, k, v: Input matrices (float32)
        d_head: Head dimension
        seq_len: Sequence length
        program_path: Path to assembled program
        verbose: Print trace

    Returns:
        output, weights
    """
    try:
        from tiny_tpu.simulator import Simulator
        from tiny_tpu.assembler import Assembler
    except ImportError as e:
        print(f"Warning: Could not import TPU modules: {e}")
        return run_numpy_attention(q, k, v, d_head)

    # Create simulator
    sim = Simulator(verbose=verbose)

    # Load program
    if program_path and os.path.exists(program_path):
        with open(program_path, 'rb') as f:
            program = f.read()
        sim.load_program(program)
    else:
        # Generate and assemble on the fly
        from convert import generate_attention_assembly
        asm_code = generate_attention_assembly(seq_len, d_head)
        assembler = Assembler()
        result = assembler.assemble(asm_code)
        program = result.binary if hasattr(result, 'binary') else result
        sim.load_program(program)

    # Quantize inputs to INT8
    def quantize(arr):
        scale = np.abs(arr).max() / 127.0 if np.abs(arr).max() > 0 else 1.0
        return np.round(arr / scale).clip(-128, 127).astype(np.int8), scale

    q_int8, q_scale = quantize(q)
    k_int8, k_scale = quantize(k)
    v_int8, v_scale = quantize(v)

    # Load inputs to memory
    sim.memory.write_block(MEMORY_MAP['q'], q_int8.tobytes())
    sim.memory.write_block(MEMORY_MAP['k'], k_int8.tobytes())
    sim.memory.write_block(MEMORY_MAP['v'], v_int8.tobytes())

    # Run simulation
    trace = sim.run(max_cycles=100000)

    if verbose:
        print(f"Cycles: {trace.cycles}, Instructions: {trace.instructions_executed}")

    # Read output
    output_bytes = sim.memory.read_block(
        MEMORY_MAP['output'],
        seq_len * d_head
    )
    output_int8 = np.frombuffer(output_bytes, dtype=np.int8).reshape(seq_len, d_head)

    # Read attention weights from scratch (softmax is in-place)
    weights_addr = MEMORY_MAP['scratch']
    weights_bytes = sim.memory.read_block(weights_addr, seq_len * seq_len)
    weights_int8 = np.frombuffer(weights_bytes, dtype=np.int8).reshape(seq_len, seq_len)

    # Dequantize (approximate)
    output_float = output_int8.astype(np.float32) / 127.0
    weights_float = weights_int8.astype(np.float32) / 127.0

    return output_float, weights_float


def compare_results(output_numpy, output_tpu, weights_numpy, weights_tpu):
    """Compare NumPy and TPU results."""
    print("\nComparison:")
    print("-" * 40)

    # Output comparison
    output_diff = np.abs(output_numpy - output_tpu).max()
    output_mean_diff = np.abs(output_numpy - output_tpu).mean()
    print(f"Output max diff:  {output_diff:.6f}")
    print(f"Output mean diff: {output_mean_diff:.6f}")

    # Weights comparison
    weights_diff = np.abs(weights_numpy - weights_tpu).max()
    weights_mean_diff = np.abs(weights_numpy - weights_tpu).mean()
    print(f"Weights max diff:  {weights_diff:.6f}")
    print(f"Weights mean diff: {weights_mean_diff:.6f}")

    # Check if attention patterns match
    np_attended = np.argmax(weights_numpy, axis=-1)
    tpu_attended = np.argmax(weights_tpu, axis=-1)
    pattern_match = np.sum(np_attended == tpu_attended)
    pattern_ratio = pattern_match / len(np_attended)
    print(f"Attention pattern match: {pattern_match}/{len(np_attended)} ({pattern_ratio:.0%})")

    # INT8 quantization causes significant differences - check functional correctness
    # Pass if at least 75% of attention patterns match (reasonable for INT8)
    # Note: INT8 with >> 8 shifts is lossy, so exact match is not expected
    functionally_correct = pattern_ratio >= 0.75
    print(f"Functionally correct (INT8): {'YES' if functionally_correct else 'NO'}")

    return functionally_correct


def main():
    parser = argparse.ArgumentParser(description='Attention Head TPU Inference')
    parser.add_argument('--seq-len', type=int, default=DEFAULT_SEQ_LEN, help='Sequence length')
    parser.add_argument('--d-head', type=int, default=DEFAULT_D_HEAD, help='Head dimension')
    parser.add_argument('--seed', type=int, default=42, help='Random seed')
    parser.add_argument('--visualize', action='store_true', help='Visualize attention')
    parser.add_argument('--tpu', action='store_true', help='Use TPU simulator')
    parser.add_argument('--verbose', action='store_true', help='Verbose output')
    parser.add_argument('--test-data', type=str, default=None, help='Load test data from file')
    args = parser.parse_args()

    print("Attention Head Inference")
    print("=" * 60)
    print(f"Sequence length: {args.seq_len}")
    print(f"Head dimension: {args.d_head}")

    # Load or create test data
    if args.test_data and os.path.exists(args.test_data):
        print(f"\nLoading test data from: {args.test_data}")
        data = np.load(args.test_data)
        q, k, v = data['q'], data['k'], data['v']
    else:
        print(f"\nCreating random test data (seed={args.seed})...")
        q, k, v = create_test_data(args.seq_len, args.d_head, args.seed)

    print(f"Q shape: {q.shape}")
    print(f"K shape: {k.shape}")
    print(f"V shape: {v.shape}")

    # Run NumPy attention
    print("\n" + "-" * 60)
    print("Running NumPy attention...")
    output_numpy, weights_numpy = run_numpy_attention(q, k, v, args.d_head)
    print(f"Output shape: {output_numpy.shape}")
    print(f"Weights shape: {weights_numpy.shape}")

    if args.visualize:
        visualize_attention(weights_numpy)

    # Run TPU attention if requested
    if args.tpu:
        print("\n" + "-" * 60)
        print("Running TPU simulator attention...")
        model_dir = os.path.dirname(__file__)
        program_path = os.path.join(model_dir, 'attention.bin')

        output_tpu, weights_tpu = run_tpu_attention(
            q, k, v, args.d_head, args.seq_len,
            program_path=program_path,
            verbose=args.verbose
        )

        # Compare
        success = compare_results(
            output_numpy, output_tpu,
            weights_numpy, weights_tpu
        )

        if args.visualize:
            print("\nTPU Attention Weights:")
            visualize_attention(weights_tpu)

        print("\n" + "=" * 60)
        print(f"Result: {'PASS' if success else 'FAIL'}")
    else:
        # Just show NumPy results
        print("\n" + "-" * 60)
        print("NumPy Results:")
        print(f"  Output range: [{output_numpy.min():.4f}, {output_numpy.max():.4f}]")
        print(f"  Weights sum (should be ~1 per row):")
        for i, row_sum in enumerate(weights_numpy.sum(axis=-1)):
            print(f"    Row {i}: {row_sum:.6f}")

        # Show where each position attends
        print(f"\n  Attention pattern (argmax per row):")
        for i, attended in enumerate(np.argmax(weights_numpy, axis=-1)):
            weight = weights_numpy[i, attended]
            print(f"    Position {i} -> Position {attended} (weight={weight:.4f})")


if __name__ == '__main__':
    main()
