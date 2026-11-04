################################################################################
# Makefile - Ethernet DMA MAC RGMII UVM Environment
# Based on the I2C APB UVM Makefile layout
# Supported: Verilator 5.052 + UVM 1.1d, Vivado XSIM 2025.2
# Targets: verilator, run, regression, cov_merge, coverage_report,
#          functional_coverage, cov_summary, coverage_all, waveform,
#          vivado, vivado-nogui, clean
# NOTE: No designer RTL modifications.
################################################################################

SHELL := /bin/bash

PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim

# UVM installation used on the AWS machine.
REPO_ROOT ?= /home/cw019_sai/uvm-tools/SoC-Integration-Structure
UVM_HOME  ?= $(REPO_ROOT)/VERIF/uvm-1.1d
UVM_SRC   := $(UVM_HOME)/src
UVM_PKG   := $(UVM_SRC)/uvm_pkg.sv

FILELIST := $(SIM_DIR)/eth_tb_filelist.f
TOP      := eth_tb_top
TESTNAME ?= eth_csr_smoke_test

################################################################################
# Verilator
################################################################################
VERILATOR_MDIR  := $(SIM_DIR)/verilator_obj_dir
VERILATOR_EXE   := $(VERILATOR_MDIR)/V$(TOP)
VERILATOR_STAMP := $(SIM_DIR)/.verilator_build
VERILATOR_LOG_DIR := $(SIM_DIR)/verilator_log

################################################################################
# Coverage and regression configuration
################################################################################
VERILATOR ?= verilator
VERILATOR_COVERAGE ?= verilator_coverage

COVERAGE_DIR     := $(VERILATOR_LOG_DIR)/coverage
COVERAGE_MERGED  := $(COVERAGE_DIR)/coverage.dat
COVERAGE_INFO    := $(COVERAGE_DIR)/code.info
COVERAGE_RTL_INFO := $(COVERAGE_DIR)/code_rtl.info
FUNCTIONAL_INFO := $(COVERAGE_DIR)/functional.info
FUNCTIONAL_HTML := $(COVERAGE_DIR)/functional_html
COVERAGE_ANNOTATED := $(COVERAGE_DIR)/annotated
COVERAGE_SUMMARY := $(COVERAGE_DIR)/summary.txt
COVERAGE_HTML    := $(COVERAGE_DIR)/html

COVERAGE_CFG ?= $(SIM_DIR)/verilator_coverage.vlt
ASSERT_ARGS ?=
REGRESSION_DIR   := $(VERILATOR_LOG_DIR)/regression
REGRESSION_LIST  ?= $(SIM_DIR)/regression_tests.f

################################################################################
# Verilator simulation entry points
################################################################################
verilator: verilator-sim
run: verilator-sim

################################################################################
# Verilator Build
################################################################################
verilator-build: $(VERILATOR_STAMP)

$(VERILATOR_STAMP): $(FILELIST) $(UVM_PKG) $(wildcard $(PROJECT_ROOT)/tests/*.sv) $(wildcard $(PROJECT_ROOT)/agent/*.sv) $(wildcard $(PROJECT_ROOT)/env/*.sv)
	@echo "========================================"
	@echo "        VERILATOR BUILD"
	@echo "========================================"
	@mkdir -p $(VERILATOR_LOG_DIR)
	@mkdir -p $(COVERAGE_DIR)
	cd $(SIM_DIR) && \
	$(VERILATOR) \
		$(if $(wildcard $(COVERAGE_CFG)),$(COVERAGE_CFG)) \
		--binary \
		--timing \
		--trace \
		--coverage \
		--assert \
		--no-stop-fail \
		--build-jobs 2 \
		--threads 2 \
		--language 1800-2012 \
		--top-module $(TOP) \
		-I$(UVM_SRC) \
		-I$(PROJECT_ROOT) \
		$(UVM_PKG) \
		-f $(FILELIST) \
		+define+UVM_NO_DPI \
		--Mdir $(VERILATOR_MDIR) \
		-Wno-WIDTHEXPAND \
		-Wno-WIDTHTRUNC \
		-Wno-UNSIGNED \
		-Wno-PINMISSING \
		-Wno-IMPLICIT \
		-Wno-IGNOREDRETURN \
		-Wno-fatal \
		> $(VERILATOR_LOG_DIR)/build.log 2>&1 || { \
			tail -80 $(VERILATOR_LOG_DIR)/build.log; \
			exit 1; \
		}
	@test -x "$(VERILATOR_EXE)" || { \
		echo "ERROR: Verilator executable was not generated"; \
		exit 1; \
	}
	@touch $@

################################################################################
# Verilator Simulation
################################################################################
verilator-sim: verilator-build
	@mkdir -p $(VERILATOR_LOG_DIR)
	@mkdir -p $(COVERAGE_DIR)
	@echo "========================================"
	@echo "        VERILATOR SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "        LOG  = $(VERILATOR_LOG_DIR)/$(TESTNAME).log"
	@echo "========================================"
	@rm -f "$(SIM_DIR)/coverage.dat"
	@set -o pipefail; cd $(SIM_DIR) && \
	$(VERILATOR_EXE) \
		+UVM_TESTNAME=$(TESTNAME) \
		$(ASSERT_ARGS) \
		2>&1 | tee $(VERILATOR_LOG_DIR)/$(TESTNAME).log
	@if [ -f "$(SIM_DIR)/coverage.dat" ]; then \
		mv -f "$(SIM_DIR)/coverage.dat" "$(COVERAGE_DIR)/$(TESTNAME).dat"; \
		echo "Coverage saved to: $(COVERAGE_DIR)/$(TESTNAME).dat"; \
	else \
		echo "WARNING: coverage.dat was not generated"; \
	fi

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
		echo "ERROR: Regression list not found: $(REGRESSION_LIST)"; \
		exit 1; \
	fi
	@mkdir -p "$(COVERAGE_DIR)/previous_runs"
	@find "$(COVERAGE_DIR)" -maxdepth 1 -type f -name "*.dat" -exec mv -t "$(COVERAGE_DIR)/previous_runs" {} +
	@rm -f "$(COVERAGE_INFO)" "$(COVERAGE_RTL_INFO)" "$(COVERAGE_SUMMARY)"
	@rm -rf "$(COVERAGE_HTML)"
	@fail=0; \
	while IFS= read -r test || [ -n "$$test" ]; do \
		test=$$(echo "$$test" | sed 's/#.*//' | xargs); \
		[ -z "$$test" ] && continue; \
		echo ""; \
		echo "=================================================="; \
		echo " Running TEST = $$test"; \
		echo "=================================================="; \
		rm -f "$(SIM_DIR)/coverage.dat"; \
		if (set -o pipefail; cd "$(SIM_DIR)" && $(VERILATOR_EXE) +UVM_TESTNAME=$$test $(ASSERT_ARGS) \
			2>&1 | tee "$(REGRESSION_DIR)/$$test.log"); then \
			if ! grep -q "UVM Report Summary" "$(REGRESSION_DIR)/$$test.log" || grep -qE "UVM_(FATAL|ERROR)[[:space:]]*:[[:space:]]*[1-9][0-9]*" \
				"$(REGRESSION_DIR)/$$test.log"; then \
				echo ">>> FAIL: $$test"; \
				fail=1; \
			else \
				echo ">>> PASS: $$test"; \
			fi; \
			if [ -f "$(SIM_DIR)/coverage.dat" ]; then \
				mv -f "$(SIM_DIR)/coverage.dat" "$(COVERAGE_DIR)/$$test.dat"; \
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
	echo ""; \
	echo "=================================================="; \
	echo " Regression complete"; \
	echo "=================================================="; \
	if [ $$fail -eq 0 ]; then echo "REGRESSION PASSED"; \
	else echo "REGRESSION FAILED"; fi; \
	$(MAKE) --no-print-directory cov_merge || fail=1; \
	if [ $$fail -ne 0 ]; then exit 1; fi

################################################################################
# Coverage Merge
################################################################################

cov_merge:
	@mkdir -p "$(COVERAGE_DIR)"
	@echo "========== MERGING PER-TEST COVERAGE =========="
	@files=$$(find "$(COVERAGE_DIR)" -maxdepth 1 -type f -name '*.dat' ! -name 'coverage.dat' ! -name '*merged.dat' | sort); \
	if [ -z "$$files" ]; then echo "ERROR: No testcase .dat files found"; exit 1; fi; \
	$(VERILATOR_COVERAGE) --write "$(COVERAGE_MERGED)" $$files
	@echo "Merged: $(COVERAGE_MERGED)"

################################################################################
# Coverage Report - RTL-only line coverage
################################################################################
# Include only rtl/ sources. UVM, verification agents and test classes are excluded.
coverage_report: cov_merge
	@command -v lcov >/dev/null || { echo 'ERROR: lcov missing'; exit 1; }
	@command -v genhtml >/dev/null || { echo 'ERROR: genhtml missing'; exit 1; }
	$(VERILATOR_COVERAGE) --write-info "$(COVERAGE_INFO)" "$(COVERAGE_MERGED)"
	lcov --extract "$(COVERAGE_INFO)" '*/rtl/*' -o "$(COVERAGE_RTL_INFO)"
	@echo "========== ETHERNET RTL LINE COVERAGE =========="
	lcov --summary "$(COVERAGE_RTL_INFO)" | tee "$(COVERAGE_SUMMARY)"
	@echo "========== MODULE-WISE RTL COVERAGE =========="
	lcov --list "$(COVERAGE_RTL_INFO)"
	@rm -rf "$(COVERAGE_HTML)"
	genhtml "$(COVERAGE_RTL_INFO)" --output-directory "$(COVERAGE_HTML)" --title 'Ethernet DMA RTL Code Coverage' --legend
	@echo "RTL HTML report: $(COVERAGE_HTML)/index.html"

################################################################################
# Functional Coverage - SystemVerilog covergroups
################################################################################
# Functional coverage is independent of RTL line coverage.
functional_coverage: cov_merge
	@command -v genhtml >/dev/null || { echo 'ERROR: genhtml missing'; exit 1; }
	@echo "========== COVERGROUP COVERAGE =========="
	$(VERILATOR_COVERAGE) --filter-type covergroup --write-info "$(FUNCTIONAL_INFO)" "$(COVERAGE_MERGED)"
	@rm -rf "$(FUNCTIONAL_HTML)"
	genhtml "$(FUNCTIONAL_INFO)" --output-directory "$(FUNCTIONAL_HTML)" --title 'Ethernet DMA Functional Coverage' --legend
	@echo "Functional HTML report: $(FUNCTIONAL_HTML)/index.html"

################################################################################
# Coverage Summary - Annotated source
################################################################################
cov_summary: cov_merge
	@echo "========== VERILATOR NATIVE COVERAGE =========="
	$(VERILATOR_COVERAGE) --annotate "$(COVERAGE_ANNOTATED)" --annotate-all "$(COVERAGE_MERGED)"
	@echo "Uncovered source points: grep -Rn '%00' $(COVERAGE_ANNOTATED)"

################################################################################
# Complete Coverage
################################################################################
coverage_all: coverage_report functional_coverage cov_summary

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
		-d UVM_NO_DPI \
		-i $(UVM_SRC) \
		-i .. \
		-i ../agent \
		-i ../interfaces \
		-i ../sequences \
		-i ../env \
		-i ../ral \
		-i ../tests \
		-i ../top \
		$(UVM_PKG) \
		/opt/Xilinx/2025.2/Vivado/data/verilog/src/glbl.v \
		-f $(FILELIST) \
		2>&1 | tee vivado_compile.log
		
################################################################################
# Vivado Elaborate
################################################################################
vivado-elab: vivado-compile
	@echo "=============================="
	@echo " VIVADO ELABORATE"
	@echo "=============================="
	cd $(SIM_DIR) && \
	xelab $(TOP) glbl \
		-L unisims_ver \
		-timescale 1ns/1ps \
		-s $(TOP)_sim \
		-debug typical \
		2>&1 | tee vivado_elab.log
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
		--testplusarg "UVM_TESTNAME=$(TESTNAME)" \
		2>&1 | tee vivado_$(TESTNAME).log

################################################################################
# Helpful log checks
################################################################################
check-compile:
	@grep -nE "ERROR:|FATAL:" $(SIM_DIR)/vivado_compile.log || true

check-elab:
	@grep -nE "ERROR:|FATAL:" $(SIM_DIR)/vivado_elab.log || true

################################################################################
# Clean
################################################################################
clean:
	rm -rf $(SIM_DIR)/xsim.dir
	rm -rf $(SIM_DIR)/.Xil
	rm -rf $(SIM_DIR)/$(TOP)_sim*
	rm -f $(SIM_DIR)/xvlog.pb $(SIM_DIR)/xvlog.log
	rm -f $(SIM_DIR)/xelab.pb $(SIM_DIR)/xelab.log
	rm -f $(SIM_DIR)/xsim.jou $(SIM_DIR)/xsim.log
	rm -f $(SIM_DIR)/*.wdb
	rm -f $(SIM_DIR)/vivado_compile.log $(SIM_DIR)/vivado_elab.log
	rm -rf $(VERILATOR_MDIR)
	rm -f $(VERILATOR_STAMP)
	rm -rf $(VERILATOR_LOG_DIR)
	rm -f $(SIM_DIR)/coverage.dat

.PHONY: vivado vivado-compile vivado-elab vivado-sim vivado-nogui \
        verilator verilator-sim verilator-build run regression cov_merge coverage_report functional_coverage coverage_all cov_summary \
        waveform clean check-compile check-elab
################################################################################
# Help
################################################################################
help:
	@echo "=========================================================="
	@echo " Ethernet UVM - Verilator + Vivado"
	@echo "=========================================================="
	@echo ""
	@echo "VERILATOR"
	@echo "  make verilator"
	@echo "  make verilator TESTNAME=eth_csr_smoke_test"
	@echo "  make run TESTNAME=eth_csr_smoke_test"
	@echo ""
	@echo "REGRESSION"
	@echo "  make regression"
	@echo "  make regression REGRESSION_LIST=sim/regression_tests.f"
	@echo "  # One test name per line in regression_tests.f"
	@echo ""
	@echo "COVERAGE"
	@echo "  make cov_merge"
	@echo "  make coverage_report"
	@echo "  make cov_summary"
	@echo "  make functional_coverage"
	@echo "  make coverage_all"
	@echo "  # Coverage files: sim/verilator_log/coverage/"
	@echo ""
	@echo "WAVEFORM"
	@echo "  make waveform TESTNAME=eth_csr_smoke_test"
	@echo ""
	@echo "VIVADO"
	@echo "  make vivado TESTNAME=eth_csr_smoke_test"
	@echo "  make vivado-sim TESTNAME=eth_csr_smoke_test"
	@echo "  make vivado-nogui TESTNAME=eth_csr_smoke_test"
	@echo "  make vivado-compile"
	@echo "  make vivado-elab"
	@echo ""
	@echo "CHECKS"
	@echo "  make check-compile"
	@echo "  make check-elab"
	@echo ""
	@echo "CLEAN"
	@echo "  make clean"
	@echo ""
	@echo "EXAMPLES"
	@echo "  make verilator TESTNAME=eth_csr_smoke_test"
	@echo "  make regression"
	@echo "  make coverage_report"
	@echo "  make waveform TESTNAME=eth_csr_smoke_test"

.PHONY: help

