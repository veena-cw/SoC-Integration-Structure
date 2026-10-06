"""
tiny-tpu Assembler Parser

Parses token stream into an AST representing the assembly program.

AST Node Types:
- Program: Root node containing list of statements
- Label: Label definition
- Instruction: Single instruction with mnemonic, flags, and operands
- Operand: Register, immediate, or memory reference
"""

from dataclasses import dataclass, field
from typing import List, Optional, Union, Dict
from enum import Enum, auto

from .lexer import Token, TokenType, Lexer, LexerError, FLAGS


class OperandType(Enum):
    """Types of instruction operands."""
    REGISTER = auto()
    IMMEDIATE = auto()
    LABEL_REF = auto()
    MEMORY = auto()  # [base + offset]


@dataclass
class Operand:
    """An instruction operand."""
    type: OperandType
    value: Union[str, int]
    base: Optional[str] = None  # For memory operands
    offset: int = 0             # For memory operands

    def __repr__(self):
        if self.type == OperandType.MEMORY:
            if self.offset:
                return f"[{self.base}+{self.offset}]"
            return f"[{self.base}]"
        return f"{self.type.name}({self.value})"


@dataclass
class Instruction:
    """A single assembly instruction."""
    mnemonic: str
    flags: int = 0
    operands: List[Operand] = field(default_factory=list)
    line: int = 0
    column: int = 0

    # Decoded fields (filled by codegen)
    opcode: int = 0
    dst: int = 0
    src1: int = 0
    src2: int = 0

    def __repr__(self):
        flag_str = ""
        if self.flags:
            flag_parts = []
            if self.flags & 0b0001: flag_parts.append(".acc")
            if self.flags & 0b0010: flag_parts.append(".async")
            if self.flags & 0b0100: flag_parts.append(".bcast")
            if self.flags & 0b1000: flag_parts.append(".trans")
            flag_str = "".join(flag_parts)
        ops = ", ".join(str(op) for op in self.operands)
        return f"{self.mnemonic}{flag_str} {ops}"


@dataclass
class Label:
    """A label definition."""
    name: str
    line: int = 0
    address: int = 0  # Filled during code generation

    def __repr__(self):
        return f"{self.name}:"


@dataclass
class Program:
    """Root AST node representing the entire program."""
    statements: List[Union[Label, Instruction]] = field(default_factory=list)
    labels: Dict[str, int] = field(default_factory=dict)  # label -> address

    def instructions(self) -> List[Instruction]:
        """Return only instruction nodes."""
        return [s for s in self.statements if isinstance(s, Instruction)]

    def __repr__(self):
        return f"Program({len(self.statements)} statements)"


class ParseError(Exception):
    """Exception raised for parser errors."""
    def __init__(self, message: str, token: Token = None):
        self.message = message
        self.token = token
        if token:
            super().__init__(f"Line {token.line}, Column {token.column}: {message}")
        else:
            super().__init__(message)


class Parser:
    """Parses TPU assembly tokens into an AST."""

    def __init__(self, tokens: List[Token]):
        """
        Initialize parser with token stream.

        Args:
            tokens: List of tokens from lexer
        """
        self.tokens = tokens
        self.pos = 0

    def _peek(self, offset: int = 0) -> Token:
        """Peek at token at current position + offset."""
        idx = self.pos + offset
        if idx < len(self.tokens):
            return self.tokens[idx]
        return self.tokens[-1]  # Return EOF

    def _current(self) -> Token:
        """Get current token."""
        return self._peek(0)

    def _advance(self) -> Token:
        """Advance position and return previous token."""
        token = self._current()
        if self.pos < len(self.tokens) - 1:
            self.pos += 1
        return token

    def _expect(self, token_type: TokenType, message: str = None) -> Token:
        """Expect current token to be of given type, then advance."""
        token = self._current()
        if token.type != token_type:
            msg = message or f"Expected {token_type.name}, got {token.type.name}"
            raise ParseError(msg, token)
        return self._advance()

    def _match(self, *token_types: TokenType) -> bool:
        """Check if current token matches any of the given types."""
        return self._current().type in token_types

    def _skip_newlines(self):
        """Skip any newline tokens."""
        while self._match(TokenType.NEWLINE):
            self._advance()

    def parse(self) -> Program:
        """
        Parse the entire program.

        Returns:
            Program AST node

        Raises:
            ParseError: If syntax error encountered
        """
        program = Program()

        self._skip_newlines()

        while not self._match(TokenType.EOF):
            stmt = self._parse_statement()
            if stmt:
                program.statements.append(stmt)
            self._skip_newlines()

        return program

    def _parse_statement(self) -> Optional[Union[Label, Instruction]]:
        """Parse a single statement (label or instruction)."""
        token = self._current()

        # Label definition
        if token.type == TokenType.LABEL:
            self._advance()
            return Label(name=token.value, line=token.line)

        # Instruction
        if token.type == TokenType.MNEMONIC:
            return self._parse_instruction()

        # Empty line (just newline) - skip
        if token.type == TokenType.NEWLINE:
            self._advance()
            return None

        raise ParseError(f"Expected label or instruction, got {token.type.name}", token)

    def _parse_instruction(self) -> Instruction:
        """Parse an instruction with its flags and operands."""
        mnemonic_token = self._expect(TokenType.MNEMONIC)

        inst = Instruction(
            mnemonic=mnemonic_token.value,
            line=mnemonic_token.line,
            column=mnemonic_token.column
        )

        # Parse flags (e.g., .acc, .trans)
        while self._match(TokenType.FLAG):
            flag_token = self._advance()
            inst.flags |= FLAGS.get(flag_token.value, 0)

        # Parse operands
        if not self._match(TokenType.NEWLINE, TokenType.EOF):
            inst.operands.append(self._parse_operand())

            while self._match(TokenType.COMMA):
                self._advance()  # consume comma
                inst.operands.append(self._parse_operand())

        return inst

    def _parse_operand(self) -> Operand:
        """Parse a single operand."""
        token = self._current()

        # Register
        if token.type == TokenType.REGISTER:
            self._advance()
            return Operand(type=OperandType.REGISTER, value=token.value)

        # Immediate number
        if token.type == TokenType.NUMBER:
            self._advance()
            value = self._parse_number(token.value)
            return Operand(type=OperandType.IMMEDIATE, value=value)

        # Label reference
        if token.type == TokenType.LABEL_REF:
            self._advance()
            return Operand(type=OperandType.LABEL_REF, value=token.value)

        # Memory operand [base] or [base + offset]
        if token.type == TokenType.LBRACKET:
            return self._parse_memory_operand()

        raise ParseError(f"Expected operand, got {token.type.name}", token)

    def _parse_memory_operand(self) -> Operand:
        """Parse a memory operand like [r0] or [r0 + 16]."""
        self._expect(TokenType.LBRACKET)

        # Base register or immediate
        base_token = self._current()
        if base_token.type == TokenType.REGISTER:
            self._advance()
            base = base_token.value
        elif base_token.type == TokenType.NUMBER:
            self._advance()
            # Direct address
            addr = self._parse_number(base_token.value)
            self._expect(TokenType.RBRACKET)
            return Operand(type=OperandType.MEMORY, value=addr, base=None, offset=addr)
        else:
            raise ParseError("Expected register or address in memory operand", base_token)

        # Optional offset
        offset = 0
        if self._match(TokenType.PLUS):
            self._advance()
            offset_token = self._expect(TokenType.NUMBER, "Expected offset after +")
            offset = self._parse_number(offset_token.value)
        elif self._match(TokenType.MINUS):
            self._advance()
            offset_token = self._expect(TokenType.NUMBER, "Expected offset after -")
            offset = -self._parse_number(offset_token.value)

        self._expect(TokenType.RBRACKET)

        return Operand(type=OperandType.MEMORY, value=base, base=base, offset=offset)

    def _parse_number(self, value: str) -> int:
        """Parse a numeric string to integer."""
        try:
            if value.startswith('0x') or value.startswith('0X'):
                return int(value, 16)
            return int(value)
        except ValueError:
            raise ParseError(f"Invalid number: {value}")


def parse(source: str) -> Program:
    """
    Convenience function to parse source code.

    Args:
        source: TPU assembly source code

    Returns:
        Program AST

    Raises:
        LexerError: If tokenization fails
        ParseError: If parsing fails
    """
    lexer = Lexer(source)
    tokens = lexer.tokenize()
    parser = Parser(tokens)
    return parser.parse()


# Exported symbols
__all__ = [
    'OperandType', 'Operand', 'Instruction', 'Label', 'Program',
    'Parser', 'ParseError', 'parse'
]
