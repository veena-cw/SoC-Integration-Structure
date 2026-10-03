
################################################################################
# Makefile - I2C APB UVM Environment
#
# Supported:
#   Verilator + UVM
#   Vivado XSIM + UVM
#
# Targets:
#   make verilator
#   make verilator TESTNAME=apb_i2c_reg_write_test
#   make regression
#   make cov_merge
#   make coverage_report
#   make waveform
#   make vivado
#   make vivado-nogui
#   make clean
################################################################################

SHELL := /bin/bash

PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim

################################################################################
# UVM
################################################################################

UVM_HOME = $(REPO_ROOT)/VERIF/uvm-1.1d
UVM_SRC  := $(UVM_HOME)/src
UVM_PKG  := $(UVM_SRC)/uvm_pkg.sv

################################################################################
# Source / Top
################################################################################

FILELIST := $(SIM_DIR)/i2c_tb_filelist.f

TOP      := test_top
TESTNAME ?= apb_i2c_reg_write_test

################################################################################
# Verilator
################################################################################

VERILATOR ?= verilator

# If verilator_coverage is in PATH, this is sufficient.
# Otherwise override:
# make cov_merge VERILATOR_COVERAGE=/path/to/verilator_coverage
VERILATOR_COVERAGE ?= verilator_coverage

VERILATOR_MDIR  := $(SIM_DIR)/verilator_obj_dir
VERILATOR_EXE   := $(VERILATOR_MDIR)/V$(TOP)
VERILATOR_STAMP := $(SIM_DIR)/.verilator_build

VERILATOR_LOG_DIR := $(SIM_DIR)/verilator_log

################################################################################
# Coverage
################################################################################
COVERAGE_CFG      := $(SIM_DIR)/verilator_coverage.vlt
COVERAGE_DIR      := $(VERILATOR_LOG_DIR)/coverage
COVERAGE_MERGED   := $(COVERAGE_DIR)/coverage.dat
COVERAGE_INFO    := $(COVERAGE_DIR)/code.info
COVERAGE_RTL_INFO := $(COVERAGE_DIR)/code_rtl.info
COVERAGE_SUMMARY := $(COVERAGE_DIR)/summary.txt
COVERAGE_HTML    := $(COVERAGE_DIR)/html
FUNCTIONAL_INFO  := $(COVERAGE_DIR)/functional.info
FUNCTIONAL_HTML  := $(COVERAGE_DIR)/functional_html

################################################################################
# Regression
################################################################################

REGRESSION_DIR  := $(VERILATOR_LOG_DIR)/regression

# Regression test list.
#
# One test name per line.
#
# Example:
#   apb_i2c_reg_write_test
#   apb_i2c_reg_read_test
#   apb_i2c_reset_test
#
REGRESSION_LIST ?= $(SIM_DIR)/regression_tests.f


#########


# ASSERTION CONTROL
ASSERT_ARGS ?=
###############
################################################################################
# Verilator
################################################################################

verilator: verilator-sim


# -------------------------------------------------------------------------------
# Verilator Build
# -------------------------------------------------------------------------------

verilator-build: $(VERILATOR_STAMP)


$(VERILATOR_STAMP): $(FILELIST)

	@echo "========================================"
	@echo "        VERILATOR BUILD"
	@echo "========================================"

	@mkdir -p $(VERILATOR_LOG_DIR)
	@mkdir -p $(COVERAGE_DIR)

	cd $(SIM_DIR) && \
	$(VERILATOR) \
	$(COVERAGE_CFG) \
		--binary \
		--timing \
		--trace \
         	--assert \
		--no-stop-fail \
		--coverage \
		--language 1800-2012 \
		--build-jobs 4 \
		 --threads 4 \
		--top-module $(TOP) \
		$(UVM_SRC)/uvm_pkg.sv \
		+incdir+$(UVM_SRC) \
		-f $(FILELIST) \
		+define+UVM_NO_DPI \
		--Mdir $(VERILATOR_MDIR) \
		-Wno-WIDTHEXPAND \
		-Wno-WIDTHTRUNC \
		-Wno-UNSIGNED \
		-Wno-PINMISSING \
		-Wno-IMPLICIT \
		-Wno-IGNOREDRETURN \
		-Wno-fatal

	@touch $@


# -------------------------------------------------------------------------------
# Verilator Simulation
# -------------------------------------------------------------------------------

verilator-sim: verilator-build

	@mkdir -p $(VERILATOR_LOG_DIR)
	@mkdir -p $(COVERAGE_DIR)

	@echo "========================================"
	@echo "        VERILATOR SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "        LOG  = $(VERILATOR_LOG_DIR)/$(TESTNAME).log"
	@echo "========================================"

	cd $(SIM_DIR) && \
	$(VERILATOR_EXE) \
		+UVM_TESTNAME=$(TESTNAME) \
		$(ASSERT_ARGS) \
		2>&1 | tee $(VERILATOR_LOG_DIR)/$(TESTNAME).log

	@if [ -f "$(SIM_DIR)/coverage.dat" ]; then \
		mv -f "$(SIM_DIR)/coverage.dat" \
		      "$(COVERAGE_DIR)/$(TESTNAME).dat"; \
		echo "Coverage saved to:"; \
		echo "  $(COVERAGE_DIR)/$(TESTNAME).dat"; \
	else \
		echo "WARNING: coverage.dat was not generated"; \
	fi


################################################################################
# Single Test Alias
################################################################################

run: verilator-sim


################################################################################
# Regression
################################################################################

regression: verilator-build

	@mkdir -p $(REGRESSION_DIR)
	@mkdir -p $(COVERAGE_DIR)

	@echo "=================================================="
	@echo "             VERILATOR REGRESSION"
	@echo "=================================================="

	@if [ ! -f "$(REGRESSION_LIST)" ]; then \
		echo "ERROR: Regression list not found:"; \
		echo "  $(REGRESSION_LIST)"; \
		exit 1; \
	fi

	@rm -f "$(COVERAGE_DIR)"/*.dat
	@rm -f "$(COVERAGE_MERGED)"
	@rm -f "$(COVERAGE_INFO)"
	@rm -f "$(COVERAGE_SUMMARY)"
	@rm -rf "$(COVERAGE_HTML)"

	@fail=0; \
	while IFS= read -r test || [ -n "$$test" ]; do \
		test=$$(echo "$$test" | sed 's/#.*//' | xargs); \
		[ -z "$$test" ] && continue; \
		\
		echo ""; \
		echo "=================================================="; \
		echo " Running TEST = $$test"; \
		echo "=================================================="; \
		\
		if $(VERILATOR_EXE) \
			+UVM_TESTNAME=$$test \
			2>&1 | tee "$(REGRESSION_DIR)/$$test.log"; then \
			\
			if grep -qE "UVM_FATAL *: *[1-9]|UVM_ERROR *: *[1-9]" \
				"$(REGRESSION_DIR)/$$test.log"; then \
				echo ">>> FAIL: $$test"; \
				fail=1; \
			else \
				echo ">>> PASS: $$test"; \
			fi; \
			\
			if [ -f "$(SIM_DIR)/coverage.dat" ]; then \
				mv -f "$(SIM_DIR)/coverage.dat" \
					"$(COVERAGE_DIR)/$$test.dat"; \
				echo ">>> Coverage saved: $$test.dat"; \
			else \
				echo ">>> WARNING: No coverage.dat for $$test"; \
				fail=1; \
			fi; \
		else \
			echo ">>> FAIL: $$test (simulation failed)"; \
			fail=1; \
		fi; \
	done < "$(REGRESSION_LIST)"; \
	\
	echo ""; \
	echo "=================================================="; \
	echo " Regression complete"; \
	echo "=================================================="; \
	\
	if [ $$fail -eq 0 ]; then \
		echo "REGRESSION PASSED"; \
	else \
		echo "REGRESSION FAILED"; \
	fi; \
	\
	$(MAKE) --no-print-directory cov_merge; \
	\
	if [ $$fail -ne 0 ]; then \
		exit 1; \
	fi


################################################################################
# Coverage Merge
################################################################################

cov_merge:

	@mkdir -p $(COVERAGE_DIR)

	@echo "=================================================="
	@echo "           VERILATOR COVERAGE MERGE"
	@echo "=================================================="

	@files=$$(find "$(COVERAGE_DIR)" \
		-maxdepth 1 \
		-type f \
		-name "*.dat" \
		-print); \
	\
	if [ -z "$$files" ]; then \
		echo "ERROR: No coverage files found."; \
		echo "Expected files in:"; \
		echo "  $(COVERAGE_DIR)"; \
		exit 1; \
	fi; \
	\
	echo ""; \
	echo "Coverage files:"; \
	printf '%s\n' $$files; \
	echo ""; \
	\
	echo "Merging coverage..."; \
	$(VERILATOR_COVERAGE) \
		--write "$(COVERAGE_MERGED)" \
		$$files; \
	\
	echo ""; \
	echo "Merged coverage:"; \
	echo "  $(COVERAGE_MERGED)"


################################################################################
# Coverage Report
################################################################################

coverage_report: cov_merge
	@echo "=================================================="
	@echo "           COVERAGE REPORT"
	@echo "=================================================="
	@mkdir -p "$(COVERAGE_HTML)"

	@if ! command -v lcov >/dev/null 2>&1 || ! command -v genhtml >/dev/null 2>&1; then \
		echo "ERROR: lcov/genhtml not installed."; \
		exit 1; \
	fi

	@echo ""
	@echo "Generating LCOV code coverage info..."
	$(VERILATOR_COVERAGE) \
		--write-info "$(COVERAGE_INFO)" \
		"$(COVERAGE_MERGED)"

	@echo ""
	@echo "Removing testbench functional coverage source and Verilator library..."
	@rm -f "$(COVERAGE_RTL_INFO)"
	lcov \
		--remove "$(COVERAGE_INFO)" \
		'*apb_i2c_coverage.sv*' \
		'/opt/verilator-5.052/*' \
		-o "$(COVERAGE_RTL_INFO)"

	@echo ""
	@echo "RTL-only line coverage:"
	lcov --summary "$(COVERAGE_RTL_INFO)" | tee "$(COVERAGE_SUMMARY)"

	@echo ""
	@echo "Generating RTL HTML report..."
	rm -rf "$(COVERAGE_HTML)"
	genhtml \
		"$(COVERAGE_RTL_INFO)" \
		--output-directory "$(COVERAGE_HTML)" \
		--title "I2C RTL Line Coverage" \
		--legend

	@echo ""
	@echo "=================================================="
	@echo "RTL HTML REPORT:"
	@echo "  $(COVERAGE_HTML)/index.html"
	@echo "=================================================="


################################################################################
# Functional Coverage
################################################################################
FUNCTIONAL_COV_DAT := $(COVERAGE_MERGED)

functional_coverage: cov_merge
	@echo "=================================================="
	@echo "        VERILATOR FUNCTIONAL COVERAGE"
	@echo "=================================================="
	@mkdir -p "$(FUNCTIONAL_HTML)"

	@echo ""
	@echo "Functional coverage summary:"
	$(VERILATOR_COVERAGE) \
		--filter-type covergroup \
		--report summary \
		"$(FUNCTIONAL_COV_DAT)"

	@echo ""
	@echo "Generating functional coverage LCOV info..."
	$(VERILATOR_COVERAGE) \
		--filter-type covergroup \
		--write-info "$(FUNCTIONAL_INFO)" \
		"$(FUNCTIONAL_COV_DAT)"

	@echo ""
	@echo "Generating functional coverage HTML..."
	rm -rf "$(FUNCTIONAL_HTML)"
	genhtml \
		"$(FUNCTIONAL_INFO)" \
		--output-directory "$(FUNCTIONAL_HTML)" \
		--title "I2C Functional Coverage" \
		--legend

	@echo ""
	@echo "=================================================="
	@echo "FUNCTIONAL HTML REPORT:"
	@echo "  $(FUNCTIONAL_HTML)/index.html"
	@echo "=================================================="


################################################################################
# Coverage Summary
################################################################################

cov_summary: cov_merge

	@echo "=================================================="
	@echo "           COVERAGE SUMMARY"
	@echo "=================================================="

	@if [ -f "$(COVERAGE_MERGED)" ]; then \
		$(VERILATOR_COVERAGE) \
			--annotate "$(COVERAGE_DIR)/annotated" \
			"$(COVERAGE_MERGED)" || true; \
	else \
		echo "ERROR: $(COVERAGE_MERGED) not found"; \
		exit 1; \
	fi


################################################################################
# Waveform
################################################################################

WAVEFORM := $(SIM_DIR)/dump.vcd

waveform: verilator-sim

	@echo "=========================================="
	@echo "        OPENING GTKWave"
	@echo "=========================================="

	@if [ -f "$(WAVEFORM)" ]; then \
		gtkwave "$(WAVEFORM)" & \
	else \
		echo "ERROR: Waveform file not found: $(WAVEFORM)"; \
		exit 1; \
	fi


################################################################################
# Vivado Compile
################################################################################

vivado-compile:

	@echo "=============================="
	@echo " VIVADO COMPILE"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xvlog -sv \
		-L uvm \
		-f $(FILELIST)


################################################################################
# Vivado Elaborate
################################################################################

vivado-elab: vivado-compile

	@echo "=============================="
	@echo " VIVADO ELABORATE"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xelab $(TOP) \
		-s $(TOP)_sim


################################################################################
# Vivado Simulation
################################################################################

vivado: vivado-elab

	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"


vivado-sim:

	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"


vivado-nogui:

	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--runall \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"


################################################################################
# Clean
################################################################################

clean:

	rm -rf $(SIM_DIR)/xsim.dir
	rm -rf $(SIM_DIR)/.Xil
	rm -rf $(SIM_DIR)/$(TOP)_sim*
	rm -f $(SIM_DIR)/xvlog.pb

	rm -rf $(VERILATOR_MDIR)
	rm -f $(SIM_DIR)/.verilator_build

	rm -rf $(VERILATOR_LOG_DIR)

	rm -f $(SIM_DIR)/coverage.dat

################################################################################
# Help
################################################################################

help:

	@echo ""
	@echo "=========================================================="
	@echo " I2C APB UVM - Verilator + Vivado"
	@echo "=========================================================="
	@echo ""
	@echo "VERILATOR"
	@echo "  make verilator"
	@echo "  make verilator TESTNAME=apb_i2c_reg_write_test"
	@echo "  make run TESTNAME=apb_i2c_reg_write_test"
	@echo ""
	@echo "REGRESSION"
	@echo "  make regression"
	@echo ""
	@echo "COVERAGE"
	@echo "  make cov_merge"
	@echo "  make coverage_report   # RTL-only HTML line coverage"
	@echo "  make functional_coverage # Covergroup functional coverage"
	@echo "  make cov_summary"
	@echo ""
	@echo "WAVEFORM"
	@echo "  make waveform"
	@echo ""
	@echo "VIVADO"
	@echo "  make vivado"
	@echo "  make vivado-sim"
	@echo "  make vivado-nogui"
	@echo ""
	@echo "CLEAN"
	@echo "  make clean"
	@echo ""

################################################################################
# Phony
################################################################################

.PHONY: \
	verilator \
	verilator-build \
	verilator-sim \
	run \
	regression \
	cov_merge \
	coverage_report \
	functional_coverage \
	cov_summary \
	waveform \
	vivado \
	vivado-compile \
	vivado-elab \
	vivado-sim \
	vivado-nogui \
	clean \
	help

