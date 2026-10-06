"""
tiny-tpu Assembler Code Generator

Generates binary machine code from the parsed AST.

Instruction Format (32-bit):
[31:24] Opcode (8 bits)
[23:20] Flags (4 bits)
[19:16] Dst (4 bits)
[15:8]  Src1 (8 bits)
[7:0]   Src2/Imm (8 bits)
"""

from typing import List, Dict, Tuple, Optional
from dataclasses import dataclass
import struct

from .parser import Program, Instruction, Label, Operand, OperandType


# Opcode mapping (must match decoder.sv)
OPCODES = {
    'NOP':       0x00,
    'LOAD_W':    0x01,
    'LOAD_A':    0x02,
    'MATMUL':    0x03,
    'STORE':     0x04,
    'ACT_RELU':  0x05,
    'ACT_GELU':  0x06,
    'ACT_SILU':  0x07,
    'SOFTMAX':   0x08,
    'ADD':       0x09,
    'LAYERNORM': 0x0A,
    'TRANSPOSE': 0x0B,
    'SCALE':     0x0C,
    'SYNC':      0x0D,
    'LOOP':      0x0E,
    'HALT':      0x0F,
    # Aliases
    'RELU':      0x05,
    'GELU':      0x06,
    'SILU':      0x07,
    'LDW':       0x01,
    'LDA':       0x02,
    'STR':       0x04,
    'MUL':       0x03,
    'MM':        0x03,
}

# Register encoding
REGISTERS = {
    'r0': 0, 'r1': 1, 'r2': 2, 'r3': 3,
    'r4': 4, 'r5': 5, 'r6': 6, 'r7': 7,
    'r8': 8, 'r9': 9, 'r10': 10, 'r11': 11,
    'r12': 12, 'r13': 13, 'r14': 14, 'r15': 15,
    'acc': 0,      # Accumulator (default for store)
    'wfifo': 1,    # Weight FIFO
    'afifo': 2,    # Activation FIFO
    'ubuf': 3,     # Unified buffer
    'pc': 15,      # Program counter
    'zero': 0,     # Always zero
}


class CodeGenError(Exception):
    """Exception raised for code generation errors."""
    def __init__(self, message: str, instruction: Instruction = None):
        self.message = message
        self.instruction = instruction
        if instruction:
            super().__init__(f"Line {instruction.line}: {message}")
        else:
            super().__init__(message)


@dataclass
class AssembledProgram:
    """Result of code generation."""
    binary: bytes                    # Raw binary machine code
    instructions: List[int]          # List of 32-bit instruction words
    labels: Dict[str, int]           # Label -> address mapping
    source_map: Dict[int, int]       # Address -> source line mapping
    size: int                        # Total size in bytes

    def to_hex(self) -> str:
        """Return hex dump of the binary."""
        lines = []
        for i, inst in enumerate(self.instructions):
            addr = i * 4
            lines.append(f"{addr:04X}: {inst:08X}")
        return "\n".join(lines)

    def to_verilog_mem(self) -> str:
        """Return Verilog $readmemh format."""
        lines = ["// TPU Program Memory"]
        for i, inst in enumerate(self.instructions):
            lines.append(f"{inst:08X}")
        return "\n".join(lines)

    def to_c_array(self, name: str = "program") -> str:
        """Return C array format."""
        lines = [f"uint32_t {name}[] = {{"]
        for i, inst in enumerate(self.instructions):
            lines.append(f"    0x{inst:08X},  // {i}")
        lines.append("};")
        lines.append(f"size_t {name}_size = {len(self.instructions)};")
        return "\n".join(lines)


class CodeGenerator:
    """Generates machine code from AST."""

    def __init__(self, program: Program):
        """
        Initialize code generator with parsed program.

        Args:
            program: Parsed Program AST
        """
        self.program = program
        self.labels: Dict[str, int] = {}
        self.instructions: List[int] = []
        self.source_map: Dict[int, int] = {}

    def generate(self) -> AssembledProgram:
        """
        Generate machine code.

        Returns:
            AssembledProgram with binary and metadata

        Raises:
            CodeGenError: If code generation fails
        """
        # First pass: collect labels and compute addresses
        self._collect_labels()

        # Second pass: generate instructions
        self._generate_instructions()

        # Pack into bytes (little-endian)
        binary = b''.join(struct.pack('<I', inst) for inst in self.instructions)

        return AssembledProgram(
            binary=binary,
            instructions=self.instructions,
            labels=self.labels,
            source_map=self.source_map,
            size=len(binary)
        )

    def _collect_labels(self):
        """First pass: collect label addresses."""
        address = 0
        for stmt in self.program.statements:
            if isinstance(stmt, Label):
                if stmt.name in self.labels:
                    raise CodeGenError(f"Duplicate label: {stmt.name}")
                self.labels[stmt.name] = address
                stmt.address = address
            elif isinstance(stmt, Instruction):
                address += 4  # Each instruction is 4 bytes

        # Update program's label table
        self.program.labels = self.labels

    def _generate_instructions(self):
        """Second pass: generate instruction words."""
        address = 0
        for stmt in self.program.statements:
            if isinstance(stmt, Label):
                continue  # Labels don't generate code

            if isinstance(stmt, Instruction):
                word = self._encode_instruction(stmt)
                self.instructions.append(word)
                self.source_map[address] = stmt.line
                address += 4

    def _encode_instruction(self, inst: Instruction) -> int:
        """Encode a single instruction to 32-bit word."""
        # Get opcode
        if inst.mnemonic not in OPCODES:
            raise CodeGenError(f"Unknown mnemonic: {inst.mnemonic}", inst)
        opcode = OPCODES[inst.mnemonic]

        # Decode operands based on instruction type (may set inst.flags)
        dst, src1, src2 = self._decode_operands(inst)

        # Get flags after _decode_operands (it may set inst.flags for ADD etc.)
        flags = inst.flags & 0xF

        # Build instruction word
        # [31:24] Opcode | [23:20] Flags | [19:16] Dst | [15:8] Src1 | [7:0] Src2
        word = (opcode << 24) | (flags << 20) | (dst << 16) | (src1 << 8) | src2

        # Store decoded fields in instruction for debugging
        inst.opcode = opcode
        inst.dst = dst
        inst.src1 = src1
        inst.src2 = src2

        return word

    def _decode_operands(self, inst: Instruction) -> Tuple[int, int, int]:
        """
        Decode instruction operands into dst, src1, src2 fields.

        Returns:
            Tuple of (dst, src1, src2) as integers
        """
        mnemonic = inst.mnemonic
        operands = inst.operands
        dst, src1, src2 = 0, 0, 0

        # No-operand instructions
        if mnemonic in ('NOP', 'HALT', 'SYNC'):
            return 0, 0, 0

        # Memory load instructions: LOAD_W addr, LOAD_A addr
        if mnemonic in ('LOAD_W', 'LDW', 'LOAD_A', 'LDA'):
            if len(operands) >= 1:
                src1, src2 = self._encode_address(operands[0], inst)
            if len(operands) >= 2:
                dst = self._encode_operand_value(operands[1], inst) & 0xF
            return dst, src1, src2

        # Store instruction: STORE addr
        if mnemonic in ('STORE', 'STR'):
            if len(operands) >= 1:
                src1, src2 = self._encode_address(operands[0], inst)
            return dst, src1, src2

        # Compute instructions: MATMUL, activations, etc.
        if mnemonic in ('MATMUL', 'MUL', 'MM'):
            # MATMUL [dst], [src1], [src2] or just MATMUL
            for i, op in enumerate(operands[:3]):
                val = self._encode_operand_value(op, inst)
                if i == 0:
                    dst = val & 0xF
                elif i == 1:
                    src1 = val & 0xFF
                else:
                    src2 = val & 0xFF
            return dst, src1, src2

        # Activation instructions: ACT_RELU addr, [dst_addr], size
        # Encoding: addr_high in src1, addr_low in dst<<4, size in src2
        # Full address = (src1 << 8) | (dst << 4) - allows 12-bit addresses (16-byte aligned)
        if mnemonic in ('ACT_RELU', 'ACT_GELU', 'ACT_SILU', 'RELU', 'GELU', 'SILU'):
            if len(operands) >= 1:
                # Get full address value
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    addr = op.value
                elif op.type == OperandType.MEMORY:
                    addr = op.offset
                else:
                    addr = self._encode_operand_value(op, inst)
                src1 = (addr >> 8) & 0xFF   # High byte
                dst = (addr >> 4) & 0xF     # Middle nibble
            if len(operands) == 2:
                # 2-operand: ACT_RELU addr, size
                src2 = self._encode_operand_value(operands[1], inst) & 0xFF
            elif len(operands) >= 3:
                # 3-operand: ACT_RELU src, dst, size (dst ignored for in-place)
                src2 = self._encode_operand_value(operands[2], inst) & 0xFF
            return dst, src1, src2

        # Softmax: addr, length (in-place)
        # Encoding: addr in src1|src2 (16-bit), length in dst (4-bit, max 15)
        if mnemonic == 'SOFTMAX':
            if len(operands) >= 1:
                # Use _encode_address for proper 16-bit address encoding
                src1, src2 = self._encode_address(operands[0], inst)
            if len(operands) == 2:
                # 2-operand form: SOFTMAX addr, length
                dst = self._encode_operand_value(operands[1], inst) & 0xF
            elif len(operands) >= 3:
                # 3-operand form: SOFTMAX src, dst, length (dst ignored, in-place)
                dst = self._encode_operand_value(operands[2], inst) & 0xF
            return dst, src1, src2

        # LAYERNORM: src_addr, dst_addr
        # Encoding: src_addr = src1 << 8, dst_addr = src2 << 8, size = dst (default 64)
        if mnemonic == 'LAYERNORM':
            if len(operands) >= 2:
                # 2-operand: LAYERNORM src_addr, dst_addr
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    src_addr = op.value
                elif op.type == OperandType.MEMORY:
                    src_addr = op.offset
                else:
                    src_addr = self._encode_operand_value(op, inst)
                src1 = (src_addr >> 8) & 0xFF
                op = operands[1]
                if op.type == OperandType.IMMEDIATE:
                    dst_addr = op.value
                elif op.type == OperandType.MEMORY:
                    dst_addr = op.offset
                else:
                    dst_addr = self._encode_operand_value(op, inst)
                src2 = (dst_addr >> 8) & 0xFF
                dst = 0  # Default size (64 in simulator)
            if len(operands) >= 3:
                # 3-operand: LAYERNORM src_addr, dst_addr, size
                dst = self._encode_operand_value(operands[2], inst) & 0xF
            return dst, src1, src2

        # ADD instruction supports two formats:
        # 2-operand (flags=0): ADD dst_addr, src_addr -> dst = dst + src (in-place)
        #   Encoding: dst_addr = src1 << 8 (256-byte aligned)
        #             src_addr = (dst << 12) | (src2 << 4) (16-byte aligned)
        # 3-operand (flags=1): ADD src1_addr, src2_addr, dst_addr -> dst = src1 + src2
        #   Encoding: src1_addr = src1 << 8, src2_addr = src2 << 8, dst_addr = dst << 12
        if mnemonic == 'ADD':
            if len(operands) == 2:
                # 2-operand in-place: ADD dst_addr, src_addr
                inst.flags = 0
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    dst_addr = op.value
                elif op.type == OperandType.MEMORY:
                    dst_addr = op.offset
                else:
                    dst_addr = self._encode_operand_value(op, inst)
                src1 = (dst_addr >> 8) & 0xFF  # dst_addr high byte (256-byte aligned)
                op = operands[1]
                if op.type == OperandType.IMMEDIATE:
                    src_addr = op.value
                elif op.type == OperandType.MEMORY:
                    src_addr = op.offset
                else:
                    src_addr = self._encode_operand_value(op, inst)
                dst = (src_addr >> 12) & 0xF   # src_addr high nibble
                src2 = (src_addr >> 4) & 0xFF  # src_addr middle byte
                return dst, src1, src2
            elif len(operands) >= 3:
                # 3-operand: ADD src1_addr, src2_addr, dst_addr
                inst.flags = 1
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    addr = op.value
                elif op.type == OperandType.MEMORY:
                    addr = op.offset
                else:
                    addr = self._encode_operand_value(op, inst)
                src1 = (addr >> 8) & 0xFF
                op = operands[1]
                if op.type == OperandType.IMMEDIATE:
                    addr = op.value
                elif op.type == OperandType.MEMORY:
                    addr = op.offset
                else:
                    addr = self._encode_operand_value(op, inst)
                src2 = (addr >> 8) & 0xFF
                op = operands[2]
                if op.type == OperandType.IMMEDIATE:
                    addr = op.value
                elif op.type == OperandType.MEMORY:
                    addr = op.offset
                else:
                    addr = self._encode_operand_value(op, inst)
                dst = (addr >> 12) & 0xF
                return dst, src1, src2
            return dst, src1, src2

        # SCALE: addr, [dst_addr], scale_factor
        # Encoding: addr_high in src1, addr_nibble in dst, scale in src2
        # Full address = (src1 << 8) | (dst << 4) - 12-bit address
        if mnemonic == 'SCALE':
            if len(operands) >= 1:
                # Get full address value
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    addr = op.value
                elif op.type == OperandType.MEMORY:
                    addr = op.offset
                else:
                    addr = self._encode_operand_value(op, inst)
                src1 = (addr >> 8) & 0xFF   # High byte
                dst = (addr >> 4) & 0xF     # Middle nibble
            if len(operands) == 2:
                # 2-operand: SCALE addr, factor
                src2 = self._encode_operand_value(operands[1], inst) & 0xFF
            elif len(operands) >= 3:
                # 3-operand: SCALE src, dst, factor (dst ignored for in-place)
                src2 = self._encode_operand_value(operands[2], inst) & 0xFF
            return dst, src1, src2

        # TRANSPOSE: src_addr, dst_addr
        # Encoding for addresses with low byte = 0x00:
        #   src1 = src_addr high byte
        #   src2 = dst_addr high byte
        #   dst = matrix size (8 = 8x8 matrix)
        if mnemonic == 'TRANSPOSE':
            # Get full address values
            if len(operands) >= 1:
                op = operands[0]
                if op.type == OperandType.IMMEDIATE:
                    src_addr = op.value
                elif op.type == OperandType.MEMORY:
                    src_addr = op.offset
                else:
                    src_addr = self._encode_operand_value(op, inst)
                src1 = (src_addr >> 8) & 0xFF  # High byte of src
            if len(operands) >= 2:
                op = operands[1]
                if op.type == OperandType.IMMEDIATE:
                    dst_addr = op.value
                elif op.type == OperandType.MEMORY:
                    dst_addr = op.offset
                else:
                    dst_addr = self._encode_operand_value(op, inst)
                src2 = (dst_addr >> 8) & 0xFF  # High byte of dst
            # Default to 8x8 matrix
            dst = 8
            return dst, src1, src2

        # LOOP: level, count, target
        if mnemonic == 'LOOP':
            if len(operands) >= 1:
                dst = self._encode_operand_value(operands[0], inst) & 0xF  # Loop level
            if len(operands) >= 2:
                src1 = self._encode_operand_value(operands[1], inst) & 0xFF  # Count
            if len(operands) >= 3:
                src2 = self._encode_operand_value(operands[2], inst) & 0xFF  # Target PC
            return dst, src1, src2

        # Default: use operands in order
        for i, op in enumerate(operands[:3]):
            val = self._encode_operand_value(op, inst)
            if i == 0:
                dst = val & 0xF
            elif i == 1:
                src1 = val & 0xFF
            else:
                src2 = val & 0xFF

        return dst, src1, src2

    def _encode_operand_value(self, operand: Operand, inst: Instruction) -> int:
        """Encode a single operand to an integer value."""
        if operand.type == OperandType.REGISTER:
            if operand.value not in REGISTERS:
                raise CodeGenError(f"Unknown register: {operand.value}", inst)
            return REGISTERS[operand.value]

        if operand.type == OperandType.IMMEDIATE:
            return operand.value & 0xFF

        if operand.type == OperandType.LABEL_REF:
            if operand.value not in self.labels:
                raise CodeGenError(f"Undefined label: {operand.value}", inst)
            # Return address divided by 4 (instruction index)
            return (self.labels[operand.value] // 4) & 0xFF

        if operand.type == OperandType.MEMORY:
            # Return the base register or direct address
            if operand.base:
                return REGISTERS.get(operand.base, 0)
            return operand.offset & 0xFF

        return 0

    def _encode_address(self, operand: Operand, inst: Instruction) -> Tuple[int, int]:
        """
        Encode an address operand into src1, src2 fields.

        For memory operands, src1 = high byte, src2 = low byte.
        For register, src1 = register, src2 = 0.
        For immediate, split into two bytes.

        Returns:
            Tuple of (src1, src2)
        """
        if operand.type == OperandType.MEMORY:
            if operand.base:
                # Register + offset: src1 = reg, src2 = offset
                reg = REGISTERS.get(operand.base, 0)
                return reg, operand.offset & 0xFF
            else:
                # Direct address: split into high/low
                addr = operand.offset
                return (addr >> 8) & 0xFF, addr & 0xFF

        if operand.type == OperandType.IMMEDIATE:
            addr = operand.value
            return (addr >> 8) & 0xFF, addr & 0xFF

        if operand.type == OperandType.REGISTER:
            return REGISTERS.get(operand.value, 0), 0

        if operand.type == OperandType.LABEL_REF:
            if operand.value not in self.labels:
                raise CodeGenError(f"Undefined label: {operand.value}", inst)
            addr = self.labels[operand.value]
            return (addr >> 8) & 0xFF, addr & 0xFF

        return 0, 0


def generate(program: Program) -> AssembledProgram:
    """
    Convenience function to generate code from AST.

    Args:
        program: Parsed Program AST

    Returns:
        AssembledProgram with binary and metadata

    Raises:
        CodeGenError: If code generation fails
    """
    generator = CodeGenerator(program)
    return generator.generate()


# Exported symbols
__all__ = [
    'OPCODES', 'REGISTERS', 'CodeGenError',
    'AssembledProgram', 'CodeGenerator', 'generate'
]
