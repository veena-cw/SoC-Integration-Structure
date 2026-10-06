"""
Decoder Testbench

Tests for the TPU instruction decoder:
1. Opcode recognition
2. Field extraction (flags, dst, src1, src2)
3. Control signal generation
4. All 16 instruction types
5. Flag decoding
"""

import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, FallingEdge, Timer

from helpers.setup import setup_clock, reset_dut
from helpers.logger import logger


# Opcode constants
OP_NOP       = 0x00
OP_LOAD_W    = 0x01
OP_LOAD_A    = 0x02
OP_MATMUL    = 0x03
OP_STORE     = 0x04
OP_ACT_RELU  = 0x05
OP_ACT_GELU  = 0x06
OP_ACT_SILU  = 0x07
OP_SOFTMAX   = 0x08
OP_ADD       = 0x09
OP_LAYERNORM = 0x0A
OP_TRANSPOSE = 0x0B
OP_SCALE     = 0x0C
OP_SYNC      = 0x0D
OP_LOOP      = 0x0E
OP_HALT      = 0x0F


def build_instruction(opcode, flags=0, dst=0, src1=0, src2=0):
    """Build 32-bit instruction from fields."""
    return (opcode << 24) | (flags << 20) | (dst << 16) | (src1 << 8) | src2


async def setup_decoder(dut, clock_period_ns: int = 10):
    """Setup for decoder testbench."""
    await setup_clock(dut, clock_period_ns)

    dut.core_state.value = 0
    dut.decode_enable.value = 0
    dut.instruction.value = 0

    await reset_dut(dut)


@cocotb.test()
async def test_decoder_reset(dut):
    """Test that decoder resets correctly."""
    logger.info("Test: Decoder Reset")

    await setup_decoder(dut)

    # Verify all outputs are zero
    assert int(dut.decoded_opcode.value) == 0, "Opcode should be 0 after reset"
    assert int(dut.mem_read_enable.value) == 0, "mem_read_enable should be 0"
    assert int(dut.mem_write_enable.value) == 0, "mem_write_enable should be 0"
    assert int(dut.halt.value) == 0, "halt should be 0"

    logger.info("PASS: Decoder reset verified")


@cocotb.test()
async def test_decoder_nop(dut):
    """Test NOP instruction decoding."""
    logger.info("Test: NOP Instruction")

    await setup_decoder(dut)

    # Decode NOP instruction
    dut.instruction.value = build_instruction(OP_NOP)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_NOP, "Opcode should be NOP"
    assert int(dut.is_control_op.value) == 1, "NOP should be control op"
    assert int(dut.mem_read_enable.value) == 0, "No memory read for NOP"
    assert int(dut.mem_write_enable.value) == 0, "No memory write for NOP"

    logger.info("PASS: NOP instruction verified")


@cocotb.test()
async def test_decoder_load_weights(dut):
    """Test LOAD_W instruction decoding."""
    logger.info("Test: LOAD_W Instruction")

    await setup_decoder(dut)

    dut.instruction.value = build_instruction(OP_LOAD_W, dst=1, src1=0x10, src2=0x20)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_LOAD_W, "Opcode should be LOAD_W"
    assert int(dut.mem_read_enable.value) == 1, "mem_read_enable should be set"
    assert int(dut.mem_target.value) == 0, "mem_target should be 0 (weights)"
    assert int(dut.array_weight_load.value) == 1, "array_weight_load should be set"
    assert int(dut.is_memory_op.value) == 1, "Should be memory op"

    logger.info("PASS: LOAD_W instruction verified")


@cocotb.test()
async def test_decoder_load_activations(dut):
    """Test LOAD_A instruction decoding."""
    logger.info("Test: LOAD_A Instruction")

    await setup_decoder(dut)

    dut.instruction.value = build_instruction(OP_LOAD_A)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_LOAD_A, "Opcode should be LOAD_A"
    assert int(dut.mem_read_enable.value) == 1, "mem_read_enable should be set"
    assert int(dut.mem_target.value) == 1, "mem_target should be 1 (activations)"
    assert int(dut.is_memory_op.value) == 1, "Should be memory op"

    logger.info("PASS: LOAD_A instruction verified")


@cocotb.test()
async def test_decoder_matmul(dut):
    """Test MATMUL instruction decoding."""
    logger.info("Test: MATMUL Instruction")

    await setup_decoder(dut)

    # MATMUL without accumulate flag
    dut.instruction.value = build_instruction(OP_MATMUL, flags=0)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_MATMUL, "Opcode should be MATMUL"
    assert int(dut.array_enable.value) == 1, "array_enable should be set"
    assert int(dut.array_clear_acc.value) == 1, "array_clear_acc should be set (no accumulate)"
    assert int(dut.matmul_start.value) == 1, "matmul_start should be set"
    assert int(dut.is_compute_op.value) == 1, "Should be compute op"

    logger.info("PASS: MATMUL instruction verified")


@cocotb.test()
async def test_decoder_matmul_accumulate(dut):
    """Test MATMUL instruction with accumulate flag."""
    logger.info("Test: MATMUL with Accumulate")

    await setup_decoder(dut)

    # MATMUL with accumulate flag (flag[0] = 1)
    dut.instruction.value = build_instruction(OP_MATMUL, flags=0b0001)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_MATMUL, "Opcode should be MATMUL"
    assert int(dut.flag_accumulate.value) == 1, "accumulate flag should be set"
    assert int(dut.array_clear_acc.value) == 0, "array_clear_acc should NOT be set"

    logger.info("PASS: MATMUL with accumulate verified")


@cocotb.test()
async def test_decoder_store(dut):
    """Test STORE instruction decoding."""
    logger.info("Test: STORE Instruction")

    await setup_decoder(dut)

    dut.instruction.value = build_instruction(OP_STORE)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_STORE, "Opcode should be STORE"
    assert int(dut.mem_write_enable.value) == 1, "mem_write_enable should be set"
    assert int(dut.mem_target.value) == 2, "mem_target should be 2 (outputs)"
    assert int(dut.is_memory_op.value) == 1, "Should be memory op"

    logger.info("PASS: STORE instruction verified")


@cocotb.test()
async def test_decoder_activations(dut):
    """Test activation function instruction decoding."""
    logger.info("Test: Activation Instructions")

    await setup_decoder(dut)

    # Test ReLU
    dut.instruction.value = build_instruction(OP_ACT_RELU)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.activation_enable.value) == 1, "activation_enable should be set"
    assert int(dut.activation_func.value) == 0, "activation_func should be 0 (ReLU)"

    # Test GELU
    dut.instruction.value = build_instruction(OP_ACT_GELU)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.activation_func.value) == 1, "activation_func should be 1 (GELU)"

    # Test SiLU
    dut.instruction.value = build_instruction(OP_ACT_SILU)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.activation_func.value) == 2, "activation_func should be 2 (SiLU)"

    logger.info("PASS: Activation instructions verified")


@cocotb.test()
async def test_decoder_halt(dut):
    """Test HALT instruction decoding."""
    logger.info("Test: HALT Instruction")

    await setup_decoder(dut)

    dut.instruction.value = build_instruction(OP_HALT)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_HALT, "Opcode should be HALT"
    assert int(dut.halt.value) == 1, "halt should be set"
    assert int(dut.is_control_op.value) == 1, "Should be control op"

    logger.info("PASS: HALT instruction verified")


@cocotb.test()
async def test_decoder_field_extraction(dut):
    """Test correct field extraction from instruction."""
    logger.info("Test: Field Extraction")

    await setup_decoder(dut)

    # Build instruction with specific field values
    opcode = OP_MATMUL
    flags = 0b1010
    dst = 0x5
    src1 = 0xAB
    src2 = 0xCD

    dut.instruction.value = build_instruction(opcode, flags, dst, src1, src2)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == opcode, f"Opcode mismatch"
    assert int(dut.decoded_flags.value) == flags, f"Flags mismatch"
    assert int(dut.decoded_dst.value) == dst, f"Dst mismatch"
    assert int(dut.decoded_src1.value) == src1, f"Src1 mismatch"
    assert int(dut.decoded_src2.value) == src2, f"Src2 mismatch"

    # Check individual flags
    assert int(dut.flag_accumulate.value) == 0, "accumulate should be 0"
    assert int(dut.flag_async.value) == 1, "async should be 1"
    assert int(dut.flag_broadcast.value) == 0, "broadcast should be 0"
    assert int(dut.flag_transpose.value) == 1, "transpose should be 1"

    logger.info("PASS: Field extraction verified")


@cocotb.test()
async def test_decoder_sync(dut):
    """Test SYNC instruction decoding."""
    logger.info("Test: SYNC Instruction")

    await setup_decoder(dut)

    dut.instruction.value = build_instruction(OP_SYNC)
    dut.decode_enable.value = 1
    await RisingEdge(dut.clk)
    dut.decode_enable.value = 0
    await RisingEdge(dut.clk)

    assert int(dut.decoded_opcode.value) == OP_SYNC, "Opcode should be SYNC"
    assert int(dut.sync_wait.value) == 1, "sync_wait should be set"
    assert int(dut.is_control_op.value) == 1, "Should be control op"

    logger.info("PASS: SYNC instruction verified")
