"""
tiny-tpu Assembler Lexer

Tokenizes TPU assembly source code into a stream of tokens.

Token Types:
- MNEMONIC: Instruction names (NOP, LOAD_W, MATMUL, etc.)
- REGISTER: Register references (r0-r15, acc, etc.)
- NUMBER: Numeric literals (decimal, hex)
- LABEL: Label definitions (name:)
- LABEL_REF: Label references (@name)
- FLAG: Instruction flags (.acc, .async, .bcast, .trans)
- COMMA: Argument separator
- NEWLINE: Line terminator
- COMMENT: ; to end of line (discarded)
- EOF: End of file
"""

from enum import Enum, auto
from dataclasses import dataclass
from typing import List, Optional, Iterator
import re


class TokenType(Enum):
    """Token types for TPU assembly."""
    MNEMONIC = auto()
    REGISTER = auto()
    NUMBER = auto()
    LABEL = auto()
    LABEL_REF = auto()
    FLAG = auto()
    COMMA = auto()
    NEWLINE = auto()
    EOF = auto()
    # Special tokens
    LPAREN = auto()
    RPAREN = auto()
    LBRACKET = auto()
    RBRACKET = auto()
    COLON = auto()
    PLUS = auto()
    MINUS = auto()
    STAR = auto()


@dataclass
class Token:
    """A single token from the lexer."""
    type: TokenType
    value: str
    line: int
    column: int

    def __repr__(self):
        return f"Token({self.type.name}, {self.value!r}, L{self.line}:{self.column})"


class LexerError(Exception):
    """Exception raised for lexer errors."""
    def __init__(self, message: str, line: int, column: int):
        self.message = message
        self.line = line
        self.column = column
        super().__init__(f"Line {line}, Column {column}: {message}")


# TPU instruction mnemonics (must match decoder.sv opcodes)
MNEMONICS = {
    'NOP', 'LOAD_W', 'LOAD_A', 'MATMUL', 'STORE',
    'ACT_RELU', 'ACT_GELU', 'ACT_SILU', 'SOFTMAX',
    'ADD', 'LAYERNORM', 'TRANSPOSE', 'SCALE',
    'SYNC', 'LOOP', 'HALT',
    # Aliases
    'RELU', 'GELU', 'SILU',  # Short forms for activation
    'LDW', 'LDA', 'STR',     # Short forms for memory ops
    'MUL', 'MM',             # Short forms for matmul
}

# Instruction flags
FLAGS = {
    '.acc': 0b0001,      # Accumulate
    '.async': 0b0010,    # Async (don't wait)
    '.bcast': 0b0100,    # Broadcast
    '.trans': 0b1000,    # Transpose
    # Aliases
    '.a': 0b0001,
    '.b': 0b0100,
    '.t': 0b1000,
}

# Register names
REGISTERS = {
    # General purpose (for addressing)
    'r0', 'r1', 'r2', 'r3', 'r4', 'r5', 'r6', 'r7',
    'r8', 'r9', 'r10', 'r11', 'r12', 'r13', 'r14', 'r15',
    # Special registers
    'acc',      # Accumulator buffer
    'wfifo',    # Weight FIFO
    'afifo',    # Activation FIFO
    'ubuf',     # Unified buffer
    'pc',       # Program counter
    'zero',     # Always zero
}


class Lexer:
    """Tokenizes TPU assembly source code."""

    def __init__(self, source: str):
        """
        Initialize lexer with source code.

        Args:
            source: TPU assembly source code string
        """
        self.source = source
        self.pos = 0
        self.line = 1
        self.column = 1
        self.tokens: List[Token] = []

    def _peek(self, offset: int = 0) -> Optional[str]:
        """Peek at character at current position + offset."""
        idx = self.pos + offset
        if idx < len(self.source):
            return self.source[idx]
        return None

    def _advance(self) -> Optional[str]:
        """Advance position and return current character."""
        if self.pos >= len(self.source):
            return None
        char = self.source[self.pos]
        self.pos += 1
        if char == '\n':
            self.line += 1
            self.column = 1
        else:
            self.column += 1
        return char

    def _skip_whitespace(self):
        """Skip spaces and tabs (not newlines)."""
        while self._peek() in (' ', '\t', '\r'):
            self._advance()

    def _skip_comment(self):
        """Skip from ; to end of line."""
        if self._peek() == ';':
            while self._peek() is not None and self._peek() != '\n':
                self._advance()

    def _read_identifier(self) -> str:
        """Read an identifier (mnemonic, register, label)."""
        start = self.pos
        while self._peek() is not None and (self._peek().isalnum() or self._peek() == '_'):
            self._advance()
        return self.source[start:self.pos]

    def _read_number(self) -> str:
        """Read a numeric literal (decimal or hex)."""
        start = self.pos

        # Check for hex prefix
        if self._peek() == '0' and self._peek(1) in ('x', 'X'):
            self._advance()  # 0
            self._advance()  # x
            while self._peek() is not None and self._peek() in '0123456789abcdefABCDEF':
                self._advance()
        else:
            # Decimal (possibly negative)
            if self._peek() == '-':
                self._advance()
            while self._peek() is not None and self._peek().isdigit():
                self._advance()

        return self.source[start:self.pos]

    def _make_token(self, token_type: TokenType, value: str,
                    line: int = None, column: int = None) -> Token:
        """Create a token with current or specified position."""
        return Token(
            type=token_type,
            value=value,
            line=line if line is not None else self.line,
            column=column if column is not None else self.column
        )

    def tokenize(self) -> List[Token]:
        """
        Tokenize the entire source code.

        Returns:
            List of tokens

        Raises:
            LexerError: If invalid character or token encountered
        """
        self.tokens = []

        while self.pos < len(self.source):
            self._skip_whitespace()

            if self.pos >= len(self.source):
                break

            char = self._peek()
            start_line = self.line
            start_col = self.column

            # Comment
            if char == ';':
                self._skip_comment()
                continue

            # Newline
            if char == '\n':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.NEWLINE, '\\n', start_line, start_col))
                continue

            # Comma
            if char == ',':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.COMMA, ',', start_line, start_col))
                continue

            # Brackets and parens
            if char == '(':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.LPAREN, '(', start_line, start_col))
                continue
            if char == ')':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.RPAREN, ')', start_line, start_col))
                continue
            if char == '[':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.LBRACKET, '[', start_line, start_col))
                continue
            if char == ']':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.RBRACKET, ']', start_line, start_col))
                continue

            # Operators
            if char == '+':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.PLUS, '+', start_line, start_col))
                continue
            if char == '*':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.STAR, '*', start_line, start_col))
                continue

            # Flag (starts with .)
            if char == '.':
                self._advance()
                name = self._read_identifier()
                flag = '.' + name.lower()
                if flag not in FLAGS:
                    raise LexerError(f"Unknown flag: {flag}", start_line, start_col)
                self.tokens.append(self._make_token(
                    TokenType.FLAG, flag, start_line, start_col))
                continue

            # Label reference (starts with @)
            if char == '@':
                self._advance()
                name = self._read_identifier()
                if not name:
                    raise LexerError("Expected label name after @", start_line, start_col)
                self.tokens.append(self._make_token(
                    TokenType.LABEL_REF, name, start_line, start_col))
                continue

            # Number (starts with digit or minus followed by digit)
            if char.isdigit() or (char == '-' and self._peek(1) and self._peek(1).isdigit()):
                num = self._read_number()
                self.tokens.append(self._make_token(
                    TokenType.NUMBER, num, start_line, start_col))
                continue

            # Identifier (mnemonic, register, or label)
            if char.isalpha() or char == '_':
                ident = self._read_identifier()

                # Check if label definition (followed by :)
                self._skip_whitespace()
                if self._peek() == ':':
                    self._advance()
                    self.tokens.append(self._make_token(
                        TokenType.LABEL, ident, start_line, start_col))
                    continue

                # Check if mnemonic
                upper_ident = ident.upper()
                if upper_ident in MNEMONICS:
                    self.tokens.append(self._make_token(
                        TokenType.MNEMONIC, upper_ident, start_line, start_col))
                    continue

                # Check if register
                lower_ident = ident.lower()
                if lower_ident in REGISTERS:
                    self.tokens.append(self._make_token(
                        TokenType.REGISTER, lower_ident, start_line, start_col))
                    continue

                # Otherwise treat as label reference (for forward references)
                self.tokens.append(self._make_token(
                    TokenType.LABEL_REF, ident, start_line, start_col))
                continue

            # Colon alone (shouldn't happen after identifier)
            if char == ':':
                self._advance()
                self.tokens.append(self._make_token(
                    TokenType.COLON, ':', start_line, start_col))
                continue

            # Unknown character
            raise LexerError(f"Unexpected character: {char!r}", start_line, start_col)

        # Add EOF token
        self.tokens.append(self._make_token(TokenType.EOF, '', self.line, self.column))

        return self.tokens

    def __iter__(self) -> Iterator[Token]:
        """Iterate over tokens."""
        if not self.tokens:
            self.tokenize()
        return iter(self.tokens)


def tokenize(source: str) -> List[Token]:
    """
    Convenience function to tokenize source code.

    Args:
        source: TPU assembly source code

    Returns:
        List of tokens
    """
    lexer = Lexer(source)
    return lexer.tokenize()


# Exported symbols
__all__ = [
    'TokenType', 'Token', 'Lexer', 'LexerError',
    'tokenize', 'MNEMONICS', 'FLAGS', 'REGISTERS'
]
