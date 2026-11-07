#!/usr/bin/env python3
"""cover_report --waivers plugin: same code-coverage waivers as plic_code_cov_report.py."""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import plic_code_cov_report  # noqa: E402

CODE_WAIVERS = plic_code_cov_report.load_waivers(os.path.join(HERE, "..", "sim", "code_cov_waivers.txt"))
SKIP_BIN_TYPES = ("ignore", "illegal")


def waiver_reason(point):
    fields = point["fields"]
    kind = fields.get("t", "")
    if kind in ("covergroup", "user"):
        if fields.get("bin_type", "") in SKIP_BIN_TYPES:
            return "%s bin" % fields["bin_type"]
        return None
    code_point = {"type": kind, "file": os.path.basename(fields.get("f", "")), "line": point["line"] or 0,
                  "inst": fields.get("h", "").replace("plic_test_top.", "", 1), "what": fields.get("o", "")}
    plic_code_cov_report.apply_waivers([code_point], CODE_WAIVERS)
    return code_point.get("waived")

