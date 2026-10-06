"""
MNIST MLP Training Script

Trains the MNIST MLP model and saves weights for TPU deployment.

Usage:
    python train.py                    # Train and save weights
    python train.py --epochs 10        # Train for 10 epochs
    python train.py --load weights.pt  # Load and test existing weights
"""

import argparse
import os
import numpy as np

try:
    import torch
    import torch.nn as nn
    import torch.optim as optim
    from torch.utils.data import DataLoader
    TORCH_AVAILABLE = True
except ImportError:
    TORCH_AVAILABLE = False

from model import MNISTMLPTorch, create_model, get_model_info


def get_mnist_data(batch_size: int = 64):
    """
    Load MNIST dataset.

    Returns:
        train_loader, test_loader
    """
    try:
        from torchvision import datasets, transforms
    except ImportError:
        raise ImportError("torchvision is required for MNIST data. Install with: pip install torchvision")

    transform = transforms.Compose([
        transforms.ToTensor(),
        transforms.Normalize((0.1307,), (0.3081,))
    ])

    # Download MNIST
    data_dir = os.path.join(os.path.dirname(__file__), 'data')
    os.makedirs(data_dir, exist_ok=True)

    train_dataset = datasets.MNIST(data_dir, train=True, download=True, transform=transform)
    test_dataset = datasets.MNIST(data_dir, train=False, download=True, transform=transform)

    train_loader = DataLoader(train_dataset, batch_size=batch_size, shuffle=True)
    test_loader = DataLoader(test_dataset, batch_size=batch_size, shuffle=False)

    return train_loader, test_loader


def train_epoch(model, train_loader, optimizer, criterion, device):
    """Train for one epoch."""
    model.train()
    total_loss = 0
    correct = 0
    total = 0

    for batch_idx, (data, target) in enumerate(train_loader):
        data, target = data.to(device), target.to(device)

        # Flatten images
        data = data.view(data.size(0), -1)

        optimizer.zero_grad()
        output = model(data)
        loss = criterion(output, target)
        loss.backward()
        optimizer.step()

        total_loss += loss.item()
        pred = output.argmax(dim=1, keepdim=True)
        correct += pred.eq(target.view_as(pred)).sum().item()
        total += target.size(0)

    return total_loss / len(train_loader), 100. * correct / total


def test_model(model, test_loader, criterion, device):
    """Test model on test set."""
    model.eval()
    total_loss = 0
    correct = 0
    total = 0

    with torch.no_grad():
        for data, target in test_loader:
            data, target = data.to(device), target.to(device)
            data = data.view(data.size(0), -1)

            output = model(data)
            total_loss += criterion(output, target).item()
            pred = output.argmax(dim=1, keepdim=True)
            correct += pred.eq(target.view_as(pred)).sum().item()
            total += target.size(0)

    return total_loss / len(test_loader), 100. * correct / total


def train(epochs: int = 5, lr: float = 0.001, batch_size: int = 64,
          save_path: str = None, device: str = None):
    """
    Train the MNIST MLP model.

    Args:
        epochs: Number of training epochs
        lr: Learning rate
        batch_size: Batch size
        save_path: Path to save trained weights
        device: Device to train on ('cuda' or 'cpu')

    Returns:
        Trained model
    """
    if not TORCH_AVAILABLE:
        raise ImportError("PyTorch is required for training")

    # Setup device
    if device is None:
        device = 'cuda' if torch.cuda.is_available() else 'cpu'
    device = torch.device(device)
    print(f"Training on: {device}")

    # Load data
    print("Loading MNIST data...")
    train_loader, test_loader = get_mnist_data(batch_size)
    print(f"Train samples: {len(train_loader.dataset)}")
    print(f"Test samples: {len(test_loader.dataset)}")

    # Create model
    model = create_model().to(device)
    info = get_model_info()
    print(f"\nModel: {info['name']}")
    print(f"Parameters: {info['total_params']:,}")

    # Setup training
    criterion = nn.CrossEntropyLoss()
    optimizer = optim.Adam(model.parameters(), lr=lr)

    # Training loop
    print(f"\nTraining for {epochs} epochs...")
    print("-" * 60)

    best_acc = 0
    for epoch in range(1, epochs + 1):
        train_loss, train_acc = train_epoch(model, train_loader, optimizer, criterion, device)
        test_loss, test_acc = test_model(model, test_loader, criterion, device)

        print(f"Epoch {epoch:3d}: "
              f"Train Loss: {train_loss:.4f}, Train Acc: {train_acc:.2f}% | "
              f"Test Loss: {test_loss:.4f}, Test Acc: {test_acc:.2f}%")

        if test_acc > best_acc:
            best_acc = test_acc
            if save_path:
                torch.save(model.state_dict(), save_path)
                print(f"  -> Saved best model to {save_path}")

    print("-" * 60)
    print(f"Best test accuracy: {best_acc:.2f}%")

    # Save final model
    if save_path and best_acc == test_acc:
        torch.save(model.state_dict(), save_path)
        print(f"Final model saved to: {save_path}")

    return model


def export_weights_numpy(model, save_path: str):
    """
    Export model weights as numpy arrays.

    Args:
        model: Trained PyTorch model
        save_path: Path to save .npz file
    """
    weights = {}
    for name, param in model.named_parameters():
        weights[name] = param.detach().cpu().numpy()

    np.savez(save_path, **weights)
    print(f"Weights exported to: {save_path}")

    # Print weight shapes
    print("\nWeight shapes:")
    for name, arr in weights.items():
        print(f"  {name}: {arr.shape}")

    return weights


def export_weights_int8(model, save_path: str):
    """
    Export model weights as INT8 for TPU.

    Args:
        model: Trained PyTorch model
        save_path: Path to save .npz file

    Returns:
        Dict with quantized weights and scales
    """
    quantized = {}
    scales = {}

    for name, param in model.named_parameters():
        arr = param.detach().cpu().numpy()

        # Compute scale for symmetric quantization
        abs_max = np.abs(arr).max()
        scale = abs_max / 127.0 if abs_max > 0 else 1.0

        # Quantize to INT8
        quantized_arr = np.round(arr / scale).clip(-128, 127).astype(np.int8)

        quantized[name] = quantized_arr
        scales[f"{name}_scale"] = scale

    # Save quantized weights
    np.savez(save_path, **quantized, **scales)
    print(f"INT8 weights exported to: {save_path}")

    # Print quantization info
    print("\nQuantization info:")
    for name in [n for n in quantized.keys() if not n.endswith('_scale')]:
        scale = scales[f"{name}_scale"]
        print(f"  {name}: scale={scale:.6f}")

    return quantized, scales


def main():
    parser = argparse.ArgumentParser(description='Train MNIST MLP')
    parser.add_argument('--epochs', type=int, default=5, help='Number of epochs')
    parser.add_argument('--lr', type=float, default=0.001, help='Learning rate')
    parser.add_argument('--batch-size', type=int, default=64, help='Batch size')
    parser.add_argument('--load', type=str, default=None, help='Load existing weights')
    parser.add_argument('--device', type=str, default=None, help='Device (cuda/cpu)')
    parser.add_argument('--output-dir', type=str, default=None, help='Output directory')
    args = parser.parse_args()

    if not TORCH_AVAILABLE:
        print("ERROR: PyTorch is required for training")
        print("Install with: pip install torch torchvision")
        return

    # Setup output directory
    output_dir = args.output_dir or os.path.dirname(__file__)
    os.makedirs(output_dir, exist_ok=True)

    weights_path = os.path.join(output_dir, 'weights.pt')
    numpy_path = os.path.join(output_dir, 'weights.npz')
    int8_path = os.path.join(output_dir, 'weights_int8.npz')

    if args.load:
        # Load existing weights
        print(f"Loading weights from: {args.load}")
        model = create_model()
        model.load_state_dict(torch.load(args.load, map_location='cpu'))

        # Test model
        _, test_loader = get_mnist_data(args.batch_size)
        criterion = nn.CrossEntropyLoss()
        device = torch.device(args.device or 'cpu')
        model = model.to(device)

        test_loss, test_acc = test_model(model, test_loader, criterion, device)
        print(f"Test accuracy: {test_acc:.2f}%")
    else:
        # Train new model
        model = train(
            epochs=args.epochs,
            lr=args.lr,
            batch_size=args.batch_size,
            save_path=weights_path,
            device=args.device
        )

    # Export weights
    print("\n" + "=" * 60)
    print("Exporting weights...")
    export_weights_numpy(model, numpy_path)
    export_weights_int8(model, int8_path)

    print("\n" + "=" * 60)
    print("Training complete!")
    print(f"  PyTorch weights: {weights_path}")
    print(f"  NumPy weights:   {numpy_path}")
    print(f"  INT8 weights:    {int8_path}")


if __name__ == '__main__':
    main()
