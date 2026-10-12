#!/usr/bin/env python3
"""List coverage holes from a merged Verilator coverage.dat.

Two kinds of hole are reported, per RTL file:

  CONSTANT   signals that never toggled in any test (tied to 0/1 or never
             changing), or only some bits of them (partly constant)
  NEVER HIT  lines, branches (if/else/case items) and condition terms that
             never executed - e.g. a FIFO "full" branch that never happens

A point counts as covered if any instance of the module hit it (both core
tiles share one file). Output: a Markdown report and a CSV, for writing
waivers or planning new tests.

  coverage_holes.py coverage.dat out_dir [--scope integration|design|all]

  integration (default): the SoC integration RTL - AXI/AHB bridges, AXI4 and
                         AHB masters, async FIFO, shared PLIC, PLIC IP,
                         cpu_top
  design:                all RTL (BlackParrot, basejump_stl, HardFloat too)
  all:                   also the testbench and UVM library
"""

import argparse
import collections
import csv
import os
import re
import sys

INTEGRATION = [
    "/bp_cpu_axi4m_if/", "/bp_cpu_ahb3lite_if/", "/axi4_master/",
    "/ahb3-lite_master/", "/async_fifo/", "bp_plic_shared_top",
    "/plic/ip/plic/", "/dsn/rtl/cpu_top.sv",
]


def in_scope(path, scope):
    if scope == "all":
        return True
    if "/uvm-1.1d/" in path or "/VERIF/" in path:
        return False
    if scope == "design":
        return True
    return any(k in path for k in INTEGRATION)


def parse(dat):
    """Yield (fields, count) for each coverage point."""
    with open(dat, "rb") as f:
        for raw in f:
            if not raw.startswith(b"C '"):
                continue
            body, _, cnt = raw.rstrip(b"\n").rpartition(b"' ")
            fields = {}
            for kv in body[3:].split(b"\x01"):
                if b"\x02" in kv:
                    k, v = kv.split(b"\x02", 1)
                    fields[k.decode()] = v.decode(errors="replace")
            yield fields, int(cnt)


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("dat")
    ap.add_argument("out_dir")
    ap.add_argument("--scope", choices=["integration", "design", "all"],
                    default="integration")
    args = ap.parse_args()

    # Merge across instances: key -> max count.
    toggles = collections.defaultdict(int)   # (file, line, signal, bit) -> count
    blocks = collections.defaultdict(int)    # (file, line, kind, label) -> count
    for f, cnt in parse(args.dat):
        path = f.get("f", "")
        if not in_scope(path, args.scope):
            continue
        page = f.get("page", "").split("/")[0]
        line = int(f.get("l", "0"))
        if page == "v_toggle":
            m = re.match(r"(.*?)(\[\d+\])?:(0->1|1->0)$", f.get("o", ""))
            if not m:
                continue
            key = (path, line, m.group(1), m.group(2) or "", m.group(3))
            toggles[key] = max(toggles[key], cnt)
        else:
            kind = {"v_line": "line", "v_branch": "branch",
                    "v_expr": "condition"}.get(page, page)
            key = (path, line, kind, f.get("o", ""))
            blocks[key] = max(blocks[key], cnt)

    # Per signal: bits never toggled (either direction counts as toggling).
    sig_bits = collections.defaultdict(lambda: collections.defaultdict(int))
    for (path, line, sig, bit, _d), cnt in toggles.items():
        sig_bits[(path, line, sig)][bit] += cnt
    const = collections.defaultdict(list)    # file -> rows
    for (path, line, sig), bits in sig_bits.items():
        dead = sorted((b for b, c in bits.items() if c == 0),
                      key=lambda b: int(b[1:-1]) if b else -1)
        if not dead:
            continue
        kind = "constant" if len(dead) == len(bits) else "partly constant"
        width = len(bits)
        const[path].append((line, sig, kind, width,
                            "all" if kind == "constant" else ",".join(dead)))

    srcs = {}

    def src(path, line):
        if path not in srcs:
            try:
                with open(path, errors="replace") as fh:
                    srcs[path] = fh.read().split("\n")
            except OSError:
                srcs[path] = []
        lines = srcs[path]
        return lines[line - 1].strip() if 0 < line <= len(lines) else ""

    never = collections.defaultdict(list)
    for (path, line, kind, label), cnt in blocks.items():
        if cnt == 0:
            never[path].append((line, kind, label, src(path, line)))

    os.makedirs(args.out_dir, exist_ok=True)
    md = os.path.join(args.out_dir, f"coverage_holes_{args.scope}.md")
    cv = os.path.join(args.out_dir, f"coverage_holes_{args.scope}.csv")
    files = sorted(set(const) | set(never))

    with open(cv, "w", newline="") as fc:
        w = csv.writer(fc)
        w.writerow(["file", "line", "type", "item", "detail", "source"])
        for p in files:
            for line, sig, kind, width, bits in sorted(const[p]):
                w.writerow([p, line, kind, sig, f"width={width} bits={bits}", src(p, line)])
            for line, kind, label, s in sorted(never[p]):
                w.writerow([p, line, "never hit: " + kind, label, "", s])

    with open(md, "w") as fm:
        fm.write(f"# Coverage holes ({args.scope})\n\nSource: `{args.dat}`\n\n")
        fm.write("| File | Constant signals | Partly constant | Never-hit lines/branches/conditions |\n|---|---|---|---|\n")
        for p in files:
            c = sum(1 for r in const[p] if r[2] == "constant")
            pc = sum(1 for r in const[p] if r[2] == "partly constant")
            fm.write(f"| {os.path.basename(p)} | {c} | {pc} | {len(never[p])} |\n")
        for p in files:
            fm.write(f"\n## {os.path.basename(p)}\n\n`{p}`\n")
            rows = sorted(const[p])
            if rows:
                fm.write("\n### Signals that never toggled\n\n| Line | Signal | Width | Never-toggled bits |\n|---|---|---|---|\n")
                for line, sig, kind, width, bits in rows:
                    fm.write(f"| {line} | `{sig}` | {width} | {bits} |\n")
            rows = sorted(never[p])
            if rows:
                fm.write("\n### Lines / branches / conditions never hit\n\n| Line | Type | Point | Source |\n|---|---|---|---|\n")
                for line, kind, label, s in rows:
                    s = s.replace("|", "\\|")
                    fm.write(f"| {line} | {kind} | {label} | `{s}` |\n")

    nc = sum(len(v) for v in const.values())
    nn = sum(len(v) for v in never.values())
    print(f"coverage_holes: {len(files)} files, {nc} constant/partly-constant signals, "
          f"{nn} never-hit points")
    print(f"  {md}\n  {cv}")


if __name__ == "__main__":
    sys.exit(main())
