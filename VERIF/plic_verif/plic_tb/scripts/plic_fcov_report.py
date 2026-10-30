#!/usr/bin/env python3
"""Functional coverage report from Verilator coverage .dat files.

Reads the covergroup records (t=covergroup) of one or more .dat files, merges
the hit counts, and reports covergroup / coverpoint / cross percentages plus
the uncovered bins. ignore_bins and illegal_bins are not counted as coverage
points (verilator_coverage --report does count them); a hit illegal bin is
reported as an error.

  plic_fcov_report.py merged.dat                 # full report
  plic_fcov_report.py --per-test cov/*.dat       # one summary line per test
"""
import argparse
import os
import re
import sys
from collections import OrderedDict, defaultdict

REC = re.compile(r"^C '(.*)' (\d+)\s*$")


def parse(path):
    """Yield (attrs, count) for every covergroup record of a .dat file."""
    with open(path, errors="replace") as f:
        for line in f:
            m = REC.match(line)
            if not m:
                continue
            attrs = {}
            for kv in m.group(1).split("\x01"):
                if "\x02" in kv:
                    k, v = kv.split("\x02", 1)
                    attrs[k] = v
            if attrs.get("t") == "covergroup":
                yield attrs, int(m.group(2))


def load(paths):
    """Merge bins over files: {(group, point, bin): [count, bin_type]}"""
    bins = OrderedDict()
    for p in paths:
        for a, n in parse(p):
            h = a["h"]
            group, point, binname = h.split(".", 2)
            group = re.sub(r"^__vlAnonCG_", "", group)
            key = (group, point, binname)
            if key not in bins:
                bins[key] = [0, a.get("bin_type", ""), "cross" in a]
            bins[key][0] += n
    return bins


def summarize(bins):
    """Per coverpoint hit/total, then per group average (LRM weight 1 each)."""
    points = OrderedDict()
    illegal = []
    for (g, p, b), (n, btype, is_cross) in sorted(bins.items()):
        if btype == "illegal":
            if n:
                illegal.append((g, p, b, n))
            continue
        if btype == "ignore":
            continue
        e = points.setdefault((g, p), {"hit": 0, "tot": 0, "cross": is_cross, "miss": []})
        e["tot"] += 1
        if n:
            e["hit"] += 1
        else:
            e["miss"].append(b)
    groups = OrderedDict()
    for (g, p), e in points.items():
        groups.setdefault(g, []).append(100.0 * e["hit"] / e["tot"] if e["tot"] else 100.0)
    gpct = {g: sum(v) / len(v) for g, v in groups.items()}
    total = sum(gpct.values()) / len(gpct) if gpct else 0.0
    return points, gpct, total, illegal


def full_report(bins, out):
    points, gpct, total, illegal = summarize(bins)
    w = out.write
    w("=" * 78 + "\n")
    w(f" PLIC FUNCTIONAL COVERAGE  :  {total:6.2f} %\n")
    w("=" * 78 + "\n\n")
    w(f" {'covergroup':<22}{'coverage':>10}\n {'-' * 32}\n")
    for g, pct in gpct.items():
        w(f" {g:<22}{pct:>9.2f}%\n")
    w("\n")
    for g in gpct:
        w(f"--- {g}  ({gpct[g]:.2f}%)\n")
        for (gg, p), e in points.items():
            if gg != g:
                continue
            kind = "cross" if e["cross"] else "point"
            pct = 100.0 * e["hit"] / e["tot"] if e["tot"] else 100.0
            w(f"    {kind:<6}{p:<22}{pct:>7.2f}%  ({e['hit']}/{e['tot']})\n")
            if e["miss"]:
                miss = e["miss"]
                shown = ", ".join(miss[:12]) + (f", ... (+{len(miss) - 12})" if len(miss) > 12 else "")
                w(f"          uncovered: {shown}\n")
        w("\n")
    if illegal:
        w("ILLEGAL BINS HIT:\n")
        for g, p, b, n in illegal:
            w(f"    {g}.{p}.{b} : {n}\n")
    return total, illegal


def main():
    ap = argparse.ArgumentParser(description=__doc__, formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("dat", nargs="+", help="Verilator coverage .dat file(s), merged together")
    ap.add_argument("--per-test", action="store_true", help="one summary line per .dat file")
    ap.add_argument("-o", "--out", help="also write the report to this file")
    args = ap.parse_args()

    if args.per_test:
        groups = None
        rows = []
        for p in args.dat:
            _, gpct, total, illegal = summarize(load([p]))
            groups = groups or list(gpct)
            rows.append((os.path.splitext(os.path.basename(p))[0], total, gpct, illegal))
        short = [g.replace("cg_", "") for g in groups or []]
        lines = [f"{'test':<34}{'total':>7}  " + " ".join(f"{s[:9]:>9}" for s in short)]
        for name, total, gpct, illegal in rows:
            lines.append(f"{name:<34}{total:>6.1f}%  " + " ".join(f"{gpct.get(g, 0):>8.1f}%" for g in groups)
                         + ("  ILLEGAL" if illegal else ""))
        text = "\n".join(lines) + "\n"
        sys.stdout.write(text)
        if args.out:
            open(args.out, "w").write(text)
        return 0

    bins = load(args.dat)
    if not bins:
        sys.exit("no covergroup records found (build with --coverage-user)")
    if args.out:
        with open(args.out, "w") as f:
            full_report(bins, f)
    _, illegal = full_report(bins, sys.stdout)
    return 1 if illegal else 0


if __name__ == "__main__":
    sys.exit(main())
