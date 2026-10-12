#!/usr/bin/env python3
"""gen_bitmanip_test.py - generate c/bitmanip_ops.c (BP-DV-040).

Expected values come from a Python reference model of each Zba/Zbb/Zbs
instruction (RISC-V bit-manipulation spec, XLEN = 64), so the C test never
contains hand-computed constants. Re-run after changing the operand sets:

    python3 scripts/gen_bitmanip_test.py          > c/bitmanip_ops.c    # BP-DV-040
    python3 scripts/gen_bitmanip_test.py --shadd  > c/bitmanip_shadd.c  # BP-DV-041

BP-DV-040 covers everything except sh1add/sh2add/sh3add(.uw); BP-DV-041
covers only those (they currently use rs2[5:0] as the shift amount - Jira).
"""
import sys
SHADD_ONLY = "--shadd" in sys.argv
M = (1 << 64) - 1

def u(x):  return x & M
def s64(x):
    x &= M
    return x - (1 << 64) if x >> 63 else x
def sx32(x):
    x &= 0xFFFFFFFF
    return u(x - (1 << 32) if x >> 31 else x)
def zx32(x): return x & 0xFFFFFFFF

def clz(x, w):
    x &= (1 << w) - 1
    return w - x.bit_length()
def ctz(x, w):
    x &= (1 << w) - 1
    return w if x == 0 else (x & -x).bit_length() - 1
def rol(x, n, w):
    m = (1 << w) - 1; x &= m; n %= w
    return ((x << n) | (x >> (w - n))) & m if n else x
def ror(x, n, w): return rol(x, (w - n) % w, w)

R = {   # register-register: f(rs1, rs2)
  "add.uw":    lambda a, b: u(zx32(a) + b),
  "sh1add":    lambda a, b: u((a << 1) + b),
  "sh2add":    lambda a, b: u((a << 2) + b),
  "sh3add":    lambda a, b: u((a << 3) + b),
  "sh1add.uw": lambda a, b: u((zx32(a) << 1) + b),
  "sh2add.uw": lambda a, b: u((zx32(a) << 2) + b),
  "sh3add.uw": lambda a, b: u((zx32(a) << 3) + b),
  "andn":      lambda a, b: u(a & ~b),
  "orn":       lambda a, b: u(a | ~b),
  "xnor":      lambda a, b: u(~(a ^ b)),
  "max":       lambda a, b: u(max(s64(a), s64(b))),
  "min":       lambda a, b: u(min(s64(a), s64(b))),
  "maxu":      lambda a, b: max(a, b),
  "minu":      lambda a, b: min(a, b),
  "rol":       lambda a, b: rol(a, b & 63, 64),
  "ror":       lambda a, b: ror(a, b & 63, 64),
  "rolw":      lambda a, b: sx32(rol(a, b & 31, 32)),
  "rorw":      lambda a, b: sx32(ror(a, b & 31, 32)),
  "bclr":      lambda a, b: u(a & ~(1 << (b & 63))),
  "bset":      lambda a, b: u(a | (1 << (b & 63))),
  "binv":      lambda a, b: u(a ^ (1 << (b & 63))),
  "bext":      lambda a, b: (a >> (b & 63)) & 1,
}
U = {   # unary: f(rs1)
  "clz":    lambda a: clz(a, 64),
  "clzw":   lambda a: clz(a, 32),
  "ctz":    lambda a: ctz(a, 64),
  "ctzw":   lambda a: ctz(a, 32),
  "cpop":   lambda a: bin(a & M).count("1"),
  "cpopw":  lambda a: bin(a & 0xFFFFFFFF).count("1"),
  "sext.b": lambda a: u(((a & 0xFF) ^ 0x80) - 0x80),
  "sext.h": lambda a: u(((a & 0xFFFF) ^ 0x8000) - 0x8000),
  "zext.h": lambda a: a & 0xFFFF,
  "orc.b":  lambda a: sum((0xFF << (8 * i)) for i in range(8) if (a >> (8 * i)) & 0xFF),
  "rev8":   lambda a: int.from_bytes((a & M).to_bytes(8, "little"), "big"),
}
I = {   # register-immediate: f(rs1, imm)
  "slli.uw": lambda a, i: u(zx32(a) << i),
  "rori":    lambda a, i: ror(a, i, 64),
  "roriw":   lambda a, i: sx32(ror(a, i, 32)),
  "bclri":   lambda a, i: u(a & ~(1 << i)),
  "bseti":   lambda a, i: u(a | (1 << i)),
  "binvi":   lambda a, i: u(a ^ (1 << i)),
  "bexti":   lambda a, i: (a >> i) & 1,
}

A = 0x80000000F0F0A5C3   # top bit set, low word with its own top bit set
B = 0x0F0F0F0F0F0F0F0F
C = 0x7FFFFFFF00000001
SH = 0x00000000000000CD  # 205: & 63 = 13, & 31 = 13 (upper bits must be ignored)
SH2 = 0x0000000000000025 # 37: & 63 = 37, & 31 = 5

cases = []   # (kind, op, a, b_or_imm, expected)
SHADD = {"sh1add", "sh2add", "sh3add", "sh1add.uw", "sh2add.uw", "sh3add.uw"}
for op, f in R.items():
    if (op in SHADD) != SHADD_ONLY:
        continue
    pairs = [(A, B), (C, A)]
    if op in ("rol", "ror", "rolw", "rorw", "bclr", "bset", "binv", "bext"):
        pairs = [(A, SH), (C, SH2)]
    for a, b in pairs:
        cases.append(("R", op, a, b, f(a, b)))
for op, f in (U.items() if not SHADD_ONLY else []):
    vals = [A, C, 0x0]
    if op in ("clzw", "ctzw", "cpopw"):
        vals = [A, 0x00000000_0000FFFF << 8, 0xFFFFFFFF_00000000]
    if op in ("sext.b", "sext.h", "zext.h"):
        vals = [A, 0x0000000000007F7F]
    if op == "orc.b":
        vals = [A, 0x0001000000FF0000]
    for a in vals:
        cases.append(("U", op, a, None, f(a)))
for op, f in (I.items() if not SHADD_ONLY else []):
    imms = {"slli.uw": [0, 3, 31], "rori": [1, 37, 63], "roriw": [0, 5, 31]}.get(op, [0, 31, 63])
    for i in imms:
        cases.append(("I", op, A, i, f(A, i)))

out = []
w = out.append
if SHADD_ONLY:
    w("/* bitmanip_shadd.c")
    w(" *")
    w(" * BP-DV-041: Zba sh1add/sh2add/sh3add and .uw forms on both harts.")
    w(" * Currently FAILS: the hardware uses rs2[5:0] as the shift amount instead")
    w(" * of 1/2/3 (bp_be_pipe_int.sv shamt selects rs2 when irs2_r_v) - Jira.")
else:
    w("/* bitmanip_ops.c")
    w(" *")
    w(" * BP-DV-040: RISC-V bit manipulation Zba / Zbb / Zbs on both harts")
    w(" * (sh1add/sh2add/sh3add(.uw) are in BP-DV-041, bitmanip_shadd.c).")
w(" * GENERATED by scripts/gen_bitmanip_test.py - do not edit by hand; expected")
w(" * values come from that script's reference model of each instruction.")
w(" *")
w(f" * {len(cases)} checks over {len(set(c[1] for c in cases))} instructions: register, unary and")
w(" * immediate forms, with shift amounts whose upper bits must be ignored,")
w(" * zero inputs for clz/ctz/cpop, 32-bit W forms (sign-extended results) and")
w(" * .uw forms (zero-extended inputs).")
w(" *")
w(" * An unimplemented instruction raises an illegal-instruction trap; the")
w(" * handler counts it and skips the instruction, so the run never hangs.")
w(" *")
w(" * tohost (dual_core.h): (hart1 << 32) | hart0; per hart 0 = pass, else the")
w(" * 1-based number of the first failing check (see the CHECK list), or")
w(" * 0x8000 | trap count if any instruction trapped without a failing check.")
w(" * Built with -march=rv64ima_zba_zbb_zbs (Makefile, by program name).")
w(" */")
w("")
w("#include <stdint.h>")
w('#include "dual_core.h"')
w("")
w("#define BM_R(op, a, b) ({ uint64_t _r; __asm__ volatile (op \" %0, %1, %2\" \\")
w("    : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b))); _r; })")
w("#define BM_U(op, a) ({ uint64_t _r; __asm__ volatile (op \" %0, %1\" \\")
w("    : \"=r\"(_r) : \"r\"((uint64_t)(a))); _r; })")
w("#define BM_I(op, a, imm) ({ uint64_t _r; __asm__ volatile (op \" %0, %1, \" #imm \\")
w("    : \"=r\"(_r) : \"r\"((uint64_t)(a))); _r; })")
w("")
w("/* Illegal-instruction safety net: count, skip. Record at HART_DRAM. */")
w("#define REC_BASE 0x8000A000UL")
w("__asm__ (")
w('  ".text\\n"')
w('  ".align 2\\n"')
w('  ".global bm_m_trap\\n"')
w('  "bm_m_trap:\\n"')
w('  "  csrrw t6, mscratch, t6\\n"')
w('  "  sd t0, 8(t6)\\n"')
w('  "  ld t0, 0(t6)\\n"')
w('  "  addi t0, t0, 1\\n"')
w('  "  sd t0, 0(t6)\\n"')
w('  "  csrr t0, mepc\\n"')
w('  "  addi t0, t0, 4\\n"')
w('  "  csrw mepc, t0\\n"')
w('  "  ld t0, 8(t6)\\n"')
w('  "  csrrw t6, mscratch, t6\\n"')
w('  "  mret\\n"')
w(");")
w("extern char bm_m_trap[];")
w("")
w("#define CHECK(n, got, exp) do { if (rc == 0 && (got) != (exp)) rc = (n); } while (0)")
w("")
w("static uint64_t run_bitmanip(void)")
w("{")
w("  volatile uint64_t *rec = (volatile uint64_t *)HART_DRAM(REC_BASE);")
w("  uint64_t rc = 0;")
w("")
w("  rec[0] = 0;")
w('  __asm__ volatile ("csrw mtvec, %0" :: "r"(bm_m_trap));')
w('  __asm__ volatile ("csrw mscratch, %0" :: "r"(rec));')
w("")
for n, (k, op, a, b, e) in enumerate(cases, 1):
    if k == "R":
        expr = f'BM_R("{op}", 0x{a:016X}ULL, 0x{b:016X}ULL)'
    elif k == "U":
        expr = f'BM_U("{op}", 0x{a:016X}ULL)'
    else:
        expr = f'BM_I("{op}", 0x{a:016X}ULL, {b})'
    w(f"  CHECK({n:3d}, {expr}, 0x{e:016X}ULL);")
w("")
w("  if (rc == 0 && rec[0] != 0)")
w("    rc = 0x8000 | rec[0];")
w("  return rc;")
w("}")
w("")
w("static void start_main(void);")
w("")
w('__attribute__((naked, section(".text.start"), used))')
w("void _start(void)")
w("{")
w("  __asm__ volatile (")
w("    DUAL_CORE_STACK_INIT")
w('    "jal ra, start_main\\n"')
w('    "1: j 1b\\n"')
w("  );")
w("}")
w("")
w("static void start_main(void)")
w("{")
w("  tohost_exit(run_bitmanip());")
w("}")
print("\n".join(out))
