"""
Tiny Transformer Block Demo Model

A complete transformer block implementation demonstrating
transformer inference on the tiny-tpu.

Architecture:
    # Self-attention with residual
    attn_out = MultiHeadAttention(x)
    x = LayerNorm(x + attn_out)

    # FFN with residual
    ffn_out = GELU(x @ W_up) @ W_down
    x = LayerNorm(x + ffn_out)

Usage:
    # Generate TPU assembly
    python convert.py --seq-len 8 --d-model 64

    # Run inference
    python inference.py --verify
    python inference.py --tpu --verbose
"""

from .model import (
    TransformerBlockNumpy,
    create_random_weights,
    create_test_input,
    get_model_info,
    MEMORY_MAP,
    DEFAULT_SEQ_LEN,
    DEFAULT_D_MODEL,
    DEFAULT_D_FF,
)

try:
    from .model import TransformerBlockTorch
except ImportError:
    TransformerBlockTorch = None

__all__ = [
    'TransformerBlockTorch',
    'TransformerBlockNumpy',
    'create_random_weights',
    'create_test_input',
    'get_model_info',
    'MEMORY_MAP',
    'DEFAULT_SEQ_LEN',
    'DEFAULT_D_MODEL',
    'DEFAULT_D_FF',
]
