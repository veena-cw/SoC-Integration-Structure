#!/bin/bash
# Directed self-checking test of the PHY BFM + DRAM model (no DUT). Memory-capped.
set -e
cd "$(dirname "$0")"; mkdir -p unit && cd unit
CAP="systemd-run --user --scope -q -p MemoryMax=3G -p MemorySwapMax=0"
$CAP timeout 600 xvlog -sv -L uvm ../../BFM/lpddr5_dram_model.sv ../../BFM/lpddr5_phy_bfm.sv ../bfm_unit_tb.sv > xvlog.log 2>&1 || { grep ERROR xvlog.log; exit 1; }
$CAP timeout 600 xelab bfm_unit_tb -L uvm -timescale 1ns/1ps -s unit > xelab.log 2>&1 || { grep ERROR xelab.log; exit 1; }
$CAP timeout 600 xsim unit -R > xsim.log 2>&1 || true
grep -E "^(PASS|FAIL)|BFM_UNIT_RESULT|BFM_SUMMARY" xsim.log
