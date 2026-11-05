#!/usr/bin/env python3
"""cover_report --waivers plugin: same scope and waivers as coverage_summary.py."""

import fnmatch
import functools
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import coverage_waive  # noqa: E402

MERGE_INSTANCES = True
RULES = coverage_waive.load(os.path.join(HERE, "..", "sim", "coverage_waivers.txt"))


@functools.lru_cache(maxsize=None)
def rules_for(path):
    return [rule for rule in RULES if fnmatch.fnmatch(path, rule[0])]


def waiver_reason(point):
    path = point["file"]
    if "/DSN/" not in path:
        return "outside the design RTL (/DSN/)"
    rules = rules_for(path)
    if coverage_waive.waived(rules, path, point["line"] or 0):
        return "coverage_waivers.txt"
    if point["type"] == "toggle" and coverage_waive.waived_toggle(rules, path, point["fields"].get("o", "")):
        return "coverage_waivers.txt (toggle)"
    return None
