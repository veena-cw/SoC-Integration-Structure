"""
MNIST MLP Demo Model

A simple multilayer perceptron for MNIST digit classification,
designed to demonstrate the tiny-tpu inference pipeline.

Architecture: 784 -> 128 (ReLU) -> 10 (Softmax)

Usage:
    # Train the model
    python train.py --epochs 5

    # Convert to TPU format
    python convert.py

    # Run inference
    python inference.py --digit 7
    python inference.py --tpu --verbose
"""

from .model import (
    MNISTMLPNumpy,
    create_model,
    get_model_info,
    MEMORY_MAP,
    INPUT_SIZE,
    HIDDEN_SIZE,
    OUTPUT_SIZE,
)

try:
    from .model import MNISTMLPTorch
except ImportError:
    MNISTMLPTorch = None

__all__ = [
    'MNISTMLPTorch',
    'MNISTMLPNumpy',
    'create_model',
    'get_model_info',
    'MEMORY_MAP',
    'INPUT_SIZE',
    'HIDDEN_SIZE',
    'OUTPUT_SIZE',
]
