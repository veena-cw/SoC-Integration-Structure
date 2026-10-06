"""
Sequencer Testbench

Tests for the TPU sequencer (11-state FSM):
1. Reset and idle state
2. Start/stop control
3. State transitions
4. Instruction type routing
5. Halt handling
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


# State constants (must match sequencer.sv)
IDLE        = 0b0000
FETCH       = 0b0001
DECODE      = 0b0010
LOAD_SETUP  = 0b0011
LOAD_WAIT   = 0b0100
EXECUTE     = 0b0101
EXEC_WAIT   = 0b0110
STORE_SETUP = 0b0111
STORE_WAIT  = 0b1000
SYNC        = 0b1001
UPDATE      = 0b1010
DONE_STATE  = 0b1011


async def setup_sequencer(dut, clock_period_ns: int = 10):
    """Setup for sequencer testbench."""
    await setup_clock(dut, clock_period_ns)

    # Control
    dut.start.value = 0
    dut.stop.value = 0

    # Fetcher interface
    dut.fetcher_state.value = 0
    dut.instruction_valid.value = 0

    # Decoder interface
    dut.is_memory_op.value = 0
    dut.is_compute_op.value = 0
    dut.is_control_op.value = 0
    dut.halt_decoded.value = 0
    dut.sync_decoded.value = 0
    dut.loop_decoded.value = 0
    dut.matmul_decoded.value = 0

    # Memory status
    dut.load_busy.value = 0
    dut.load_done.value = 0
    dut.store_busy.value = 0
    dut.store_done.value = 0

    # Compute status
    dut.compute_busy.value = 0
    dut.compute_done.value = 0
    dut.matmul_busy.value = 0
    dut.matmul_done.value = 0

    # Loop controller
    dut.loop_active.value = 0
    dut.loop_iteration_done.value = 0
    dut.loop_target_pc.value = 0

    await reset_dut(dut)


@cocotb.test()
async def test_sequencer_reset(dut):
    """Test that sequencer resets to IDLE state."""
    logger.info("Test: Sequencer Reset")

    await setup_sequencer(dut)

    # Verify initial state
    assert int(dut.seq_state.value) == IDLE, "Should be in IDLE state"
    assert int(dut.running.value) == 0, "Should not be running"
    assert int(dut.done.value) == 0, "Should not be done"
    assert int(dut.fetch_enable.value) == 0, "fetch_enable should be 0"

    logger.info("PASS: Sequencer reset verified")


@cocotb.test()
async def test_sequencer_start(dut):
    """Test starting execution."""
    logger.info("Test: Sequencer Start")

    await setup_sequencer(dut)

    # Start execution
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # Should transition to FETCH state
    assert int(dut.running.value) == 1, "Should be running"
    assert int(dut.seq_state.value) == FETCH, "Should be in FETCH state"
    assert int(dut.fetch_enable.value) == 1, "fetch_enable should be set"

    logger.info("PASS: Sequencer start verified")


@cocotb.test()
async def test_sequencer_fetch_to_decode(dut):
    """Test transition from FETCH to DECODE."""
    logger.info("Test: FETCH to DECODE Transition")

    await setup_sequencer(dut)

    # Start and go to FETCH
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.seq_state.value) == FETCH, "Should be in FETCH"

    # Simulate instruction fetched
    dut.instruction_valid.value = 1
    await RisingEdge(dut.clk)
    dut.instruction_valid.value = 0

    await RisingEdge(dut.clk)

    # Should be in DECODE
    assert int(dut.seq_state.value) == DECODE, "Should be in DECODE state"
    assert int(dut.decode_enable.value) == 1, "decode_enable should be set"

    logger.info("PASS: FETCH to DECODE transition verified")


@cocotb.test()
async def test_sequencer_memory_op_routing(dut):
    """Test routing of memory operations."""
    logger.info("Test: Memory Op Routing")

    await setup_sequencer(dut)

    # Start and get to DECODE
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    dut.instruction_valid.value = 1
    await RisingEdge(dut.clk)
    dut.instruction_valid.value = 0

    await RisingEdge(dut.clk)

    # Now in DECODE, set memory op
    dut.is_memory_op.value = 1
    await RisingEdge(dut.clk)
    dut.is_memory_op.value = 0

    await RisingEdge(dut.clk)

    # Should route to LOAD_SETUP
    assert int(dut.seq_state.value) == LOAD_SETUP, f"Should be in LOAD_SETUP, got {int(dut.seq_state.value)}"

    logger.info("PASS: Memory op routing verified")


@cocotb.test()
async def test_sequencer_compute_op_routing(dut):
    """Test routing of compute operations."""
    logger.info("Test: Compute Op Routing")

    await setup_sequencer(dut)

    # Start and get to DECODE
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    dut.instruction_valid.value = 1
    await RisingEdge(dut.clk)
    dut.instruction_valid.value = 0

    await RisingEdge(dut.clk)

    # Now in DECODE, set compute op
    dut.is_compute_op.value = 1
    await RisingEdge(dut.clk)
    dut.is_compute_op.value = 0

    await RisingEdge(dut.clk)

    # Should route to EXECUTE
    assert int(dut.seq_state.value) == EXECUTE, f"Should be in EXECUTE, got {int(dut.seq_state.value)}"

    logger.info("PASS: Compute op routing verified")


@cocotb.test()
async def test_sequencer_halt(dut):
    """Test HALT instruction handling."""
    logger.info("Test: HALT Handling")

    await setup_sequencer(dut)

    # Start and get to DECODE
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    dut.instruction_valid.value = 1
    await RisingEdge(dut.clk)
    dut.instruction_valid.value = 0

    await RisingEdge(dut.clk)

    # Decode HALT
    dut.halt_decoded.value = 1
    await RisingEdge(dut.clk)
    dut.halt_decoded.value = 0

    await RisingEdge(dut.clk)

    # Should be in DONE state
    assert int(dut.seq_state.value) == DONE_STATE, "Should be in DONE state"
    assert int(dut.done.value) == 1, "done should be set"
    assert int(dut.running.value) == 0, "running should be cleared"

    logger.info("PASS: HALT handling verified")


@cocotb.test()
async def test_sequencer_stop(dut):
    """Test stop signal during execution."""
    logger.info("Test: Stop Signal")

    await setup_sequencer(dut)

    # Start execution
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.running.value) == 1, "Should be running"

    # Stop execution
    dut.stop.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Should transition to DONE
    assert int(dut.seq_state.value) == DONE_STATE, "Should be in DONE state"
    assert int(dut.running.value) == 0, "Should not be running"

    dut.stop.value = 0

    logger.info("PASS: Stop signal verified")


@cocotb.test()
async def test_sequencer_sync(dut):
    """Test SYNC instruction waiting."""
    logger.info("Test: SYNC Wait")

    await setup_sequencer(dut)

    # Start and get to DECODE
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    dut.instruction_valid.value = 1
    await RisingEdge(dut.clk)
    dut.instruction_valid.value = 0

    await RisingEdge(dut.clk)

    # Decode SYNC
    dut.sync_decoded.value = 1
    await RisingEdge(dut.clk)
    dut.sync_decoded.value = 0

    await RisingEdge(dut.clk)

    # Should be in SYNC state
    assert int(dut.seq_state.value) == SYNC, "Should be in SYNC state"

    # Simulate busy operations
    dut.matmul_busy.value = 1
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Still in SYNC while busy
    assert int(dut.seq_state.value) == SYNC, "Should still be in SYNC"

    # Clear busy
    dut.matmul_busy.value = 0
    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # Should move to UPDATE
    assert int(dut.seq_state.value) == UPDATE, "Should be in UPDATE state"

    logger.info("PASS: SYNC wait verified")


@cocotb.test()
async def test_sequencer_cycle_count(dut):
    """Test cycle counter."""
    logger.info("Test: Cycle Counter")

    await setup_sequencer(dut)

    # Check initial count
    initial_count = int(dut.debug_cycle_count.value)
    assert initial_count == 0, "Cycle count should be 0 initially"

    # Start execution
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0

    # Run for several cycles
    for _ in range(10):
        await RisingEdge(dut.clk)

    # Cycle count should have increased
    final_count = int(dut.debug_cycle_count.value)
    assert final_count > 0, "Cycle count should have increased"

    logger.info("PASS: Cycle counter verified")
