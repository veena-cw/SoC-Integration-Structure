#!/usr/bin/env python3
"""Functional-coverage report for the sram_top UVM TB (Verilator 5.052).

Reads verilator coverage .dat files (written with --coverage-user) and
prints, for covergroup bins and SVA cover properties:
  * one line per test: bins hit / total
  * the merged result per covergroup and per coverpoint / cross
  * every bin that was never hit in the merged data

ignore_bins / illegal_bins are not counted (the summary line of
`verilator_coverage <file>` does count them, so its % is lower).

usage: cov_report.py [--per-test t1.dat t2.dat ...] --merged merged.dat
"""
import argparse
import os
import re
import sys
from collections import OrderedDict

FIELD = re.compile(r"\x01([^\x02]*)\x02([^\x01]*)")
SKIP_BIN_TYPES = {"ignore", "illegal"}


def load(path):
    """Return OrderedDict name -> count for covergroup bins and cover properties."""
    points = OrderedDict()
    with open(path, encoding="latin1") as f:
        for line in f:
            if not line.startswith("C '"):
                continue
            key, _, count = line.rstrip("\n").rpartition(" ")
            fields = dict(FIELD.findall(key[3:-1]))
            kind = fields.get("t", "")
            if kind == "covergroup":
                if fields.get("bin_type", "") in SKIP_BIN_TYPES:
                    continue
                name = fields.get("h", "").replace("__vlAnonCG_", "")
            elif kind == "user":
                name = "cover_property." + fields.get("h", "")
            else:
                continue
            points[name] = points.get(name, 0) + int(count)
    return points


def pct(hit, total):
    return 100.0 * hit / total if total else 0.0


def summarize(points):
    hit = sum(1 for c in points.values() if c > 0)
    return hit, len(points)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--per-test", nargs="*", default=[])
    ap.add_argument("--merged", required=True)
    args = ap.parse_args()

    if args.per_test:
        print("\nPer test (covergroup + cover property bins):")
        for path in sorted(args.per_test):
            hit, total = summarize(load(path))
            name = os.path.splitext(os.path.basename(path))[0]
            print(f"  {name:28s} {hit:5d} / {total:<5d} {pct(hit, total):6.2f}%")

    merged = load(args.merged)
    if not merged:
        print("No covergroup data in", args.merged)
        return 1

    groups = OrderedDict()
    items = OrderedDict()
    for name, count in merged.items():
        parts = name.split(".")
        group = parts[0]
        if group == "cover_property":
            item = "cover_property." + parts[-1]
        else:
            item = ".".join(parts[:2]) if len(parts) > 2 else parts[0]
        for table, k in ((groups, group), (items, item)):
            h, t = table.get(k, (0, 0))
            table[k] = (h + (count > 0), t + 1)

    hit, total = summarize(merged)
    print(f"\nMerged: {hit} / {total} bins = {pct(hit, total):.2f}%")
    print("\nPer covergroup:")
    for g, (h, t) in groups.items():
        print(f"  {g:28s} {h:4d} / {t:<4d} {pct(h, t):6.2f}%")
    print("\nPer coverpoint / cross:")
    for i, (h, t) in items.items():
        mark = "" if h == t else "   <-- holes"
        print(f"  {i:44s} {h:4d} / {t:<4d} {pct(h, t):6.2f}%{mark}")

    holes = [n for n, c in merged.items() if c == 0]
    print(f"\nUncovered bins ({len(holes)}):")
    for n in holes:
        print("  " + n)
    return 0


if __name__ == "__main__":
    sys.exit(main())
