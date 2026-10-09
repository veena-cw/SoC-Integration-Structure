#!/usr/bin/env python3
"""Write a smaller VCD that keeps only selected scopes of a full VCD.

Verilator ignores the scope arguments of $dumpvars, so the simulation always
dumps the whole design (sim/cpu_tb_top.vcd). This script cuts a sub-tree out
of that file afterwards, e.g. the PLIC path for viewing in Vaporview/GTKWave:

  vcd_filter.py cpu_tb_top.vcd plic.vcd \
      --keep  cpu_tb_top.dut.u_bp.m.multicore.shared_plic \
      --match cpu_tb_top.dut.u_bp.m.multicore:plic

--keep  SCOPE        keep every signal in SCOPE and below
--match SCOPE:TEXT   keep signals directly in SCOPE whose name contains TEXT
"""

import argparse
import sys


def parse_args():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("src")
    ap.add_argument("dst")
    ap.add_argument("--keep", action="append", default=[])
    ap.add_argument("--match", action="append", default=[])
    return ap.parse_args()


def wanted(path, name, keeps, matches):
    for k in keeps:
        if path == k or path.startswith(k + "."):
            return True
    for scope, text in matches:
        if path == scope and text in name:
            return True
    return False


def main():
    args = parse_args()
    matches = [m.split(":", 1) for m in args.match]

    # Pass 1: header -> which ids to keep and which scopes are needed.
    ids, scopes, header = set(), set(), []
    stack = []
    with open(args.src) as f:
        for line in f:
            header.append(line)
            tok = line.split()
            if not tok:
                continue
            if tok[0] == "$scope":
                stack.append(tok[2])
            elif tok[0] == "$upscope":
                stack.pop()
            elif tok[0] == "$var":
                path = ".".join(stack)
                if wanted(path, tok[4], args.keep, matches):
                    ids.add(tok[3])
                    for i in range(1, len(stack) + 1):
                        scopes.add(".".join(stack[:i]))
            elif tok[0] == "$enddefinitions":
                break
    if not ids:
        sys.exit("vcd_filter: no signals matched")

    with open(args.src) as f, open(args.dst, "w") as out:
        # Header: emit only the needed scopes and kept vars.
        stack, keep_stack = [], []
        for line in f:
            tok = line.split()
            if not tok:
                continue
            if tok[0] == "$scope":
                stack.append(tok[2])
                keep = ".".join(stack) in scopes
                keep_stack.append(keep)
                if keep:
                    out.write(line)
            elif tok[0] == "$upscope":
                stack.pop()
                if keep_stack.pop():
                    out.write(line)
            elif tok[0] == "$var":
                if keep_stack and keep_stack[-1] and tok[3] in ids \
                        and wanted(".".join(stack), tok[4], args.keep, matches):
                    out.write(line)
            else:
                out.write(line)
            if tok[0] == "$enddefinitions":
                break

        # Body: keep timestamps that are followed by a kept value change.
        pending_time = None
        for line in f:
            c = line[:1]
            if c == "#":
                pending_time = line
                continue
            if c == "$":
                if pending_time is not None:
                    out.write(pending_time)
                    pending_time = None
                out.write(line)
                continue
            if c in "bBrR":
                vid = line.split()[-1]
            elif c in "01xXzZ":
                vid = line[1:].strip()
            else:
                continue
            if vid in ids:
                if pending_time is not None:
                    out.write(pending_time)
                    pending_time = None
                out.write(line)

    print(f"vcd_filter: {len(ids)} signal ids -> {args.dst}")


if __name__ == "__main__":
    main()
