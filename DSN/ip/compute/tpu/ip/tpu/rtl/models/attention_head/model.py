"""
Attention Head Model Definition

A single attention head implementation for demonstrating
attention mechanisms on the tiny-tpu.

Architecture:
    scores = Q @ K.T / sqrt(d_k)
    weights = softmax(scores)
    output = weights @ V

This demonstrates:
- Matrix transpose operation
- Scaled dot-product attention
- Softmax activation
- Matrix multiply chaining
"""

import numpy as np
import math

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
    class AttentionHeadTorch(nn.Module):
        """PyTorch implementation of a single attention head."""

        def __init__(self, d_model: int = 64, d_head: int = 64):
            """
            Initialize attention head.

            Args:
                d_model: Input/output dimension
                d_head: Head dimension (typically d_model for single head)
            """
            super().__init__()
            self.d_head = d_head
            self.scale = 1.0 / math.sqrt(d_head)

            # Optional: Q, K, V projections (identity for pure attention demo)
            self.use_projections = False

        def forward(self, q, k, v, mask=None):
            """
            Compute attention.

            Args:
                q: Query tensor (batch, seq_len, d_head)
                k: Key tensor (batch, seq_len, d_head)
                v: Value tensor (batch, seq_len, d_head)
                mask: Optional attention mask

            Returns:
                Output tensor (batch, seq_len, d_head)
            """
            # Compute attention scores: Q @ K.T
            scores = torch.matmul(q, k.transpose(-2, -1))

            # Scale
            scores = scores * self.scale

            # Apply mask if provided
            if mask is not None:
                scores = scores.masked_fill(mask == 0, float('-inf'))

            # Softmax
            weights = F.softmax(scores, dim=-1)

            # Apply attention weights to values
            output = torch.matmul(weights, v)

            return output, weights


class AttentionHeadNumpy:
    """NumPy implementation of a single attention head."""

    def __init__(self, d_head: int = 64):
        """
        Initialize attention head.

        Args:
            d_head: Head dimension
        """
        self.d_head = d_head
        self.scale = 1.0 / math.sqrt(d_head)

    def softmax(self, x, axis=-1):
        """Numerically stable softmax."""
        x_max = np.max(x, axis=axis, keepdims=True)
        exp_x = np.exp(x - x_max)
        return exp_x / np.sum(exp_x, axis=axis, keepdims=True)

    def forward(self, q, k, v, mask=None):
        """
        Compute attention.

        Args:
            q: Query array (batch, seq_len, d_head) or (seq_len, d_head)
            k: Key array (batch, seq_len, d_head) or (seq_len, d_head)
            v: Value array (batch, seq_len, d_head) or (seq_len, d_head)
            mask: Optional attention mask

        Returns:
            output: Output array
            weights: Attention weights
        """
        # Add batch dimension if needed
        squeeze = False
        if q.ndim == 2:
            q = q[np.newaxis, ...]
            k = k[np.newaxis, ...]
            v = v[np.newaxis, ...]
            squeeze = True

        # Compute attention scores: Q @ K.T
        # (batch, seq_q, d) @ (batch, d, seq_k) -> (batch, seq_q, seq_k)
        scores = np.matmul(q, k.transpose(0, 2, 1))

        # Scale
        scores = scores * self.scale

        # Apply mask if provided
        if mask is not None:
            scores = np.where(mask == 0, -1e9, scores)

        # Softmax over keys
        weights = self.softmax(scores, axis=-1)

        # Apply attention weights to values
        # (batch, seq_q, seq_k) @ (batch, seq_k, d) -> (batch, seq_q, d)
        output = np.matmul(weights, v)

        if squeeze:
            output = output.squeeze(0)
            weights = weights.squeeze(0)

        return output, weights


def create_test_data(seq_len: int = 8, d_head: int = 64, seed: int = 42):
    """
    Create test Q, K, V matrices.

    Args:
        seq_len: Sequence length
        d_head: Head dimension
        seed: Random seed

    Returns:
        q, k, v: Test matrices
    """
    np.random.seed(seed)

    q = np.random.randn(seq_len, d_head).astype(np.float32)
    k = np.random.randn(seq_len, d_head).astype(np.float32)
    v = np.random.randn(seq_len, d_head).astype(np.float32)

    return q, k, v


def create_causal_mask(seq_len: int) -> np.ndarray:
    """
    Create a causal (lower triangular) attention mask.

    Args:
        seq_len: Sequence length

    Returns:
        Mask array (seq_len, seq_len)
    """
    mask = np.tril(np.ones((seq_len, seq_len)))
    return mask


def visualize_attention(weights: np.ndarray, tokens: list = None):
    """
    Print attention weights as a heatmap.

    Args:
        weights: Attention weights (seq_q, seq_k)
        tokens: Optional token labels
    """
    seq_len = weights.shape[0]
    if tokens is None:
        tokens = [f"t{i}" for i in range(seq_len)]

    print("\nAttention Weights:")
    print("    " + " ".join(f"{t:>6}" for t in tokens[:weights.shape[1]]))
    print("    " + "-" * (7 * weights.shape[1]))

    for i, row in enumerate(weights):
        row_str = " ".join(f"{w:6.3f}" for w in row)
        print(f"{tokens[i]:>3} | {row_str}")


# Model architecture constants
DEFAULT_SEQ_LEN = 8
DEFAULT_D_HEAD = 64

# Memory layout for TPU
MEMORY_MAP = {
    'q': 0x0000,           # Query matrix
    'k': 0x1000,           # Key matrix
    'v': 0x2000,           # Value matrix
    'output': 0x3000,      # Output matrix
    'scratch': 0x4000,     # Scratch space for scores/weights
    'k_transpose': 0x6000, # K transposed
}


def get_model_info(seq_len: int = DEFAULT_SEQ_LEN,
                   d_head: int = DEFAULT_D_HEAD) -> dict:
    """Get attention head architecture information."""
    return {
        'name': 'Single Attention Head',
        'seq_len': seq_len,
        'd_head': d_head,
        'operations': [
            {'name': 'transpose_k', 'type': 'TRANSPOSE', 'shape': f'({seq_len}, {d_head}) -> ({d_head}, {seq_len})'},
            {'name': 'scores', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_head}) @ ({d_head}, {seq_len}) -> ({seq_len}, {seq_len})'},
            {'name': 'scale', 'type': 'SCALE', 'factor': f'1/sqrt({d_head})'},
            {'name': 'softmax', 'type': 'SOFTMAX', 'dim': -1},
            {'name': 'output', 'type': 'MATMUL', 'shape': f'({seq_len}, {seq_len}) @ ({seq_len}, {d_head}) -> ({seq_len}, {d_head})'},
        ],
        'memory_requirements': {
            'q_bytes': seq_len * d_head,
            'k_bytes': seq_len * d_head,
            'v_bytes': seq_len * d_head,
            'output_bytes': seq_len * d_head,
            'scratch_bytes': seq_len * seq_len * 2,  # scores + weights
        }
    }


if __name__ == '__main__':
    # Test attention head
    seq_len = 8
    d_head = 64

    print("Attention Head Demo")
    print("=" * 60)

    info = get_model_info(seq_len, d_head)
    print(f"Model: {info['name']}")
    print(f"Sequence length: {seq_len}")
    print(f"Head dimension: {d_head}")
    print(f"\nOperations:")
    for op in info['operations']:
        print(f"  {op}")

    # Create test data
    print(f"\nCreating test data...")
    q, k, v = create_test_data(seq_len, d_head)
    print(f"Q shape: {q.shape}")
    print(f"K shape: {k.shape}")
    print(f"V shape: {v.shape}")

    # Run NumPy attention
    print(f"\nRunning NumPy attention...")
    attn = AttentionHeadNumpy(d_head)
    output, weights = attn.forward(q, k, v)
    print(f"Output shape: {output.shape}")
    print(f"Weights shape: {weights.shape}")

    # Visualize attention
    visualize_attention(weights)

    # Test with PyTorch
    if TORCH_AVAILABLE:
        print(f"\nVerifying with PyTorch...")
        attn_torch = AttentionHeadTorch(d_head)
        q_t = torch.from_numpy(q).unsqueeze(0)
        k_t = torch.from_numpy(k).unsqueeze(0)
        v_t = torch.from_numpy(v).unsqueeze(0)

        with torch.no_grad():
            output_t, weights_t = attn_torch(q_t, k_t, v_t)

        output_t = output_t.squeeze(0).numpy()
        weights_t = weights_t.squeeze(0).numpy()

        max_diff = np.abs(output - output_t).max()
        print(f"Max output difference: {max_diff:.8f}")
        print(f"Match: {'YES' if max_diff < 1e-5 else 'NO'}")
