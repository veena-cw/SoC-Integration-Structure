#!/usr/bin/env python3
"""Per-type code coverage summary from a merged Verilator coverage.dat.

lcov's summary shows only line coverage: verilator_coverage --write-info
writes every point as a line (DA) record, so lcov reports branches and
functions as "no data found" (Verilator has no function coverage at all).
This prints the four Verilator coverage types for the design RTL:

  line    statement blocks executed
  branch  if/else/case arms and ?: sides taken
  expr    condition terms seen at 0 and 1
  toggle  signal bits toggled 0->1 and 1->0

A point counts once across module instances (covered if any instance hit
it), matching the lcov report.

  coverage_summary.py coverage.dat [--include /DSN/] [--out summary.txt]
"""

import argparse
import collections


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("dat")
    ap.add_argument("--include", default="/DSN/",
                    help="only files whose path contains this (default: /DSN/)")
    ap.add_argument("--out")
    args = ap.parse_args()

    points = {}
    with open(args.dat, "rb") as f:
        for raw in f:
            if not raw.startswith(b"C '"):
                continue
            body, _, cnt = raw.rstrip(b"\n").rpartition(b"' ")
            d = {}
            for kv in body[3:].split(b"\x01"):
                if b"\x02" in kv:
                    k, v = kv.split(b"\x02", 1)
                    d[k.decode()] = v.decode(errors="replace")
            path = d.get("f", "")
            if args.include not in path:
                continue
            kind = d.get("page", "").split("/")[0]
            key = (kind, path, d.get("l"), d.get("n"), d.get("o"))
            points[key] = max(points.get(key, 0), int(cnt))

    tot = collections.defaultdict(lambda: [0, 0])
    for (kind, *_), c in points.items():
        tot[kind][0] += 1
        tot[kind][1] += c > 0

    lines = [f"Verilator coverage by type (files matching '{args.include}')",
             f"  {'type':<8} {'covered':>9} / {'total':<9} {'%':>6}"]
    for kind, name in (("v_line", "line"), ("v_branch", "branch"),
                       ("v_expr", "expr"), ("v_toggle", "toggle")):
        n, h = tot.get(kind, [0, 0])
        pct = 100.0 * h / n if n else 0.0
        lines.append(f"  {name:<8} {h:>9} / {n:<9} {pct:5.1f}%")
    text = "\n".join(lines)
    print(text)
    if args.out:
        with open(args.out, "w") as fo:
            fo.write(text + "\n")


if __name__ == "__main__":
    main()
