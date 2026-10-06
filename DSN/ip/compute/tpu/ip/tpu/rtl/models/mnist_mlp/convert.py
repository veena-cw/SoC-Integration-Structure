"""
MNIST MLP Conversion Script

Converts trained MNIST MLP to TPU assembly and binary.

Usage:
    python convert.py                          # Convert with default weights
    python convert.py --weights weights.npz    # Use specific weights file
    python convert.py --output mnist.asm       # Specify output file
"""

import argparse
import os
import sys
import numpy as np

# Add tiny_tpu to path
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

from model import MEMORY_MAP, INPUT_SIZE, HIDDEN_SIZE, OUTPUT_SIZE


def generate_tpu_assembly(weights_path: str = None) -> str:
    """
    Generate TPU assembly for MNIST MLP inference.

    The model performs:
        hidden = ReLU(input @ W1.T + b1)
        output = softmax(hidden @ W2.T + b2)

    Args:
        weights_path: Path to weights .npz file (optional, for verification)

    Returns:
        Assembly source code
    """
    # Memory addresses
    input_addr = MEMORY_MAP['input']
    hidden_addr = MEMORY_MAP['hidden']
    output_addr = MEMORY_MAP['output']
    fc1_weight_addr = MEMORY_MAP['fc1_weight']
    fc2_weight_addr = MEMORY_MAP['fc2_weight']

    # Scratch memory for intermediate results
    scratch_addr = 0x8000

    lines = []
    lines.append("; MNIST MLP Inference Program")
    lines.append("; Architecture: 784 -> 128 (ReLU) -> 10 (Softmax)")
    lines.append(";")
    lines.append(f"; Memory Map:")
    lines.append(f";   Input:      0x{input_addr:04X} ({INPUT_SIZE} bytes)")
    lines.append(f";   Hidden:     0x{hidden_addr:04X} ({HIDDEN_SIZE} bytes)")
    lines.append(f";   Output:     0x{output_addr:04X} ({OUTPUT_SIZE} bytes)")
    lines.append(f";   FC1 Weight: 0x{fc1_weight_addr:04X} ({INPUT_SIZE}x{HIDDEN_SIZE} bytes)")
    lines.append(f";   FC2 Weight: 0x{fc2_weight_addr:04X} ({HIDDEN_SIZE}x{OUTPUT_SIZE} bytes)")
    lines.append(";")
    lines.append("")

    # Layer 1: FC1 (784 -> 128)
    lines.append("; ============================================")
    lines.append("; Layer 1: FC1 (784 -> 128)")
    lines.append("; hidden = input @ W1.T + b1")
    lines.append("; ============================================")
    lines.append("")

    # For tiled matmul, we need to process in 8x8 tiles
    # Input: (1, 784) @ W1.T: (784, 128) -> (1, 128)
    # This requires multiple tiles since 784 > 8 and 128 > 8

    # Simplified: Use LOAD_W, LOAD_A, MATMUL sequence
    # The matrix controller handles tiling internally
    lines.append(f"    ; Load FC1 weights (784x128, transposed for weight-stationary)")
    lines.append(f"    LOAD_W 0x{fc1_weight_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Load input activations (1x784)")
    lines.append(f"    LOAD_A 0x{input_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Matrix multiply: (1x784) @ (784x128) -> (1x128)")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Store result to hidden buffer")
    lines.append(f"    STORE 0x{hidden_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Add bias: hidden = hidden + b1
    fc1_bias_addr = MEMORY_MAP['fc1_bias']
    lines.append(f"    ; Add FC1 bias: hidden = hidden + b1")
    lines.append(f"    ADD 0x{hidden_addr:04X}, 0x{fc1_bias_addr:04X}, 0x{hidden_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # ReLU activation (in-place at hidden_addr)
    lines.append("; Apply ReLU to hidden activations [in-place]")
    lines.append(f"    ACT_RELU 0x{hidden_addr:04X}, {HIDDEN_SIZE}")
    lines.append(f"    SYNC")
    lines.append("")

    # Layer 2: FC2 (128 -> 10)
    lines.append("; ============================================")
    lines.append("; Layer 2: FC2 (128 -> 10)")
    lines.append("; output = hidden @ W2.T + b2")
    lines.append("; ============================================")
    lines.append("")

    lines.append(f"    ; Load FC2 weights (128x10, transposed)")
    lines.append(f"    LOAD_W 0x{fc2_weight_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Load hidden activations (1x128)")
    lines.append(f"    LOAD_A 0x{hidden_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Matrix multiply: (1x128) @ (128x10) -> (1x10)")
    lines.append(f"    MATMUL")
    lines.append(f"    SYNC")
    lines.append("")
    lines.append(f"    ; Store result to output buffer")
    lines.append(f"    STORE 0x{output_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Add bias: output = output + b2
    fc2_bias_addr = MEMORY_MAP['fc2_bias']
    lines.append(f"    ; Add FC2 bias: output = output + b2")
    lines.append(f"    ADD 0x{output_addr:04X}, 0x{fc2_bias_addr:04X}, 0x{output_addr:04X}")
    lines.append(f"    SYNC")
    lines.append("")

    # Softmax activation (in-place)
    lines.append("; Apply Softmax to output (10 elements) [in-place]")
    lines.append(f"    SOFTMAX 0x{output_addr:04X}, {OUTPUT_SIZE}")
    lines.append(f"    SYNC")
    lines.append("")

    # Done
    lines.append("; ============================================")
    lines.append("; Inference complete")
    lines.append("; Output probabilities at 0x{:04X}".format(output_addr))
    lines.append("; ============================================")
    lines.append(f"    HALT")
    lines.append("")

    return "\n".join(lines)


def generate_weight_loading_assembly(weights: dict) -> str:
    """
    Generate assembly to initialize weights in unified buffer.

    This would be run once at startup before inference.

    Args:
        weights: Dict of weight arrays

    Returns:
        Assembly source code
    """
    lines = []
    lines.append("; MNIST MLP Weight Initialization")
    lines.append("; Run this once before inference loop")
    lines.append("")

    # In practice, weights are loaded via DMA or host interface
    # This is a placeholder showing the memory layout
    lines.append("; Weights are loaded by host via DMA:")
    lines.append(f";   FC1 weights: {weights['fc1.weight'].shape} -> 0x{MEMORY_MAP['fc1_weight']:04X}")
    lines.append(f";   FC1 bias:    {weights['fc1.bias'].shape} -> 0x{MEMORY_MAP['fc1_bias']:04X}")
    lines.append(f";   FC2 weights: {weights['fc2.weight'].shape} -> 0x{MEMORY_MAP['fc2_weight']:04X}")
    lines.append(f";   FC2 bias:    {weights['fc2.bias'].shape} -> 0x{MEMORY_MAP['fc2_bias']:04X}")
    lines.append("")

    return "\n".join(lines)


def convert_weights_to_tpu_format(weights: dict) -> dict:
    """
    Convert weights to TPU-friendly format.

    - Transpose weight matrices for weight-stationary dataflow
    - Pack into contiguous arrays

    Args:
        weights: Dict from model training

    Returns:
        Dict with TPU-formatted weights
    """
    tpu_weights = {}

    # FC1: weight is (128, 784), we need (784, 128) for weight-stationary
    # In weight-stationary, weights are loaded column by column
    w1 = weights['fc1.weight']  # (128, 784)
    b1 = weights['fc1.bias']    # (128,)

    # Transpose for systolic array loading
    tpu_weights['fc1_weight'] = w1.T.copy()  # (784, 128)
    tpu_weights['fc1_bias'] = b1.copy()

    # FC2: weight is (10, 128), we need (128, 10)
    w2 = weights['fc2.weight']  # (10, 128)
    b2 = weights['fc2.bias']    # (10,)

    tpu_weights['fc2_weight'] = w2.T.copy()  # (128, 10)
    tpu_weights['fc2_bias'] = b2.copy()

    return tpu_weights


def pack_weights_binary(tpu_weights: dict) -> bytes:
    """
    Pack weights into binary format for loading.

    Layout matches MEMORY_MAP addresses.

    Args:
        tpu_weights: TPU-formatted weights

    Returns:
        Binary data to load into unified buffer starting at 0x5000
    """
    # Calculate total size
    fc1_w_size = tpu_weights['fc1_weight'].size
    fc1_b_size = tpu_weights['fc1_bias'].size
    fc2_w_size = tpu_weights['fc2_weight'].size
    fc2_b_size = tpu_weights['fc2_bias'].size

    total_size = fc1_w_size + fc1_b_size + fc2_w_size + fc2_b_size

    # Pack in order
    data = bytearray()
    data.extend(tpu_weights['fc1_weight'].astype(np.int8).tobytes())
    data.extend(tpu_weights['fc1_bias'].astype(np.int8).tobytes())
    data.extend(tpu_weights['fc2_weight'].astype(np.int8).tobytes())
    data.extend(tpu_weights['fc2_bias'].astype(np.int8).tobytes())

    return bytes(data)


def main():
    parser = argparse.ArgumentParser(description='Convert MNIST MLP to TPU format')
    parser.add_argument('--weights', type=str, default=None, help='Path to weights .npz file')
    parser.add_argument('--output', type=str, default=None, help='Output assembly file')
    parser.add_argument('--binary', type=str, default=None, help='Output binary file')
    parser.add_argument('--weights-bin', type=str, default=None, help='Output weights binary')
    args = parser.parse_args()

    # Setup paths
    model_dir = os.path.dirname(__file__)
    weights_path = args.weights or os.path.join(model_dir, 'weights_int8.npz')
    output_path = args.output or os.path.join(model_dir, 'mnist_mlp.asm')
    binary_path = args.binary or os.path.join(model_dir, 'mnist_mlp.bin')
    weights_bin_path = args.weights_bin or os.path.join(model_dir, 'mnist_weights.bin')

    print("MNIST MLP -> TPU Conversion")
    print("=" * 60)

    # Generate assembly
    print("\nGenerating TPU assembly...")
    asm_code = generate_tpu_assembly()

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

    # Load and convert weights if available
    if os.path.exists(weights_path):
        print(f"\nLoading weights from: {weights_path}")
        data = np.load(weights_path)
        weights = {k: data[k] for k in data.files if not k.endswith('_scale')}

        print("Weight shapes:")
        for name, arr in weights.items():
            print(f"  {name}: {arr.shape}")

        # Convert to TPU format
        tpu_weights = convert_weights_to_tpu_format(weights)
        print("\nTPU weight shapes (transposed):")
        for name, arr in tpu_weights.items():
            print(f"  {name}: {arr.shape}")

        # Pack binary
        weights_bin = pack_weights_binary(tpu_weights)
        with open(weights_bin_path, 'wb') as f:
            f.write(weights_bin)
        print(f"\nWeights binary saved to: {weights_bin_path} ({len(weights_bin)} bytes)")
    else:
        print(f"\nWarning: Weights file not found: {weights_path}")
        print("Run train.py first to generate weights")

    print("\n" + "=" * 60)
    print("Conversion complete!")
    print(f"\nTo run inference:")
    print(f"  1. Load weights binary to address 0x{MEMORY_MAP['fc1_weight']:04X}")
    print(f"  2. Load input image to address 0x{MEMORY_MAP['input']:04X}")
    print(f"  3. Execute program binary")
    print(f"  4. Read output from address 0x{MEMORY_MAP['output']:04X}")


if __name__ == '__main__':
    main()
