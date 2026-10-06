# Contributing to tiny-tpu

## Quick Start

1. Fork the repo
2. Create a branch: `git checkout -b feature/your-feature`
3. Make changes
4. Run tests: `make test_all`
5. Submit PR

## Code Style

- Python: Follow existing style, use `black` for formatting
- SystemVerilog: 4-space indent, lowercase signals
- Comments: Short and direct, no verbose explanations

## Pull Requests

- One feature per PR
- Include tests for new functionality
- Update docs if needed
- Keep commits atomic

## Testing

```bash
# Python tests
pytest

# RTL tests (requires cocotb + Icarus)
make test_pe
make test_systolic
make test_all
```

## Questions?

Open an issue.
