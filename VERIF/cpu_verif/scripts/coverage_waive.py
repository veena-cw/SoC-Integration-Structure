#!/usr/bin/env python3
"""Coverage waivers: drop design code for unsupported features.

Waiver file (sim/coverage_waivers.txt), one entry per line:
  <path glob> [<first>-<last>]   # comment
A glob alone waives the whole file; with a range only those lines.

As a script: filter an lcov .info in place (or to --out), removing the
waived files and the waived DA (line) records:
  coverage_waive.py coverage.info coverage_waivers.txt [--out filtered.info]

As a module: load() / waived() are used by coverage_summary.py and
coverage_holes.py to skip waived points read from coverage.dat.
"""

import argparse
import fnmatch


def load(path):
    rules = []
    if not path:
        return rules
    with open(path) as f:
        for raw in f:
            line = raw.split("#", 1)[0].strip()
            if not line:
                continue
            parts = line.split()
            lo, hi = 1, 1 << 30
            if len(parts) > 1:
                a, _, b = parts[1].partition("-")
                lo, hi = int(a), int(b or a)
            rules.append((parts[0], lo, hi))
    return rules


def waived(rules, path, line=None):
    """True if `path` (and `line`, if given) is waived. With line=None, True
    only when the whole file is waived."""
    for glob, lo, hi in rules:
        if fnmatch.fnmatch(path, glob):
            if line is None:
                if lo == 1 and hi == 1 << 30:
                    return True
            elif lo <= line <= hi:
                return True
    return False


def main():
    ap = argparse.ArgumentParser(description=__doc__,
                                 formatter_class=argparse.RawDescriptionHelpFormatter)
    ap.add_argument("info")
    ap.add_argument("waivers")
    ap.add_argument("--out")
    args = ap.parse_args()
    rules = load(args.waivers)

    out, rec, cur, drop_file = [], [], None, False
    removed_files = removed_lines = 0
    with open(args.info) as f:
        for line in f:
            if line.startswith("SF:"):
                cur = line[3:].strip()
                drop_file = waived(rules, cur)
                rec = [line]
                continue
            if line.startswith("end_of_record"):
                if drop_file:
                    removed_files += 1
                else:
                    # recompute LF/LH from the kept DA records
                    da = [l for l in rec if l.startswith("DA:")]
                    keep = [l for l in rec if not l.startswith(("LF:", "LH:"))]
                    hit = sum(1 for l in da if int(l[3:].split(",")[1]) > 0)
                    out.extend(keep)
                    out.append(f"LF:{len(da)}\n")
                    out.append(f"LH:{hit}\n")
                    out.append(line)
                rec = []
                cur = None
                continue
            if line.startswith("DA:") and cur is not None and not drop_file:
                if waived(rules, cur, int(line[3:].split(",")[0])):
                    removed_lines += 1
                    continue
            if cur is None:
                out.append(line)
            else:
                rec.append(line)

    with open(args.out or args.info, "w") as f:
        f.writelines(out)
    print(f"coverage_waive: removed {removed_files} file(s), {removed_lines} line(s)")


if __name__ == "__main__":
    main()
