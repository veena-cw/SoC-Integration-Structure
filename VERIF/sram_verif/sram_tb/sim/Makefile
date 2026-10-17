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
		$(foreach d,$(DEFINES),+define+$(d))

.PHONY: all
all: verilator

.PHONY: help
help:
	@echo "Targets:"
	@echo "  lint      Verilator lint only"
	@echo "  compile   build $(WORK_DIR)/V$(TOP)"
	@echo "  run       run TESTNAME on the built binary"
	@echo "  verilator compile + run (default)"
	@echo "  regress   compile once, run every test in test_names/testcase,"
	@echo "            merge functional coverage"
	@echo "  cov       merge $(COV_DIR)/*.dat and report coverage holes"
	@echo "  clean"
	@echo ""
	@echo "Variables:"
	@echo "  TESTNAME  (default sram_smoke_test)"
	@echo "  SEED      (default 1)"
	@echo "  VERBOSITY (default UVM_MEDIUM)"
	@echo "  DEFINES   extra compile defines, e.g. DEFINES=MY_DEBUG"
	@echo "  PLUSARGS  e.g. PLUSARGS=\"+NUM_TXN=1000 +AXI_ZERO_DELAY +SRAM_CLK_MHZ=200 +DUMP\""
	@echo "            optional AXI4 features (all off for sram_top):"
	@echo "            +AXI4_EXCLUSIVE +AXI4_SLAVE_EXCLUSIVE +AXI4_REGION +AXI4_USER"
	@echo "            +AXI4_OUTSTANDING=<n> +AXI4_RD_INTERLEAVE"
	@echo "  VERILATOR_HOME (default $(VERILATOR_HOME_DEFAULT), must be $(VERILATOR_VERSION))"

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
	@set -o pipefail; \
	$(VERILATOR) --binary $(VERILATOR_FLAGS) \
		--Mdir "$(WORK_DIR)" \
		--build-jobs $(JOBS) \
		-CFLAGS "-O1" \
		--trace --trace-depth 2 \
		--coverage-user \
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

.PHONY: clean
clean:
	rm -rf "$(LOG_DIR)" "$(WORK_DIR)" "$(COV_DIR)" dump.vcd
	@echo "Clean complete."
