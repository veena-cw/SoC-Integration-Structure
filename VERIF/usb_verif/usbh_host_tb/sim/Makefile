#==================================================================================
#  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
#  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
#  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
#  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
#
#  Chipweave Technologies Confidential
#==================================================================================
#  Project           				: 
#  Module            				: 
#  Primary Unit Owner                         	: 
#  Secondary Contact                           : 
#  Source [SystemVerilog|Verilog|VHDL|Other]   : 
#=================================================================================
#  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
#=================================================================================

###############################################################################
# UVM Environment Makefile
#
# Supports:
#   - Vivado XSIM + UVM
#   - Verilator + UVM
#
# Usage:
#
#   Vivado:
#       make compile SIM=vivado
#       make elab SIM=vivado
#       make run SIM=vivado TESTNAME=base_test
#
#   Verilator:
#       make compile SIM=verilator
#       make run SIM=verilator TESTNAME=base_test
#
# Short form:
#       make compile vivado
#       make compile verilator
#
# The RTL compile list (build/rtl.f) is generated from the canonical
# repository file list by:
#       make gen-rtl
# (see scripts/gen_rtl_filelist.sh).  It is regenerated automatically as a
# dependency of the compile targets.
###############################################################################


###############################################################################
# Design / Testbench Configuration
###############################################################################

TOP            = usbh_top_tb

ROOT           := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
REPO_ROOT      := $(abspath $(ROOT)/..)
REPO_PARENT    := $(abspath $(REPO_ROOT)/..)
REPO_NAME      := $(notdir $(REPO_ROOT))
PROJ_NAME      := $(notdir $(ROOT))
PROJ_REL       := $(REPO_NAME)/$(PROJ_NAME)

SCRIPT_DIR     = $(ROOT)/scripts
BUILD_DIR      = $(ROOT)/build
WORK           = $(BUILD_DIR)/work
XSIM_SNAPSHOT  = $(REPO_PARENT)/xsim.dir/$(TOP)/xsimk
RTL_FILELIST   = $(BUILD_DIR)/rtl.f
UVM_FILELIST   = $(ROOT)/filelist.f  # generated universal filelist (plain paths)
# XSim does not recognize the +incdir+ file-list syntax used by Verilator.
# Keep the portable source lists above, and generate XSim-specific copies that
# use xvlog's -i <directory> option for include directories.
XVLOG_RTL_FILELIST = $(BUILD_DIR)/rtl.xvlog.f
XVLOG_UVM_FILELIST = $(BUILD_DIR)/uvm.xvlog.f
TB_FILELIST    = $(ROOT)/filelist.f
TB_FILE        = $(ROOT)/../top/$(TOP).sv  # generated TB top (sim/../top)
LOG_DIR        = $(ROOT)/logs
WAVE_DIR       = $(ROOT)/waves
REGR_FILE      = $(ROOT)/filelists/tests.f

# All simulation tools run from the repository PARENT directory (REPO_PARENT)
# so that the generated filelists, whose entries are repo-relative
# (e.g. rtl/src/...), resolve regardless of where the checkout lives.


###############################################################################
# UVM Configuration
###############################################################################

# UVM_HOME must point to the directory containing uvm_pkg.sv.  Only required
# for the Verilator flow (Vivado XSim ships UVM 1.2 precompiled as the "uvm"
# library).
#
# Example:
#
#   export UVM_HOME=/path/to/uvm/src
#
# Or:
#
#   make compile SIM=verilator #       UVM_HOME=/path/to/uvm/src
#

UVM_HOME ?= $(shell echo $$UVM_HOME)

UVM_PKG = $(UVM_HOME)/uvm_pkg.sv


###############################################################################
# Test / Regression Inputs
###############################################################################

TESTNAME  ?= base_test

UVM_VERBOSITY ?= UVM_MEDIUM

SEED      ?= 1


###############################################################################
# Simulator Selection
###############################################################################

# Default simulator
SIM ?= vivado


# Allow:
#
#   make compile vivado
#   make compile verilator
#
# to select simulator.

ifneq ($(filter verilator,$(MAKECMDGOALS)),)
	SIM := verilator
endif

ifneq ($(filter vivado,$(MAKECMDGOALS)),)
	SIM := vivado
endif


###############################################################################
# Vivado / XSIM Tools
###############################################################################

XVLOG = xvlog
XELAB = xelab
XSIM  = xsim
XCRG  = xcrg

XVLOG_FLAGS = -sv -L uvm

XELAB_FLAGS = -L uvm --timescale 1ns/1ps


###############################################################################
# Verilator Tools
###############################################################################

VERILATOR ?= verilator

VERILATOR_BUILD_DIR ?= $(ROOT)/verilator_build

VERILATOR_TOP ?= $(TOP)

VERILATOR_EXE = $(VERILATOR_BUILD_DIR)/V$(VERILATOR_TOP)


###############################################################################
# Verilator Compilation Flags
#
# Based on the working Verilator + UVM Makefile/script supplied.
###############################################################################

VERILATOR_FLAGS = 	--binary 	-sv 	--build 	--cc 	--Mdir $(VERILATOR_BUILD_DIR) 	--error-limit 100 	--converge-limit 10000000 	-j 4 	-Wall 	--timescale 1ns/1ps 	--trace 	--trace-depth 99 	--top-module $(VERILATOR_TOP)


###############################################################################
# Verilator Warning Suppression
###############################################################################

DISABLED_WARNINGS = 	-Wno-UNOPTFLAT 	-Wno-DECLFILENAME 	-Wno-CONSTRAINTIGN 	-Wno-VARHIDDEN 	-Wno-WIDTHTRUNC 	-Wno-CASTCONST 	-Wno-WIDTHEXPAND 	-Wno-UNDRIVEN 	-Wno-UNUSEDSIGNAL 	-Wno-UNUSEDPARAM 	-Wno-SYMRSVDWORD 	-Wno-ZERODLY 	-Wno-CASEINCOMPLETE 	-Wno-fatal 	-Wno-REALCVT 	-Wno-PINCONNECTEMPTY 	-Wno-LATCH 	-Wno-GENUNNAMED 	-Wno-COVERIGN 	-Wno-EOFNEWLINE 	-Wno-CMPCONST 	-Wno-IMPORTSTAR 	-Wno-SYNCASYNCNET 	-Wno-ASCRANGE 	-Wno-ALWCOMBORDER 	-Wno-MULTIDRIVEN 	-Wno-INCABSPATH 	-Wno-IMPLICITSTATIC 	-Wno-UNUSEDGENVAR 	-Wno-PROCASSINIT 	-Wno-MISINDENT 	-Wno-WIDTH 	-Wno-UNUSED


###############################################################################
# Verilator Include Directories
###############################################################################

VERILATOR_INCDIRS = 	+incdir+"$(UVM_HOME)" 	+incdir+$(PROJ_REL)/interface 	+incdir+$(PROJ_REL)/agent 	+incdir+$(PROJ_REL)/env 	+incdir+$(PROJ_REL)/tests 	+incdir+$(PROJ_REL)/top


###############################################################################
# Verilator Defines
###############################################################################

VERILATOR_DEFINES = 	+define+SVA_ON 	+define+UVM_REPORT_DISABLE_FILE_LINE


###############################################################################
# Source Files
###############################################################################

###############################################################################
# Vivado Sources
###############################################################################

# build/rtl.f is generated from the canonical repository list by gen-rtl.
# filelist.f is the plain-path universal list generated by Python (no +incdir),

SRCS = 	-f $(RTL_FILELIST) 	-f $(UVM_FILELIST)


###############################################################################
# Verilator Sources
###############################################################################

VERILATOR_SRCS = 	$(UVM_PKG) 	-f $(RTL_FILELIST) 	-f $(UVM_FILELIST)

# Verilator DPI stubs (C++). Provides dummy implementations for UVM DPI
# functions (uvm_hdl_*, uvm_dpi_*, uvm_re_match, etc.) so linking succeeds
# without vendor VPI libraries.
VERILATOR_CPP_SRCS = $(ROOT)/tb/uvm_verilator_stubs.cpp


###############################################################################
# Functional Coverage
###############################################################################

FCOV ?= 0

COV_DIR = $(ROOT)/cov_db


###############################################################################
# Code Coverage
###############################################################################

CCOV      ?= 0
CCOV_TYPE ?= sbct

ifeq ($(CCOV),1)
	XELAB_FLAGS += -cc_type $(CCOV_TYPE)
endif


###############################################################################
# Runtime Coverage Flags
###############################################################################

XSIM_COV_FLAGS :=

ifneq (,$(filter 1,$(FCOV) $(CCOV)))
	XELAB_FLAGS += -coverage
	XSIM_COV_FLAGS := 		-testplusarg coverage 		-cov_db_name $(TESTNAME) 		-cov_db_dir $(COV_DIR)
endif


###############################################################################
# Verilator Test Arguments
###############################################################################

VERILATOR_TEST_ARG = +UVM_TESTNAME=$(TESTNAME)


###############################################################################
# RTL File List Generation
###############################################################################

$(RTL_FILELIST): $(SCRIPT_DIR)/gen_rtl_filelist.sh
	@bash $(SCRIPT_DIR)/gen_rtl_filelist.sh

# UVM filelist is static (generated by Python) -- not regenerated
# $(UVM_FILELIST): $(TB_FILELIST) -- disabled

$(XVLOG_RTL_FILELIST): $(RTL_FILELIST) $(SCRIPT_DIR)/gen_xvlog_filelist.sh
	@bash $(SCRIPT_DIR)/gen_xvlog_filelist.sh $(RTL_FILELIST) $@

$(XVLOG_UVM_FILELIST): $(UVM_FILELIST) $(SCRIPT_DIR)/gen_xvlog_filelist.sh
	@bash $(SCRIPT_DIR)/gen_xvlog_filelist.sh $(UVM_FILELIST) $@

gen-rtl: FORCE
	@bash $(SCRIPT_DIR)/gen_rtl_filelist.sh

gen-uvm: FORCE
	@bash $(SCRIPT_DIR)/gen_uvm_filelist.sh

FORCE:

.PHONY: FORCE gen-rtl gen-uvm


###############################################################################
# Check UVM
###############################################################################

check_uvm:
	@echo ""
	@echo "=================================================="
	@echo " Checking UVM"
	@echo "=================================================="
	@echo ""

	@if [ -z "$(UVM_HOME)" ]; then 		echo "ERROR: UVM_HOME is not set."; 		echo ""; 		echo "Set UVM_HOME using:"; 		echo "  export UVM_HOME=/path/to/uvm/src"; 		echo ""; 		exit 1; 	fi

	@if [ ! -d "$(UVM_HOME)" ]; then 		echo "ERROR: UVM_HOME directory does not exist:"; 		echo "  $(UVM_HOME)"; 		exit 1; 	fi

	@if [ ! -f "$(UVM_PKG)" ]; then 		echo "ERROR: Cannot find uvm_pkg.sv:"; 		echo "  $(UVM_PKG)"; 		echo ""; 		echo "Check UVM_HOME."; 		exit 1; 	fi

	@echo "UVM_HOME = $(UVM_HOME)"
	@echo "UVM_PKG  = $(UVM_PKG)"
	@echo ""

###############################################################################
# Simulator Information
###############################################################################

sim_info:
	@echo ""
	@echo "=============================================="
	@echo " Simulator Configuration"
	@echo "=============================================="
	@echo " SIM                  = $(SIM)"
	@echo " TOP                  = $(TOP)"
	@echo " RTL_FILELIST         = $(RTL_FILELIST)"
	@echo " UVM_FILELIST         = $(UVM_FILELIST)"
	@echo " TB_FILELIST          = $(TB_FILELIST)"
	@echo " REGR_FILE            = $(REGR_FILE)"
	@echo " TESTNAME             = $(TESTNAME)"
	@echo " UVM_VERBOSITY        = $(UVM_VERBOSITY)"
	@echo " SEED                 = $(SEED)"
	@echo " UVM_HOME             = $(UVM_HOME)"
	@echo " UVM_PKG              = $(UVM_PKG)"
	@echo " Verilator TOP        = $(VERILATOR_TOP)"
	@echo " Verilator Build Dir  = $(VERILATOR_BUILD_DIR)"
	@echo " Verilator Executable = $(VERILATOR_EXE)"
	@echo "=============================================="
	@echo ""


###############################################################################
# Compile Selection
###############################################################################

ifeq ($(SIM),vivado)

compile: compile-vivado

else ifeq ($(SIM),verilator)

compile: compile-verilator

else

compile:
	@echo ""
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@echo ""
	@echo "Supported simulators:"
	@echo "  vivado"
	@echo "  verilator"
	@echo ""
	@exit 1

endif


###############################################################################
# Vivado Compile
###############################################################################

compile-vivado: $(XVLOG_RTL_FILELIST) $(XVLOG_UVM_FILELIST)
	@echo ""
	@echo "=================================================="
	@echo " Compiling using Vivado XSIM + UVM"
	@echo "=================================================="
	@echo ""

	@mkdir -p $(WORK)

	cd $(REPO_PARENT) && $(XVLOG) $(XVLOG_FLAGS) 		-work work 		-f $(XVLOG_RTL_FILELIST) -f $(XVLOG_UVM_FILELIST)

	@echo ""
	@echo "=================================================="
	@echo " xvlog compilation complete"
	@echo " Work dir: $(WORK)"
	@echo "=================================================="
	@echo ""


###############################################################################
# Verilator Compile
###############################################################################

compile-verilator: check_uvm $(RTL_FILELIST) $(UVM_FILELIST)
	@echo ""
	@echo "=================================================="
	@echo " Compiling using Verilator + UVM"
	@echo "=================================================="
	@echo ""
	@echo "UVM_HOME     = $(UVM_HOME)"
	@echo "UVM_PKG      = $(UVM_PKG)"
	@echo "VERILATOR_TOP= $(VERILATOR_TOP)"
	@echo "RTL_FILELIST = $(RTL_FILELIST)"
	@echo "TB_FILELIST  = $(TB_FILELIST)"
	@echo "BUILD DIR    = $(VERILATOR_BUILD_DIR)"
	@echo ""

	@if [ ! -f "$(TB_FILE)" ]; then 		echo "ERROR: Testbench not found:"; 		echo "  $(TB_FILE)"; 		exit 1; 	fi

	@if [ ! -f "$(TB_FILELIST)" ]; then 		echo "ERROR: Filelist not found:"; 		echo "  $(TB_FILELIST)"; 		exit 1; 	fi

	@mkdir -p $(VERILATOR_BUILD_DIR)

	cd $(REPO_PARENT) && $(VERILATOR) 		$(VERILATOR_FLAGS) 		$(DISABLED_WARNINGS) 		$(VERILATOR_DEFINES) 		$(VERILATOR_INCDIRS) 		$(VERILATOR_SRCS) 		$(VERILATOR_CPP_SRCS) 		2>&1 | tee $(ROOT)/verilator_compile.log

	@echo ""
	@echo "=================================================="
	@echo " Verilator compilation complete"
	@echo " Binary:"
	@echo "   $(VERILATOR_EXE)"
	@echo " Log:"
	@echo "   $(ROOT)/verilator_compile.log"
	@echo "=================================================="
	@echo ""


###############################################################################
# Elaboration Selection
###############################################################################

ifeq ($(SIM),vivado)

elab: elab-vivado

else ifeq ($(SIM),verilator)

elab: elab-verilator

else

elab:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Vivado Elaboration
###############################################################################

elab-vivado: compile-vivado
	@echo ""
	@echo "=================================================="
	@echo " Elaborating using Vivado XELAB"
	@echo "=================================================="
	@echo ""

	cd $(REPO_PARENT) && $(XELAB) $(XELAB_FLAGS) 		-L work 		work.$(TOP) -snapshot $(TOP) -mt 8


###############################################################################
# Verilator Elaboration
###############################################################################

elab-verilator:
	@echo ""
	@echo "=================================================="
	@echo " Verilator Elaboration"
	@echo "=================================================="
	@echo ""
	@echo "Verilator performs elaboration during compilation."
	@echo "No separate XELAB step is required."
	@echo ""


###############################################################################
# Run Selection
###############################################################################

ifeq ($(SIM),vivado)

run: run-vivado

else ifeq ($(SIM),verilator)

run: run-verilator

else

run:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Vivado Run
###############################################################################

run-vivado: ensure-vivado-snapshot
	@echo ""
	@echo "=================================================="
	@echo " Running Vivado XSIM"
	@echo " Test: $(TESTNAME)"
	@echo "=================================================="
	@echo ""

	@mkdir -p $(LOG_DIR) $(COV_DIR)

	cd $(REPO_PARENT) && $(XSIM) $(TOP) 		-testplusarg UVM_TESTNAME=$(TESTNAME) 		-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 		-testplusarg UVM_NO_RELNOTES 		-sv_seed $(SEED) 		$(XSIM_COV_FLAGS) 		-log $(LOG_DIR)/$(TESTNAME).log 		-runall

# Reuse an existing XSim snapshot for quick repeated test runs.  A missing
# snapshot triggers the full compile/elaborate flow.
ensure-vivado-snapshot:
	@if [ -x "$(XSIM_SNAPSHOT)" ]; then 		echo "== reusing XSim snapshot: $(XSIM_SNAPSHOT)"; 	else 		echo "== XSim snapshot missing; compiling and elaborating"; 		$(MAKE) --no-print-directory elab-vivado; 	fi


###############################################################################
# Verilator Run
###############################################################################

run-verilator:
	@echo ""
	@echo "=================================================="
	@echo " Running Verilator + UVM"
	@echo " Test: $(TESTNAME)"
	@echo "=================================================="
	@echo ""

	@if [ ! -f "$(VERILATOR_EXE)" ]; then 		echo "ERROR: Verilator executable not found:"; 		echo "  $(VERILATOR_EXE)"; 		echo ""; 		echo "Compile first using:"; 		echo "  make compile SIM=verilator"; 		exit 1; 	fi

	@mkdir -p $(LOG_DIR)

	cd $(REPO_PARENT) && $(VERILATOR_EXE) 		$(VERILATOR_TEST_ARG) 		+UVM_OBJECTION_TRACE 		2>&1 | tee $(LOG_DIR)/$(TESTNAME).log


###############################################################################
# GUI Selection
###############################################################################

ifeq ($(SIM),vivado)

gui: gui-vivado

else ifeq ($(SIM),verilator)

gui: gui-verilator

else

gui:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Vivado GUI
###############################################################################

gui-vivado: elab-vivado
	@echo ""
	@echo "=================================================="
	@echo " Opening Vivado XSIM GUI"
	@echo " Test: $(TESTNAME)"
	@echo "=================================================="
	@echo ""

	cd $(REPO_PARENT) && $(XSIM) $(TOP) 		-gui 		-testplusarg UVM_TESTNAME=$(TESTNAME) 		-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 		-testplusarg UVM_NO_RELNOTES 		-sv_seed $(SEED) 		$(XSIM_COV_FLAGS)


###############################################################################
# Verilator GUI
###############################################################################

gui-verilator:
	@echo ""
	@echo "=================================================="
	@echo " Verilator GUI"
	@echo "=================================================="
	@echo ""
	@echo "Verilator does not provide an XSIM-style GUI."
	@echo "Waveform tracing is enabled using --trace."
	@echo "Use GTKWave to inspect the generated waveform."
	@echo ""


###############################################################################
# Waveform Selection
###############################################################################

ifeq ($(SIM),vivado)

wave: wave-vivado

else ifeq ($(SIM),verilator)

wave: wave-verilator

else

wave:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Vivado Waveform
###############################################################################

wave-vivado:
	@mkdir -p $(WAVE_DIR)

	@if [ -f $(WAVE_DIR)/waves.wcfg ]; then 		echo "Opening waves.wcfg..."; 		cd $(REPO_PARENT) && $(XSIM) $(TOP) 			-gui 			-view $(WAVE_DIR)/waves.wcfg 			-testplusarg UVM_TESTNAME=$(TESTNAME) 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-sv_seed $(SEED) 			$(XSIM_COV_FLAGS); 	else 		echo "waves.wcfg not found; opening xsim GUI"; 		cd $(REPO_PARENT) && $(XSIM) $(TOP) 			-gui 			-tclbatch $(SCRIPT_DIR)/waveform.tcl 			-testplusarg UVM_TESTNAME=$(TESTNAME) 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-sv_seed $(SEED) 			$(XSIM_COV_FLAGS); 	fi


###############################################################################
# Verilator Waveform
###############################################################################

wave-verilator:
	@echo ""
	@echo "=================================================="
	@echo " Verilator Waveform"
	@echo "=================================================="
	@echo ""

	@find $(VERILATOR_BUILD_DIR) -type f 		\( -name "*.vcd" -o -name "*.fst" \) 		2>/dev/null || true

	@echo ""
	@echo "Open waveform with:"
	@echo ""
	@echo "  gtkwave <waveform_file>"
	@echo ""


###############################################################################
# Regression
###############################################################################

ifeq ($(SIM),vivado)

regression: FCOV := 1
regression: CCOV := 1

regression: compile-vivado

regression:
	@if [ ! -f "$(REGR_FILE)" ]; then 		echo "ERROR: regression file '$(REGR_FILE)' not found"; 		exit 1; 	fi

	@mkdir -p $(ROOT)/regr_logs $(COV_DIR)

	@cd $(REPO_PARENT) && { 	fail=0; 	while IFS= read -r t || [ -n "$$t" ]; do 		t=$$(echo "$$t" | sed 's/#.*//' | xargs); 		[ -z "$$t" ] && continue; 		echo "=================================================="; 		echo "=== Running test: $$t"; 		echo "=== SIM=$(SIM) FCOV=$(FCOV) CCOV=$(CCOV)"; 		echo "=================================================="; 		$(XELAB) $(XELAB_FLAGS) -L work work.$(TOP) -snapshot $(TOP); 		covflags=""; 		if [ "$(FCOV)" = "1" ] || [ "$(CCOV)" = "1" ]; then 			covflags="-testplusarg coverage -cov_db_name $$t -cov_db_dir $(COV_DIR)"; 		fi; 		$(XSIM) $(TOP) 			-runall 			-testplusarg UVM_TESTNAME=$$t 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-sv_seed $(SEED) 			$$covflags 			-log $(ROOT)/regr_logs/$$t.log; 		if grep -qE "UVM_FATAL *: *[1-9]|UVM_ERROR *: *[1-9]" 			$(ROOT)/regr_logs/$$t.log 2>/dev/null; then 			echo ">>> FAIL: $$t"; 			fail=1; 		else 			echo ">>> PASS: $$t"; 		fi; 	done < "$(REGR_FILE)"; 		echo "=================================================="; 		if [ "$(FCOV)" = "1" ] || [ "$(CCOV)" = "1" ]; then 			$(MAKE) cov_report 				SIM=vivado 				FCOV=$(FCOV) 				CCOV=$(CCOV); 		fi; 		if [ $$fail -eq 0 ]; then 			echo "REGRESSION PASSED"; 		else 			echo "REGRESSION FAILED"; 			exit 1; 		fi; 	}

else ifeq ($(SIM),verilator)

regression: compile-verilator

regression:
	@if [ ! -f "$(REGR_FILE)" ]; then 		echo "ERROR: regression file '$(REGR_FILE)' not found"; 		exit 1; 	fi

	@mkdir -p $(ROOT)/regr_logs

	@cd $(REPO_PARENT) && { 	fail=0; 	while IFS= read -r t || [ -n "$$t" ]; do 		t=$$(echo "$$t" | sed 's/#.*//' | xargs); 		[ -z "$$t" ] && continue; 		echo "=================================================="; 		echo "=== Running test: $$t"; 		echo "=== SIM=$(SIM)"; 		echo "=================================================="; 		$(VERILATOR_EXE) 			+UVM_TESTNAME=$$t 			+UVM_OBJECTION_TRACE 			2>&1 | tee $(ROOT)/regr_logs/$$t.log; 		if grep -qE "UVM_FATAL *: *[1-9]|UVM_ERROR *: *[1-9]" 			$(ROOT)/regr_logs/$$t.log 2>/dev/null; then 			echo ">>> FAIL: $$t"; 			fail=1; 		else 			echo ">>> PASS: $$t"; 		fi; 	done < "$(REGR_FILE)"; 		echo "=================================================="; 		if [ $$fail -eq 0 ]; then 			echo "REGRESSION PASSED"; 		else 			echo "REGRESSION FAILED"; 			exit 1; 		fi; 	}

else

regression:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Coverage Report
###############################################################################

ifeq ($(SIM),vivado)

cov_report:
	@mkdir -p $(ROOT)/cov_report

	@echo ""
	@echo "=================================================="
	@echo " Generating Coverage Reports"
	@echo " FCOV=$(FCOV)"
	@echo " CCOV=$(CCOV)"
	@echo "=================================================="
	@echo ""

	@if [ -d "$(COV_DIR)/xsim.covdb/$(TESTNAME)" ]; then 		cd $(REPO_PARENT) && $(XCRG) 			-cov_db_dir $(COV_DIR)/xsim.covdb 			-cov_db_name $(TESTNAME) 			-report_format html 			-report_dir $(ROOT)/cov_report/functionalCoverageReport 			-log $(ROOT)/cov_report/functionalCoverage.log; 	else 		echo "No functional coverage DB found at:"; 		echo "  $(COV_DIR)/xsim.covdb/$(TESTNAME)"; 		echo "Skipping functional coverage report."; 	fi

	@if [ -d "$(REPO_PARENT)/xsim.codeCov/$(TOP)" ]; then 		cd $(REPO_PARENT) && $(XCRG) 			-cov_db_dir . 			-cov_db_name $(TOP) 			-report_format html 			-report_dir $(ROOT)/cov_report/codeCoverageReport 			-log $(ROOT)/cov_report/codeCoverage.log; 	else 		echo "No code coverage DB found at $(REPO_PARENT)/xsim.codeCov/$(TOP)"; 		echo "Skipping code coverage report."; 	fi

	@echo ""
	@echo "Coverage reports generated at:"
	@echo "  $(ROOT)/cov_report/functionalCoverageReport/"
	@echo "  $(ROOT)/cov_report/codeCoverageReport/"
	@echo ""

else ifeq ($(SIM),verilator)

cov_report:
	@echo ""
	@echo "=================================================="
	@echo " Verilator Coverage"
	@echo "=================================================="
	@echo ""
	@echo "Verilator coverage is not generated using XCRG."
	@echo "Use the Verilator coverage flow separately."
	@echo ""

else

cov_report:
	@echo "ERROR: Unsupported simulator '$(SIM)'"
	@exit 1

endif


###############################################################################
# Clean
###############################################################################

clean:
	@echo "Cleaning simulation artifacts..."

	rm -rf 		xsim.dir 		.simvision 		.webtalk 		.Xil 		*.jou 		*.log 		*.pb 		*.wdb 		*.vcd 		*.fst 		*.str 		build 		logs 		waves 		regr_logs 		$(COV_DIR) 		$(ROOT)/cov_report 		$(VERILATOR_BUILD_DIR)

	@echo "Clean complete."


###############################################################################
# All
###############################################################################

all: compile elab run


###############################################################################
# Help
###############################################################################

help:
	@echo ""
	@echo "=============================================================="
	@echo " UVM Environment Makefile"
	@echo " Vivado XSIM + Verilator + UVM"
	@echo "=============================================================="
	@echo ""

	@echo "SIMULATOR SELECTION"
	@echo "  make compile SIM=vivado"
	@echo "  make compile SIM=verilator"
	@echo ""
	@echo "  make compile vivado"
	@echo "  make compile verilator"
	@echo ""

	@echo "VIVADO BASIC FLOW"
	@echo "  make compile SIM=vivado"
	@echo "  make elab SIM=vivado"
	@echo "  make run SIM=vivado TESTNAME=base_test"
	@echo "  make all SIM=vivado TESTNAME=base_test"
	@echo ""

	@echo "VERILATOR + UVM BASIC FLOW"
	@echo "  make compile SIM=verilator"
	@echo "  make run SIM=verilator TESTNAME=base_test"
	@echo "  make all SIM=verilator TESTNAME=base_test"
	@echo ""

	@echo "UVM CHECK"
	@echo "  make check_uvm"
	@echo ""

	@echo "SIMULATOR INFORMATION"
	@echo "  make sim_info SIM=vivado"
	@echo "  make sim_info SIM=verilator"
	@echo ""

	@echo "FILE LISTS"
	@echo "  make gen-rtl"
	@echo "  make gen-uvm"
	@echo ""

	@echo "VIVADO GUI"
	@echo "  make gui SIM=vivado TESTNAME=base_test"
	@echo "  make wave SIM=vivado TESTNAME=base_test"
	@echo ""

	@echo "VERILATOR WAVEFORM"
	@echo "  make wave SIM=verilator"
	@echo ""

	@echo "SINGLE TEST"
	@echo "  make run SIM=vivado TESTNAME=base_test"
	@echo "  make run SIM=verilator TESTNAME=base_test"
	@echo ""

	@echo "REGRESSION"
	@echo "  make regression SIM=vivado"
	@echo "  make regression SIM=verilator"
	@echo ""

	@echo "FUNCTIONAL COVERAGE - VIVADO"
	@echo "  make run SIM=vivado TESTNAME=base_test FCOV=1"
	@echo ""

	@echo "CODE COVERAGE - VIVADO"
	@echo "  make elab SIM=vivado CCOV=1"
	@echo "  make run SIM=vivado TESTNAME=base_test CCOV=1"
	@echo "  make elab SIM=vivado CCOV=1 CCOV_TYPE=sb"
	@echo ""

	@echo "COMBINED COVERAGE - VIVADO"
	@echo "  make run SIM=vivado TESTNAME=base_test FCOV=1 CCOV=1"
	@echo ""

	@echo "COVERAGE REPORT - VIVADO"
	@echo "  make cov_report SIM=vivado TESTNAME=base_test"
	@echo ""

	@echo "CLEAN"
	@echo "  make clean"
	@echo ""

	@echo "=============================================================="
	@echo ""

###############################################################################
# Phony Targets
###############################################################################

.PHONY: 	compile 	compile-vivado 	compile-verilator 	elab 	elab-vivado 	elab-verilator 	run 	run-vivado 	ensure-vivado-snapshot 	run-verilator 	gui 	gui-vivado 	gui-verilator 	wave 	wave-vivado 	wave-verilator 	regression 	cov_report 	check_uvm 	sim_info 	gen-rtl 	gen-uvm 	clean 	all 	help 	vivado 	verilator
 