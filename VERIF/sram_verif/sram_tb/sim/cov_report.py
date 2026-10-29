#!/usr/bin/env python3
"""Functional-coverage report for the sram_top UVM TB (Verilator 5.052).

Reads verilator coverage .dat files (written with --coverage-user) and
prints, for covergroup bins and SVA cover properties:
  * one line per test: bins hit / total
  * the merged result per covergroup and per coverpoint / cross
  * every bin that was never hit in the merged data
  * waived bins (--waivers file): left out of every count and hole
    list, listed with their reason; stale / hit waivers are flagged

ignore_bins / illegal_bins are not counted (the summary line of
`verilator_coverage <file>` does count them, so its % is lower).

usage: cov_report.py [--per-test t1.dat t2.dat ...] --merged merged.dat
                     [--waivers func_cov_waivers.txt]
"""
import argparse
import fnmatch
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


def load_waivers(path):
    """Waiver lines: <bin name pattern> <reason>. The pattern is an fnmatch
    glob (* ?) over the full bin name as printed in the report."""
    waivers = []
    if not path:
        return waivers
    with open(path) as f:
        for n, raw in enumerate(f, 1):
            line = raw.strip()
            if not line or line.startswith("#"):
                continue
            pat, _, reason = line.partition(" ")
            waivers.append({"pat": pat, "reason": reason.strip(), "matched": 0,
                            "src": "%s:%d" % (os.path.basename(path), n)})
    return waivers


def split_waived(points, waivers):
    """Return (kept points, OrderedDict name -> (count, reason) of waived ones)."""
    kept, waived = OrderedDict(), OrderedDict()
    for name, count in points.items():
        w = next((w for w in waivers if fnmatch.fnmatchcase(name, w["pat"])), None)
        if w:
            w["matched"] += 1
            waived[name] = (count, w["reason"])
        else:
            kept[name] = count
    return kept, waived


def pct(hit, total):
    return 100.0 * hit / total if total else 0.0


def summarize(points):
    hit = sum(1 for c in points.values() if c > 0)
    return hit, len(points)


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--per-test", nargs="*", default=[])
    ap.add_argument("--merged", required=True)
    ap.add_argument("--waivers", default="")
    args = ap.parse_args()
    waivers = load_waivers(args.waivers)

    if args.per_test:
        print("\nPer test (covergroup + cover property bins):")
        for path in sorted(args.per_test):
            hit, total = summarize(split_waived(load(path), waivers)[0])
            name = os.path.splitext(os.path.basename(path))[0]
            print(f"  {name:28s} {hit:5d} / {total:<5d} {pct(hit, total):6.2f}%")

    merged = load(args.merged)
    if not merged:
        print("No covergroup data in", args.merged)
        return 1
    for w in waivers:
        w["matched"] = 0
    merged, waived = split_waived(merged, waivers)

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
    print(f"\nMerged: {hit} / {total} bins = {pct(hit, total):.2f}%   ({len(waived)} waived)")
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

    if waivers:
        print(f"\nWaived bins ({len(waived)}, from {os.path.basename(args.waivers)}):")
        for n, (count, reason) in waived.items():
            hit = f"   <-- WAIVED BUT HIT {count} times, re-check" if count else ""
            print(f"  {n:44s} {reason}{hit}")
        for w in waivers:
            if not w["matched"]:
                print(f"  WARNING: waiver {w['src']} ({w['pat']}) matches no bin -- renamed bin?")
    return 0


if __name__ == "__main__":
    sys.exit(main())
