#!/usr/bin/env python3
"""Summarise a merged Verilator coverage.dat for the AXI->APB bridge.

usage: cov_report.py <merged.dat> [--holes]
Prints code coverage (line/branch/expr/toggle) per RTL file and functional
coverage (covergroup bins, ignore/illegal bins excluded) per coverpoint/cross.
"""
import collections, re, sys

def load(path):
    pts = collections.OrderedDict()
    for line in open(path, encoding="latin1"):
        if not line.startswith("C "):
            continue
        key, cnt = line[2:].rstrip("\n").rsplit(" ", 1)
        d = dict(re.findall(r"\x01([^\x02]*)\x02([^\x01]*)", key[1:-1]))
        k = (d.get("t"), d.get("f"), d.get("l"), d.get("o"), d.get("h"), d.get("bin"))
        if k in pts:
            pts[k][1] += int(cnt)
        else:
            pts[k] = [d, int(cnt)]
    return pts.values()

def main():
    path = sys.argv[1]
    holes = "--holes" in sys.argv
    code = collections.defaultdict(lambda: [0, 0])
    fcov = collections.defaultdict(lambda: [0, 0])
    code_holes, fcov_holes = [], []
    for d, c in load(path):
        t = d.get("t")
        if t in ("line", "branch", "expr", "toggle"):
            f = d.get("f", "").split("/")[-1]
            code[(f, t)][1] += 1
            if c: code[(f, t)][0] += 1
            else: code_holes.append((f, int(d.get("l", 0)), t, d.get("o", "")))
        elif t == "covergroup":
            if d.get("bin_type") in ("ignore", "illegal"):
                continue
            h = d.get("h", "")
            grp = h.rsplit(".", 1)[0].replace("__vlAnonCG_", "")
            fcov[grp][1] += 1
            if c: fcov[grp][0] += 1
            else: fcov_holes.append(h.replace("__vlAnonCG_", ""))

    def pct(h, n): return 100.0 * h / n if n else 100.0
    print("CODE COVERAGE (DUT only)")
    print(f"  {'file':30s} {'line':>14s} {'branch':>14s} {'expr':>14s} {'toggle':>16s}")
    files = sorted({f for f, _ in code})
    tot = collections.defaultdict(lambda: [0, 0])
    for f in files:
        cells = []
        for t in ("line", "branch", "expr", "toggle"):
            h, n = code.get((f, t), (0, 0))
            tot[t][0] += h; tot[t][1] += n
            cells.append(f"{h}/{n} {pct(h, n):5.1f}%" if n else "-")
        print(f"  {f:30s} {cells[0]:>14s} {cells[1]:>14s} {cells[2]:>14s} {cells[3]:>16s}")
    cells = [f"{tot[t][0]}/{tot[t][1]} {pct(*tot[t]):5.1f}%" for t in ("line", "branch", "expr", "toggle")]
    print(f"  {'TOTAL':30s} {cells[0]:>14s} {cells[1]:>14s} {cells[2]:>14s} {cells[3]:>16s}")
    print()
    print("FUNCTIONAL COVERAGE (bridge_txn_cg, ignore/illegal bins excluded)")
    th = tn = 0
    for g, (h, n) in sorted(fcov.items()):
        th += h; tn += n
        print(f"  {g:40s} {h:4d}/{n:<4d} {pct(h, n):5.1f}%")
    print(f"  {'TOTAL':40s} {th:4d}/{tn:<4d} {pct(th, tn):5.1f}%")
    if holes:
        print()
        print("CODE HOLES")
        for f, l, t, o in sorted(set(code_holes)):
            print(f"  {f}:{l:<5d} {t:7s} {o}")
        print("FUNCTIONAL HOLES")
        for h in fcov_holes:
            print(f"  {h}")

if __name__ == "__main__":
    main()
