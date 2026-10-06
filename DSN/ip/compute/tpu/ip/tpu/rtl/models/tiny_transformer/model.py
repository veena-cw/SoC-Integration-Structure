"""
Tiny Transformer Block Model Definition

A complete transformer block implementation for demonstrating
transformer inference on the tiny-tpu.

Architecture:
    # Self-attention with residual
    attn_out = self_attention(x)
    x = LayerNorm(x + attn_out)

    # FFN with residual
    ffn_out = FFN(x)  # Linear -> GELU -> Linear
    x = LayerNorm(x + ffn_out)

This demonstrates:
- Full attention mechanism
- Residual connections
- Layer normalization
- Feed-forward network with GELU
- Complete transformer block execution
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
    class TransformerBlockTorch(nn.Module):
        """PyTorch implementation of a transformer block."""

        def __init__(self, d_model: int = 64, n_heads: int = 1, d_ff: int = 256,
                     dropout: float = 0.0):
            """
            Initialize transformer block.

            Args:
                d_model: Model dimension
                n_heads: Number of attention heads
                d_ff: Feed-forward hidden dimension
                dropout: Dropout rate (0 for inference)
            """
            super().__init__()
            self.d_model = d_model
            self.n_heads = n_heads
            self.d_head = d_model // n_heads

            # Self-attention
            self.q_proj = nn.Linear(d_model, d_model)
            self.k_proj = nn.Linear(d_model, d_model)
            self.v_proj = nn.Linear(d_model, d_model)
            self.o_proj = nn.Linear(d_model, d_model)

            # Layer norms
            self.ln1 = nn.LayerNorm(d_model)
            self.ln2 = nn.LayerNorm(d_model)

            # FFN
            self.ffn_up = nn.Linear(d_model, d_ff)
            self.ffn_down = nn.Linear(d_ff, d_model)

            self.dropout = nn.Dropout(dropout)
            self.scale = 1.0 / math.sqrt(self.d_head)

        def forward(self, x, mask=None):
            """
            Forward pass.

            Args:
                x: Input tensor (batch, seq_len, d_model)
                mask: Optional attention mask

            Returns:
                Output tensor (batch, seq_len, d_model)
            """
            # Self-attention with residual
            residual = x

            # Q, K, V projections
            q = self.q_proj(x)
            k = self.k_proj(x)
            v = self.v_proj(x)

            # Attention
            scores = torch.matmul(q, k.transpose(-2, -1)) * self.scale
            if mask is not None:
                scores = scores.masked_fill(mask == 0, float('-inf'))
            weights = F.softmax(scores, dim=-1)
            attn_out = torch.matmul(weights, v)

            # Output projection
            attn_out = self.o_proj(attn_out)
            attn_out = self.dropout(attn_out)

            # Residual + LayerNorm
            x = self.ln1(residual + attn_out)

            # FFN with residual
            residual = x
            ffn_out = self.ffn_up(x)
            ffn_out = F.gelu(ffn_out)
            ffn_out = self.ffn_down(ffn_out)
            ffn_out = self.dropout(ffn_out)

            # Residual + LayerNorm
            x = self.ln2(residual + ffn_out)

            return x


class TransformerBlockNumpy:
    """NumPy implementation of a transformer block."""

    def __init__(self, d_model: int = 64, d_ff: int = 256):
        """
        Initialize transformer block.

        Args:
            d_model: Model dimension
            d_ff: FFN hidden dimension
        """
        self.d_model = d_model
        self.d_ff = d_ff
        self.scale = 1.0 / math.sqrt(d_model)
        self.weights = {}

    def load_weights(self, weights: dict):
        """Load weights from dictionary."""
        self.weights = weights

    def softmax(self, x, axis=-1):
        """Numerically stable softmax."""
        x_max = np.max(x, axis=axis, keepdims=True)
        exp_x = np.exp(x - x_max)
        return exp_x / np.sum(exp_x, axis=axis, keepdims=True)

    def gelu(self, x):
        """GELU activation (approximate)."""
        return 0.5 * x * (1 + np.tanh(
            math.sqrt(2 / math.pi) * (x + 0.044715 * x**3)
        ))

    def layer_norm(self, x, gamma, beta, eps=1e-5):
        """Layer normalization."""
        mean = np.mean(x, axis=-1, keepdims=True)
        var = np.var(x, axis=-1, keepdims=True)
        x_norm = (x - mean) / np.sqrt(var + eps)
        return gamma * x_norm + beta

    def forward(self, x, mask=None):
        """
        Forward pass.

        Args:
            x: Input array (batch, seq_len, d_model) or (seq_len, d_model)
            mask: Optional attention mask

        Returns:
            Output array
        """
        # Add batch dimension if needed
        squeeze = False
        if x.ndim == 2:
            x = x[np.newaxis, ...]
            squeeze = True

        batch_size, seq_len, _ = x.shape

        # Get weights
        w_q = self.weights.get('q_proj.weight')
        b_q = self.weights.get('q_proj.bias')
        w_k = self.weights.get('k_proj.weight')
        b_k = self.weights.get('k_proj.bias')
        w_v = self.weights.get('v_proj.weight')
        b_v = self.weights.get('v_proj.bias')
        w_o = self.weights.get('o_proj.weight')
        b_o = self.weights.get('o_proj.bias')

        ln1_gamma = self.weights.get('ln1.weight')
        ln1_beta = self.weights.get('ln1.bias')
        ln2_gamma = self.weights.get('ln2.weight')
        ln2_beta = self.weights.get('ln2.bias')

        w_up = self.weights.get('ffn_up.weight')
        b_up = self.weights.get('ffn_up.bias')
        w_down = self.weights.get('ffn_down.weight')
        b_down = self.weights.get('ffn_down.bias')

        # Self-attention
        residual = x

        # Q, K, V projections
        q = np.matmul(x, w_q.T) + b_q
        k = np.matmul(x, w_k.T) + b_k
        v = np.matmul(x, w_v.T) + b_v

        # Attention scores
        scores = np.matmul(q, k.transpose(0, 2, 1)) * self.scale

        if mask is not None:
            scores = np.where(mask == 0, -1e9, scores)

        weights = self.softmax(scores, axis=-1)
        attn_out = np.matmul(weights, v)

        # Output projection
        attn_out = np.matmul(attn_out, w_o.T) + b_o

        # Residual + LayerNorm
        x = self.layer_norm(residual + attn_out, ln1_gamma, ln1_beta)

        # FFN
        residual = x
        ffn_out = np.matmul(x, w_up.T) + b_up
        ffn_out = self.gelu(ffn_out)
        ffn_out = np.matmul(ffn_out, w_down.T) + b_down

        # Residual + LayerNorm
        x = self.layer_norm(residual + ffn_out, ln2_gamma, ln2_beta)

        if squeeze:
            x = x.squeeze(0)

        return x


def create_random_weights(d_model: int = 64, d_ff: int = 256,
                          seed: int = 42) -> dict:
    """
    Create random weights for testing.

    Args:
        d_model: Model dimension
        d_ff: FFN hidden dimension
        seed: Random seed

    Returns:
        Weight dictionary
    """
    np.random.seed(seed)

    # Xavier initialization scale
    def xavier(shape):
        fan_in = shape[1] if len(shape) > 1 else shape[0]
        scale = 1.0 / math.sqrt(fan_in)
        return np.random.randn(*shape).astype(np.float32) * scale

    weights = {
        # Q, K, V, O projections
        'q_proj.weight': xavier((d_model, d_model)),
        'q_proj.bias': np.zeros(d_model, dtype=np.float32),
        'k_proj.weight': xavier((d_model, d_model)),
        'k_proj.bias': np.zeros(d_model, dtype=np.float32),
        'v_proj.weight': xavier((d_model, d_model)),
        'v_proj.bias': np.zeros(d_model, dtype=np.float32),
        'o_proj.weight': xavier((d_model, d_model)),
        'o_proj.bias': np.zeros(d_model, dtype=np.float32),

        # Layer norms
        'ln1.weight': np.ones(d_model, dtype=np.float32),
        'ln1.bias': np.zeros(d_model, dtype=np.float32),
        'ln2.weight': np.ones(d_model, dtype=np.float32),
        'ln2.bias': np.zeros(d_model, dtype=np.float32),

        # FFN
        'ffn_up.weight': xavier((d_ff, d_model)),
        'ffn_up.bias': np.zeros(d_ff, dtype=np.float32),
        'ffn_down.weight': xavier((d_model, d_ff)),
        'ffn_down.bias': np.zeros(d_model, dtype=np.float32),
    }

    return weights


def create_test_input(seq_len: int = 8, d_model: int = 64,
                      seed: int = 42) -> np.ndarray:
    """Create random test input."""
    np.random.seed(seed)
    return np.random.randn(seq_len, d_model).astype(np.float32)


# Model architecture constants
DEFAULT_SEQ_LEN = 8
DEFAULT_D_MODEL = 64
DEFAULT_D_FF = 256

# Memory layout for TPU
# Note: This is a demo layout. Full transformer weights may exceed 64KB.
# For 3-operand ADD, destinations must be page-aligned (0x1000 boundary)
# For 2-operand ADD and other ops, addresses must be 256-byte aligned
MEMORY_MAP = {
    # Activations (page-aligned for ADD destinations)
    'input': 0x0000,       # Input activations
    'residual1': 0x1000,   # Page-aligned for 3-operand ADD dst
    'residual2': 0x2000,   # Page-aligned for 3-operand ADD dst
    'output': 0x3000,      # Page-aligned final output

    # Intermediate activations (256-byte aligned)
    'q': 0x0100,
    'k': 0x0200,
    'v': 0x0300,
    'attn_out': 0x0400,
    'ln1_out': 0x0500,
    'ffn_hidden': 0x0600,
    'ffn_out': 0x0800,

    # Biases (256-byte aligned)
    'b_q': 0x4000,
    'b_k': 0x4100,
    'b_v': 0x4200,
    'b_o': 0x4300,
    'b_up': 0x4400,
    'b_down': 0x4800,

    # Weights (page-aligned for LOAD_W)
    'w_q': 0x5000,
    'w_k': 0x6000,
    'w_v': 0x7000,
    'w_o': 0x8000,
    'w_up': 0x9000,
    'w_down': 0xA000,

    # LayerNorm params
    'ln1_gamma': 0xB000,
    'ln1_beta': 0xB100,
    'ln2_gamma': 0xB200,
    'ln2_beta': 0xB300,

    # Scratch (for K transpose and scores)
    'scratch': 0xC000,
}


def get_model_info(seq_len: int = DEFAULT_SEQ_LEN,
                   d_model: int = DEFAULT_D_MODEL,
                   d_ff: int = DEFAULT_D_FF) -> dict:
    """Get transformer block architecture information."""
    return {
        'name': 'Tiny Transformer Block',
        'seq_len': seq_len,
        'd_model': d_model,
        'd_ff': d_ff,
        'operations': [
            # Self-attention
            {'name': 'q_proj', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {d_model})'},
            {'name': 'k_proj', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {d_model})'},
            {'name': 'v_proj', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {d_model})'},
            {'name': 'qk_matmul', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {seq_len})'},
            {'name': 'scale', 'type': 'SCALE', 'factor': f'1/sqrt({d_model})'},
            {'name': 'softmax', 'type': 'SOFTMAX'},
            {'name': 'attn_v', 'type': 'MATMUL', 'shape': f'({seq_len}, {seq_len}) @ ({seq_len}, {d_model})'},
            {'name': 'o_proj', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {d_model})'},
            {'name': 'add1', 'type': 'ADD'},
            {'name': 'ln1', 'type': 'LAYERNORM'},
            # FFN
            {'name': 'ffn_up', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_model}) @ ({d_model}, {d_ff})'},
            {'name': 'gelu', 'type': 'GELU'},
            {'name': 'ffn_down', 'type': 'MATMUL', 'shape': f'({seq_len}, {d_ff}) @ ({d_ff}, {d_model})'},
            {'name': 'add2', 'type': 'ADD'},
            {'name': 'ln2', 'type': 'LAYERNORM'},
        ],
        'total_params': (
            4 * d_model * d_model +  # Q, K, V, O projections
            4 * d_model +             # projection biases
            2 * d_model * 2 +         # LayerNorm params
            d_model * d_ff +          # FFN up
            d_ff * d_model +          # FFN down
            d_ff + d_model            # FFN biases
        ),
    }


if __name__ == '__main__':
    # Test transformer block
    seq_len = 8
    d_model = 64
    d_ff = 256

    print("Tiny Transformer Block Demo")
    print("=" * 60)

    info = get_model_info(seq_len, d_model, d_ff)
    print(f"Model: {info['name']}")
    print(f"Sequence length: {seq_len}")
    print(f"Model dimension: {d_model}")
    print(f"FFN dimension: {d_ff}")
    print(f"Total parameters: {info['total_params']:,}")

    # Create test data and weights
    print(f"\nCreating test data...")
    x = create_test_input(seq_len, d_model)
    weights = create_random_weights(d_model, d_ff)
    print(f"Input shape: {x.shape}")

    # Run NumPy transformer
    print(f"\nRunning NumPy transformer...")
    model = TransformerBlockNumpy(d_model, d_ff)
    model.load_weights(weights)
    output = model.forward(x)
    print(f"Output shape: {output.shape}")

    # Verify with PyTorch
    if TORCH_AVAILABLE:
        print(f"\nVerifying with PyTorch...")
        model_torch = TransformerBlockTorch(d_model, n_heads=1, d_ff=d_ff)

        # Load weights
        state_dict = {k: torch.from_numpy(v) for k, v in weights.items()}
        model_torch.load_state_dict(state_dict)
        model_torch.train(False)  # inference mode

        with torch.no_grad():
            x_torch = torch.from_numpy(x).unsqueeze(0)
            output_torch = model_torch(x_torch).squeeze(0).numpy()

        max_diff = np.abs(output - output_torch).max()
        print(f"Max difference: {max_diff:.8f}")
        print(f"Match: {'YES' if max_diff < 1e-5 else 'NO (quantization expected)'}")
