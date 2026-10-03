#!/usr/bin/env python3

import sys
import os
import re
import html
from collections import defaultdict

if len(sys.argv) != 3:
    print("Usage:")
    print("  ./functional_coverage_html.py coverage.dat output.html")
    sys.exit(1)

coverage_file = sys.argv[1]
output_html = sys.argv[2]

# ----------------------------------------------------------------------
# Read coverage.dat
# ----------------------------------------------------------------------

with open(coverage_file, "r", errors="ignore") as f:
    lines = f.readlines()

# ----------------------------------------------------------------------
# Extract covergroup records
#
# Verilator records look approximately like:
#
# C 'tcovergrouppagev_covergroup/...
#   ...cp_name...
#
# We retain every record containing:
#     tcovergroup
# ----------------------------------------------------------------------

records = []

for line in lines:
    line = line.rstrip()

    if "tcovergroup" not in line:
        continue

    if not line.startswith("C "):
        continue

    # Extract hit count - usually the last integer in the record
    nums = re.findall(r"\s(-?\d+)\s*$", line)

    if not nums:
        continue

    hits = int(nums[-1])

    # Remove initial C ' and trailing count
    text = line[2:].strip()

    if text.endswith(str(hits)):
        text = text[:-len(str(hits))].rstrip()

    records.append((text, hits))

# ----------------------------------------------------------------------
# Parse records
# ----------------------------------------------------------------------

covergroups = defaultdict(list)

for text, hits in records:

    # Get source file
    source = "Unknown"

    m = re.search(r"f([^h]*?)l(\d+)n", text)

    if m:
        source = m.group(1)

    # Extract covergroup hierarchy after covergroup/
    m = re.search(r"tcovergroup/([^f]+)", text)

    if not m:
        continue

    path = m.group(1)

    # Clean encoded Verilator separators
    path = path.replace("h", "/")
    path = path.replace("C", ",")
    path = path.replace("b", ",")

    # Remove some generated Verilator names
    path = path.replace("__vlAnonCG_", "")

    # Extract final coverage object name
    parts = path.split("/")

    if len(parts) >= 2:
        group = parts[0]
        item = "/".join(parts[1:])
    else:
        group = "covergroup"
        item = path

    covergroups[group].append({
        "item": item,
        "hits": hits,
        "source": source
    })

# ----------------------------------------------------------------------
# Remove duplicates
# ----------------------------------------------------------------------

for group in covergroups:
    unique = {}

    for item in covergroups[group]:
        key = (item["item"], item["source"])

        if key not in unique:
            unique[key] = item
        else:
            # Keep maximum hit count
            unique[key]["hits"] = max(
                unique[key]["hits"],
                item["hits"]
            )

    covergroups[group] = list(unique.values())

# ----------------------------------------------------------------------
# Calculate statistics
# ----------------------------------------------------------------------

total = 0
covered = 0

for group, items in covergroups.items():
    for item in items:
        total += 1

        if item["hits"] > 0:
            covered += 1

if total:
    percentage = 100.0 * covered / total
else:
    percentage = 0.0

# ----------------------------------------------------------------------
# Generate HTML
# ----------------------------------------------------------------------

os.makedirs(os.path.dirname(output_html), exist_ok=True)

with open(output_html, "w") as out:

    out.write("""
<!DOCTYPE html>
<html>
<head>
<meta charset="UTF-8">

<title>Verilator Functional Coverage</title>

<style>

body {
    font-family: Arial, Helvetica, sans-serif;
    margin: 30px;
    background: #f5f6f8;
}

h1 {
    color: #222;
}

.summary {
    display: flex;
    gap: 20px;
    margin: 20px 0;
}

.card {
    background: white;
    padding: 20px;
    border-radius: 8px;
    min-width: 180px;
    box-shadow: 0 1px 5px rgba(0,0,0,0.15);
}

.number {
    font-size: 28px;
    font-weight: bold;
}

table {
    border-collapse: collapse;
    width: 100%;
    background: white;
    margin-bottom: 30px;
}

th {
    background: #315d9b;
    color: white;
    padding: 10px;
    text-align: left;
}

td {
    padding: 9px;
    border-bottom: 1px solid #ddd;
}

.hit {
    background: #c6efce;
    color: #006100;
    font-weight: bold;
}

.miss {
    background: #ffc7ce;
    color: #9c0006;
    font-weight: bold;
}

.progress {
    width: 200px;
    background: #ddd;
    height: 18px;
    border-radius: 5px;
}

.bar {
    height: 18px;
    background: #4caf50;
    border-radius: 5px;
}

.source {
    color: #666;
    font-size: 12px;
}

details {
    margin-bottom: 25px;
}

summary {
    cursor: pointer;
    font-size: 20px;
    font-weight: bold;
    padding: 12px;
    background: #e8edf5;
}

</style>

</head>

<body>

<h1>Verilator Functional Coverage</h1>

<div class="summary">

<div class="card">
<div>Total Bins</div>
<div class="number">""")

    out.write(str(total))

    out.write("""
</div>
</div>

<div class="card">
<div>Covered Bins</div>
<div class="number">""")

    out.write(str(covered))

    out.write("""
</div>
</div>

<div class="card">
<div>Missed Bins</div>
<div class="number">""")

    out.write(str(total - covered))

    out.write("""
</div>
</div>

<div class="card">
<div>Coverage</div>
<div class="number">""")

    out.write(f"{percentage:.1f}%")

    out.write("""
</div>
</div>

</div>

<h2>Covergroups</h2>
""")

    # ------------------------------------------------------------------
    # Covergroup sections
    # ------------------------------------------------------------------

    for group, items in sorted(covergroups.items()):

        group_total = len(items)
        group_hit = sum(1 for x in items if x["hits"] > 0)

        if group_total:
            group_pct = 100.0 * group_hit / group_total
        else:
            group_pct = 0.0

        out.write("<details open>")

        out.write(
            f"<summary>{html.escape(group)} "
            f"— {group_pct:.1f}% "
            f"({group_hit}/{group_total})</summary>"
        )

        out.write("""
<table>

<tr>
<th>Coverpoint / Bin / Cross</th>
<th>Hit Count</th>
<th>Status</th>
<th>Coverage</th>
</tr>
""")

        for item in sorted(items, key=lambda x: x["item"]):

            name = html.escape(item["item"])
            hits = item["hits"]

            if hits > 0:
                status = '<span class="hit">COVERED</span>'
                pct = 100
                pct_text = "100%"
            else:
                status = '<span class="miss">MISSED</span>'
                pct = 0
                pct_text = "0%"

            out.write("<tr>")

            out.write(f"<td>{name}")

            if item["source"] != "Unknown":
                out.write(
                    f'<div class="source">'
                    f'{html.escape(item["source"])}'
                    f'</div>'
                )

            out.write("</td>")

            out.write(f"<td>{hits}</td>")
            out.write(f"<td>{status}</td>")

            out.write("""
<td>
<div class="progress">
<div class="bar" style="width:""")

            out.write(f"{pct}%")

            out.write(""""></div>
</div>
""")

            out.write(f"{pct_text}</td>")

            out.write("</tr>")

        out.write("""
</table>
</details>
""")

    out.write("""
<hr>

<p>
Generated from Verilator coverage data:
</p>

<p>
<code>
""")

    out.write(html.escape(os.path.abspath(coverage_file)))

    out.write("""
</code>
</p>

</body>
</html>
""")

print()
print("==============================================")
print(" VERILATOR FUNCTIONAL COVERAGE HTML")
print("==============================================")
print(f"Coverage file : {coverage_file}")
print(f"Records       : {len(records)}")
print(f"Total bins    : {total}")
print(f"Covered bins  : {covered}")
print(f"Missed bins   : {total-covered}")
print(f"Coverage      : {percentage:.1f}%")
print()
print(f"HTML report   : {output_html}")
print("==============================================")
