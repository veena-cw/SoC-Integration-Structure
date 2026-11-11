#!/bin/bash
# xsim build/run for the UVM TB with PHY BFM + DRAM model.
# Usage: ./run.sh [TEST] [SEED]      (memory-capped; safe on the shared host)
set -e
cd "$(dirname "$0")"
TEST=${1:-base_test}; SEED=${2:-1}
CAP="systemd-run --user --scope -q -p MemoryMax=4G -p MemorySwapMax=0"
$CAP timeout 900 xvlog -sv -L uvm -f filelist.f > xvlog.log 2>&1 || { grep -E "ERROR|WARNING: \[VRFC 10-(3091|2938)" xvlog.log; exit 1; }
$CAP timeout 900 xelab lpddr_tb_top lpddr_tb_rtl_workarounds -L uvm -timescale 1ns/1ps -debug typical -s tb_sim > xelab.log 2>&1 || { grep -E "ERROR" xelab.log; exit 1; }
$CAP timeout 1800 xsim tb_sim -R -testplusarg UVM_TESTNAME=$TEST -sv_seed $SEED > xsim.log 2>&1 || true
grep -E "UVM_(ERROR|FATAL) :|DRAM_BFM ERROR|PHY_BFM ERROR|BFM_SUMMARY|UVM_ERROR @|UVM_FATAL @" xsim.log | head -40
tail -3 xsim.log
