#!/usr/bin/env python3
"""Generate c/hazard_chains.c (BP-DV-053): dependency-chain stress for the
BlackParrot hazard detector (bp_be_detector.sv).

Every case is  producer -> N independent nops (N = 0..3) -> consumer  and
stores the consumer's result; the expected value is computed here, so a
missed stall / wrong forward shows up as a data mismatch.

  producers (int dest t0) : add, ld, lw, mul, mulw, div, divw, rem,
                            fcvt.l.d, fmv.x.d, feq.d, fclass.d, flt.d
                            (int, mem, mul, long, FP->int pipes)
  producers (FP dest ft0) : fadd.d, fmul.d, fmadd.d, fdiv.d, fsqrt.d, fld,
                            fmv.d.x, fcvt.d.l, fsgnjn.d, fmin.d
  int consumers           : rs1 (add), rs2 (sub), store data (sd),
                            WAW (write t0 again)
  FP consumers            : rs1 (fadd), rs2 (fsub), rs3 (fmadd), store
                            data (fsd), FP->int (fmv.x.d, fcvt.l.d, feq.d),
                            WAW (write ft0 again)
  fflags                  : csrr fflags after an exact / inexact FP op and
                            while fdiv / fsqrt is busy; csrw frm while
                            fdiv / fsqrt is busy
  structural              : div then independent div, fdiv then fdiv

All FP inputs are small exact values, so every result is exact.

  gen_hazard_test.py > c/hazard_chains.c
"""

import struct

M64 = (1 << 64) - 1


def dbits(x):
    return struct.unpack("<Q", struct.pack("<d", x))[0]


def s64(v):
    v &= M64
    return v - (1 << 64) if v >> 63 else v


# Register plan (caller-saved only):
#   a0 results pointer (advanced 8 per case), a1 constants table
#   t1=7, t2=3, t4=85, t5=12, a2=bits(9.0), a3=12, t6=bits(99.0) (WAW value)
#   fa1=2.0 fa2=3.0 fa3=5.0 fa4=6.0 fa5=16.0 fa6=1.0 fa7=99.0
#   producer dest: t0 / ft0, consumer result: t3 / ft1
CONSTS = [10, 0xFFFFFFF6, dbits(7.0)]           # ld, lw (-10), fld (7.0)

INT_PROD = [
    ("add",      "add t0, t1, t2",          10),
    ("ld",       "ld t0, 0(a1)",            10),
    ("lw",       "lw t0, 8(a1)",            -10),
    ("mul",      "mul t0, t1, t2",          21),
    ("mulw",     "mulw t0, t1, t2",         21),
    ("div",      "div t0, t4, t5",          7),
    ("divw",     "divw t0, t4, t5",         7),
    ("rem",      "rem t0, t4, t5",          1),
    ("fcvt.l.d", "fcvt.l.d t0, fa2, rtz",   3),
    ("fmv.x.d",  "fmv.x.d t0, fa1",         s64(dbits(2.0))),
    ("feq.d",    "feq.d t0, fa1, fa1",      1),
    ("fclass.d", "fclass.d t0, fa1",        0x40),
    ("flt.d",    "flt.d t0, fa1, fa2",      1),
]

INT_CONS = [
    ("rs1",   "add t3, t0, t2\n  sd t3, 0(a0)",       lambda v: v + 3),
    ("rs2",   "sub t3, t2, t0\n  sd t3, 0(a0)",       lambda v: 3 - v),
    ("sdata", "sd t0, 0(a0)",                          lambda v: v),
    ("waw",   "addi t0, x0, 99\n  sd t0, 0(a0)",       lambda v: 99),
]

FP_PROD = [
    ("fadd.d",   "fadd.d ft0, fa1, fa2",        5.0),
    ("fmul.d",   "fmul.d ft0, fa1, fa2",        6.0),
    ("fmadd.d",  "fmadd.d ft0, fa1, fa2, fa3",  11.0),
    ("fdiv.d",   "fdiv.d ft0, fa4, fa2",        2.0),
    ("fsqrt.d",  "fsqrt.d ft0, fa5",            4.0),
    ("fld",      "fld ft0, 16(a1)",             7.0),
    ("fmv.d.x",  "fmv.d.x ft0, a2",             9.0),
    ("fcvt.d.l", "fcvt.d.l ft0, a3",            12.0),
    ("fsgnjn.d", "fsgnjn.d ft0, fa1, fa1",      -2.0),
    ("fmin.d",   "fmin.d ft0, fa1, fa2",        2.0),
]

FP_CONS = [
    ("rs1",      "fadd.d ft1, ft0, fa1\n  fsd ft1, 0(a0)",          lambda v: dbits(v + 2.0)),
    ("rs2",      "fsub.d ft1, fa1, ft0\n  fsd ft1, 0(a0)",          lambda v: dbits(2.0 - v)),
    ("rs3",      "fmadd.d ft1, fa1, fa2, ft0\n  fsd ft1, 0(a0)",    lambda v: dbits(6.0 + v)),
    ("fsdata",   "fsd ft0, 0(a0)",                                  lambda v: dbits(v)),
    ("fmv.x.d",  "fmv.x.d t3, ft0\n  sd t3, 0(a0)",                 lambda v: dbits(v)),
    ("fcvt.l.d", "fcvt.l.d t3, ft0, rtz\n  sd t3, 0(a0)",           lambda v: int(v) & M64),
    ("feq.d",    "feq.d t3, ft0, ft0\n  sd t3, 0(a0)",              lambda v: 1),
    ("fwaw",     "fmv.d.x ft0, t6\n  fsd ft0, 0(a0)",               lambda v: dbits(99.0)),
]

# fflags right after an FP op (cleared before the producer)
FFLAGS = [
    ("fadd exact",  "fadd.d ft0, fa1, fa2",  0),
    ("fdiv 1/3 NX", "fdiv.d ft0, fa6, fa2",  1),
    ("fsqrt 2 NX",  "fsqrt.d ft0, fa1",      1),
]

# CSR write while fdiv / fsqrt is still busy (detector fflags hazard with
# csr_w_v); the inexact result must still set NX after the write
CSRW_BUSY = [
    ("fdiv 1/3 + csrw frm",  "fdiv.d ft0, fa6, fa2",  1),
    ("fsqrt 2 + csrw frm",   "fsqrt.d ft0, fa1",      1),
]

# structural: long unit busy, independent second op
STRUCT = [
    ("div/div",   "div t0, t4, t5",       "div t3, t4, t1\n  sd t3, 0(a0)",          12),
    ("fdiv/fdiv", "fdiv.d ft0, fa4, fa2", "fdiv.d ft1, fa5, fa1\n  fsd ft1, 0(a0)",  dbits(8.0)),
]

GAPS = [0, 1, 2, 3]


def main():
    cases = []   # (description, asm body, expected)
    for pn, p, v in INT_PROD:
        for cn, c, f in INT_CONS:
            for g in GAPS:
                cases.append((f"{pn} -> {cn} gap {g}", [p] + ["nop"] * g + [c], f(v) & M64))
    for pn, p, v in FP_PROD:
        for cn, c, f in FP_CONS:
            for g in GAPS:
                cases.append((f"{pn} -> {cn} gap {g}", [p] + ["nop"] * g + [c], f(v) & M64))
    for fn, p, flags in FFLAGS:
        for g in GAPS:
            cases.append((f"fflags after {fn} gap {g}",
                          ["csrwi fflags, 0", p] + ["nop"] * g + ["csrr t3, fflags", "sd t3, 0(a0)"],
                          flags))
    for fn, p, flags in CSRW_BUSY:
        for g in GAPS:
            cases.append((f"{fn} gap {g}",
                          ["csrwi fflags, 0", p] + ["nop"] * g
                          + ["csrwi frm, 0", "csrr t3, fflags", "sd t3, 0(a0)"],
                          flags))
    for sn, p, c, v in STRUCT:
        for g in GAPS:
            cases.append((f"{sn} gap {g}", [p] + ["nop"] * g + [c], v & M64))

    n = len(cases)
    out = []
    w = out.append
    w("/* hazard_chains.c - GENERATED by scripts/gen_hazard_test.py, do not edit.")
    w(" *")
    w(" * BP-DV-053: dependency-chain stress for the hazard detector (both harts).")
    w(" * Each case: producer, 0-3 nops, consumer reading the producer's result in")
    w(" * one operand slot (int rs1/rs2/store data, FP rs1/rs2/rs3/store data,")
    w(" * FP->int) or overwriting it (WAW); plus fflags reads after FP ops and")
    w(" * back-to-back div / fdiv. The consumer result is stored and compared")
    w(" * with the expected value computed by the generator.")
    w(" *")
    w(f" * {n} cases. tohost (dual_core.h): (hart1 << 32) | hart0. Per hart 0 =")
    w(" * pass, else (mismatch_count << 16) | first failing case index + 1.")
    w(" * Case list (index: description):")
    for i, (d, _, _) in enumerate(cases):
        w(f" *   {i:4d}: {d}")
    w(" */")
    w("")
    w("/* This image (~26 KB) is larger than the 12 KB below the default stack")
    w(" * top 0x8000_4000: move the stack and tell link.ld where it starts. */")
    w("#define DUAL_CORE_STACK_BASE 0x80010000")
    w('__asm__ (".globl __stack_floor\\n.set __stack_floor, 0x8000F000");')
    w("")
    w("#include <stdint.h>")
    w('#include "dual_core.h"')
    w("")
    w(f"#define NUM_CASES {n}")
    w("")
    w("static const uint64_t expected[NUM_CASES] = {")
    for i in range(0, n, 4):
        w("  " + ", ".join(f"0x{c[2]:016x}ULL" for c in cases[i:i + 4]) + ",")
    w("};")
    w("")
    w(f"static const uint64_t hz_consts[3] = {{ {', '.join(f'0x{c:x}ULL' for c in CONSTS)} }};")
    w("static uint64_t results[NUM_HARTS][NUM_CASES] __attribute__((aligned(64)));")
    w("")
    w("/* void hz_run(uint64_t *results, const uint64_t *consts) */")
    w("__asm__ (")
    w('  ".text\\n"')
    w('  ".option push\\n"')
    w('  ".option norvc\\n"')
    w('  ".balign 4\\n"')
    w('  ".global hz_run\\n"')
    w('  "hz_run:\\n"')
    init = [
        "li t1, 7", "li t2, 3", "li t4, 85", "li t5, 12", "li a3, 12",
        f"li a2, 0x{dbits(9.0):x}", f"li t6, 0x{dbits(99.0):x}",
        f"li t3, 0x{dbits(2.0):x}", "fmv.d.x fa1, t3",
        f"li t3, 0x{dbits(3.0):x}", "fmv.d.x fa2, t3",
        f"li t3, 0x{dbits(5.0):x}", "fmv.d.x fa3, t3",
        f"li t3, 0x{dbits(6.0):x}", "fmv.d.x fa4, t3",
        f"li t3, 0x{dbits(16.0):x}", "fmv.d.x fa5, t3",
        f"li t3, 0x{dbits(1.0):x}", "fmv.d.x fa6, t3",
        f"li t3, 0x{dbits(99.0):x}", "fmv.d.x fa7, t3",
    ]
    for l in init:
        w(f'  "  {l}\\n"')
    for i, (d, body, _) in enumerate(cases):
        w(f'  /* {i}: {d} */')
        for l in body:
            for sub in l.split("\n"):
                w(f'  "  {sub.strip()}\\n"')
        w('  "  addi a0, a0, 8\\n"')
    w('  "  ret\\n"')
    w('  ".option pop\\n"')
    w(");")
    w("extern void hz_run(uint64_t *results, const uint64_t *consts);")
    w("")
    w("static uint64_t run_hazards(void)")
    w("{")
    w("  uint64_t *r = results[hart_id()];")
    w("  unsigned bad = 0, first = 0;")
    w("")
    w('  __asm__ volatile ("csrs mstatus, %0" :: "r"(1ULL << 13));   /* FS = Initial */')
    w("  hz_run(r, hz_consts);")
    w("  for (unsigned i = 0; i < NUM_CASES; i++)")
    w("    if (r[i] != expected[i]) {")
    w("#ifdef DEBUG_DUMP")
    w("      /* failing cases at 0x0010_9000 + hart*0x800: {index, got, expected} */")
    w("      if (bad < 40) {")
    w("        volatile uint64_t *d = (volatile uint64_t *)(0x00109000UL + hart_id() * 0x800UL + bad * 24UL);")
    w("        d[0] = i; d[1] = r[i]; d[2] = expected[i];")
    w("      }")
    w("#endif")
    w("      if (bad == 0)")
    w("        first = i + 1;")
    w("      bad++;")
    w("    }")
    w("  return bad ? (((uint64_t)bad << 16) | first) : 0;")
    w("}")
    w("")
    w("static void start_main(void);")
    w("")
    w("/* Initialize the stack before entering C code. */")
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
    w("  tohost_exit(run_hazards());")
    w("}")
    print("\n".join(out))


if __name__ == "__main__":
    main()
