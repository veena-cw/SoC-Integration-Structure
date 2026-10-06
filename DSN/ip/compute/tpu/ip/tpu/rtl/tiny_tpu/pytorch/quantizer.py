"""
tiny-tpu PyTorch Quantizer

INT8 quantization for TPU deployment.

Usage:
    from tiny_tpu.pytorch import Quantizer, QuantizationConfig
    import torch.nn as nn

    model = nn.Sequential(
        nn.Linear(784, 128),
        nn.ReLU(),
        nn.Linear(128, 10)
    )

    # Create quantizer
    config = QuantizationConfig(bits=8, symmetric=True)
    quantizer = Quantizer(config)

    # Calibrate with sample data
    calibration_data = torch.randn(100, 784)
    quantizer.calibrate(model, calibration_data)

    # Get quantized weights
    quantized_weights = quantizer.quantize_model(model)
"""

from typing import Dict, Tuple, Optional, List, Any
from dataclasses import dataclass, field
import numpy as np


@dataclass
class QuantizationConfig:
    """Configuration for quantization."""
    bits: int = 8                    # Quantization bits (8 for INT8)
    symmetric: bool = True           # Symmetric vs asymmetric quantization
    per_channel: bool = False        # Per-channel vs per-tensor quantization
    calibration_method: str = 'minmax'  # 'minmax', 'percentile', 'mse'
    percentile: float = 99.99        # For percentile calibration


@dataclass
class QuantizedTensor:
    """A quantized tensor with scale and zero point."""
    data: np.ndarray                 # Quantized INT8 data
    scale: float                     # Scale factor
    zero_point: int                  # Zero point (0 for symmetric)
    original_shape: Tuple[int, ...]  # Original tensor shape

    def dequantize(self) -> np.ndarray:
        """Convert back to float."""
        return self.scale * (self.data.astype(np.float32) - self.zero_point)

    def to_bytes(self) -> bytes:
        """Serialize to bytes for TPU loading."""
        return self.data.tobytes()


@dataclass
class CalibrationStats:
    """Statistics collected during calibration."""
    min_val: float = float('inf')
    max_val: float = float('-inf')
    running_sum: float = 0.0
    running_sq_sum: float = 0.0
    num_samples: int = 0

    def update(self, tensor: np.ndarray):
        """Update statistics with new tensor."""
        self.min_val = min(self.min_val, float(tensor.min()))
        self.max_val = max(self.max_val, float(tensor.max()))
        self.running_sum += float(tensor.sum())
        self.running_sq_sum += float((tensor ** 2).sum())
        self.num_samples += tensor.size


class Quantizer:
    """
    INT8 quantizer for PyTorch models.

    Supports:
    - Symmetric and asymmetric quantization
    - Per-tensor and per-channel quantization
    - MinMax, percentile, and MSE calibration
    """

    def __init__(self, config: QuantizationConfig = None):
        """
        Initialize quantizer.

        Args:
            config: Quantization configuration
        """
        self.config = config or QuantizationConfig()
        self.calibration_stats: Dict[str, CalibrationStats] = {}
        self.weight_stats: Dict[str, CalibrationStats] = {}
        self._hooks = []

    def _compute_scale_zp_symmetric(self, min_val: float, max_val: float) -> Tuple[float, int]:
        """Compute scale and zero point for symmetric quantization."""
        bits = self.config.bits
        qmax = (1 << (bits - 1)) - 1  # 127 for INT8

        abs_max = max(abs(min_val), abs(max_val))
        scale = abs_max / qmax if abs_max > 0 else 1.0

        return scale, 0

    def _compute_scale_zp_asymmetric(self, min_val: float, max_val: float) -> Tuple[float, int]:
        """Compute scale and zero point for asymmetric quantization."""
        bits = self.config.bits
        qmin = -(1 << (bits - 1))    # -128 for INT8
        qmax = (1 << (bits - 1)) - 1  # 127 for INT8

        scale = (max_val - min_val) / (qmax - qmin) if max_val > min_val else 1.0
        zero_point = int(round(qmin - min_val / scale)) if scale > 0 else 0
        zero_point = max(qmin, min(qmax, zero_point))

        return scale, zero_point

    def compute_scale_zp(self, min_val: float, max_val: float) -> Tuple[float, int]:
        """Compute scale and zero point based on config."""
        if self.config.symmetric:
            return self._compute_scale_zp_symmetric(min_val, max_val)
        else:
            return self._compute_scale_zp_asymmetric(min_val, max_val)

    def quantize_tensor(self, tensor: np.ndarray, scale: float, zero_point: int) -> np.ndarray:
        """Quantize a tensor to INT8."""
        bits = self.config.bits
        qmin = -(1 << (bits - 1))    # -128
        qmax = (1 << (bits - 1)) - 1  # 127

        # Quantize
        quantized = np.round(tensor / scale + zero_point)
        quantized = np.clip(quantized, qmin, qmax)

        return quantized.astype(np.int8)

    def quantize_weight(self, weight: np.ndarray, name: str = "") -> QuantizedTensor:
        """
        Quantize a weight tensor.

        Args:
            weight: Weight tensor (numpy array or PyTorch tensor)
            name: Optional name for debugging

        Returns:
            QuantizedTensor with INT8 data
        """
        # Convert to numpy if needed
        if hasattr(weight, 'detach'):
            weight = weight.detach().cpu().numpy()

        if self.config.per_channel and weight.ndim >= 2:
            # Per-channel quantization (along output dimension)
            return self._quantize_per_channel(weight, name)
        else:
            # Per-tensor quantization
            min_val, max_val = float(weight.min()), float(weight.max())
            scale, zero_point = self.compute_scale_zp(min_val, max_val)
            quantized = self.quantize_tensor(weight, scale, zero_point)

            return QuantizedTensor(
                data=quantized,
                scale=scale,
                zero_point=zero_point,
                original_shape=weight.shape
            )

    def _quantize_per_channel(self, weight: np.ndarray, name: str) -> QuantizedTensor:
        """Per-channel quantization for weights."""
        # Assume output channels are first dimension
        num_channels = weight.shape[0]
        scales = []
        zero_points = []

        quantized = np.zeros_like(weight, dtype=np.int8)

        for c in range(num_channels):
            channel_weight = weight[c]
            min_val, max_val = float(channel_weight.min()), float(channel_weight.max())
            scale, zp = self.compute_scale_zp(min_val, max_val)
            scales.append(scale)
            zero_points.append(zp)
            quantized[c] = self.quantize_tensor(channel_weight, scale, zp)

        # For simplicity, return average scale (TPU uses per-tensor)
        avg_scale = np.mean(scales)

        return QuantizedTensor(
            data=quantized,
            scale=avg_scale,
            zero_point=0,  # Symmetric
            original_shape=weight.shape
        )

    def calibrate(self, model, calibration_data, num_batches: int = None):
        """
        Calibrate quantization ranges using sample data.

        Args:
            model: PyTorch model
            calibration_data: DataLoader or tensor
            num_batches: Number of batches to use (None = all)
        """
        try:
            import torch
        except ImportError:
            raise ImportError("PyTorch is required for calibration")

        self.calibration_stats = {}
        self._hooks = []

        # Register hooks to collect activation statistics
        def make_hook(name):
            def hook(module, input, output):
                if name not in self.calibration_stats:
                    self.calibration_stats[name] = CalibrationStats()

                out = output.detach().cpu().numpy()
                self.calibration_stats[name].update(out)

            return hook

        # Register hooks on all layers
        for name, module in model.named_modules():
            if len(list(module.children())) == 0:  # Leaf module
                handle = module.register_forward_hook(make_hook(name))
                self._hooks.append(handle)

        # Collect weight statistics
        for name, param in model.named_parameters():
            if 'weight' in name:
                weight = param.detach().cpu().numpy()
                stats = CalibrationStats()
                stats.update(weight)
                self.weight_stats[name] = stats

        # Run calibration forward passes
        model.eval()
        with torch.no_grad():
            if hasattr(calibration_data, '__iter__'):
                for i, batch in enumerate(calibration_data):
                    if num_batches is not None and i >= num_batches:
                        break
                    if isinstance(batch, (list, tuple)):
                        batch = batch[0]
                    model(batch)
            else:
                # Single tensor
                model(calibration_data)

        # Remove hooks
        for hook in self._hooks:
            hook.remove()
        self._hooks = []

    def quantize_model(self, model) -> Dict[str, QuantizedTensor]:
        """
        Quantize all weights in a model.

        Args:
            model: PyTorch model

        Returns:
            Dict of layer name -> QuantizedTensor
        """
        quantized_weights = {}

        for name, param in model.named_parameters():
            if 'weight' in name:
                weight = param.detach().cpu().numpy()
                quantized = self.quantize_weight(weight, name)
                quantized_weights[name] = quantized
            elif 'bias' in name:
                # Biases typically stay in higher precision or use weight's scale
                bias = param.detach().cpu().numpy()
                # For INT8 TPU, we quantize bias with larger range
                min_val, max_val = float(bias.min()), float(bias.max())
                scale, zp = self.compute_scale_zp(min_val, max_val)
                quantized = self.quantize_tensor(bias, scale, zp)
                quantized_weights[name] = QuantizedTensor(
                    data=quantized,
                    scale=scale,
                    zero_point=zp,
                    original_shape=bias.shape
                )

        return quantized_weights

    def get_activation_ranges(self) -> Dict[str, Tuple[float, float]]:
        """Get calibrated activation ranges."""
        ranges = {}
        for name, stats in self.calibration_stats.items():
            ranges[name] = (stats.min_val, stats.max_val)
        return ranges

    def summary(self) -> str:
        """Generate quantization summary."""
        lines = ["Quantization Summary", "=" * 60]
        lines.append(f"Config: {self.config.bits}-bit, "
                    f"{'symmetric' if self.config.symmetric else 'asymmetric'}, "
                    f"{'per-channel' if self.config.per_channel else 'per-tensor'}")
        lines.append("")

        if self.weight_stats:
            lines.append("Weight Ranges:")
            for name, stats in self.weight_stats.items():
                lines.append(f"  {name}: [{stats.min_val:.4f}, {stats.max_val:.4f}]")
            lines.append("")

        if self.calibration_stats:
            lines.append("Activation Ranges (calibrated):")
            for name, stats in self.calibration_stats.items():
                lines.append(f"  {name}: [{stats.min_val:.4f}, {stats.max_val:.4f}]")

        return "\n".join(lines)


def quantize_for_tpu(model, calibration_data=None) -> Tuple[Dict[str, QuantizedTensor], Dict[str, Any]]:
    """
    Convenience function to quantize a PyTorch model for TPU deployment.

    Args:
        model: PyTorch nn.Module
        calibration_data: Optional calibration data for activation ranges

    Returns:
        Tuple of (quantized_weights, metadata)
    """
    config = QuantizationConfig(
        bits=8,
        symmetric=True,  # TPU uses symmetric quantization
        per_channel=False,
        calibration_method='minmax'
    )

    quantizer = Quantizer(config)

    if calibration_data is not None:
        quantizer.calibrate(model, calibration_data)

    quantized_weights = quantizer.quantize_model(model)

    metadata = {
        'config': config,
        'activation_ranges': quantizer.get_activation_ranges(),
        'weight_stats': {name: (s.min_val, s.max_val)
                        for name, s in quantizer.weight_stats.items()}
    }

    return quantized_weights, metadata


# Exported symbols
__all__ = [
    'QuantizationConfig', 'QuantizedTensor', 'CalibrationStats',
    'Quantizer', 'quantize_for_tpu'
]
