"""
Tiling Controller Testbench

Tests for the 3-level nested loop tiling controller:
1. Tile count calculation
2. Address computation
3. Tile iteration order
4. Edge tile handling
5. Loop completion detection
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


TILE_SIZE = 8


async def setup_tiling(dut, clock_period_ns: int = 10):
    """Setup for tiling controller testbench."""
    await setup_clock(dut, clock_period_ns)

    # Matrix dimensions
    dut.matrix_m.value = 16
    dut.matrix_n.value = 16
    dut.matrix_k.value = 16

    # Base addresses
    dut.base_addr_a.value = 0x0000
    dut.base_addr_b.value = 0x1400
    dut.base_addr_c.value = 0x3000

    # Control
    dut.start.value = 0
    dut.advance.value = 0

    # Loop interface
    dut.loop_check.value = 0
    dut.loop_level.value = 0
    dut.loop_start_pc.value = 0

    await reset_dut(dut)


@cocotb.test()
async def test_tiling_reset(dut):
    """Test that tiling controller resets correctly."""
    logger.info("Test: Tiling Controller Reset")

    await setup_tiling(dut)

    # Verify initial state
    assert int(dut.done.value) == 0, "done should be 0"
    assert int(dut.active.value) == 0, "active should be 0"
    assert int(dut.tile_m.value) == 0, "tile_m should be 0"
    assert int(dut.tile_n.value) == 0, "tile_n should be 0"
    assert int(dut.tile_k.value) == 0, "tile_k should be 0"

    logger.info("PASS: Tiling controller reset verified")


@cocotb.test()
async def test_tiling_tile_counts(dut):
    """Test tile count calculations."""
    logger.info("Test: Tile Count Calculation")

    await setup_tiling(dut)

    # 16x16 matrices with 8x8 tiles = 2 tiles per dimension
    assert int(dut.num_tiles_m.value) == 2, f"num_tiles_m should be 2, got {int(dut.num_tiles_m.value)}"
    assert int(dut.num_tiles_n.value) == 2, f"num_tiles_n should be 2, got {int(dut.num_tiles_n.value)}"
    assert int(dut.num_tiles_k.value) == 2, f"num_tiles_k should be 2, got {int(dut.num_tiles_k.value)}"

    # Test non-divisible case
    dut.matrix_m.value = 20
    dut.matrix_n.value = 12
    dut.matrix_k.value = 17

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    # ceil(20/8) = 3, ceil(12/8) = 2, ceil(17/8) = 3
    assert int(dut.num_tiles_m.value) == 3, f"num_tiles_m should be 3"
    assert int(dut.num_tiles_n.value) == 2, f"num_tiles_n should be 2"
    assert int(dut.num_tiles_k.value) == 3, f"num_tiles_k should be 3"

    logger.info("PASS: Tile count calculation verified")


@cocotb.test()
async def test_tiling_start(dut):
    """Test starting tiling iteration."""
    logger.info("Test: Tiling Start")

    await setup_tiling(dut)

    # Start tiling
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # Should be active with first tile
    assert int(dut.active.value) == 1, "Should be active"
    assert int(dut.done.value) == 0, "Should not be done"
    assert int(dut.tile_m.value) == 0, "tile_m should be 0"
    assert int(dut.tile_n.value) == 0, "tile_n should be 0"
    assert int(dut.tile_k.value) == 0, "tile_k should be 0"
    assert int(dut.first_k_tile.value) == 1, "Should be first K tile"

    logger.info("PASS: Tiling start verified")


@cocotb.test()
async def test_tiling_advance_k(dut):
    """Test advancing through K tiles."""
    logger.info("Test: Advance K Tiles")

    await setup_tiling(dut)

    dut.matrix_m.value = 8
    dut.matrix_n.value = 8
    dut.matrix_k.value = 24  # 3 K tiles

    await RisingEdge(dut.clk)

    # Start tiling
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # First tile (0,0,0)
    assert int(dut.tile_k.value) == 0, "tile_k should be 0"
    assert int(dut.first_k_tile.value) == 1, "Should be first K tile"

    # Advance to second K tile
    dut.advance.value = 1
    await RisingEdge(dut.clk)
    dut.advance.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.tile_k.value) == 1, "tile_k should be 1"
    assert int(dut.first_k_tile.value) == 0, "Should not be first K tile"

    # Advance to third K tile (last)
    dut.advance.value = 1
    await RisingEdge(dut.clk)
    dut.advance.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.tile_k.value) == 2, "tile_k should be 2"
    assert int(dut.last_k_tile.value) == 1, "Should be last K tile"

    logger.info("PASS: K tile advance verified")


@cocotb.test()
async def test_tiling_iteration_order(dut):
    """Test complete tile iteration order (K -> N -> M)."""
    logger.info("Test: Tile Iteration Order")

    await setup_tiling(dut)

    dut.matrix_m.value = 16  # 2 M tiles
    dut.matrix_n.value = 16  # 2 N tiles
    dut.matrix_k.value = 16  # 2 K tiles

    await RisingEdge(dut.clk)

    # Start tiling
    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # Expected order: (0,0,0) -> (0,0,1) -> (0,1,0) -> (0,1,1) -> (1,0,0) -> ...
    expected_tiles = [
        (0, 0, 0), (0, 0, 1),  # M=0, N=0, K=0,1
        (0, 1, 0), (0, 1, 1),  # M=0, N=1, K=0,1
        (1, 0, 0), (1, 0, 1),  # M=1, N=0, K=0,1
        (1, 1, 0), (1, 1, 1),  # M=1, N=1, K=0,1
    ]

    for i, (exp_m, exp_n, exp_k) in enumerate(expected_tiles):
        m = int(dut.tile_m.value)
        n = int(dut.tile_n.value)
        k = int(dut.tile_k.value)

        assert (m, n, k) == (exp_m, exp_n, exp_k), \
            f"Tile {i}: expected {(exp_m, exp_n, exp_k)}, got {(m, n, k)}"

        if i < len(expected_tiles) - 1:
            dut.advance.value = 1
            await RisingEdge(dut.clk)
            dut.advance.value = 0
            await RisingEdge(dut.clk)

    # One more advance should complete
    dut.advance.value = 1
    await RisingEdge(dut.clk)
    dut.advance.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.done.value) == 1, "Should be done after all tiles"

    logger.info("PASS: Tile iteration order verified")


@cocotb.test()
async def test_tiling_accumulation_flags(dut):
    """Test first_k_tile and last_k_tile flags."""
    logger.info("Test: Accumulation Flags")

    await setup_tiling(dut)

    dut.matrix_m.value = 8
    dut.matrix_n.value = 8
    dut.matrix_k.value = 24  # 3 K tiles

    await RisingEdge(dut.clk)

    dut.start.value = 1
    await RisingEdge(dut.clk)
    dut.start.value = 0
    await RisingEdge(dut.clk)

    # First K tile: first=1, last=0
    assert int(dut.first_k_tile.value) == 1
    assert int(dut.last_k_tile.value) == 0

    # Advance to K=1: first=0, last=0
    dut.advance.value = 1
    await RisingEdge(dut.clk)
    dut.advance.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.first_k_tile.value) == 0
    assert int(dut.last_k_tile.value) == 0

    # Advance to K=2: first=0, last=1
    dut.advance.value = 1
    await RisingEdge(dut.clk)
    dut.advance.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.first_k_tile.value) == 0
    assert int(dut.last_k_tile.value) == 1

    logger.info("PASS: Accumulation flags verified")


@cocotb.test()
async def test_tiling_total_tiles(dut):
    """Test total tile count calculation."""
    logger.info("Test: Total Tile Count")

    await setup_tiling(dut)

    dut.matrix_m.value = 24  # 3 tiles
    dut.matrix_n.value = 16  # 2 tiles
    dut.matrix_k.value = 32  # 4 tiles

    await RisingEdge(dut.clk)
    await RisingEdge(dut.clk)

    total = int(dut.debug_total_tiles.value)
    expected = 3 * 2 * 4  # 24 tiles

    assert total == expected, f"Total tiles should be {expected}, got {total}"

    logger.info("PASS: Total tile count verified")
