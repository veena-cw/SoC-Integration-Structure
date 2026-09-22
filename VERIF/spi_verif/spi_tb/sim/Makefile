# ============================================================
# SPI UVM Verification Makefile
# Run from the sim/ directory:
#     cd sim && make
# ============================================================

SHELL := /bin/bash

# ============================================================
# Project Directories
# ============================================================

PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim

# ============================================================
# UVM
# ============================================================

UVM_HOME := $(REPO_ROOT)/VERIF/uvm-1.1d
UVM_SRC  := $(UVM_HOME)/src
UVM_PKG  := $(UVM_SRC)/uvm_pkg.sv

# ============================================================
# SPI Testbench
# ============================================================

FILELIST := $(SIM_DIR)/spi_tb_filelist.f
TOP      := top

TESTNAME ?= spi_full_duplex_test

# ============================================================
# Verilator
# ============================================================

VERILATOR       ?= verilator
VERILATOR_MDIR  := $(SIM_DIR)/verilator_obj_dir
VERILATOR_EXE   := $(VERILATOR_MDIR)/V$(TOP)
VERILATOR_STAMP := $(SIM_DIR)/.verilator_build

VERILATOR_LOG_DIR := $(SIM_DIR)/verilator_log

# ============================================================
# Waveform
# ============================================================

WAVEFORM := $(SIM_DIR)/dump.vcd

# ============================================================
# Targets
# ============================================================

.PHONY: all
all: verilator

# ============================================================
# Verilator Flow
# ============================================================

.PHONY: verilator
verilator: verilator-build verilator-sim
	@echo "========================================"
	@echo "   VERILATOR FLOW COMPLETE"
	@echo "========================================"

# ------------------------------------------------------------
# Verilator Build
# ------------------------------------------------------------

.PHONY: verilator-build

verilator-build: $(VERILATOR_STAMP)

$(VERILATOR_STAMP): $(FILELIST)

	@echo ""
	@echo "========================================"
	@echo "        VERILATOR BUILD"
	@echo "========================================"

	@mkdir -p "$(VERILATOR_LOG_DIR)" "$(VERILATOR_MDIR)"

	@echo "PROJECT_ROOT = $(PROJECT_ROOT)"
	@echo "SIM_DIR      = $(SIM_DIR)"
	@echo "UVM_HOME     = $(UVM_HOME)"
	@echo "FILELIST     = $(FILELIST)"
	@echo "TOP          = $(TOP)"

	cd "$(SIM_DIR)" && \
	$(VERILATOR) \
		--binary \
		--timing \
		--trace \
		--language 1800-2012 \
		--top-module "$(TOP)" \
		--build-jobs 4 \
		-CFLAGS "-O0" \
		"$(UVM_PKG)" \
		-f "$(FILELIST)" \
		+define+UVM_NO_DPI \
		+define+TB_NUM_CS=4 \
		+incdir+"$(UVM_SRC)" \
		--Mdir "$(VERILATOR_MDIR)" \
		-Wno-TIMESCALEMOD \
		-Wno-WIDTHEXPAND \
		-Wno-WIDTHTRUNC \
		-Wno-UNSIGNED \
		-Wno-PINMISSING \
		-Wno-IMPLICIT \
		-Wno-IGNOREDRETURN \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/verilator_build.log"

	@if [ ! -f "$(VERILATOR_EXE)" ]; then \
		echo ""; \
		echo "ERROR: Verilator executable was not generated."; \
		echo "Check: $(VERILATOR_LOG_DIR)/verilator_build.log"; \
		exit 1; \
	fi

	@touch "$(VERILATOR_STAMP)"

	@echo ""
	@echo "Verilator build completed."
	@echo "Executable: $(VERILATOR_EXE)"

# ------------------------------------------------------------
# Verilator Simulation
# ------------------------------------------------------------

.PHONY: verilator-sim

verilator-sim: verilator-build

	@echo ""
	@echo "========================================"
	@echo "        VERILATOR SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "========================================"

	@if [ ! -f "$(VERILATOR_EXE)" ]; then \
		echo "ERROR: $(VERILATOR_EXE) not found."; \
		echo "Run 'make verilator-build' first."; \
		exit 1; \
	fi

	@mkdir -p "$(VERILATOR_LOG_DIR)"

	"$(VERILATOR_EXE)" \
		+UVM_TESTNAME="$(TESTNAME)" \
		+UVM_VERBOSITY=UVM_MEDIUM \
		+UVM_NO_RELNOTES \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/$(TESTNAME).log"

	@echo ""
	@echo "Verilator simulation completed."
	@echo "Log: $(VERILATOR_LOG_DIR)/$(TESTNAME).log"

# ============================================================
# Waveform
# ============================================================

.PHONY: waveform

waveform: verilator-sim

	@echo ""
	@echo "========================================"
	@echo "        OPENING GTKWAVE"
	@echo "========================================"

	@if [ -f "$(WAVEFORM)" ]; then \
		gtkwave "$(WAVEFORM)" & \
	else \
		echo "ERROR: Waveform file not found:"; \
		echo "$(WAVEFORM)"; \
		exit 1; \
	fi

# ============================================================
# Vivado
# ============================================================

.PHONY: vivado-compile

vivado-compile:

	@echo ""
	@echo "========================================"
	@echo "        VIVADO COMPILE"
	@echo "========================================"

	cd "$(SIM_DIR)" && \
	xvlog -sv \
		-L uvm \
		-f "$(FILELIST)"

# ------------------------------------------------------------
# Vivado Elaborate
# ------------------------------------------------------------

.PHONY: vivado-elab

vivado-elab: vivado-compile

	@echo ""
	@echo "========================================"
	@echo "        VIVADO ELABORATE"
	@echo "========================================"

	cd "$(SIM_DIR)" && \
	xelab "$(TOP)" \
		-s "$(TOP)_sim" \
		--timescale 1ns/1ps

# ------------------------------------------------------------
# Vivado GUI Simulation
# ------------------------------------------------------------

.PHONY: vivado

vivado: vivado-elab

	@echo ""
	@echo "========================================"
	@echo "        VIVADO SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "========================================"

	cd "$(SIM_DIR)" && \
	xsim "$(TOP)_sim" \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"

# ------------------------------------------------------------
# Vivado GUI Simulation
# ------------------------------------------------------------

.PHONY: vivado-sim

vivado-sim:

	@echo ""
	@echo "========================================"
	@echo "        VIVADO SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "========================================"

	cd "$(SIM_DIR)" && \
	xsim "$(TOP)_sim" \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"

# ------------------------------------------------------------
# Vivado Non-GUI Simulation
# ------------------------------------------------------------

.PHONY: vivado-nogui

vivado-nogui:

	@echo ""
	@echo "========================================"
	@echo "        VIVADO NON-GUI SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "========================================"

	cd "$(SIM_DIR)" && \
	xsim "$(TOP)_sim" \
		--runall \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"

# ============================================================
# Clean
# ============================================================

.PHONY: verilator-clean

verilator-clean:

	rm -rf "$(VERILATOR_MDIR)"
	rm -rf "$(VERILATOR_LOG_DIR)"
	rm -f "$(VERILATOR_STAMP)"

	@echo "Verilator clean complete."

# ------------------------------------------------------------

.PHONY: clean

clean: verilator-clean

	rm -rf "$(SIM_DIR)/xsim.dir"
	rm -rf "$(SIM_DIR)/.Xil"
	rm -rf "$(SIM_DIR)/$(TOP)_sim"*
	rm -f "$(SIM_DIR)/xvlog.pb"

	@echo "All clean."
