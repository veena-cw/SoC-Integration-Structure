# Makefile - BP-DV-003 standalone UVM environment
#
# Verilator + UVM only.
#
# Flow:
#   1. compile: C test source -> ELF -> BIN -> NBF boot image
#   2. sim:     compile the BlackParrot/UVM environment with Verilator
#               and run the selected UVM test
#
# Examples:
#   make compile
#   make sim
#   make all
#   make sim TEST=bp_dv_003_alu_test
#   make regression
#   make wave
#   make clean


SHELL := /bin/bash

# ccache may use a read-only runtime directory in the build environment.
export CCACHE_DISABLE := 1

###############################################################################
# Tools / configuration
###############################################################################

RISCV_PREFIX ?= riscv64-unknown-elf-
VERILATOR    ?= /opt/verilator-5.048/bin/verilator
UVM_HOME     ?= /home/cw004_krishna/uvm/1800.2-2017-1.0/src

TEST         ?= bp_base_test
TOP          ?= cpu_tb_top

# Suppress only the misleading component-name warnings emitted by the
# no-DPI UVM fallback checker. UVM errors and fatals remain visible.
UVM_RUN_ARGS = \
	+UVM_TESTNAME=$(TEST) \
	+BP_TEST_ID=$(TEST_ID) \
	+UVM_VERBOSITY=UVM_LOW \
	+NBF_FILE=$(SIM_DIR)/$(TCNAME).nbf \
	+NBF_PRELOAD_ONLY=1 \
	+UVM_OBJECTION_TRACE \
	'+uvm_set_action=*,UVM/COMP/NAME,UVM_WARNING,UVM_NO_ACTION'

# Resolve paths relative to this Makefile.
SIM_DIR      := $(abspath $(dir $(abspath $(lastword $(MAKEFILE_LIST)))))
BP_DIR       ?= $(abspath $(SIM_DIR)/../../..)

C_DIR        := $(abspath $(SIM_DIR)/../c)
TB_DIR       := $(abspath $(SIM_DIR)/../tb)

ifeq ($(TEST),bp_dv_003_alu_test)
TCNAME       ?= add_function
TEST_ID      ?= 3
else ifeq ($(TEST),bp_dv_004_immediate_test)
TCNAME       ?= immediate_function
TEST_ID      ?= 4
else ifeq ($(TEST),bp_dv_005_shift_test)
TCNAME       ?= shift_function
TEST_ID      ?= 5
else ifeq ($(TEST),bp_dv_006_muldiv_test)
TCNAME       ?= muldiv_function
TEST_ID      ?= 6
else ifeq ($(TEST),bp_i2c_write_read_test)
TCNAME       ?= i2c_write_read
TEST_ID      ?= 27
else ifeq ($(TEST),bp_dv_004_i2c_write_read_test)
TCNAME       ?= i2c_write_read
TEST_ID      ?= 27
else
TCNAME       ?= bp_dv_003_alu
TEST_ID      ?= 3
endif
LOG_DIR      := $(SIM_DIR)/logs
COMPILE_LOG  := $(LOG_DIR)/compile.log
SIM_LOG      := $(LOG_DIR)/simulation.log
REGR_DIR     := $(LOG_DIR)/regression

# BSG memory models print one informational line for every large memory
# instance. Filter only those messages from simulator output; keep UVM,
# scoreboard, error, and pass/fail messages visible.
SIM_DISPLAY_FILTER = sed -E '/^\#\# work\.bsg_mem_.*: instantiating /d'

# BlackParrot RTL filelist.
CPU_FLIST    ?= $(BP_DIR)/bp_top/flist.vcs

# Verilator build directory.
VERILATOR_BUILD_DIR ?= $(SIM_DIR)/obj_dir
VERILATOR_EXE       := $(VERILATOR_BUILD_DIR)/V$(TOP)

export BP_DIR

###############################################################################
# Verilator configuration
###############################################################################

VERILATOR_FLAGS = \
	--binary \
	--sv \
	--build \
	--cc \
	--timing \
	--Mdir $(VERILATOR_BUILD_DIR) \
	--top-module $(TOP) \
	--timescale 1ns/1ps \
	--trace \
	--trace-depth 99 \
	--error-limit 100 \
	--converge-limit 10000000 \
	-j 4

# UVM/Verilator compatibility warnings seen in the BP environment.
#
# WIDTHTRUNC/WIDTHEXPAND are especially common in UVM field automation
# (print/compare/record) because UVM APIs use generic-width arguments.
VERILATOR_WARNINGS = \
	-Wno-fatal \
	-Wno-TIMESCALEMOD \
	-Wno-WIDTHTRUNC \
	-Wno-WIDTHEXPAND \
	-Wno-DECLFILENAME \
	-Wno-CONSTRAINTIGN \
	-Wno-VARHIDDEN \
	-Wno-UNDRIVEN \
	-Wno-UNUSEDSIGNAL \
	-Wno-UNUSEDPARAM \
	-Wno-CASEINCOMPLETE \
	-Wno-ZERODLY

VERILATOR_DEFINES = \
	-DUVM_NO_DPI

VERILATOR_INCDIRS = \
	-I$(UVM_HOME) \
	-I$(TB_DIR)

###############################################################################
# Source files
###############################################################################

UVM_PKG = $(UVM_HOME)/uvm_pkg.sv

VERILATOR_SRCS = \
	$(UVM_PKG) \
	-f $(CPU_FLIST) \
	$(BP_DIR)/bp_common/src/v/bsg_rom_param.sv \
	$(BP_DIR)/bp_top/test/common/bp_nonsynth_cfg_loader.sv \
	$(BP_DIR)/bp_top/test/common/bp_nonsynth_host.sv \
	$(BP_DIR)/bp_top/test/common/bp_nonsynth_dram.sv \
	$(TB_DIR)/bp_uvm_pkg.sv \
	$(TB_DIR)/bedrock_if.sv \
	$(TB_DIR)/cpu_tb_top.sv

###############################################################################
# Targets
###############################################################################

.PHONY: all compile sim run regression wave check_uvm sim_info clean help

all: compile sim

###############################################################################
# Stage 1: C source -> ELF -> BIN -> NBF
###############################################################################

compile: $(TCNAME).nbf

$(TCNAME).elf: $(C_DIR)/$(TCNAME).c $(C_DIR)/link.ld
	@mkdir -p $(LOG_DIR)
	@echo "=================================================="
	@echo " Compiling RISC-V C test"
	@echo "=================================================="
	set -o pipefail; $(RISCV_PREFIX)gcc \
		-march=rv64ima \
		-mabi=lp64 \
		-mcmodel=medany \
		-nostdlib \
		-O0 \
		-T $(C_DIR)/link.ld \
		$< -o $@ 2>&1 | tee -a $(COMPILE_LOG)

$(TCNAME).bin: $(TCNAME).elf
	@mkdir -p $(LOG_DIR)
	@echo "Creating binary..."
	set -o pipefail; $(RISCV_PREFIX)objcopy \
		-O binary $< $@ 2>&1 | tee -a $(COMPILE_LOG)

$(TCNAME).nbf: $(TCNAME).bin
	@mkdir -p $(LOG_DIR)
	@echo "Creating NBF boot image..."
	set -o pipefail; python3 \
		$(SIM_DIR)/gen_boot_image.py \
		$< 0x80000000 $@ 2>&1 | tee -a $(COMPILE_LOG)

###############################################################################
# UVM / Verilator checks
###############################################################################

check_uvm:
	@echo ""
	@echo "=================================================="
	@echo " Checking UVM"
	@echo "=================================================="
	@if [ -z "$(UVM_HOME)" ]; then \
		echo "ERROR: UVM_HOME is not set."; \
		exit 1; \
	fi
	@if [ ! -d "$(UVM_HOME)" ]; then \
		echo "ERROR: UVM_HOME does not exist:"; \
		echo "  $(UVM_HOME)"; \
		exit 1; \
	fi
	@if [ ! -f "$(UVM_PKG)" ]; then \
		echo "ERROR: Cannot find uvm_pkg.sv:"; \
		echo "  $(UVM_PKG)"; \
		exit 1; \
	fi
	@if [ ! -f "$(CPU_FLIST)" ]; then \
		echo "ERROR: BlackParrot filelist not found:"; \
		echo "  $(CPU_FLIST)"; \
		exit 1; \
	fi
	@echo "UVM_HOME  = $(UVM_HOME)"
	@echo "UVM_PKG   = $(UVM_PKG)"
	@echo "BP_DIR    = $(BP_DIR)"
	@echo "CPU_FLIST = $(CPU_FLIST)"
	@echo "TB_DIR    = $(TB_DIR)"
	@echo ""

###############################################################################
# Verilator compile
###############################################################################

sim: $(TCNAME).nbf check_uvm
	@mkdir -p $(LOG_DIR) $(VERILATOR_BUILD_DIR)
	@echo ""
	@echo "=================================================="
	@echo " Compiling + Running BlackParrot with Verilator"
	@echo "=================================================="
	@echo "TOP       = $(TOP)"
	@echo "TEST      = $(TEST)"
	@echo "VERILATOR = $(VERILATOR)"
	@echo "BUILD DIR = $(VERILATOR_BUILD_DIR)"
	@echo ""

	set -o pipefail; $(VERILATOR) \
		$(VERILATOR_FLAGS) \
		$(VERILATOR_WARNINGS) \
		$(VERILATOR_DEFINES) \
		$(VERILATOR_INCDIRS) \
		$(VERILATOR_SRCS) \
		-o V$(TOP) \
		2>&1 | tee $(SIM_LOG)

	@echo ""
	@echo "=================================================="
	@echo " Running UVM test"
	@echo "=================================================="
	set -o pipefail; $(VERILATOR_EXE) \
		$(UVM_RUN_ARGS) \
		2>&1 | $(SIM_DISPLAY_FILTER) | tee -a $(SIM_LOG)

# Alias.
run: sim

###############################################################################
# Regression
###############################################################################

# Regression rows contain: UVM test class, BP test ID, and boot image (.nbf).
REGR_FILE ?= $(SIM_DIR)/scripts/testlist.f

regression: check_uvm
	@mkdir -p $(REGR_DIR)
	@if [ ! -f "$(VERILATOR_EXE)" ]; then \
		echo "ERROR: Verilator executable not found:"; \
		echo "  $(VERILATOR_EXE)"; \
		exit 1; \
	fi
	@if [ ! -f "$(REGR_FILE)" ]; then \
		echo "ERROR: Regression file not found:"; \
		echo "  $(REGR_FILE)"; \
		exit 1; \
	fi
	@fail=0; \
	while IFS= read -r line || [ -n "$$line" ]; do \
		line=$$(echo "$$line" | sed 's/#.*//' | xargs); \
		[ -z "$$line" ] && continue; \
		read -r t test_id nbf extra <<< "$$line"; \
		if [ -z "$$t" ] || [ -z "$$test_id" ] || [ -z "$$nbf" ] || [ -n "$$extra" ] || [[ ! "$$test_id" =~ ^[0-9]+$$ ]] || [[ "$$nbf" != *.nbf ]]; then \
			echo "ERROR: Invalid regression row: $$line"; \
			fail=1; \
			continue; \
		fi; \
		tcname=$${nbf%.nbf}; \
		echo "=================================================="; \
		echo "=== Running test: $$t (ID=$$test_id, NBF=$$nbf)"; \
		echo "=================================================="; \
		if ! $(MAKE) --no-print-directory compile TCNAME=$$tcname; then \
			echo ">>> FAIL: $$t (NBF build failed)"; \
			fail=1; \
			continue; \
		fi; \
		if $(VERILATOR_EXE) \
			+UVM_TESTNAME=$$t \
			+BP_TEST_ID=$$test_id \
			+NBF_FILE=$(SIM_DIR)/$$nbf \
			+NBF_PRELOAD_ONLY=1 \
			+UVM_VERBOSITY=UVM_LOW \
			+UVM_OBJECTION_TRACE \
			'+uvm_set_action=*,UVM/COMP/NAME,UVM_WARNING,UVM_NO_ACTION' \
			2>&1 | $(SIM_DISPLAY_FILTER) | tee "$(REGR_DIR)/$$tcname.log"; then \
			:; \
		else \
			fail=1; \
		fi; \
		if grep -qE "UVM_FATAL *: *[1-9]|UVM_ERROR *: *[1-9]" \
			"$(REGR_DIR)/$$tcname.log" 2>/dev/null; then \
			echo ">>> FAIL: $$t (NBF=$$nbf)"; \
			fail=1; \
		else \
			echo ">>> PASS: $$t (NBF=$$nbf)"; \
		fi; \
	done < "$(REGR_FILE)"; \
	echo "=================================================="; \
	if [ $$fail -eq 0 ]; then \
		echo "REGRESSION PASSED"; \
	else \
		echo "REGRESSION FAILED"; \
		exit 1; \
	fi

###############################################################################
# Waveforms
###############################################################################

wave:
	@echo ""
	@echo "=================================================="
	@echo " Verilator Waveform Files"
	@echo "=================================================="
	@find $(VERILATOR_BUILD_DIR) -type f \
		\( -name "*.vcd" -o -name "*.fst" \) \
		2>/dev/null || true
	@echo ""
	@echo "Open a waveform with:"
	@echo "  gtkwave <waveform_file>"
	@echo ""

###############################################################################
# Information
###############################################################################

sim_info:
	@echo ""
	@echo "=================================================="
	@echo " BlackParrot Verilator Configuration"
	@echo "=================================================="
	@echo " TOP                  = $(TOP)"
	@echo " TEST                 = $(TEST)"
	@echo " BP_DIR               = $(BP_DIR)"
	@echo " CPU_FLIST            = $(CPU_FLIST)"
	@echo " C_DIR                = $(C_DIR)"
	@echo " TB_DIR               = $(TB_DIR)"
	@echo " UVM_HOME             = $(UVM_HOME)"
	@echo " VERILATOR            = $(VERILATOR)"
	@echo " VERILATOR_BUILD_DIR  = $(VERILATOR_BUILD_DIR)"
	@echo " VERILATOR_EXE        = $(VERILATOR_EXE)"
	@echo " NBF                  = $(SIM_DIR)/$(TCNAME).nbf"
	@echo "=================================================="
	@echo ""

###############################################################################
# Clean
###############################################################################

clean:
	@echo "Cleaning BlackParrot Verilator artifacts..."
	rm -f $(TCNAME).elf $(TCNAME).bin $(TCNAME).nbf
	rm -rf $(LOG_DIR)
	rm -rf $(VERILATOR_BUILD_DIR)
	rm -f *.vcd *.fst *.log *.elf *.bin *.nbf
	@echo "Clean complete."

###############################################################################
# Help
###############################################################################

help:
	@echo ""
	@echo "=============================================================="
	@echo " CPU BP-DV-003 - Verilator + UVM"
	@echo "=============================================================="
	@echo ""
	@echo "BUILD"
	@echo "  make compile"
	@echo "      C -> ELF -> BIN -> NBF"
	@echo ""
	@echo "SIMULATION"
	@echo "  make sim"
	@echo "  make sim TEST=bp_dv_003_alu_test"
	@echo "  make run TEST=bp_dv_003_alu_test"
	@echo "  make all TEST=bp_dv_003_alu_test"
	@echo ""
	@echo "CHECKS"
	@echo "  make check_uvm"
	@echo "  make sim_info"
	@echo ""
	@echo "REGRESSION"
	@echo "  make regression"
	@echo ""
	@echo "WAVEFORM"
	@echo "  make wave"
	@echo "  gtkwave <waveform_file>"
	@echo ""
	@echo "CLEAN"
	@echo "  make clean"
	@echo ""
	@echo "UVM_HOME override:"
	@echo "  make sim UVM_HOME=/path/to/uvm/src"
	@echo ""
