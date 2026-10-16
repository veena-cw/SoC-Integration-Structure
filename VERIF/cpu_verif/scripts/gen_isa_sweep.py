#!/usr/bin/env python3
"""Generate c/isa_sweep.h: the decode sweep of BP-DV-052 (c/isa_complete.c).

Every instruction form listed in bp_be_instr_decoder.sv's decode groups is
executed once with fixed operands and its result checked against the
reference model below, so the decoder is fully exercised by BP-DV-052 on
its own (not only when the ALU, shift, mul/div, FPU and atomics tests are
merged in):

  RV64I/M register and immediate forms, all branches (taken / not taken),
  Zba add.uw / sh1add / sh2add / sh3add (+ .uw), all AMOs (.w and .d) and
  LR/SC, single- and double-precision FP arithmetic, compare, classify,
  fused multiply-add, conversions and moves.

Zba is emitted with .insn so the program still builds with rv64imafd. The
shNadd forms use rs2 == N: BlackParrot currently takes the shift amount
from rs2[5:0] (BP-DV-041 / Jira), and with rs2 == N both readings agree,
so this sweep checks decode without duplicating that failure.

  gen_isa_sweep.py > c/isa_sweep.h
"""

import struct

FIRST = 31     # number of the first sweep check in isa_complete.c
M64 = (1 << 64) - 1
M32 = (1 << 32) - 1


def s64(x):
    x &= M64
    return x - (1 << 64) if x >> 63 else x


def s32(x):
    x &= M32
    return x - (1 << 32) if x >> 31 else x


def sx32(x):
    return s32(x) & M64


def tdiv(a, b):
    q = abs(a) // abs(b)
    return -q if (a < 0) != (b < 0) else q


def div(a, b, signed, word):
    if word:
        a, b = (s32(a), s32(b)) if signed else (a & M32, b & M32)
        lo = -(1 << 31)
    else:
        a, b = (s64(a), s64(b)) if signed else (a & M64, b & M64)
        lo = -(1 << 63)
    if b == 0:
        q, r = -1, a
    elif signed and a == lo and b == -1:
        q, r = a, 0
    else:
        q = tdiv(a, b)
        r = a - b * q
    return (sx32(q), sx32(r)) if word else (q & M64, r & M64)


A = 0x8000_0000_F000_0123          # negative, upper word nonzero
B = 0x0000_0000_0000_0047          # shift amount 7 in rs2[5:0] and rs2[4:0]

R_OPS = {
    "add":    lambda a, b: (a + b) & M64,
    "sub":    lambda a, b: (a - b) & M64,
    "sll":    lambda a, b: (a << (b & 63)) & M64,
    "slt":    lambda a, b: int(s64(a) < s64(b)),
    "sltu":   lambda a, b: int(a < b),
    "xor":    lambda a, b: a ^ b,
    "srl":    lambda a, b: a >> (b & 63),
    "sra":    lambda a, b: (s64(a) >> (b & 63)) & M64,
    "or":     lambda a, b: a | b,
    "and":    lambda a, b: a & b,
    "addw":   lambda a, b: sx32(a + b),
    "subw":   lambda a, b: sx32(a - b),
    "sllw":   lambda a, b: sx32((a & M32) << (b & 31)),
    "srlw":   lambda a, b: sx32((a & M32) >> (b & 31)),
    "sraw":   lambda a, b: sx32(s32(a) >> (b & 31)),
    "mul":    lambda a, b: (a * b) & M64,
    "mulh":   lambda a, b: ((s64(a) * s64(b)) >> 64) & M64,
    "mulhsu": lambda a, b: ((s64(a) * b) >> 64) & M64,
    "mulhu":  lambda a, b: ((a * b) >> 64) & M64,
    "div":    lambda a, b: div(a, b, True, False)[0],
    "divu":   lambda a, b: div(a, b, False, False)[0],
    "rem":    lambda a, b: div(a, b, True, False)[1],
    "remu":   lambda a, b: div(a, b, False, False)[1],
    "mulw":   lambda a, b: sx32(s32(a) * s32(b)),
    "divw":   lambda a, b: div(a, b, True, True)[0],
    "divuw":  lambda a, b: div(a, b, False, True)[0],
    "remw":   lambda a, b: div(a, b, True, True)[1],
    "remuw":  lambda a, b: div(a, b, False, True)[1],
}

I_OPS = {   # (mnemonic, imm, model)
    "addi":  (-5,   lambda a, i: (a + i) & M64),
    "slti":  (-5,   lambda a, i: int(s64(a) < i)),
    "sltiu": (-5,   lambda a, i: int(a < (i & M64))),
    "xori":  (0x5A, lambda a, i: a ^ (i & M64)),
    "ori":   (0x5A, lambda a, i: a | (i & M64)),
    "andi":  (0x5A, lambda a, i: a & (i & M64)),
    "slli":  (9,    lambda a, i: (a << i) & M64),
    "srli":  (9,    lambda a, i: a >> i),
    "srai":  (9,    lambda a, i: (s64(a) >> i) & M64),
    "addiw": (-5,   lambda a, i: sx32(a + i)),
    "slliw": (9,    lambda a, i: sx32((a & M32) << i)),
    "srliw": (9,    lambda a, i: sx32((a & M32) >> i)),
    "sraiw": (9,    lambda a, i: sx32(s32(a) >> i)),
}

BRANCHES = {
    "beq":  lambda a, b: a == b,
    "bne":  lambda a, b: a != b,
    "blt":  lambda a, b: s64(a) < s64(b),
    "bge":  lambda a, b: s64(a) >= s64(b),
    "bltu": lambda a, b: a < b,
    "bgeu": lambda a, b: a >= b,
}

# Zba: (name, opcode, funct3, model with rs2 == shift amount for shNadd)
ZBA = [
    ("add.uw",    0x3B, 0, lambda a, b: ((a & M32) + b) & M64, B),
    ("sh1add",    0x33, 2, lambda a, b: ((a << 1) + b) & M64, 1),
    ("sh2add",    0x33, 4, lambda a, b: ((a << 2) + b) & M64, 2),
    ("sh3add",    0x33, 6, lambda a, b: ((a << 3) + b) & M64, 3),
    ("sh1add.uw", 0x3B, 2, lambda a, b: (((a & M32) << 1) + b) & M64, 1),
    ("sh2add.uw", 0x3B, 4, lambda a, b: (((a & M32) << 2) + b) & M64, 2),
    ("sh3add.uw", 0x3B, 6, lambda a, b: (((a & M32) << 3) + b) & M64, 3),
]
ZBA_F7 = {"add.uw": 0x04}

MEM0 = 0x7654_3210_8000_0005       # AMO memory before the op
SRC = 0xFFFF_FFFF_FFFF_FFF9        # rs2 (-7)
AMO = {
    "amoswap": lambda m, s, sg: s,
    "amoadd":  lambda m, s, sg: m + s,
    "amoxor":  lambda m, s, sg: m ^ s,
    "amoand":  lambda m, s, sg: m & s,
    "amoor":   lambda m, s, sg: m | s,
    "amomin":  lambda m, s, sg: m if sg(m) < sg(s) else s,
    "amomax":  lambda m, s, sg: m if sg(m) > sg(s) else s,
    "amominu": lambda m, s, sg: min(m, s),
    "amomaxu": lambda m, s, sg: max(m, s),
}


def fbits(x, d):
    return struct.unpack("<Q", struct.pack("<d", x))[0] if d else \
        struct.unpack("<I", struct.pack("<f", x))[0]


def xres(x, d):
    """Integer-register value of an FP result read with fmv.x.w / fmv.x.d:
    fmv.x.w sign-extends bit 31 of the single-precision pattern."""
    return fbits(x, d) if d else sx32(fbits(x, d))


FA, FB, FC = 1.5, -2.25, 0.5       # exact in single and double; results exact


def main():
    out = []
    w = out.append
    w("/* GENERATED by scripts/gen_isa_sweep.py - do not edit by hand.")
    w(" * BP-DV-052 decode sweep: every decoder instruction form once, checked")
    w(" * against the generator's reference model. Included by isa_complete.c. */")
    w("")
    w("#define SW_R(s, mn, a, b, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (mn \" %0, %1, %2\" : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b))); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("#define SW_I(s, mn, a, imm, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (mn \" %0, %1, \" #imm : \"=r\"(_r) : \"r\"((uint64_t)(a))); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* branch: _r = 1 if taken */")
    w("#define SW_B(s, mn, a, b, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"li %0, 1\\n\" mn \" %1, %2, 1f\\n li %0, 0\\n1:\" \\")
    w("                      : \"=&r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b))); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("#define SW_ZBA(s, opc, f3, f7, a, b, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\".insn r \" #opc \", \" #f3 \", \" #f7 \", %0, %1, %2\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b))); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* AMO on *p: rd = old value, then memory = new value */")
    w("#define SW_AMO(s, mn, p, init, src, old, new_) do { uint64_t _r; \\")
    w("    *(p) = (init); \\")
    w("    __asm__ volatile (mn \" %0, %2, (%1)\" : \"=r\"(_r) : \"r\"(p), \"r\"((uint64_t)(src)) : \"memory\"); \\")
    w("    check((s), _r == (uint64_t)(old) && *(p) == (new_)); } while (0)")
    w("/* FP: operands and results as bit patterns; fN = fmv.N.x, xN = fmv.x.N */")
    w("#define SW_F2(s, mn, W, a, b, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n fmv.\" W \".x ft1, %2\\n\" \\")
    w("                      mn \" ft2, ft0, ft1\\n fmv.x.\" W \" %0, ft2\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b)) : \"ft0\", \"ft1\", \"ft2\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("#define SW_F3(s, mn, W, a, b, c, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n fmv.\" W \".x ft1, %2\\n fmv.\" W \".x ft2, %3\\n\" \\")
    w("                      mn \" ft3, ft0, ft1, ft2\\n fmv.x.\" W \" %0, ft3\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b)), \"r\"((uint64_t)(c)) \\")
    w("                      : \"ft0\", \"ft1\", \"ft2\", \"ft3\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("#define SW_F1(s, mn, W, a, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n\" mn \" ft2, ft0\\n fmv.x.\" W \" %0, ft2\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)) : \"ft0\", \"ft2\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* FP -> integer register (compare, classify, fcvt to int) */")
    w("#define SW_FX(s, mn, W, a, b, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n fmv.\" W \".x ft1, %2\\n\" mn \" %0, ft0, ft1\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)), \"r\"((uint64_t)(b)) : \"ft0\", \"ft1\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("#define SW_FX1(s, mn, W, a, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n\" mn \" %0, ft0\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)) : \"ft0\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* FP -> integer conversion, round toward zero */")
    w("#define SW_FXRTZ(s, mn, W, a, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" W \".x ft0, %1\\n\" mn \" %0, ft0, rtz\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)) : \"ft0\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* integer register -> FP (fcvt from int); W = result format */")
    w("#define SW_XF(s, mn, W, a, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (mn \" ft0, %1\\n fmv.x.\" W \" %0, ft0\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)) : \"ft0\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("/* FP -> FP format conversion: Wi in, Wo out */")
    w("#define SW_FF(s, mn, Wi, Wo, a, exp) do { uint64_t _r; \\")
    w("    __asm__ volatile (\"fmv.\" Wi \".x ft0, %1\\n\" mn \" ft2, ft0\\n fmv.x.\" Wo \" %0, ft2\" \\")
    w("                      : \"=r\"(_r) : \"r\"((uint64_t)(a)) : \"ft0\", \"ft2\"); \\")
    w("    check((s), _r == (uint64_t)(exp)); } while (0)")
    w("")
    w("static void isa_sweep(struct st *s, volatile uint64_t *amo_buf)")
    w("{")
    names = []

    def chk(line, what):
        names.append(what)
        w("  " + line)

    w("  /* RV64I/M register forms */")
    w("  progress(s);")
    for mn, f in R_OPS.items():
        chk(f'SW_R(s, "{mn}", 0x{A:016X}ULL, 0x{B:016X}ULL, 0x{f(A, B):016X}ULL);', mn)
    w("  /* RV64I immediate forms */")
    w("  progress(s);")
    for mn, (imm, f) in I_OPS.items():
        chk(f'SW_I(s, "{mn}", 0x{A:016X}ULL, {imm}, 0x{f(A, imm):016X}ULL);', mn)
    w("  /* branches, both orders (taken and not taken) */")
    w("  progress(s);")
    for mn, f in BRANCHES.items():
        for a, b in ((A, B), (B, A)):
            chk(f'SW_B(s, "{mn}", 0x{a:016X}ULL, 0x{b:016X}ULL, {int(f(a, b))});', mn)
        if mn in ("beq", "bne"):
            chk(f'SW_B(s, "{mn}", 0x{A:016X}ULL, 0x{A:016X}ULL, {int(f(A, A))});', mn)
    w("  /* Zba (shNadd with rs2 == N, see generator header) */")
    w("  progress(s);")
    for mn, opc, f3, f, b in ZBA:
        f7 = ZBA_F7.get(mn, 0x10)
        chk(f'SW_ZBA(s, 0x{opc:02X}, {f3}, 0x{f7:02X}, 0x{A:016X}ULL, 0x{b:016X}ULL, '
            f'0x{f(A, b):016X}ULL);  /* {mn} */', mn)
    w("  /* AMOs (.d then .w) and LR/SC */")
    w("  progress(s);")
    for mn, f in AMO.items():
        new = f(MEM0, SRC, s64) & M64
        chk(f'SW_AMO(s, "{mn}.d", amo_buf, 0x{MEM0:016X}ULL, 0x{SRC:016X}ULL, '
            f'0x{MEM0:016X}ULL, 0x{new:016X}ULL);', mn + ".d")
    hi = MEM0 & (M64 ^ M32)
    for mn, f in AMO.items():
        lo_old = MEM0 & M32
        lo_new = f(lo_old, SRC & M32, s32) & M32
        chk(f'SW_AMO(s, "{mn}.w", amo_buf, 0x{MEM0:016X}ULL, 0x{SRC:016X}ULL, '
            f'0x{sx32(lo_old):016X}ULL, 0x{hi | lo_new:016X}ULL);', mn + ".w")
    w("  {   /* lr.d / sc.d: success, then sc.d without a reservation fails */")
    w("    uint64_t v, r, r2;")
    w(f"    *amo_buf = 0x{MEM0:016X}ULL;")
    w('    __asm__ volatile ("lr.d %0, (%3)\\n sc.d %1, %4, (%3)\\n sc.d %2, %5, (%3)"')
    w('                      : "=&r"(v), "=&r"(r), "=&r"(r2) : "r"(amo_buf), "r"(0x1111ULL), "r"(0x2222ULL) : "memory");')
    chk(f'check(s, v == 0x{MEM0:016X}ULL && r == 0 && r2 != 0 && *amo_buf == 0x1111ULL);', "lr.d/sc.d")
    w("  }")

    for d, W, suf in ((False, "w", "s"), (True, "d", "d")):
        a, b, c = fbits(FA, d), fbits(FB, d), fbits(FC, d)
        w(f"  /* FP {'double' if d else 'single'} */")
        w("  progress(s);")
        two = {
            "fadd": FA + FB, "fsub": FA - FB, "fmul": FA * FB,
            "fmin": min(FA, FB), "fmax": max(FA, FB),
            "fsgnj": -abs(FA), "fsgnjn": abs(FA), "fsgnjx": -FA,
        }
        for mn, r in two.items():
            chk(f'SW_F2(s, "{mn}.{suf}", "{W}", 0x{a:X}ULL, 0x{b:X}ULL, 0x{xres(r, d):X}ULL);', f"{mn}.{suf}")
        chk(f'SW_F2(s, "fdiv.{suf}", "{W}", 0x{b:X}ULL, 0x{a:X}ULL, 0x{xres(FB / FA, d):X}ULL);', f"fdiv.{suf}")
        chk(f'SW_F1(s, "fsqrt.{suf}", "{W}", 0x{fbits(2.25, d):X}ULL, 0x{xres(1.5, d):X}ULL);', f"fsqrt.{suf}")
        for mn, r in (("feq", FA == FA), ("flt", FB < FA), ("fle", FA <= FB)):
            x, y = (b, a) if mn == "flt" else (a, a) if mn == "feq" else (a, b)
            chk(f'SW_FX(s, "{mn}.{suf}", "{W}", 0x{x:X}ULL, 0x{y:X}ULL, {int(r)});', f"{mn}.{suf}")
        chk(f'SW_FX1(s, "fclass.{suf}", "{W}", 0x{b:X}ULL, 0x2);  /* negative normal */', f"fclass.{suf}")
        for mn, r in (("fmadd", FA * FB + FC), ("fmsub", FA * FB - FC),
                      ("fnmsub", -(FA * FB) + FC), ("fnmadd", -(FA * FB) - FC)):
            chk(f'SW_F3(s, "{mn}.{suf}", "{W}", 0x{a:X}ULL, 0x{b:X}ULL, 0x{c:X}ULL, 0x{xres(r, d):X}ULL);',
                f"{mn}.{suf}")
        for mn in ("fcvt.w", "fcvt.l"):
            exp = (-2) & M64      # rtz of -2.25
            chk(f'SW_FXRTZ(s, "{mn}.{suf}", "{W}", 0x{b:X}ULL, 0x{exp:016X}ULL);',
                f"{mn}.{suf}")
        for mn in ("fcvt.{0}.w", "fcvt.{0}.l"):
            chk(f'SW_XF(s, "{mn.format(suf)}", "{W}", 0x{(-7) & M64:016X}ULL, 0x{xres(-7.0, d):X}ULL);',
                mn.format(suf))
    chk(f'SW_FF(s, "fcvt.s.d", "d", "w", 0x{fbits(FA, True):X}ULL, 0x{xres(FA, False):X}ULL);', "fcvt.s.d")
    chk(f'SW_FF(s, "fcvt.d.s", "w", "d", 0x{fbits(FA, False):X}ULL, 0x{fbits(FA, True):X}ULL);', "fcvt.d.s")
    w("}")
    w(f"#define ISA_SWEEP_CHECKS {len(names)}")
    w(f"/* check order (first check = {FIRST}):")
    for i in range(0, len(names), 8):
        w(" *   " + ", ".join(f"{FIRST + j}:{n}" for j, n in enumerate(names[i:i + 8], i)))
    w(" */")
    print("\n".join(out))


if __name__ == "__main__":
    main()
