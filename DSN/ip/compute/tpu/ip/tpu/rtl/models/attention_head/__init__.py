"""
Attention Head Demo Model

A single attention head implementation demonstrating
scaled dot-product attention on the tiny-tpu.

Architecture:
    scores = Q @ K.T / sqrt(d_k)
    weights = softmax(scores)
    output = weights @ V

Usage:
    # Generate TPU assembly
    python convert.py --seq-len 8 --d-head 64

    # Run inference
    python inference.py --visualize
    python inference.py --tpu --verbose
"""

from .model import (
    AttentionHeadNumpy,
    create_test_data,
    create_causal_mask,
    visualize_attention,
    get_model_info,
    MEMORY_MAP,
    DEFAULT_SEQ_LEN,
    DEFAULT_D_HEAD,
)

try:
    from .model import AttentionHeadTorch
except ImportError:
    AttentionHeadTorch = None

__all__ = [
    'AttentionHeadTorch',
    'AttentionHeadNumpy',
    'create_test_data',
    'create_causal_mask',
    'visualize_attention',
    'get_model_info',
    'MEMORY_MAP',
    'DEFAULT_SEQ_LEN',
    'DEFAULT_D_HEAD',
]
