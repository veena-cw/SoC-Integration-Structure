"""
tiny-tpu PyTorch Model Extractor

Extracts computation graphs from PyTorch models for TPU compilation.

Usage:
    from tiny_tpu.pytorch import extract_graph
    import torch.nn as nn

    model = nn.Sequential(
        nn.Linear(784, 128),
        nn.ReLU(),
        nn.Linear(128, 10)
    )

    graph = extract_graph(model, input_shape=(1, 784))
"""

from typing import List, Dict, Tuple, Optional, Any
from dataclasses import dataclass, field
import numpy as np

# Import from compiler to build compute graph
import sys
import os
sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

try:
    from ..compiler import ComputeGraph, OpType
except ImportError:
    # Fallback for standalone usage
    ComputeGraph = None
    OpType = None


@dataclass
class ExtractedLayer:
    """Represents an extracted layer from PyTorch model."""
    name: str
    layer_type: str
    input_shape: Tuple[int, ...]
    output_shape: Tuple[int, ...]
    params: Dict[str, Any] = field(default_factory=dict)
    weight: Optional[np.ndarray] = None
    bias: Optional[np.ndarray] = None


class ModelExtractor:
    """
    Extracts computation graph from PyTorch models.

    Supports:
    - Linear (fully connected) layers
    - Activation functions (ReLU, GELU, SiLU)
    - Softmax
    - LayerNorm
    - Sequential containers
    """

    SUPPORTED_LAYERS = {
        'Linear',
        'ReLU', 'GELU', 'SiLU', 'Sigmoid', 'Tanh',
        'Softmax', 'LogSoftmax',
        'LayerNorm', 'BatchNorm1d',
        'Dropout',  # Ignored during inference
    }

    def __init__(self):
        self.layers: List[ExtractedLayer] = []
        self.weights: Dict[str, np.ndarray] = {}

    def extract(self, model, input_shape: Tuple[int, ...]) -> 'ModelExtractor':
        """
        Extract computation graph from PyTorch model.

        Args:
            model: PyTorch nn.Module
            input_shape: Shape of input tensor (batch, features)

        Returns:
            Self for chaining
        """
        try:
            import torch
            import torch.nn as nn
        except ImportError:
            raise ImportError("PyTorch is required for model extraction")

        self.layers = []
        self.weights = {}

        current_shape = input_shape

        # Handle Sequential models
        if hasattr(model, 'children'):
            modules = list(model.named_modules())
        else:
            modules = [(str(i), m) for i, m in enumerate(model)]

        for name, module in modules:
            if module is model:
                continue  # Skip the container itself

            layer_type = module.__class__.__name__

            if layer_type not in self.SUPPORTED_LAYERS:
                if layer_type not in ('Sequential', 'ModuleList'):
                    print(f"Warning: Unsupported layer type: {layer_type}")
                continue

            layer = self._extract_layer(name, module, current_shape)
            if layer:
                self.layers.append(layer)
                current_shape = layer.output_shape

        return self

    def _extract_layer(self, name: str, module, input_shape: Tuple[int, ...]) -> Optional[ExtractedLayer]:
        """Extract a single layer."""
        import torch.nn as nn

        layer_type = module.__class__.__name__

        if isinstance(module, nn.Linear):
            in_features = module.in_features
            out_features = module.out_features

            # Get weights and bias
            weight = module.weight.detach().cpu().numpy()
            bias = module.bias.detach().cpu().numpy() if module.bias is not None else None

            self.weights[f"{name}.weight"] = weight
            if bias is not None:
                self.weights[f"{name}.bias"] = bias

            output_shape = input_shape[:-1] + (out_features,)

            return ExtractedLayer(
                name=name,
                layer_type='Linear',
                input_shape=input_shape,
                output_shape=output_shape,
                params={'in_features': in_features, 'out_features': out_features},
                weight=weight,
                bias=bias
            )

        elif isinstance(module, (nn.ReLU, nn.GELU, nn.SiLU, nn.Sigmoid, nn.Tanh)):
            return ExtractedLayer(
                name=name,
                layer_type=layer_type,
                input_shape=input_shape,
                output_shape=input_shape  # Same shape
            )

        elif isinstance(module, nn.Softmax):
            dim = module.dim if hasattr(module, 'dim') else -1
            return ExtractedLayer(
                name=name,
                layer_type='Softmax',
                input_shape=input_shape,
                output_shape=input_shape,
                params={'dim': dim}
            )

        elif isinstance(module, nn.LayerNorm):
            normalized_shape = module.normalized_shape
            gamma = module.weight.detach().cpu().numpy() if module.weight is not None else None
            beta = module.bias.detach().cpu().numpy() if module.bias is not None else None

            self.weights[f"{name}.weight"] = gamma
            self.weights[f"{name}.bias"] = beta

            return ExtractedLayer(
                name=name,
                layer_type='LayerNorm',
                input_shape=input_shape,
                output_shape=input_shape,
                params={'normalized_shape': normalized_shape},
                weight=gamma,
                bias=beta
            )

        elif isinstance(module, nn.Dropout):
            # Dropout is identity during inference
            return None

        return None

    def to_compute_graph(self) -> 'ComputeGraph':
        """
        Convert extracted layers to ComputeGraph.

        Returns:
            ComputeGraph ready for compilation
        """
        if ComputeGraph is None:
            raise ImportError("Compiler module not available")

        graph = ComputeGraph()

        # Create input
        if not self.layers:
            raise ValueError("No layers extracted")

        input_shape = self.layers[0].input_shape
        current = graph.input("input", input_shape)

        # Add weights
        weight_idx = 0
        for layer in self.layers:
            if layer.weight is not None:
                w_name = f"w{weight_idx}"
                graph.weight(w_name, layer.weight.shape)
                layer.params['weight_name'] = w_name
                weight_idx += 1

        # Build graph
        for i, layer in enumerate(self.layers):
            out_name = f"layer_{i}_out"

            if layer.layer_type == 'Linear':
                w_name = layer.params.get('weight_name', f"w{i}")
                current = graph.matmul(current, w_name, out_name)

            elif layer.layer_type == 'ReLU':
                current = graph.relu(current, out_name)

            elif layer.layer_type == 'GELU':
                current = graph.gelu(current, out_name)

            elif layer.layer_type == 'SiLU':
                current = graph.silu(current, out_name)

            elif layer.layer_type == 'Softmax':
                axis = layer.params.get('dim', -1)
                current = graph.softmax(current, axis, out_name)

            elif layer.layer_type == 'LayerNorm':
                current = graph.layernorm(current, name=out_name)

        # Mark output
        graph.output("output", current)

        return graph

    def get_weights(self) -> Dict[str, np.ndarray]:
        """Get all extracted weights."""
        return self.weights

    def summary(self) -> str:
        """Generate model summary string."""
        lines = ["Model Summary", "=" * 60]

        total_params = 0
        for layer in self.layers:
            shape_str = f"{layer.input_shape} -> {layer.output_shape}"
            params = 0
            if layer.weight is not None:
                params += layer.weight.size
            if layer.bias is not None:
                params += layer.bias.size
            total_params += params

            lines.append(f"{layer.name:20s} {layer.layer_type:15s} {shape_str:30s} {params:10d}")

        lines.append("=" * 60)
        lines.append(f"Total parameters: {total_params:,}")

        return "\n".join(lines)


def extract_graph(model, input_shape: Tuple[int, ...]) -> 'ComputeGraph':
    """
    Convenience function to extract compute graph from PyTorch model.

    Args:
        model: PyTorch nn.Module
        input_shape: Input tensor shape

    Returns:
        ComputeGraph ready for compilation
    """
    extractor = ModelExtractor()
    extractor.extract(model, input_shape)
    return extractor.to_compute_graph()


def extract_weights(model, input_shape: Tuple[int, ...]) -> Dict[str, np.ndarray]:
    """
    Extract weights from PyTorch model.

    Args:
        model: PyTorch nn.Module
        input_shape: Input tensor shape

    Returns:
        Dict of weight name -> numpy array
    """
    extractor = ModelExtractor()
    extractor.extract(model, input_shape)
    return extractor.get_weights()


# Exported symbols
__all__ = [
    'ExtractedLayer', 'ModelExtractor',
    'extract_graph', 'extract_weights'
]
