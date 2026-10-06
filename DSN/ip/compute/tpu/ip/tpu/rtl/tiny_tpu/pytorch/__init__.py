"""
tiny-tpu PyTorch Integration Package

Extract and convert PyTorch models for TPU execution.

Usage:
    from tiny_tpu.pytorch import extract_graph, quantize_for_tpu
    import torch.nn as nn

    model = nn.Sequential(
        nn.Linear(784, 128),
        nn.ReLU(),
        nn.Linear(128, 10)
    )

    # Extract compute graph
    graph = extract_graph(model, input_shape=(1, 784))

    # Quantize weights for INT8 TPU
    quantized_weights, metadata = quantize_for_tpu(model)
"""

from .extractor import (
    ExtractedLayer,
    ModelExtractor,
    extract_graph,
    extract_weights,
)

from .quantizer import (
    QuantizationConfig,
    QuantizedTensor,
    CalibrationStats,
    Quantizer,
    quantize_for_tpu,
)

__all__ = [
    # Extractor
    'ExtractedLayer',
    'ModelExtractor',
    'extract_graph',
    'extract_weights',
    # Quantizer
    'QuantizationConfig',
    'QuantizedTensor',
    'CalibrationStats',
    'Quantizer',
    'quantize_for_tpu',
]
