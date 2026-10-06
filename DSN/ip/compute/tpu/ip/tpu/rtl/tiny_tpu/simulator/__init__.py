"""
tiny-tpu Simulator Package

Cycle-accurate TPU simulator for debugging and verification.

Usage:
    from tiny_tpu.simulator import Simulator, simulate
    from tiny_tpu.assembler import assemble

    binary, _ = assemble(source_code)

    # Using class interface
    sim = Simulator(verbose=True)
    sim.load_program(binary)
    sim.load_weights(weights, 0x5000)
    trace = sim.run(max_cycles=10000)

    # Using convenience function
    trace, sim = simulate(binary, weights={0x5000: weights})
"""

from .simulator import (
    SimState,
    ExecutionTrace,
    PerformanceCounters,
    Memory,
    SystolicArray,
    Simulator,
    simulate,
)

__all__ = [
    'SimState',
    'ExecutionTrace',
    'PerformanceCounters',
    'Memory',
    'SystolicArray',
    'Simulator',
    'simulate',
]
