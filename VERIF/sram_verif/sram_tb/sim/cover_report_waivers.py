#!/usr/bin/env python3
"""cover_report --waivers plugin: same waivers as code_cov_report.py and cov_report.py."""
import fnmatch
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)
import code_cov_report  # noqa: E402
import cov_report  # noqa: E402

CODE_WAIVERS = code_cov_report.load_waivers(os.path.join(HERE, "code_cov_waivers.txt"))
FUNC_WAIVERS = cov_report.load_waivers(os.path.join(HERE, "func_cov_waivers.txt"))


def waiver_reason(point):
    fields = point["fields"]
    kind = fields.get("t", "")
    if kind in ("covergroup", "user"):
        if fields.get("bin_type", "") in cov_report.SKIP_BIN_TYPES:
            return "%s bin" % fields["bin_type"]
        hier = fields.get("h", "")
        name = hier.replace("__vlAnonCG_", "") if kind == "covergroup" else "cover_property." + hier
        return next((w["reason"] for w in FUNC_WAIVERS if fnmatch.fnmatchcase(name, w["pat"])), None)
    code_point = {"type": kind, "file": os.path.basename(fields.get("f", "")), "line": point["line"] or 0,
                  "inst": fields.get("h", "").replace("tb_top.", "", 1), "what": fields.get("o", "")}
    code_cov_report.apply_waivers([code_point], CODE_WAIVERS)
    return code_point.get("waived")
