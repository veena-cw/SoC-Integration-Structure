"""
tiny-tpu Assembler Package

Assembles TPU assembly language into machine code.

Usage:
    from tiny_tpu.assembler import Assembler, assemble

    # Using class interface
    asm = Assembler()
    result = asm.assemble(source_code)
    binary = result.binary

    # Using convenience function
    binary, labels = assemble(source_code)
"""

from .assembler import (
    Assembler,
    AssemblerError,
    assemble,
    assemble_file,
    EXAMPLES,
)

from .lexer import (
    Lexer,
    Token,
    TokenType,
    LexerError,
    tokenize,
    MNEMONICS,
    FLAGS,
    REGISTERS,
)

from .parser import (
    Parser,
    Program,
    Instruction,
    Label,
    Operand,
    OperandType,
    ParseError,
    parse,
)

from .codegen import (
    CodeGenerator,
    AssembledProgram,
    CodeGenError,
    generate,
    OPCODES,
)

__all__ = [
    # Main interface
    'Assembler',
    'AssemblerError',
    'assemble',
    'assemble_file',
    'EXAMPLES',
    # Lexer
    'Lexer',
    'Token',
    'TokenType',
    'LexerError',
    'tokenize',
    'MNEMONICS',
    'FLAGS',
    'REGISTERS',
    # Parser
    'Parser',
    'Program',
    'Instruction',
    'Label',
    'Operand',
    'OperandType',
    'ParseError',
    'parse',
    # Code generator
    'CodeGenerator',
    'AssembledProgram',
    'CodeGenError',
    'generate',
    'OPCODES',
]
