# ============================================================
# SRAM (sram_top) UVM Verification Makefile -- Verilator 5.052
# Run from the sim/ directory: cd sim && make
#   Uses $(VERILATOR_HOME)/bin/verilator (default
#   /opt/verilator-5.052) regardless of PATH; any other version is
#   rejected by check_verilator.
#
# Functional coverage: built with --coverage-user, every run writes
# $(COV_DIR)/<test>.dat; 'make regress' merges them into
# $(COV_DIR)/merged.dat and prints the summary + uncovered bins
# ('make cov' does the same for whatever .dat files exist).
# ============================================================

SHELL := /bin/bash

PROJECT_DIR := $(CURDIR)

# ---- SoC-Integration-Structure repository root ----
SOC_ROOT := $(abspath $(PROJECT_DIR)/../../../..)

# ---- SRAM RTL paths ----
SRAM_DIR       := $(SOC_ROOT)/DSN/ip/compute/sram
ASYNC_FIFO_DIR := $(SRAM_DIR)/ip/async_fifo/rtl

LOG_DIR  := $(PROJECT_DIR)/verilator_logs
COV_DIR  := $(PROJECT_DIR)/verilator_cov
WORK_DIR := $(PROJECT_DIR)/verilator_files

FILELIST := $(PROJECT_DIR)/filelist.f
TESTLIST := $(PROJECT_DIR)/../../test_names/testcase
TOP      := tb_top

# ---- UVM_HOME ----
UVM_HOME_DEFAULT := $(SOC_ROOT)/VERIF/uvm-1.1d/src
ifeq ($(UVM_HOME),)
  UVM_HOME := $(UVM_HOME_DEFAULT)
endif

TESTNAME  ?= sram_smoke_test
SEED      ?= 1
VERBOSITY ?= UVM_MEDIUM
PLUSARGS  ?=
JOBS      ?= 8
DEFINES   ?=
# 1 = also collect RTL code coverage (line/branch/toggle/expr/FSM) of
# the DUT only, scoped by code_cov.vlt. Slower build and run.
CODE_COV  ?= 0
# Empty = use tb_top's NUM_AXI_AGENTS default; a number overrides it.
NUM_AGENTS ?=

# Install prefix of the required Verilator (not VERILATOR_ROOT, which
# for an installed Verilator is <prefix>/share/verilator).
VERILATOR_HOME_DEFAULT := /opt/verilator-5.052
VERILATOR_VERSION      := 5.052
ifeq ($(VERILATOR_HOME),)
  VERILATOR_HOME := $(VERILATOR_HOME_DEFAULT)
endif
VERILATOR     := $(VERILATOR_HOME)/bin/verilator
VERILATOR_COV := $(VERILATOR_HOME)/bin/verilator_coverage
COV_REPORT    := python3 -I $(PROJECT_DIR)/cov_report.py
CODE_REPORT   := python3 -I $(PROJECT_DIR)/code_cov_report.py

# RTL code coverage scope: $(WORK_DIR)/code_cov.vlt is generated at
# compile time with a coverage_off for every non-DSN file in filelist.f
# (by file name -- Verilator resolves the filelist paths through the
# include dirs, so directory patterns are unreliable), plus the UVM
# library and Verilator's std package. Only the DUT RTL is measured.
CODE_COV_VLT := $(WORK_DIR)/code_cov.vlt
ifeq ($(CODE_COV),1)
  CODE_COV_FLAGS := --coverage-line --coverage-toggle --coverage-expr --coverage-fsm \
                    "$(CODE_COV_VLT)"
endif

INCDIRS := $(PROJECT_DIR)/../interface $(ASYNC_FIFO_DIR)

VERILATOR_FLAGS := -sv \
		--top-module $(TOP) \
		--timescale 1ns/1ps \
		--timing \
		-Wall -Wno-fatal \
		-Wno-UNOPTFLAT -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-DECLFILENAME \
		-Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-TIMESCALEMOD \
		-Wno-EOFNEWLINE -Wno-IMPORTSTAR \
		-Wno-UNDRIVEN -Wno-UNSIGNED -Wno-VARHIDDEN -Wno-IMPLICIT \
		"$(UVM_HOME)/uvm_pkg.sv" \
		-f "$(FILELIST)" \
		+incdir+"$(UVM_HOME)" \
		$(foreach d,$(INCDIRS),+incdir+"$(d)") \
		+define+UVM_NO_DPI \
		$(if $(NUM_AGENTS),-GNUM_AXI_AGENTS=$(NUM_AGENTS)) \
		$(foreach d,$(DEFINES),+define+$(d))

.PHONY: all
all: verilator

# ---- help text (make help) ----------------------------------
define HELP_TEXT
SRAM (sram_top) UVM testbench -- Verilator $(VERILATOR_VERSION)
Run from: sram_tb/sim   (paths below are relative to it)

Targets
  make                 same as 'make verilator'
  make verilator       compile + run TESTNAME
  make lint            Verilator lint only        -> verilator_logs/verilator_lint.log
  make compile         build the simulator        -> verilator_files/V$(TOP)
  make run             run TESTNAME on the built binary (no rebuild)
                         log      -> verilator_logs/<TESTNAME>.log
                         coverage -> verilator_cov/<TESTNAME>.dat
  make regress         compile once, run every test in test_names/testcase,
                       print PASS/FAIL per test, then 'make cov'
  make cov             merge verilator_cov/*.dat -> verilator_cov/merged.dat
                       and print the functional-coverage report (per test,
                       per covergroup, per coverpoint, uncovered bins)
                         report   -> verilator_cov/coverage_report.txt
  make code_cov        RTL code coverage (needs CODE_COV=1 build): merge,
                       per-type / per-instance report, uncovered lines,
                       untoggled signals, annotated RTL
                         report   -> verilator_cov/code_coverage_report.txt
                         waivers  <- code_cov_waivers.txt (unreachable points)
                         sources  -> verilator_cov/annotated/
  make clk_sweep       run TESTNAME (default sram_random_test) at 10 aclk /
                       sram_clk configurations (ratios 4:1 .. 1:4, random
                       phase, jitter) and print a pass/fail table
                         logs     -> verilator_logs/clk_sweep_<config>.log
  make check_verilator fail unless VERILATOR_HOME/bin/verilator is $(VERILATOR_VERSION)
  make clean           remove logs, build and coverage output
  make help            this text

Variables (make VAR=value)
  TESTNAME        test to run                     (default sram_smoke_test)
  SEED            random seed                     (default 1)
  VERBOSITY       UVM verbosity                   (default UVM_MEDIUM)
  PLUSARGS        extra runtime plusargs, see below
  DEFINES         extra compile defines, e.g. DEFINES="TB_FULL_SV MY_DEBUG"
  JOBS            parallel C++ build jobs         (default 8)
  CODE_COV        1 = also collect DUT-only line/branch/expr/toggle code
                  coverage (TB + UVM excluded); 'make regress CODE_COV=1'
                  ends with 'make code_cov'. Rebuild after changing it.
  NUM_AGENTS      AXI master agents, each on its own axi_if. Default:
                  the NUM_AXI_AGENTS parameter of tb_top (edit it there),
                  this variable overrides it (-GNUM_AXI_AGENTS=<n>).
                  Agent 0 drives sram_top; agents 1..n-1 are passive on
                  tied-off interfaces until a slave is hooked up in
                  tb_top (g_axi_agent[i]). Rebuild after changing it.
  UVM_HOME        UVM source dir                  (default VERIF/uvm-1.1d/src)
  VERILATOR_HOME  Verilator install prefix        (default $(VERILATOR_HOME_DEFAULT))

Runtime plusargs (PLUSARGS="...")
  +NUM_TXN=<n>            transactions for random tests (default 200)
  +WRITE_PCT=<0..100>     write share in sram_random_test (default 50)
  +AXI_ZERO_DELAY         no random VALID/READY gaps
  +AXI_MAX_DELAY=<n>      max random gap on every channel (cycles)
  +AXI_CLK_MHZ=<f>        aclk frequency     (default 400)
  +SRAM_CLK_MHZ=<f>       sram_clk frequency (default 750)
  +SRAM_CLK_PHASE_NS=<f>  sram_clk start offset vs aclk (default 0.3)
  +CLK_RANDOM_PHASE       random sram_clk start offset
  +CLK_JITTER_PS=<n>      random +/-n ps on every half period of both clocks
  +DUMP                   write dump.vcd
  Optional AXI4 features -- all OFF for sram_top, for TB checks only:
  +AXI4_EXCLUSIVE         exclusive accesses (AxLOCK=1)
  +AXI4_SLAVE_EXCLUSIVE   expect an exclusive monitor (EXOKAY)
  +AXI4_REGION            random AxREGION
  +AXI4_USER              random AxUSER / WUSER
  +AXI4_OUTSTANDING=<n>   up to n write and n read bursts in flight
                          (sram_top accepts AW+AR together -> WB_RW_OVERLAP)
  +AXI4_RD_INTERLEAVE     accept interleaved R beats across IDs
  Per agent (NUM_AGENTS > 1): every AXI plusarg above applies to all
  agents; prefix it with AGENT<i>_ to target agent i only:
  +AGENT<i>_ACTIVE / +AGENT<i>_PASSIVE   agent i mode
  +AGENT<i>_AXI_ZERO_DELAY, +AGENT<i>_AXI_MAX_DELAY=<n>,
  +AGENT<i>_AXI4_OUTSTANDING=<n>, +AGENT<i>_AXI4_EXCLUSIVE, ...

Compile defines (DEFINES="...")
  TB_FULL_SV              force SV features Verilator lacks (binsof crosses,
                          per-coverpoint get_coverage, dist) -- other tools only
  TB_NO_FULL_SV           force them off on any tool

Examples
  make TESTNAME=sram_random_test SEED=7 PLUSARGS="+NUM_TXN=1000"
  make run TESTNAME=sram_backpressure_test VERBOSITY=UVM_HIGH
  make run TESTNAME=sram_wrap_test PLUSARGS="+DUMP"
  make regress SEED=3
  make regress CODE_COV=1        # functional + RTL code coverage
  make compile NUM_AGENTS=3 && make run PLUSARGS="+AGENT1_AXI_ZERO_DELAY"
  make cov

endef
export HELP_TEXT

.PHONY: help
help:
	@echo "$$HELP_TEXT" | sed '/^Runtime plusargs/,$$d'
	@echo "Tests (test_names/testcase)"
	@grep -v '^\s*#' "$(TESTLIST)" | grep -v '^\s*$$' | sed 's/^/  /'
	@echo ""
	@echo "$$HELP_TEXT" | sed -n '/^Runtime plusargs/,$$p'

.PHONY: check_uvm_home
check_uvm_home:
	@if [ ! -f "$(UVM_HOME)/uvm_pkg.sv" ]; then \
		echo "ERROR: uvm_pkg.sv not found in $(UVM_HOME)"; \
		exit 1; \
	fi

.PHONY: check_verilator
check_verilator:
	@v=$$("$(VERILATOR)" --version 2>/dev/null | awk '{print $$2}'); \
	if [ "$$v" != "$(VERILATOR_VERSION)" ]; then \
		echo "ERROR: need Verilator $(VERILATOR_VERSION), $(VERILATOR) reports '$$v'"; \
		exit 1; \
	fi

.PHONY: lint
lint: check_uvm_home check_verilator
	@mkdir -p "$(LOG_DIR)"
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		2>&1 | tee "$(LOG_DIR)/verilator_lint.log"

.PHONY: compile
compile: check_uvm_home check_verilator
	@mkdir -p "$(LOG_DIR)" "$(WORK_DIR)"
	@rm -f "$(WORK_DIR)/V$(TOP)"
	@{ echo '`verilator_config'; \
	   echo 'coverage_off -file "*uvm*"'; \
	   echo 'coverage_off -file "*verilated_std.sv"'; \
	   grep -v '^\s*#' "$(FILELIST)" | grep -v '^\s*$$' | grep -v '/DSN/' | \
	       sed 's|.*/|coverage_off -file "*/|; s|$$|"|'; \
	 } > "$(CODE_COV_VLT)"
	@set -o pipefail; \
	$(VERILATOR) --binary $(VERILATOR_FLAGS) \
		--Mdir "$(WORK_DIR)" \
		--build-jobs $(JOBS) \
		-CFLAGS "-O1" \
		--trace --trace-depth 2 \
		--coverage-user $(CODE_COV_FLAGS) \
		2>&1 | tee "$(LOG_DIR)/verilator_compile.log"
	@if [ ! -f "$(WORK_DIR)/V$(TOP)" ]; then \
		echo "ERROR: Verilator build failed - V$(TOP) not produced."; \
		echo "See $(LOG_DIR)/verilator_compile.log"; \
		exit 1; \
	fi
	@echo "Executable: $(WORK_DIR)/V$(TOP)"

.PHONY: run
run:
	@if [ ! -f "$(WORK_DIR)/V$(TOP)" ]; then \
		echo "ERROR: $(WORK_DIR)/V$(TOP) not found. Run 'make compile' first."; \
		exit 1; \
	fi
	@mkdir -p "$(LOG_DIR)" "$(COV_DIR)"
	@rm -f "$(COV_DIR)/$(TESTNAME).dat"
	"$(WORK_DIR)/V$(TOP)" \
		+UVM_TESTNAME=$(TESTNAME) \
		+UVM_VERBOSITY=$(VERBOSITY) \
		+UVM_NO_RELNOTES \
		+verilator+seed+$(SEED) \
		+verilator+coverage+file+$(COV_DIR)/$(TESTNAME).dat \
		$(PLUSARGS) \
		2>&1 | tee "$(LOG_DIR)/$(TESTNAME).log"

.PHONY: verilator
verilator: compile run

# Compile once, run every test in test_names/testcase, summarize.
.PHONY: regress
regress: compile
	@rm -f "$(COV_DIR)"/*.dat
	@for t in $$(grep -v '^\s*#' "$(TESTLIST)" | grep -v '^\s*$$'); do \
		echo "Running $$t ..."; \
		$(MAKE) --no-print-directory run TESTNAME=$$t SEED=$(SEED) PLUSARGS="$(PLUSARGS)" > /dev/null 2>&1; \
	done
	@echo ""
	@echo "================ REGRESSION SUMMARY ================"
	@for t in $$(grep -v '^\s*#' "$(TESTLIST)" | grep -v '^\s*$$'); do \
		log="$(LOG_DIR)/$$t.log"; \
		if grep -q "\*\*\* .* PASSED \*\*\*" "$$log" 2>/dev/null; then r=PASS; else r=FAIL; fi; \
		printf "  %-28s %s\n" "$$t" "$$r"; \
	done
	@echo "===================================================="
	@$(MAKE) --no-print-directory cov
	@if [ "$(CODE_COV)" = "1" ]; then $(MAKE) --no-print-directory code_cov; fi

# Merge every per-test coverage file and report the holes.
.PHONY: cov
cov:
	@dats=$$(ls "$(COV_DIR)"/*.dat 2>/dev/null | grep -v '/merged.dat$$'); \
	if [ -z "$$dats" ]; then echo "No coverage files in $(COV_DIR)"; exit 1; fi; \
	"$(VERILATOR_COV)" --write "$(COV_DIR)/merged.dat" $$dats; \
	echo ""; \
	echo "============ FUNCTIONAL COVERAGE (merged) ============"; \
	$(COV_REPORT) --per-test $$dats --merged "$(COV_DIR)/merged.dat" \
		| tee "$(COV_DIR)/coverage_report.txt"

.PHONY: code_cov
code_cov:
	@dats=$$(ls "$(COV_DIR)"/*.dat 2>/dev/null | grep -v '/merged.dat$$'); \
	if [ -z "$$dats" ]; then echo "No coverage files in $(COV_DIR)"; exit 1; fi; \
	"$(VERILATOR_COV)" --write "$(COV_DIR)/merged.dat" $$dats; \
	rm -rf "$(COV_DIR)/annotated"; \
	"$(VERILATOR_COV)" --annotate "$(COV_DIR)/annotated" --annotate-min 1 \
		--filter-type 'line|branch|expr|toggle|fsm.*' "$(COV_DIR)/merged.dat" > /dev/null; \
	echo ""; \
	echo "============ RTL CODE COVERAGE (merged) ============"; \
	$(CODE_REPORT) --per-test $$dats --merged "$(COV_DIR)/merged.dat" \
		--waivers "$(PROJECT_DIR)/code_cov_waivers.txt" \
		| tee "$(COV_DIR)/code_coverage_report.txt"; \
	echo ""; \
	echo "Annotated RTL (uncovered lines marked %000000): $(COV_DIR)/annotated/"

.PHONY: clk_sweep
# Clock-ratio sweep (CDC_001/002): TESTNAME (default sram_random_test) at
# several aclk/sram_clk ratios, random phase, jitter. Needs 'make compile'.
clk_sweep:
	@"$(PROJECT_DIR)/clk_sweep.sh" $(if $(filter sram_smoke_test,$(TESTNAME)),sram_random_test,$(TESTNAME)) $(SEED) $(PLUSARGS)

.PHONY: clean
clean:
	rm -rf "$(LOG_DIR)" "$(WORK_DIR)" "$(COV_DIR)" dump.vcd
	@echo "Clean complete."
