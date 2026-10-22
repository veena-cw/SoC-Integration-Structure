#!/usr/bin/env python3
"""RTL code-coverage report for the sram_top UVM TB (Verilator 5.052).

Reads a verilator coverage .dat file built with make CODE_COV=1 (line,
branch, expression and toggle points of the DUT RTL only) and prints:
  * one line per test (optional --per-test files): % per coverage type
  * totals per coverage type
  * per DUT instance x coverage type
  * every line / branch / expression point that was never hit
  * per instance, the signals with bits that never toggled
  * waived points (--waivers file): left out of every percentage and hole
    list, listed with their reason; stale / hit waivers are flagged

Covergroup / cover property points in the same file are ignored (see
cov_report.py for those).

usage: code_cov_report.py [--per-test t1.dat ...] --merged merged.dat
                          [--waivers code_cov_waivers.txt]
"""
import argparse
import os
import re
import sys
from collections import OrderedDict, defaultdict

FIELD = re.compile(r"\x01([^\x02]*)\x02([^\x01]*)")
TYPES = ["line", "branch", "expr", "toggle", "fsm_state", "fsm_arc"]
BIT = re.compile(r"^(.*?)(\[\d+\])?$")


def load(path):
    """Return a list of dicts (type, file, line, inst, what, count) for code points."""
    pts = []
    with open(path, encoding="latin1") as f:
        for line in f:
            if not line.startswith("C '"):
                continue
            key, _, count = line.rstrip("\n").rpartition(" ")
            k = dict(FIELD.findall(key[3:-1]))
            t = k.get("t") or k.get("page", "").split("/")[0].replace("v_", "")
            if t not in TYPES:
                continue
            pts.append({"type": t, "file": os.path.basename(k.get("f", "")),
                        "line": int(k.get("l", "0") or 0),
                        "inst": k.get("h", "").replace("tb_top.", "", 1),
                        "what": k.get("o", ""), "count": int(count)})
    return pts


def load_waivers(path):
    """Waiver lines: <file>:<line> <type|*> [@<inst substring>] ["<point text>"] <reason>.

    "<point text>" is a substring of the point's description (toggle
    signal, expression term, branch if/else) and narrows the waiver to
    those points only; without it every point of that type on the line
    is waived.
    """
    waivers = []
    if not path:
        return waivers
    with open(path) as f:
        for n, raw in enumerate(f, 1):
            line = raw.strip()
            if not line or line.startswith("#"):
                continue
            loc, wtype, rest = (line.split(None, 2) + ["", ""])[:3]
            inst = what = ""
            if rest.startswith("@"):
                inst, _, rest = rest.partition(" ")
                inst, rest = inst[1:], rest.lstrip()
            if rest.startswith('"'):
                what, _, rest = rest[1:].partition('"')
                rest = rest.lstrip()
            wfile, _, wline = loc.rpartition(":")
            waivers.append({"file": wfile, "line": int(wline), "type": wtype, "inst": inst,
                            "what": what, "reason": rest, "matched": 0,
                            "src": "%s:%d" % (os.path.basename(path), n)})
    return waivers


def apply_waivers(pts, waivers):
    for p in pts:
        for w in waivers:
            if (p["file"] == w["file"] and p["line"] == w["line"] and
                    w["type"] in ("*", p["type"]) and w["inst"] in p["inst"] and
                    w["what"] in p["what"]):
                p["waived"] = w["reason"]
                w["matched"] += 1
                break


def pct(h, t):
    return 100.0 * h / t if t else 0.0


def by_type(pts):
    acc = defaultdict(lambda: [0, 0])
    for p in pts:
        if p.get("waived"):
            continue
        acc[p["type"]][0] += p["count"] > 0
        acc[p["type"]][1] += 1
    return acc


def main():
    ap = argparse.ArgumentParser()
    ap.add_argument("--per-test", nargs="*", default=[])
    ap.add_argument("--merged", required=True)
    ap.add_argument("--waivers", default="")
    args = ap.parse_args()
    waivers = load_waivers(args.waivers)

    present = [t for t in TYPES]
    if args.per_test:
        print("\nPer test (% hit):")
        print("  %-28s" % "test" + "".join("%9s" % t for t in TYPES[:4]))
        for path in sorted(args.per_test):
            p = load(path)
            name = os.path.splitext(os.path.basename(path))[0]
            if not p:
                print("  %-28s   no code-coverage data (not built with CODE_COV=1)" % name)
                continue
            apply_waivers(p, waivers)
            acc = by_type(p)
            print("  %-28s" % name + "".join("%8.2f%%" % pct(*acc[t]) for t in TYPES[:4]))

    pts = load(args.merged)
    if not pts:
        print("No code-coverage points in %s -- build with: make compile CODE_COV=1" % args.merged)
        return 1

    for w in waivers:
        w["matched"] = 0
    apply_waivers(pts, waivers)
    acc = by_type(pts)
    nwaived = defaultdict(int)
    for p in pts:
        if p.get("waived"):
            nwaived[p["type"]] += 1
    print("\nMerged RTL code coverage (DUT only, waived points excluded):")
    for t in TYPES:
        if acc[t][1]:
            print("  %-10s %6d / %-6d %6.2f%%   (%d waived)" % (t, acc[t][0], acc[t][1], pct(*acc[t]),
                                                               nwaived[t]))
    if not acc["fsm_state"][1]:
        print("  fsm        n/a  (Verilator 5.052 finds no FSM with an asynchronous reset;"
              " FSM states are covered by the case-item line/branch points)")

    inst = OrderedDict()
    for p in sorted(pts, key=lambda p: p["inst"]):
        if p.get("waived"):
            continue
        d = inst.setdefault(p["inst"] + "  (" + p["file"] + ")", defaultdict(lambda: [0, 0]))
        d[p["type"]][0] += p["count"] > 0
        d[p["type"]][1] += 1
    print("\nPer instance:")
    print("  %-60s" % "instance (file)" + "".join("%17s" % t for t in TYPES[:4]))
    for name, d in inst.items():
        cells = "".join(("%7d/%-5d%4.0f%%" % (d[t][0], d[t][1], pct(*d[t]))) if d[t][1] else "%17s" % "-"
                        for t in TYPES[:4])
        print("  %-60s%s" % (name[:60], cells))

    holes = [p for p in pts if p["count"] == 0 and p["type"] in ("line", "branch", "expr")
             and not p.get("waived")]
    holes.sort(key=lambda p: (p["file"], p["line"], p["type"]))
    print("\nUncovered line / branch / expression points (%d):" % len(holes))
    for p in holes:
        print("  %-18s %-6s %-46s %s" % ("%s:%d" % (p["file"], p["line"]), p["type"],
                                         p["inst"][:46], p["what"]))

    sig = OrderedDict()
    for p in pts:
        if p["type"] != "toggle" or p.get("waived"):
            continue
        name, _, direction = p["what"].rpartition(":")
        base = BIT.match(name).group(1)
        key = (p["inst"], base)
        s = sig.setdefault(key, {"bits": set(), "missing": set()})
        s["bits"].add(name)
        if p["count"] == 0:
            s["missing"].add(name)
    print("\nSignals with bits that never toggled (both 0->1 and 1->0 needed):")
    last = None
    for (i, base), s in sig.items():
        if not s["missing"]:
            continue
        if i != last:
            print("  " + i)
            last = i
        print("      %-28s %4d / %-4d bits not fully toggled" % (base, len(s["missing"]), len(s["bits"])))

    if waivers:
        wpts = sorted([p for p in pts if p.get("waived")], key=lambda p: (p["file"], p["line"], p["type"]))
        print("\nWaived points (%d, from %s):" % (len(wpts), os.path.basename(args.waivers)))
        for p in wpts:
            hit = "   <-- WAIVED BUT HIT %d times, re-check" % p["count"] if p["count"] else ""
            print("  %-20s %-6s %-26s %-28s %s%s" % ("%s:%d" % (p["file"], p["line"]), p["type"],
                                                      p["inst"][-26:], p["what"][:28], p["waived"], hit))
        stale = [w for w in waivers if not w["matched"]]
        for w in stale:
            print("  WARNING: waiver %s (%s:%d %s) matches no coverage point -- stale line number?"
                  % (w["src"], w["file"], w["line"], w["type"]))
    return 0


if __name__ == "__main__":
    sys.exit(main())
