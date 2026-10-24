#!/usr/bin/env bash
# ------------------------------------------------------------
# clk_sweep.sh -- clock-ratio sweep (test plan CDC_001 / CDC_002)
#
# Runs one test (default sram_random_test) on the already built
# simulator at several aclk / sram_clk ratios, with and without a
# random phase offset and clock jitter, and prints a summary.
# Called by 'make clk_sweep'; can also be run directly from sim/:
#   ./clk_sweep.sh [TESTNAME] [SEED] [extra plusargs...]
#
# Per configuration:
#   log      verilator_logs/clk_sweep_<config>.log
#   coverage verilator_cov/clk_sweep_<config>.dat
# A configuration passes when the test prints PASSED (scoreboard data
# checks, AXI / CDC assertions, watchdog: any error fails it).
# ------------------------------------------------------------
set -u
cd "$(dirname "$0")"

TEST=${1:-sram_random_test}
SEED=${2:-1}
shift $(( $# > 2 ? 2 : $# ))
EXTRA="$*"
BIN=verilator_files/Vtb_top
LOG_DIR=verilator_logs
COV_DIR=verilator_cov

if [ ! -x "$BIN" ]; then
    echo "ERROR: $BIN not found -- run 'make compile' first"; exit 1
fi
mkdir -p "$LOG_DIR" "$COV_DIR"

# name             aclk_MHz  sram_MHz  plusargs
CONFIGS=(
  "nominal          400  750"
  "sram_4x_slower   400  100"
  "equal_in_phase   400  400  +SRAM_CLK_PHASE_NS=0"
  "equal_rand_phase 400  400  +CLK_RANDOM_PHASE"
  "sram_4x_faster   400 1600"
  "axi_4x_slower    100  400"
  "nominal_jitter   400  750  +CLK_RANDOM_PHASE +CLK_JITTER_PS=150"
  "slower_jitter    400  100  +CLK_RANDOM_PHASE +CLK_JITTER_PS=150"
  "equal_jitter     400  400  +CLK_RANDOM_PHASE +CLK_JITTER_PS=150"
  "faster_jitter    400 1600  +CLK_RANDOM_PHASE +CLK_JITTER_PS=70"
)

printf "Clock-ratio sweep: test=%s seed=%s %s\n\n" "$TEST" "$SEED" "$EXTRA"
SUMMARY=()
NFAIL=0
for c in "${CONFIGS[@]}"; do
    read -r name axi sram args <<< "$c"
    log="$LOG_DIR/clk_sweep_${name}.log"
    "$BIN" +UVM_TESTNAME="$TEST" +UVM_VERBOSITY=UVM_LOW +UVM_NO_RELNOTES \
           +verilator+seed+"$SEED" +verilator+coverage+file+"$COV_DIR/clk_sweep_${name}.dat" \
           +AXI_CLK_MHZ="$axi" +SRAM_CLK_MHZ="$sram" $args $EXTRA > "$log" 2>&1
    if grep -q "\*\*\* .* PASSED \*\*\*" "$log"; then res=PASS; else res=FAIL; NFAIL=$((NFAIL + 1)); fi
    ids=$(grep -E 'UVM_(ERROR|FATAL) [^:]' "$log" | grep -oE '\[[A-Za-z_]+\]' | sort | uniq -c | tr -s ' ' | tr '\n' ' ')
    wr=$(grep -m1 "write bursts checked" "$log" | grep -oE '[0-9]+$')
    rd=$(grep -m1 "read bursts checked"  "$log" | grep -oE '[0-9]+$')
    mm=$(grep -m1 -E "^ +mismatches +:" "$log" | grep -oE '[0-9]+$')
    clk=$(grep -m1 "tb_top clocks:" "$log" | sed -E 's/.*phase ([0-9.]+) ns, jitter \+\/-([0-9]+) ps/phase \1 ns, jitter +\/-\2 ps/')
    SUMMARY+=("$(printf "  %-17s %5s/%-5s  %-34s %-4s wr %-4s rd %-4s mism %-3s %s" \
                 "$name" "$axi" "$sram" "$clk" "$res" "${wr:-?}" "${rd:-?}" "${mm:-?}" "$ids")")
done

echo "================ CLOCK-RATIO SWEEP ================"
printf "  %-17s %-11s  %-34s %s\n" "config" "aclk/sram" "sram_clk phase, jitter" "result"
for s in "${SUMMARY[@]}"; do echo "$s"; done
echo "==================================================="
echo "  $(( ${#CONFIGS[@]} - NFAIL )) / ${#CONFIGS[@]} configurations passed"
exit 0
