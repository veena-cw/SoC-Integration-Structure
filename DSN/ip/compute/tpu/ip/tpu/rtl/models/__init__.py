"""
tiny-tpu Demo Models

Example models demonstrating TPU inference capabilities.

Models:
- mnist_mlp: MNIST digit classification (784 -> 128 -> 10)
- attention_head: Single-head scaled dot-product attention
- tiny_transformer: Complete transformer block with FFN

Usage:
    from models.mnist_mlp import MNISTMLPNumpy, create_model
    from models.attention_head import AttentionHeadNumpy, create_test_data
    from models.tiny_transformer import TransformerBlockNumpy, create_random_weights
"""

__all__ = ['mnist_mlp', 'attention_head', 'tiny_transformer']
