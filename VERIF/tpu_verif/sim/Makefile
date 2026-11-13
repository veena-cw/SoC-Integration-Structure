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
#       make run SIM=vivado TESTNAME=tpu_base_test
#
#   Verilator:
#       make compile SIM=verilator
#       make run SIM=verilator TESTNAME=tpu_base_test
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

TOP            = tpu_tb_top

ROOT           := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TPU_ROOT       := $(abspath $(ROOT)/../..)
REPO_ROOT      := $(abspath $(ROOT)/..)
REPO_PARENT    := $(abspath $(REPO_ROOT)/..)
REPO_NAME      := $(notdir $(REPO_ROOT))
PROJ_NAME      := $(notdir $(ROOT))
PROJ_REL       := $(REPO_NAME)/$(PROJ_NAME)

SCRIPT_DIR     = $(ROOT)/scripts
BUILD_DIR      = $(ROOT)/build
WORK           = $(BUILD_DIR)/work
XSIM_SNAPSHOT  = $(ROOT)/xsim.dir/$(TOP)/xsimk
RTL_FILELIST   = $(BUILD_DIR)/rtl.f
UVM_FILELIST   = $(BUILD_DIR)/uvm.f   # generated from filelist.f (absolute paths + include dirs)
# XSim does not recognize the +incdir+ file-list syntax used by Verilator.
# Keep the portable source lists above, and generate XSim-specific copies that
# use xvlog's -i <directory> option for include directories.
XVLOG_RTL_FILELIST = $(BUILD_DIR)/rtl.xvlog.f
XVLOG_UVM_FILELIST = $(BUILD_DIR)/uvm.xvlog.f
TB_FILELIST    = $(ROOT)/filelist.f
TB_FILE        = $(ROOT)/../top/$(TOP).sv
LOG_DIR        = $(ROOT)/logs
WAVE_DIR       = $(ROOT)/waves
REGR_FILE      = $(ROOT)/filelists/tests.f

# All simulation tools run from this sim directory; build/rtl.f and build/uvm.f hold absolute paths


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

TESTNAME  ?= tpu_base_test

UVM_VERBOSITY ?= UVM_MEDIUM

SEED      ?= 1
# seeds for `make regression`: every test runs once per seed, e.g. SEEDS="1 2 3 4 5"
SEEDS     ?= $(SEED)

# extra plusargs, e.g. PLUSARGS="+NO_WAVES" or "+WAVES_DEPTH=2" (every run overwrites waves/tpu_tb_top.vcd)
PLUSARGS  ?=
XSIM_PLUSARGS = $(foreach a,$(PLUSARGS),-testplusarg $(patsubst +%,%,$(a)))


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

XVLOG_FLAGS = -sv -L uvm -d SVA_ON

XELAB_FLAGS = -L uvm --timescale 1ns/1ps


###############################################################################
# Verilator Tools
###############################################################################

VERILATOR ?= /opt/verilator-5.052/bin/verilator
VJOBS     ?= 2

# coverage builds (FCOV=1 / CCOV=1) go to verilator_build_cov so they never mix with the normal build
VERILATOR_BUILD_DIR ?= $(ROOT)/verilator_build$(if $(filter 1,$(FCOV) $(CCOV)),_cov)

VERILATOR_TOP ?= $(TOP)

VERILATOR_EXE = $(VERILATOR_BUILD_DIR)/V$(VERILATOR_TOP)


###############################################################################
# Verilator Compilation Flags
#
# Based on the working Verilator + UVM Makefile/script supplied.
###############################################################################

VERILATOR_FLAGS = 	--binary 	-sv 	--build 	--cc 	--Mdir $(VERILATOR_BUILD_DIR) 	--error-limit 100 	--converge-limit 10000000 	-j $(VJOBS) 	-Wall 	--vpi 	--timescale 1ns/1ps 	--trace 	--trace-depth 99 	--top-module $(VERILATOR_TOP)


###############################################################################
# Verilator Warning Suppression
###############################################################################

# No warning is disabled (RTL, testbench or UVM library): every -Wall warning is printed in verilator_compile.log.
# -Wno-fatal only keeps the build going after printing them.
DISABLED_WARNINGS = -Wno-fatal


###############################################################################
# Verilator Include Directories
###############################################################################

VERILATOR_INCDIRS = 	+incdir+"$(UVM_HOME)"


###############################################################################
# Verilator Defines
###############################################################################

VERILATOR_DEFINES = 	+define+SVA_ON 	+define+UVM_REPORT_DISABLE_FILE_LINE 	+define+UVM_HDL_NO_DPI


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

# UVM DPI (regex + command line) from the UVM library sources; see verilator_dpi/uvm_regex_dpi.cc
VERILATOR_CPP_SRCS = $(ROOT)/verilator_dpi/uvm_regex_dpi.cc -CFLAGS -I$(UVM_HOME)/dpi


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
# Verilator Coverage
###############################################################################

# FCOV=1 : covergroup bins recorded in coverage.dat (--coverage-user). Verilator 5.052 does not compute
#          get_coverage() at run time (always 0), so the numbers come from make cov_report SIM=verilator.
# CCOV=1 : + RTL line / branch and toggle coverage.
# Every run writes cov_data/<test>_s<seed>.dat; make cov_report SIM=verilator merges all of them.
VERILATOR_COV       ?= $(dir $(VERILATOR))verilator_coverage
VERILATOR_COV_DIR   ?= $(ROOT)/cov_data
VERILATOR_COV_ON     = $(filter 1,$(FCOV) $(CCOV))
ifneq (,$(filter 1,$(FCOV) $(CCOV)))
VERILATOR_FLAGS     += --coverage-user
endif
ifeq ($(CCOV),1)
VERILATOR_FLAGS     += --coverage-line --coverage-toggle
endif
VERILATOR_COV_ARG    = $(if $(VERILATOR_COV_ON),+verilator+coverage+file+$(VERILATOR_COV_DIR)/$(TESTNAME)_s$(SEED).dat)


###############################################################################
# Verilator Test Arguments
###############################################################################

VERILATOR_TEST_ARG = +UVM_TESTNAME=$(TESTNAME) +UVM_VERBOSITY=$(UVM_VERBOSITY) +verilator+seed+$(SEED)


###############################################################################
# RTL File List Generation
###############################################################################

$(RTL_FILELIST): $(SCRIPT_DIR)/gen_rtl_filelist.sh FORCE
	@bash $(SCRIPT_DIR)/gen_rtl_filelist.sh

$(UVM_FILELIST): $(TB_FILELIST) $(SCRIPT_DIR)/gen_uvm_filelist.sh
	@bash $(SCRIPT_DIR)/gen_uvm_filelist.sh

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

	cd $(ROOT) && $(XVLOG) $(XVLOG_FLAGS) 		-work work 		-f $(XVLOG_RTL_FILELIST) -f $(XVLOG_UVM_FILELIST)

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

	cd $(ROOT) && $(VERILATOR) 		$(VERILATOR_FLAGS) 		$(DISABLED_WARNINGS) 		$(VERILATOR_DEFINES) 		$(VERILATOR_INCDIRS) 		$(VERILATOR_SRCS) 		$(VERILATOR_CPP_SRCS) 		2>&1 | tee $(ROOT)/verilator_compile.log

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

	cd $(ROOT) && $(XELAB) $(XELAB_FLAGS) 		-L work 		work.$(TOP) -snapshot $(TOP) -mt 8


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


# Test verdict from a log: PASSED only when tpu_base_test printed "TEST PASSED" (a UVM_FATAL, crash or hang
# leaves no verdict line and is reported as FAILED). $(1) = log file, $(2) = test name. Exits 1 on failure.
define show_result
@if grep -q "TEST PASSED" $(1) 2>/dev/null; then \
		echo ""; echo "######## RESULT: $(2) PASSED ########"; echo ""; \
	elif grep -q "TEST FAILED" $(1) 2>/dev/null; then \
		echo ""; echo "######## RESULT: $(2) FAILED (UVM_ERROR, see $(1)) ########"; echo ""; exit 1; \
	else \
		echo ""; echo "######## RESULT: $(2) FAILED (no verdict: UVM_FATAL / crash / hang, see $(1)) ########"; echo ""; exit 1; \
	fi
endef

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

	@mkdir -p $(LOG_DIR) $(COV_DIR) $(WAVE_DIR)

	cd $(ROOT) && $(XSIM) $(TOP) 		-testplusarg UVM_TESTNAME=$(TESTNAME) 		-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 		-testplusarg UVM_NO_RELNOTES 		-sv_seed $(SEED) 		$(XSIM_COV_FLAGS) $(XSIM_PLUSARGS) 		-log $(LOG_DIR)/$(TESTNAME).log 		-runall
	$(call show_result,$(LOG_DIR)/$(TESTNAME).log,$(TESTNAME))

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

	@mkdir -p $(LOG_DIR) $(WAVE_DIR) $(if $(VERILATOR_COV_ON),$(VERILATOR_COV_DIR))

	cd $(ROOT) && $(VERILATOR_EXE) 		$(VERILATOR_TEST_ARG) $(VERILATOR_COV_ARG) $(PLUSARGS) 		2>&1 | tee $(LOG_DIR)/$(TESTNAME).log
	$(call show_result,$(LOG_DIR)/$(TESTNAME).log,$(TESTNAME))


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

	cd $(ROOT) && $(XSIM) $(TOP) 		-gui 		-testplusarg UVM_TESTNAME=$(TESTNAME) 		-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 		-testplusarg UVM_NO_RELNOTES 		-sv_seed $(SEED) 		$(XSIM_COV_FLAGS)


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

	@if [ -f $(WAVE_DIR)/waves.wcfg ]; then 		echo "Opening waves.wcfg..."; 		cd $(ROOT) && $(XSIM) $(TOP) 			-gui 			-view $(WAVE_DIR)/waves.wcfg 			-testplusarg UVM_TESTNAME=$(TESTNAME) 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-sv_seed $(SEED) 			$(XSIM_COV_FLAGS); 	else 		echo "waves.wcfg not found; opening xsim GUI"; 		cd $(ROOT) && $(XSIM) $(TOP) 			-gui 			-tclbatch $(SCRIPT_DIR)/waveform.tcl 			-testplusarg UVM_TESTNAME=$(TESTNAME) 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-sv_seed $(SEED) 			$(XSIM_COV_FLAGS); 	fi


###############################################################################
# Verilator Waveform
###############################################################################

wave-verilator:
	@echo ""
	@echo "=================================================="
	@echo " Verilator Waveform"
	@echo "=================================================="
	@echo ""

	@ls -l $(WAVE_DIR)/tpu_tb_top.vcd 2>/dev/null || echo "no VCD in $(WAVE_DIR) yet: run a test first (make run SIM=verilator TESTNAME=...)"

	@echo ""
	@echo "Waveform of the last simulated test (overwritten by every run):"
	@echo ""
	@echo "  gtkwave $(WAVE_DIR)/tpu_tb_top.vcd"
	@echo ""


###############################################################################
# Regression
###############################################################################

ifeq ($(SIM),vivado)

regression: FCOV := 1
regression: CCOV := 1

regression: elab-vivado

regression:
	@if [ ! -f "$(REGR_FILE)" ]; then 		echo "ERROR: regression file '$(REGR_FILE)' not found"; 		exit 1; 	fi

	@mkdir -p $(ROOT)/regr_logs $(COV_DIR)

	@cd $(ROOT) && { 	fail=0; npass=0; nfail=0; summary=""; 	while IFS= read -r t || [ -n "$$t" ]; do 		t=$$(echo "$$t" | sed 's/#.*//' | xargs); 		[ -z "$$t" ] && continue; 		for s in $(SEEDS); do 		echo "=================================================="; 		echo "=== Running test: $$t  seed $$s"; 		echo "=== SIM=$(SIM) FCOV=$(FCOV) CCOV=$(CCOV)"; 		echo "=================================================="; 		covflags=""; 		if [ "$(FCOV)" = "1" ] || [ "$(CCOV)" = "1" ]; then 			covflags="-testplusarg coverage -cov_db_name $${t}_s$$s -cov_db_dir $(COV_DIR)"; 		fi; 		lg=$(ROOT)/regr_logs/$${t}_s$$s.log; 		$(XSIM) $(TOP) 			-runall 			-testplusarg UVM_TESTNAME=$$t 			-testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) 			-testplusarg UVM_NO_RELNOTES 			-testplusarg NO_WAVES 			-sv_seed $$s 			$$covflags 			-log $$lg; 		if grep -q "TEST PASSED" $$lg 2>/dev/null; then 			echo ">>> PASS: $$t seed $$s"; summary="$$summary  PASSED  $$t  seed $$s\n"; npass=$$((npass+1)); 		elif grep -q "TEST FAILED" $$lg 2>/dev/null; then 			echo ">>> FAIL: $$t seed $$s"; summary="$$summary  FAILED  $$t  seed $$s  (UVM_ERROR)\n"; nfail=$$((nfail+1)); fail=1; 		else 			echo ">>> FAIL: $$t seed $$s"; summary="$$summary  FAILED  $$t  seed $$s  (no verdict: UVM_FATAL / crash / hang)\n"; nfail=$$((nfail+1)); fail=1; 		fi; 		done; 	done < "$(REGR_FILE)"; 		echo "=================================================="; 		echo " REGRESSION SUMMARY  (SIM=$(SIM), SEEDS=$(SEEDS), logs in regr_logs/<test>_s<seed>.log)"; 		echo "=================================================="; 		printf "$$summary"; 		echo "--------------------------------------------------"; 		echo "  total $$((npass+nfail))   passed $$npass   failed $$nfail"; 		echo "=================================================="; 		if [ "$(FCOV)" = "1" ] || [ "$(CCOV)" = "1" ]; then 			$(MAKE) cov_report 				SIM=vivado 				FCOV=$(FCOV) 				CCOV=$(CCOV); 		fi; 		if [ $$fail -eq 0 ]; then 			echo "REGRESSION PASSED"; 		else 			echo "REGRESSION FAILED"; 			exit 1; 		fi; 	}

else ifeq ($(SIM),verilator)

regression: compile-verilator

regression:
	@if [ ! -f "$(REGR_FILE)" ]; then 		echo "ERROR: regression file '$(REGR_FILE)' not found"; 		exit 1; 	fi

	@mkdir -p $(ROOT)/regr_logs $(if $(VERILATOR_COV_ON),$(VERILATOR_COV_DIR))

	@cd $(ROOT) && { 	fail=0; npass=0; nfail=0; summary=""; 	while IFS= read -r t || [ -n "$$t" ]; do 		t=$$(echo "$$t" | sed 's/#.*//' | xargs); 		[ -z "$$t" ] && continue; 		for s in $(SEEDS); do 		echo "=================================================="; 		echo "=== Running test: $$t  seed $$s"; 		echo "=== SIM=$(SIM)"; 		echo "=================================================="; 		lg=$(ROOT)/regr_logs/$${t}_s$$s.log; 		$(VERILATOR_EXE) 			+UVM_TESTNAME=$$t +verilator+seed+$$s +NO_WAVES 			$(if $(VERILATOR_COV_ON),+verilator+coverage+file+$(VERILATOR_COV_DIR)/$${t}_s$$s.dat) 			2>&1 | tee $$lg; 		if grep -q "TEST PASSED" $$lg 2>/dev/null; then 			echo ">>> PASS: $$t seed $$s"; summary="$$summary  PASSED  $$t  seed $$s\n"; npass=$$((npass+1)); 		elif grep -q "TEST FAILED" $$lg 2>/dev/null; then 			echo ">>> FAIL: $$t seed $$s"; summary="$$summary  FAILED  $$t  seed $$s  (UVM_ERROR)\n"; nfail=$$((nfail+1)); fail=1; 		else 			echo ">>> FAIL: $$t seed $$s"; summary="$$summary  FAILED  $$t  seed $$s  (no verdict: UVM_FATAL / crash / hang)\n"; nfail=$$((nfail+1)); fail=1; 		fi; 		done; 	done < "$(REGR_FILE)"; 		echo "=================================================="; 		echo " REGRESSION SUMMARY  (SIM=$(SIM), SEEDS=$(SEEDS), logs in regr_logs/<test>_s<seed>.log)"; 		echo "=================================================="; 		printf "$$summary"; 		echo "--------------------------------------------------"; 		echo "  total $$((npass+nfail))   passed $$npass   failed $$nfail"; 		echo "=================================================="; 		if [ $$fail -eq 0 ]; then 			echo "REGRESSION PASSED"; 		else 			echo "REGRESSION FAILED"; 			exit 1; 		fi; 	}

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

	@if [ -d "$(COV_DIR)/xsim.covdb/$(TESTNAME)" ]; then 		cd $(ROOT) && $(XCRG) 			-cov_db_dir $(COV_DIR)/xsim.covdb 			-cov_db_name $(TESTNAME) 			-report_format html 			-report_dir $(ROOT)/cov_report/functionalCoverageReport 			-log $(ROOT)/cov_report/functionalCoverage.log; 	else 		echo "No functional coverage DB found at:"; 		echo "  $(COV_DIR)/xsim.covdb/$(TESTNAME)"; 		echo "Skipping functional coverage report."; 	fi

	@if [ -d "$(ROOT)/xsim.codeCov/$(TOP)" ]; then 		cd $(ROOT) && $(XCRG) 			-cov_db_dir . 			-cov_db_name $(TOP) 			-report_format html 			-report_dir $(ROOT)/cov_report/codeCoverageReport 			-log $(ROOT)/cov_report/codeCoverage.log; 	else 		echo "No code coverage DB found at $(ROOT)/xsim.codeCov/$(TOP)"; 		echo "Skipping code coverage report."; 	fi

	@echo ""
	@echo "Coverage reports generated at:"
	@echo "  $(ROOT)/cov_report/functionalCoverageReport/"
	@echo "  $(ROOT)/cov_report/codeCoverageReport/"
	@echo ""

else ifeq ($(SIM),verilator)

# merges every cov_data/*.dat (all tests and seeds run with FCOV=1 / CCOV=1) and reports functional
# coverage per covergroup (CG01-CG07) and RTL line / branch / toggle coverage (dsn/ and ip/ only)
cov_report:
	@if ! ls $(VERILATOR_COV_DIR)/*.dat >/dev/null 2>&1; then 		echo "ERROR: no coverage data in $(VERILATOR_COV_DIR)"; 		echo "  build and run with FCOV=1 (functional) or CCOV=1 (functional + code), e.g."; 		echo "  make regression SIM=verilator FCOV=1 SEEDS=\"1 2 3\""; 		exit 1; 	fi
	@mkdir -p $(ROOT)/cov_report
	@echo "Merging $$(ls $(VERILATOR_COV_DIR)/*.dat | wc -l) coverage files from $(VERILATOR_COV_DIR)"
	@$(VERILATOR_COV) -write $(ROOT)/cov_report/merged.dat $(VERILATOR_COV_DIR)/*.dat
	@python3 $(ROOT)/scripts/cov_report.py $(ROOT)/cov_report/merged.dat $(ROOT)/cov_report $(TPU_ROOT)/dsn $(TPU_ROOT)/ip
	@rm -rf $(ROOT)/cov_report/annotate
	@if grep -q "^C " $(ROOT)/cov_report/rtl.dat; then 		$(VERILATOR_COV) --annotate $(ROOT)/cov_report/annotate --annotate-min 1 $(ROOT)/cov_report/rtl.dat >/dev/null; 	fi
	@echo ""
	@echo "  cov_report/summary.txt     functional + RTL code coverage summary"
	@echo "  cov_report/functional.txt  every covergroup / coverpoint / cross with the bins not hit"
	@echo "  cov_report/code.txt        RTL line / branch / toggle coverage per file (CCOV=1 runs)"
	@echo "  cov_report/annotate/       RTL sources annotated with hit counts ('%' = not hit)"
	@echo "  cov_report/merged.dat      merged Verilator coverage data"
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

	rm -rf 		xsim.dir 		.simvision 		.webtalk 		.Xil 		*.jou 		*.log 		*.pb 		*.wdb 		*.vcd 		*.fst 		*.str 		*.out 		xsim.covdb 		build 		logs 		waves 		regr_logs 		$(COV_DIR) 		$(VERILATOR_COV_DIR) 		$(ROOT)/cov_report 		$(VERILATOR_BUILD_DIR)

	@echo "Clean complete."

# Remove only log files (test logs, regression logs, tool logs and journals); builds and waveforms are kept.
clean_logs:
	rm -rf $(LOG_DIR) $(ROOT)/regr_logs
	rm -f $(ROOT)/*.log $(ROOT)/*.jou $(ROOT)/*.out
	@echo "Log files removed (verilator_build, xsim.dir and waves/ kept)."


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
	@echo "  make run SIM=vivado TESTNAME=tpu_base_test"
	@echo "  make all SIM=vivado TESTNAME=tpu_base_test"
	@echo ""

	@echo "VERILATOR + UVM BASIC FLOW"
	@echo "  make compile SIM=verilator"
	@echo "  make run SIM=verilator TESTNAME=tpu_base_test"
	@echo "  make all SIM=verilator TESTNAME=tpu_base_test"
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
	@echo "  make gui SIM=vivado TESTNAME=tpu_base_test"
	@echo "  make wave SIM=vivado TESTNAME=tpu_base_test"
	@echo ""

	@echo "VERILATOR WAVEFORM"
	@echo "  make wave SIM=verilator"
	@echo ""

	@echo "SINGLE TEST"
	@echo "  make run SIM=vivado TESTNAME=tpu_base_test"
	@echo "  make run SIM=verilator TESTNAME=tpu_base_test"
	@echo ""

	@echo "REGRESSION"
	@echo "  make regression SIM=vivado"
	@echo "  make regression SIM=verilator"
	@echo ""

	@echo "FUNCTIONAL COVERAGE - VIVADO"
	@echo "  make run SIM=vivado TESTNAME=tpu_base_test FCOV=1"
	@echo ""

	@echo "CODE COVERAGE - VIVADO"
	@echo "  make elab SIM=vivado CCOV=1"
	@echo "  make run SIM=vivado TESTNAME=tpu_base_test CCOV=1"
	@echo "  make elab SIM=vivado CCOV=1 CCOV_TYPE=sb"
	@echo ""

	@echo "COMBINED COVERAGE - VIVADO"
	@echo "  make run SIM=vivado TESTNAME=tpu_base_test FCOV=1 CCOV=1"
	@echo ""

	@echo "COVERAGE - VERILATOR (build dir verilator_build_cov)"
	@echo "  make compile SIM=verilator FCOV=1                       functional (covergroups)"
	@echo "  make compile SIM=verilator CCOV=1                       functional + RTL line / branch / toggle"
	@echo "  make run SIM=verilator FCOV=1 TESTNAME=tpu_e2e_matmul"
	@echo "  make regression SIM=verilator FCOV=1 SEEDS=\"1 2 3\""
	@echo "  make cov_report SIM=verilator                           merge cov_data/*.dat, report in cov_report/"
	@echo ""

	@echo "COVERAGE REPORT - VIVADO"
	@echo "  make cov_report SIM=vivado TESTNAME=tpu_base_test"
	@echo ""

	@echo "CLEAN"
	@echo "  make clean"
	@echo ""

	@echo "=============================================================="
	@echo ""

###############################################################################
# Phony Targets
###############################################################################

.PHONY: 	compile 	compile-vivado 	compile-verilator 	elab 	elab-vivado 	elab-verilator 	run 	run-vivado 	ensure-vivado-snapshot 	run-verilator 	gui 	gui-vivado 	gui-verilator 	wave 	wave-vivado 	wave-verilator 	regression 	cov_report 	check_uvm 	sim_info 	gen-rtl 	gen-uvm 	clean 	clean_logs 	all 	help 	vivado 	verilator
 