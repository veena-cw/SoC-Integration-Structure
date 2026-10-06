"""
tiny-tpu Assembler

Main interface for assembling TPU assembly code into machine code.

Usage:
    from tiny_tpu.assembler import Assembler

    asm = Assembler()
    result = asm.assemble(source_code)

    # Get binary
    binary = result.binary

    # Get hex dump
    print(result.to_hex())

    # Get Verilog memory format
    print(result.to_verilog_mem())
"""

from typing import Tuple, Dict, Optional, List
from pathlib import Path

from .lexer import Lexer, Token, TokenType, LexerError
from .parser import Parser, Program, ParseError
from .codegen import CodeGenerator, AssembledProgram, CodeGenError, OPCODES


class AssemblerError(Exception):
    """Base exception for assembler errors."""
    pass


class Assembler:
    """
    TPU Assembler - converts assembly source to machine code.

    Example:
        asm = Assembler()

        # Assemble from string
        result = asm.assemble('''
            ; Load weights and compute
            LOAD_W 0x1000
            LOAD_A 0x2000
            MATMUL
            ACT_RELU
            STORE 0x3000
            HALT
        ''')

        # Save binary
        with open('program.bin', 'wb') as f:
            f.write(result.binary)
    """

    def __init__(self, verbose: bool = False):
        """
        Initialize assembler.

        Args:
            verbose: Enable verbose output during assembly
        """
        self.verbose = verbose
        self.last_program: Optional[Program] = None
        self.last_result: Optional[AssembledProgram] = None

    def assemble(self, source: str) -> AssembledProgram:
        """
        Assemble source code into machine code.

        Args:
            source: TPU assembly source code

        Returns:
            AssembledProgram with binary and metadata

        Raises:
            AssemblerError: If assembly fails (wraps LexerError, ParseError, CodeGenError)
        """
        try:
            # Tokenize
            if self.verbose:
                print("Tokenizing...")
            lexer = Lexer(source)
            tokens = lexer.tokenize()

            if self.verbose:
                print(f"  {len(tokens)} tokens")

            # Parse
            if self.verbose:
                print("Parsing...")
            parser = Parser(tokens)
            program = parser.parse()
            self.last_program = program

            if self.verbose:
                print(f"  {len(program.statements)} statements")
                print(f"  {len(program.instructions())} instructions")

            # Generate code
            if self.verbose:
                print("Generating code...")
            generator = CodeGenerator(program)
            result = generator.generate()
            self.last_result = result

            if self.verbose:
                print(f"  {result.size} bytes")
                print(f"  {len(result.labels)} labels")

            return result

        except LexerError as e:
            raise AssemblerError(f"Lexer error: {e}") from e
        except ParseError as e:
            raise AssemblerError(f"Parse error: {e}") from e
        except CodeGenError as e:
            raise AssemblerError(f"Code generation error: {e}") from e

    def assemble_file(self, path: str) -> AssembledProgram:
        """
        Assemble source code from a file.

        Args:
            path: Path to assembly source file

        Returns:
            AssembledProgram with binary and metadata
        """
        source = Path(path).read_text()
        return self.assemble(source)

    def disassemble(self, binary: bytes) -> str:
        """
        Disassemble binary machine code to assembly.

        Args:
            binary: Binary machine code (must be multiple of 4 bytes)

        Returns:
            Assembly source code string
        """
        if len(binary) % 4 != 0:
            raise AssemblerError("Binary must be multiple of 4 bytes")

        # Reverse opcode lookup
        opcode_names = {v: k for k, v in OPCODES.items()}
        # Remove aliases (keep canonical names)
        canonical = {'NOP', 'LOAD_W', 'LOAD_A', 'MATMUL', 'STORE',
                     'ACT_RELU', 'ACT_GELU', 'ACT_SILU', 'SOFTMAX',
                     'ADD', 'LAYERNORM', 'TRANSPOSE', 'SCALE',
                     'SYNC', 'LOOP', 'HALT'}
        opcode_names = {v: k for k, v in OPCODES.items() if k in canonical}

        lines = []
        for i in range(0, len(binary), 4):
            word = int.from_bytes(binary[i:i+4], 'little')

            # Decode fields
            opcode = (word >> 24) & 0xFF
            flags = (word >> 20) & 0xF
            dst = (word >> 16) & 0xF
            src1 = (word >> 8) & 0xFF
            src2 = word & 0xFF

            # Get mnemonic
            mnemonic = opcode_names.get(opcode, f"UNK_{opcode:02X}")

            # Build flag string
            flag_str = ""
            if flags & 0b0001: flag_str += ".acc"
            if flags & 0b0010: flag_str += ".async"
            if flags & 0b0100: flag_str += ".bcast"
            if flags & 0b1000: flag_str += ".trans"

            # Format operands based on instruction type
            if mnemonic in ('NOP', 'HALT', 'SYNC'):
                operands = ""
            elif mnemonic in ('LOAD_W', 'LOAD_A', 'STORE'):
                addr = (src1 << 8) | src2
                operands = f"0x{addr:04X}"
            elif mnemonic == 'LOOP':
                operands = f"{dst}, {src1}, {src2}"
            else:
                operands = f"{dst}, {src1}, {src2}"

            # Format line
            addr_str = f"{i:04X}:"
            inst_str = f"{mnemonic}{flag_str}"
            if operands:
                inst_str += f" {operands}"

            lines.append(f"    {addr_str}  {inst_str.ljust(30)}  ; {word:08X}")

        return "\n".join(lines)


def assemble(source: str) -> Tuple[bytes, Dict[str, int]]:
    """
    Convenience function to assemble source code.

    Args:
        source: TPU assembly source code

    Returns:
        Tuple of (binary, labels)

    Raises:
        AssemblerError: If assembly fails
    """
    asm = Assembler()
    result = asm.assemble(source)
    return result.binary, result.labels


def assemble_file(path: str) -> Tuple[bytes, Dict[str, int]]:
    """
    Convenience function to assemble a file.

    Args:
        path: Path to assembly source file

    Returns:
        Tuple of (binary, labels)
    """
    asm = Assembler()
    result = asm.assemble_file(path)
    return result.binary, result.labels


# Example programs
EXAMPLES = {
    'simple': '''
; Simple program: load weights, activations, multiply, store
    LOAD_W 0x1000      ; Load weights from address 0x1000
    LOAD_A 0x2000      ; Load activations from address 0x2000
    MATMUL             ; Matrix multiply
    STORE 0x3000       ; Store result to address 0x3000
    HALT               ; End program
''',

    'relu': '''
; Matrix multiply with ReLU activation
    LOAD_W 0x1000
    LOAD_A 0x2000
    MATMUL
    ACT_RELU           ; Apply ReLU activation
    STORE 0x3000
    HALT
''',

    'tiled': '''
; Tiled matrix multiply with accumulation
loop_start:
    LOAD_W 0x1000
    LOAD_A 0x2000
    MATMUL.acc         ; Accumulate into existing result
    LOOP 0, 4, @loop_start  ; Loop level 0, count 4, jump to loop_start
    STORE 0x3000
    HALT
''',

    'attention': '''
; Single attention head: Q@K.T -> scale -> softmax -> @V
    ; Q @ K^T
    LOAD_W 0x1000      ; K^T (transposed)
    LOAD_A 0x2000      ; Q
    MATMUL
    SCALE 0, 0, 11     ; Scale by 1/sqrt(d_k), factor ~= 0.088

    ; Softmax
    SOFTMAX 0, 0, 64   ; Softmax over 64 elements

    ; @ V
    STORE 0x3000       ; Store attention scores temporarily
    LOAD_W 0x4000      ; V
    LOAD_A 0x3000      ; Attention scores
    MATMUL
    STORE 0x5000       ; Store final output

    HALT
''',

    'mlp': '''
; Simple MLP: Linear -> ReLU -> Linear
    ; First layer
    LOAD_W 0x1000      ; W1
    LOAD_A 0x2000      ; Input
    MATMUL
    ACT_RELU
    STORE 0x3000       ; Hidden activation

    ; Second layer
    LOAD_W 0x4000      ; W2
    LOAD_A 0x3000      ; Hidden activation
    MATMUL
    STORE 0x5000       ; Output

    HALT
''',
}


# Exported symbols
__all__ = [
    'Assembler', 'AssemblerError',
    'assemble', 'assemble_file',
    'EXAMPLES',
    # Re-export from submodules
    'LexerError', 'ParseError', 'CodeGenError',
    'AssembledProgram', 'Program', 'Instruction',
]

# Re-exports
from .lexer import LexerError
from .parser import ParseError, Program, Instruction
from .codegen import CodeGenError, AssembledProgram
