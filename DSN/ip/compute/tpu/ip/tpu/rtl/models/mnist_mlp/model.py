"""
MNIST MLP Model Definition

A simple multilayer perceptron for MNIST digit classification.
Architecture: 784 -> 128 -> ReLU -> 10 -> Softmax

This model is designed to run on the tiny-tpu:
- Uses INT8-friendly operations (Linear, ReLU, Softmax)
- Small enough to fit in 64KB unified buffer
- Demonstrates end-to-end inference pipeline
"""

import numpy as np

try:
    import torch
    import torch.nn as nn
    import torch.nn.functional as F
    TORCH_AVAILABLE = True
except ImportError:
    TORCH_AVAILABLE = False
    torch = None
    nn = None
    F = None


# Only define PyTorch class if torch is available
if TORCH_AVAILABLE:
    class MNISTMLPTorch(nn.Module):
        """PyTorch implementation of MNIST MLP."""

        def __init__(self, hidden_size: int = 128):
            """
            Initialize MNIST MLP.

            Args:
                hidden_size: Number of hidden units (default 128)
            """
            super().__init__()
            self.fc1 = nn.Linear(784, hidden_size)
            self.fc2 = nn.Linear(hidden_size, 10)

        def forward(self, x):
            """
            Forward pass.

            Args:
                x: Input tensor of shape (batch, 784) or (batch, 1, 28, 28)

            Returns:
                Output logits of shape (batch, 10)
            """
            # Flatten if needed
            if x.dim() > 2:
                x = x.view(x.size(0), -1)

            x = self.fc1(x)
            x = F.relu(x)
            x = self.fc2(x)
            return x

        def forward_with_softmax(self, x):
            """Forward pass with softmax for inference."""
            logits = self.forward(x)
            return F.softmax(logits, dim=-1)


class MNISTMLPNumpy:
    """
    NumPy implementation of MNIST MLP for TPU simulation.

    This class mirrors the PyTorch model but uses numpy arrays
    and can be used with the TPU simulator.
    """

    def __init__(self, weights: dict = None):
        """
        Initialize with optional pre-trained weights.

        Args:
            weights: Dict with 'fc1.weight', 'fc1.bias', 'fc2.weight', 'fc2.bias'
        """
        self.weights = weights or {}

    def load_weights(self, weights: dict):
        """Load weights from dictionary."""
        self.weights = weights

    def relu(self, x: np.ndarray) -> np.ndarray:
        """ReLU activation."""
        return np.maximum(0, x)

    def softmax(self, x: np.ndarray, axis: int = -1) -> np.ndarray:
        """Numerically stable softmax."""
        x_max = np.max(x, axis=axis, keepdims=True)
        exp_x = np.exp(x - x_max)
        return exp_x / np.sum(exp_x, axis=axis, keepdims=True)

    def forward(self, x: np.ndarray) -> np.ndarray:
        """
        Forward pass using numpy.

        Args:
            x: Input array of shape (batch, 784)

        Returns:
            Output logits of shape (batch, 10)
        """
        # Flatten if needed
        if x.ndim > 2:
            x = x.reshape(x.shape[0], -1)

        # FC1: (batch, 784) @ (784, 128) + (128,) -> (batch, 128)
        w1 = self.weights.get('fc1.weight')  # Shape: (128, 784)
        b1 = self.weights.get('fc1.bias')    # Shape: (128,)

        if w1 is None or b1 is None:
            raise ValueError("Weights not loaded. Call load_weights() first.")

        x = x @ w1.T + b1

        # ReLU
        x = self.relu(x)

        # FC2: (batch, 128) @ (128, 10) + (10,) -> (batch, 10)
        w2 = self.weights.get('fc2.weight')  # Shape: (10, 128)
        b2 = self.weights.get('fc2.bias')    # Shape: (10,)

        x = x @ w2.T + b2

        return x

    def predict(self, x: np.ndarray) -> np.ndarray:
        """
        Predict class probabilities.

        Args:
            x: Input array of shape (batch, 784)

        Returns:
            Probabilities of shape (batch, 10)
        """
        logits = self.forward(x)
        return self.softmax(logits)

    def predict_class(self, x: np.ndarray) -> np.ndarray:
        """
        Predict class labels.

        Args:
            x: Input array of shape (batch, 784)

        Returns:
            Class labels of shape (batch,)
        """
        probs = self.predict(x)
        return np.argmax(probs, axis=-1)


def create_model(hidden_size: int = 128) -> 'MNISTMLPTorch':
    """
    Create a new MNIST MLP model.

    Args:
        hidden_size: Number of hidden units

    Returns:
        PyTorch model
    """
    if not TORCH_AVAILABLE:
        raise ImportError("PyTorch is required to create the model")
    return MNISTMLPTorch(hidden_size)


def get_model_info() -> dict:
    """Get model architecture information."""
    return {
        'name': 'MNIST MLP',
        'input_shape': (1, 784),
        'output_shape': (1, 10),
        'hidden_size': 128,
        'layers': [
            {'name': 'fc1', 'type': 'Linear', 'in': 784, 'out': 128},
            {'name': 'relu', 'type': 'ReLU'},
            {'name': 'fc2', 'type': 'Linear', 'in': 128, 'out': 10},
            {'name': 'softmax', 'type': 'Softmax', 'dim': -1},
        ],
        'total_params': 784 * 128 + 128 + 128 * 10 + 10,  # 101,770
        'memory_requirements': {
            'weights_bytes': (784 * 128 + 128 + 128 * 10 + 10),  # INT8
            'activations_bytes': 784 + 128 + 10,  # Peak activation size
        }
    }


# Model architecture constants for TPU compilation
INPUT_SIZE = 784
HIDDEN_SIZE = 128
OUTPUT_SIZE = 10

# Memory layout for TPU (addresses in unified buffer)
# Note: Full MNIST model exceeds 64KB. This layout is for demo/testing
# with tiled or quantized weights. For production, use external DRAM.
MEMORY_MAP = {
    'input': 0x0000,           # Input activations (784 bytes)
    'hidden': 0x0400,          # Hidden activations (128 bytes)
    'output': 0x0500,          # Output activations (10 bytes)
    'fc1_weight': 0x1000,      # FC1 weights (tiled: 8x8 tiles loaded on demand)
    'fc1_bias': 0x2000,        # FC1 bias (128 bytes)
    'fc2_weight': 0x3000,      # FC2 weights (128x10 = 1,280 bytes)
    'fc2_bias': 0x4000,        # FC2 bias (10 bytes)
}


if __name__ == '__main__':
    # Test model creation
    info = get_model_info()
    print(f"Model: {info['name']}")
    print(f"Input shape: {info['input_shape']}")
    print(f"Output shape: {info['output_shape']}")
    print(f"Total parameters: {info['total_params']:,}")
    print(f"\nLayers:")
    for layer in info['layers']:
        print(f"  {layer}")

    if TORCH_AVAILABLE:
        model = create_model()
        print(f"\nPyTorch model created:")
        print(model)

        # Test forward pass
        x = torch.randn(1, 784)
        y = model(x)
        print(f"\nTest forward pass: {x.shape} -> {y.shape}")
