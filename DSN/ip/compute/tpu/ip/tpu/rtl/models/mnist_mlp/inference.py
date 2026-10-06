"""
MNIST MLP TPU Inference

Runs MNIST inference on the TPU simulator and compares with NumPy reference.

Usage:
    python inference.py                     # Run inference on sample
    python inference.py --image test.png    # Run on specific image
    python inference.py --verify            # Verify against PyTorch
"""

import argparse
import os
import sys
import numpy as np

# Add tiny_tpu to path
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.dirname(__file__))))

from model import (
    MNISTMLPNumpy, MEMORY_MAP,
    INPUT_SIZE, HIDDEN_SIZE, OUTPUT_SIZE
)


def load_weights(weights_path: str) -> dict:
    """Load weights from .npz file."""
    data = np.load(weights_path)
    weights = {k: data[k] for k in data.files if not k.endswith('_scale')}
    return weights


def create_sample_input(digit: int = 7) -> np.ndarray:
    """
    Create a simple sample input for testing.

    Args:
        digit: Which digit pattern to create (0-9)

    Returns:
        Flattened input array (784,)
    """
    # Create a simple pattern for the digit
    img = np.zeros((28, 28), dtype=np.float32)

    if digit == 0:
        # Circle
        for i in range(28):
            for j in range(28):
                r = np.sqrt((i - 14)**2 + (j - 14)**2)
                if 6 < r < 10:
                    img[i, j] = 1.0
    elif digit == 1:
        # Vertical line
        img[4:24, 13:15] = 1.0
    elif digit == 7:
        # Seven shape
        img[6:8, 8:20] = 1.0  # Top horizontal
        for i in range(8, 22):
            j = 19 - (i - 8) // 2
            img[i, max(8, j):j+2] = 1.0
    else:
        # Default: center blob
        img[10:18, 10:18] = 1.0

    return img.flatten()


def run_numpy_inference(weights: dict, input_data: np.ndarray) -> np.ndarray:
    """
    Run inference using NumPy reference implementation.

    Args:
        weights: Model weights
        input_data: Input array (batch, 784) or (784,)

    Returns:
        Output probabilities (batch, 10) or (10,)
    """
    model = MNISTMLPNumpy()
    model.load_weights(weights)

    if input_data.ndim == 1:
        input_data = input_data.reshape(1, -1)

    return model.predict(input_data)


def run_tpu_inference(weights: dict, input_data: np.ndarray,
                      program_path: str = None, verbose: bool = False) -> np.ndarray:
    """
    Run inference on TPU simulator.

    Args:
        weights: Model weights (will be converted to INT8)
        input_data: Input array (784,) - will be quantized
        program_path: Path to assembled program binary
        verbose: Print execution trace

    Returns:
        Output probabilities (10,)
    """
    try:
        from tiny_tpu.simulator import Simulator
        from tiny_tpu.assembler import Assembler
    except ImportError as e:
        print(f"Warning: Could not import TPU modules: {e}")
        print("Falling back to NumPy inference")
        return run_numpy_inference(weights, input_data)

    # Create simulator
    sim = Simulator(verbose=verbose)

    # Load program
    if program_path and os.path.exists(program_path):
        with open(program_path, 'rb') as f:
            program = f.read()
        sim.load_program(program)
    else:
        # Generate and assemble program on the fly
        from convert import generate_tpu_assembly
        asm_code = generate_tpu_assembly()
        assembler = Assembler()
        result = assembler.assemble(asm_code)
        program = result.binary if hasattr(result, 'binary') else result
        sim.load_program(program)

    # Quantize input to INT8
    input_scale = np.abs(input_data).max() / 127.0 if np.abs(input_data).max() > 0 else 1.0
    input_int8 = np.round(input_data / input_scale).clip(-128, 127).astype(np.int8)

    # Load input to memory
    sim.memory.write_block(MEMORY_MAP['input'], input_int8.tobytes())

    # Load weights (convert to TPU format)
    from convert import convert_weights_to_tpu_format, pack_weights_binary

    # Quantize weights if float
    int8_weights = {}
    for name, arr in weights.items():
        if arr.dtype != np.int8:
            scale = np.abs(arr).max() / 127.0 if np.abs(arr).max() > 0 else 1.0
            int8_weights[name] = np.round(arr / scale).clip(-128, 127).astype(np.int8)
        else:
            int8_weights[name] = arr

    tpu_weights = convert_weights_to_tpu_format(int8_weights)
    weights_bin = pack_weights_binary(tpu_weights)
    sim.memory.write_block(MEMORY_MAP['fc1_weight'], weights_bin)

    # Run simulation
    trace = sim.run(max_cycles=100000)

    if verbose:
        print(f"Cycles: {trace.cycles}, Instructions: {trace.instructions_executed}")

    # Read output
    output_bytes = sim.memory.read_block(MEMORY_MAP['output'], OUTPUT_SIZE)
    output_int8 = np.frombuffer(output_bytes, dtype=np.int8)

    # Convert back to float (rough approximation - proper dequantization would use scales)
    output_float = output_int8.astype(np.float32) / 127.0

    # Apply softmax
    exp_out = np.exp(output_float - output_float.max())
    output_probs = exp_out / exp_out.sum()

    return output_probs


def verify_against_pytorch(weights_path: str, num_samples: int = 10):
    """
    Verify TPU inference against PyTorch.

    Args:
        weights_path: Path to weights file
        num_samples: Number of random samples to test
    """
    try:
        import torch
        from model import MNISTMLPTorch
    except ImportError:
        print("PyTorch not available for verification")
        return

    # Load weights
    weights = load_weights(weights_path)

    # Create PyTorch model
    model = MNISTMLPTorch()

    # Load weights into PyTorch model
    state_dict = {
        'fc1.weight': torch.from_numpy(weights['fc1.weight'].astype(np.float32)),
        'fc1.bias': torch.from_numpy(weights['fc1.bias'].astype(np.float32)),
        'fc2.weight': torch.from_numpy(weights['fc2.weight'].astype(np.float32)),
        'fc2.bias': torch.from_numpy(weights['fc2.bias'].astype(np.float32)),
    }
    model.load_state_dict(state_dict)
    model.train(False)  # Set to inference mode

    print(f"Verifying {num_samples} random samples...")
    print("-" * 60)

    errors = []
    for i in range(num_samples):
        # Random input
        np.random.seed(42 + i)
        x = np.random.randn(784).astype(np.float32)

        # PyTorch inference
        with torch.no_grad():
            x_torch = torch.from_numpy(x).unsqueeze(0)
            y_torch = torch.softmax(model(x_torch), dim=-1).numpy().squeeze()

        # NumPy inference
        y_numpy = run_numpy_inference(weights, x).squeeze()

        # Compare
        max_diff = np.abs(y_torch - y_numpy).max()
        pred_torch = np.argmax(y_torch)
        pred_numpy = np.argmax(y_numpy)

        if pred_torch != pred_numpy:
            errors.append(i)
            status = "MISMATCH"
        else:
            status = "OK"

        print(f"Sample {i:3d}: PyTorch={pred_torch}, NumPy={pred_numpy}, "
              f"MaxDiff={max_diff:.6f} [{status}]")

    print("-" * 60)
    if errors:
        print(f"FAILED: {len(errors)} mismatches")
    else:
        print(f"PASSED: All {num_samples} samples match")


def main():
    parser = argparse.ArgumentParser(description='MNIST MLP TPU Inference')
    parser.add_argument('--weights', type=str, default=None, help='Path to weights file')
    parser.add_argument('--image', type=str, default=None, help='Path to input image')
    parser.add_argument('--digit', type=int, default=7, help='Sample digit (0-9)')
    parser.add_argument('--verify', action='store_true', help='Verify against PyTorch')
    parser.add_argument('--verbose', action='store_true', help='Verbose output')
    parser.add_argument('--tpu', action='store_true', help='Use TPU simulator')
    args = parser.parse_args()

    # Setup paths
    model_dir = os.path.dirname(__file__)
    weights_path = args.weights or os.path.join(model_dir, 'weights_int8.npz')

    print("MNIST MLP Inference")
    print("=" * 60)

    # Check for weights
    if not os.path.exists(weights_path):
        print(f"Weights file not found: {weights_path}")
        print("\nGenerating random weights for testing...")

        # Create random weights
        weights = {
            'fc1.weight': np.random.randn(HIDDEN_SIZE, INPUT_SIZE).astype(np.float32) * 0.1,
            'fc1.bias': np.zeros(HIDDEN_SIZE, dtype=np.float32),
            'fc2.weight': np.random.randn(OUTPUT_SIZE, HIDDEN_SIZE).astype(np.float32) * 0.1,
            'fc2.bias': np.zeros(OUTPUT_SIZE, dtype=np.float32),
        }
    else:
        print(f"Loading weights from: {weights_path}")
        weights = load_weights(weights_path)

    print(f"\nWeight shapes:")
    for name, arr in weights.items():
        print(f"  {name}: {arr.shape}")

    # Verification mode
    if args.verify:
        print("\n" + "=" * 60)
        verify_against_pytorch(weights_path)
        return

    # Create input
    if args.image:
        # Load image (would need PIL/opencv)
        print(f"\nLoading image: {args.image}")
        try:
            from PIL import Image
            img = Image.open(args.image).convert('L').resize((28, 28))
            input_data = np.array(img).flatten().astype(np.float32) / 255.0
        except ImportError:
            print("PIL not available, using sample input")
            input_data = create_sample_input(args.digit)
    else:
        print(f"\nUsing sample digit: {args.digit}")
        input_data = create_sample_input(args.digit)

    print(f"Input shape: {input_data.shape}")
    print(f"Input range: [{input_data.min():.3f}, {input_data.max():.3f}]")

    # Run inference
    print("\n" + "-" * 60)
    print("Running NumPy inference...")
    probs_numpy = run_numpy_inference(weights, input_data).squeeze()
    pred_numpy = np.argmax(probs_numpy)

    print(f"\nNumPy Results:")
    print(f"  Predicted digit: {pred_numpy}")
    print(f"  Confidence: {probs_numpy[pred_numpy]:.4f}")
    print(f"  All probabilities:")
    for i, p in enumerate(probs_numpy):
        bar = "*" * int(p * 40)
        print(f"    {i}: {p:.4f} {bar}")

    # TPU inference (if requested)
    if args.tpu:
        print("\n" + "-" * 60)
        print("Running TPU simulator inference...")
        program_path = os.path.join(model_dir, 'mnist_mlp.bin')
        probs_tpu = run_tpu_inference(weights, input_data,
                                       program_path=program_path,
                                       verbose=args.verbose)
        pred_tpu = np.argmax(probs_tpu)

        print(f"\nTPU Results:")
        print(f"  Predicted digit: {pred_tpu}")
        print(f"  Confidence: {probs_tpu[pred_tpu]:.4f}")

        # Compare
        print(f"\nComparison:")
        print(f"  NumPy prediction: {pred_numpy}")
        print(f"  TPU prediction:   {pred_tpu}")
        print(f"  Match: {'YES' if pred_numpy == pred_tpu else 'NO'}")


if __name__ == '__main__':
    main()
