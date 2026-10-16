# ============================================================
# SRAM (sram_top) UVM Verification Makefile -- Verilator only
# Run from the sim/ directory: cd sim && make
#   (source SoC-Integration-Structure/source_file.sh first so
#    verilator-5.048 is on PATH)
# ============================================================

SHELL := /bin/bash

PROJECT_DIR := $(CURDIR)

# ---- SoC-Integration-Structure repository root ----
SOC_ROOT := $(abspath $(PROJECT_DIR)/../../../..)

# ---- SRAM RTL paths ----
SRAM_DIR       := $(SOC_ROOT)/DSN/ip/compute/sram
ASYNC_FIFO_DIR := $(SRAM_DIR)/ip/async_fifo/rtl

LOG_DIR  := $(PROJECT_DIR)/verilator_logs
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

VERILATOR := verilator

INCDIRS := $(PROJECT_DIR)/../interface $(ASYNC_FIFO_DIR)

VERILATOR_FLAGS := -sv \
		--top-module $(TOP) \
		--timescale 1ns/1ps \
		--timing \
		-Wall -Wno-fatal \
		-Wno-UNOPTFLAT -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-DECLFILENAME \
		-Wno-WIDTHEXPAND -Wno-WIDTHTRUNC -Wno-TIMESCALEMOD \
		-Wno-COVERIGN -Wno-EOFNEWLINE -Wno-IMPORTSTAR \
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
	@echo "  regress   compile once, run every test in test_names/testcase"
	@echo "  clean"
	@echo ""
	@echo "Variables:"
	@echo "  TESTNAME  (default sram_smoke_test)"
	@echo "  SEED      (default 1)"
	@echo "  VERBOSITY (default UVM_MEDIUM)"
	@echo "  DEFINES   extra compile defines, e.g. DEFINES=MY_DEBUG"
	@echo "  PLUSARGS  e.g. PLUSARGS=\"+NUM_TXN=1000 +AXI_ZERO_DELAY +SRAM_CLK_MHZ=200 +DUMP\""

.PHONY: check_uvm_home
check_uvm_home:
	@if [ ! -f "$(UVM_HOME)/uvm_pkg.sv" ]; then \
		echo "ERROR: uvm_pkg.sv not found in $(UVM_HOME)"; \
		exit 1; \
	fi

.PHONY: lint
lint: check_uvm_home
	@mkdir -p "$(LOG_DIR)"
	$(VERILATOR) --lint-only $(VERILATOR_FLAGS) \
		2>&1 | tee "$(LOG_DIR)/verilator_lint.log"

.PHONY: compile
compile: check_uvm_home
	@mkdir -p "$(LOG_DIR)" "$(WORK_DIR)"
	@rm -f "$(WORK_DIR)/V$(TOP)"
	@set -o pipefail; \
	$(VERILATOR) --binary $(VERILATOR_FLAGS) \
		--Mdir "$(WORK_DIR)" \
		--build-jobs $(JOBS) \
		-CFLAGS "-O1" \
		--trace --trace-depth 2 \
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
	@mkdir -p "$(LOG_DIR)"
	"$(WORK_DIR)/V$(TOP)" \
		+UVM_TESTNAME=$(TESTNAME) \
		+UVM_VERBOSITY=$(VERBOSITY) \
		+UVM_NO_RELNOTES \
		+verilator+seed+$(SEED) \
		$(PLUSARGS) \
		2>&1 | tee "$(LOG_DIR)/$(TESTNAME).log"

.PHONY: verilator
verilator: compile run

# Compile once, run every test in test_names/testcase, summarize.
.PHONY: regress
regress: compile
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

.PHONY: clean
clean:
	rm -rf "$(LOG_DIR)" "$(WORK_DIR)" dump.vcd
	@echo "Clean complete."
