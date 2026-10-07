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
VERILATOR_COVERAGE ?= /opt/verilator-5.048/bin/verilator_coverage
RISCV_MARCH  ?= rv64ima
RISCV_OPT    ?= -O0
# Extra C flags for the test programs, e.g. -DDUAL_CORE_USE_CBO_FLUSH
RISCV_CFLAGS ?=

TEST         ?= bp_base_test
TOP          ?= cpu_tb_top

# CPU AXI configuration. The DUT, interface, and UVM agent must use the
# same values. Override these when building another AXI data width, e.g.
#   make sim TEST=... CPU_AXI_DATA_WIDTH=256
CPU_AXI_DATA_WIDTH ?= 128
CPU_AXI_ADDR_WIDTH ?= 64
CPU_AXI_ID_WIDTH   ?= 4

# Suppress only the misleading component-name warnings emitted by the
# no-DPI UVM fallback checker. UVM errors and fatals remain visible.
DRAM_ARGS =
BURST_ARGS =

ifeq ($(TEST),bp_dv_024_dram_latency_test)
DRAM_ARGS := +DRAM_LATENCY_MIN=1 +DRAM_LATENCY_MAX=8
endif
# BP-DV-025 no longer requires an AXI burst: by design the CPU -> AXI bridge
# issues single-beat transactions only (checked in every test by the AXI
# monitor, AXI_SINGLE_BEAT). Pass +REQUIRE_AXI_BURST=1 by hand to re-enable.

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
REPO_ROOT    ?= $(abspath $(SIM_DIR)/../../..)
BP_DIR       ?= $(CPU_RTL_DIR)
CPU_DIR      ?= $(REPO_ROOT)/DSN/ip/compute/cpu
CPU_RTL_DIR  ?= $(CPU_DIR)/ip/cpu/rtl

C_DIR        := $(SIM_DIR)/../c
TB_DIR       := $(SIM_DIR)/../cpu_tb
UVM_HOME     := $(abspath $(SIM_DIR)/../../uvm-1.1d/src)

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
else ifeq ($(TEST),bp_dv_007_branch_test)
TCNAME       ?= branch_function
TEST_ID      ?= 7
else ifeq ($(TEST),bp_dv_008_jump_test)
TCNAME       ?= jump_function
TEST_ID      ?= 8
else ifeq ($(TEST),bp_dv_007_load_add_store_test)
TCNAME       ?= load_add_store
TEST_ID      ?= 9
else ifeq ($(TEST),bp_dv_011_memory_backpressure_test)
TCNAME       ?= memory_backpressure_function
TEST_ID      ?= 11
else ifeq ($(TEST),bp_dv_010_memory_widths_test)
TCNAME       ?= width_function
TEST_ID      ?= 10
else ifeq ($(TEST),bp_dv_012_cache_miss_test)
TCNAME       ?= cache_miss_function
TEST_ID      ?= 12
else ifeq ($(TEST),bp_dv_013_atomic_test)
TCNAME       ?= atomic_function
TEST_ID      ?= 13
else ifeq ($(TEST),bp_dv_015_illegal_trap_test)
TCNAME       ?= illegal_trap_function
TEST_ID      ?= 15
else ifeq ($(TEST),bp_dv_016_ecall_ebreak_test)
TCNAME       ?= ecall_ebreak_function
TEST_ID      ?= 16
else ifeq ($(TEST),bp_dv_017_multicore_shared_memory_test)
TCNAME       ?= multicore_shared_memory
TEST_ID      ?= 17
BP_CFG_ID    ?= 9
else ifeq ($(TEST),bp_dv_019_compressed_test)
TCNAME       ?= compressed_function
TEST_ID      ?= 19
else ifeq ($(TEST),bp_dv_020_cache_replacement_test)
TCNAME       ?= cache_replacement_function
TEST_ID      ?= 20
else ifeq ($(TEST),bp_dv_025_axi_burst_test)
TCNAME       ?= cache_burst_function
TEST_ID      ?= 25
else ifeq ($(TEST),bp_dv_024_dram_latency_test)
TCNAME       ?= dram_latency_function
TEST_ID      ?= 24
RISCV_MARCH  := rv64imac
else ifeq ($(TEST),bp_dv_028_axi_unaligned_test)
TCNAME       ?= axi_unaligned_access
TEST_ID      ?= 28
else ifeq ($(TEST),bp_dv_029_axi_block_test)
TCNAME       ?= axi_block_access
TEST_ID      ?= 29
else ifeq ($(TEST),bp_dv_030_axi_block_dual_core_test)
TCNAME       ?= axi_block_dual_core
TEST_ID      ?= 30
BP_CFG_ID    ?= 9
else ifeq ($(TEST),bp_dv_031_axi_block_dual_core_3002_test)
TCNAME       ?= axi_block_dual_core_3002
TEST_ID      ?= 31
BP_CFG_ID    ?= 9
else ifeq ($(TEST),bp_dv_032_cbo_clean_test)
TCNAME       ?= cbo_clean
TEST_ID      ?= 32
else ifeq ($(TEST),bp_dv_033_cbo_flush_test)
TCNAME       ?= cbo_flush
TEST_ID      ?= 33
else ifeq ($(TEST),bp_dv_034_cbo_inval_test)
TCNAME       ?= cbo_inval
TEST_ID      ?= 34
else ifeq ($(TEST),bp_dv_035_priv_modes_test)
TCNAME       ?= priv_modes
TEST_ID      ?= 35
else ifeq ($(TEST),bp_dv_036_vm_sv39_test)
TCNAME       ?= vm_sv39
TEST_ID      ?= 36
else ifeq ($(TEST),bp_dv_037_vm_ifetch_fault_test)
TCNAME       ?= vm_sv39_ifetch_fault
TEST_ID      ?= 37
else ifeq ($(TEST),bp_dv_038_smp_atomics_test)
TCNAME       ?= smp_atomics
TEST_ID      ?= 38
else ifeq ($(TEST),bp_dv_039_fpu_test)
TCNAME       ?= fpu_ops
TEST_ID      ?= 39
else ifeq ($(TEST),bp_dv_040_bitmanip_test)
TCNAME       ?= bitmanip_ops
TEST_ID      ?= 40
else ifeq ($(TEST),bp_dv_041_bitmanip_shadd_test)
TCNAME       ?= bitmanip_shadd
TEST_ID      ?= 41
else ifeq ($(TEST),bp_i2c_write_read_test)
TCNAME       ?= i2c_write_read
TEST_ID      ?= 27
else ifeq ($(TEST),bp_dv_004_i2c_write_read_test)
TCNAME       ?= i2c_write_read
TEST_ID      ?= 27
else
TCNAME       ?= add_function
TEST_ID      ?= 3
endif

# BlackParrot configuration (bp_params_e value). Default 9 =
# e_bp_multicore_2_cfg (two cores): every C test runs on both harts (see
# c/dual_core.h). 0 = e_bp_default_cfg (unicore) is still buildable with
# BP_CFG_ID=0. IDs 0-5 are unicore configs, 6+ are multicore.
BP_CFG_ID    ?= 9
ifeq ($(filter $(BP_CFG_ID),0 1 2 3 4 5),)
BP_MULTICORE := 1
# In the multicore build, bsg_mem_1r1w's read/write-same-address assertion
# fires once per FIFO on the first clock edge (t=5ns): its guard expects the
# internal reset flops to start as X (4-state), but Verilator starts them at
# 0 before the pipelined reset reaches them. It never fires after reset.
# By default Verilator stops at the first $error, so allow it to continue.
# Every $error is still printed in the log - check them after a run.
UVM_RUN_ARGS += +verilator+error+limit+1000
endif

# Programs that need extra ISA extensions. Selected by program name (TCNAME)
# so make sim and make regression (which compiles with TCNAME=...) agree.
ifeq ($(TCNAME),fpu_ops)
RISCV_MARCH  := rv64imafd
endif
ifneq ($(filter $(TCNAME),bitmanip_ops bitmanip_shadd),)
RISCV_MARCH  := rv64ima_zba_zbb_zbs
endif
ifeq ($(TCNAME),dram_latency_function)
RISCV_MARCH  := rv64imac
endif

LOG_DIR      := $(SIM_DIR)/logs
COMPILE_LOG  := $(LOG_DIR)/compile.log
SIM_LOG      := $(LOG_DIR)/simulation.log
BUILD_LOG    := $(LOG_DIR)/build_cfg$(BP_CFG_ID).log
REGR_DIR     := $(LOG_DIR)/regression
COVERAGE_DIR := $(LOG_DIR)/coverage
COVERAGE_MERGED := $(COVERAGE_DIR)/coverage.dat
COVERAGE_INFO := $(COVERAGE_DIR)/coverage.info
COVERAGE_SUMMARY := $(COVERAGE_DIR)/summary.txt
COVERAGE_HTML_DIR := $(COVERAGE_DIR)/html

# BSG memory models print one informational line for every large memory
# instance. Filter only those messages from simulator output; keep UVM,
# scoreboard, error, and pass/fail messages visible.
SIM_DISPLAY_FILTER = sed -E '/^\#\# work\.bsg_mem_.*: instantiating /d'

# BlackParrot RTL filelist from the new repository layout.
# cpu.f uses $REPO_ROOT in its paths, so export REPO_ROOT below.
CPU_FLIST    ?= $(CPU_DIR)/dsn/rtl/cpu_top.f
TB_FILELIST  ?= $(SIM_DIR)/tb_filelist.f

# Verilator build directory. Each BP configuration gets its own, so the
# unicore and multicore builds do not overwrite each other.
ifeq ($(BP_CFG_ID),0)
VERILATOR_BUILD_DIR ?= $(SIM_DIR)/obj_dir
else
VERILATOR_BUILD_DIR ?= $(SIM_DIR)/obj_dir_cfg$(BP_CFG_ID)
endif
VERILATOR_EXE       := $(VERILATOR_BUILD_DIR)/V$(TOP)

export BP_DIR REPO_ROOT CPU_DIR CPU_RTL_DIR CPU_FLIST UVM_HOME TB_DIR

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
	--coverage \
	--error-limit 100 \
	--converge-limit 10000000 \
	-j 2

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
	-Wno-ZERODLY \
	-Wno-COVERIGN \
	-Wno-MODDUP \
	-Wno-PINMISSING \
	-Wno-IMPLICIT \
	-Wno-WIDTHCONCAT \
	-Wno-CMPCONST \
	-Wno-UNSIGNED \
	-Wno-CASEOVERLAP \
	-Wno-UNOPTFLAT


VERILATOR_DEFINES = \
	-DUVM_NO_DPI \
	-DCPU_AXI_DATA_WIDTH=$(CPU_AXI_DATA_WIDTH) \
	-DCPU_AXI_ADDR_WIDTH=$(CPU_AXI_ADDR_WIDTH) \
	-DCPU_AXI_ID_WIDTH=$(CPU_AXI_ID_WIDTH) \
	-DBP_CFG_ID=$(BP_CFG_ID)

ifdef BP_MULTICORE
VERILATOR_DEFINES += -DBP_MULTICORE
endif

# BP-DV-020 needs only cache/DRAM traffic diagnostics; suppress unrelated ALU logs.
ifeq ($(TEST),bp_dv_011_memory_backpressure_test)
VERILATOR_DEFINES += -DBP_DV_011_BACKPRESSURE
endif
ifeq ($(TEST),bp_dv_020_cache_replacement_test)
VERILATOR_DEFINES += -DBP_DV_020_LOG
endif
ifeq ($(TEST),bp_dv_024_dram_latency_test)
VERILATOR_DEFINES += -DBP_DV_024_LATENCY
endif

VERILATOR_INCDIRS = \
	-I$(UVM_HOME) \
	-I$(TB_DIR)/agent \
	-I$(TB_DIR)/env \
	-I$(TB_DIR)/interface \
	-I$(TB_DIR)/package \
	-I$(TB_DIR)/sequences \
	-I$(TB_DIR)/tests \
	-I$(TB_DIR)/top

###############################################################################
# Source files
###############################################################################

UVM_PKG = $(UVM_HOME)/uvm_pkg.sv

VERILATOR_SRCS = -f $(TB_FILELIST)

###############################################################################
# Targets
###############################################################################

.PHONY: all compile sim run build print_exe regression coverage_report wave check_uvm sim_info clean help

all: compile sim

###############################################################################
# Stage 1: C source -> ELF -> BIN -> NBF
###############################################################################

compile: $(TCNAME).nbf

$(TCNAME).elf: $(C_DIR)/$(TCNAME).c $(C_DIR)/link.ld $(C_DIR)/dual_core.h $(wildcard $(C_DIR)/cbo_ops.c $(C_DIR)/axi_block_dual_core.c $(C_DIR)/vm_sv39.c)
	@mkdir -p $(LOG_DIR)
	@echo "=================================================="
	@echo " Compiling RISC-V C test"
	@echo "=================================================="
	set -o pipefail; $(RISCV_PREFIX)gcc \
		-march=$(RISCV_MARCH) \
		-mabi=lp64 \
		-mcmodel=medany \
		-nostdlib \
		$(RISCV_OPT) $(RISCV_CFLAGS) \
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
		$(SIM_DIR)/../scripts/gen_boot_image.py \
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
		echo "ERROR: CPU RTL filelist not found:"; \
		echo "  $(CPU_FLIST)"; \
		exit 1; \
	fi
	@echo "UVM_HOME  = $(UVM_HOME)"
	@echo "UVM_PKG   = $(UVM_PKG)"
	@echo "REPO_ROOT = $(REPO_ROOT)"
	@echo "CPU_DIR   = $(CPU_DIR)"
	@echo "BP_DIR    = $(BP_DIR)"
	@echo "CPU_FLIST = $(CPU_FLIST)"
	@echo "TB_DIR    = $(TB_DIR)"
	@echo ""

###############################################################################
# Verilator compile
###############################################################################

# Shared by sim and build.
VERILATOR_CMD = $(VERILATOR) \
	$(VERILATOR_FLAGS) \
	$(VERILATOR_WARNINGS) \
	$(VERILATOR_DEFINES) \
	$(VERILATOR_INCDIRS) \
	$(VERILATOR_SRCS) \
	-o V$(TOP)

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

	set -o pipefail; $(VERILATOR_CMD) 2>&1 | tee $(SIM_LOG)

	@echo ""
	@echo "=================================================="
	@echo " Running UVM test"
	@echo "=================================================="
	set -o pipefail; $(VERILATOR_EXE) \
		$(UVM_RUN_ARGS) $(DRAM_ARGS) $(BURST_ARGS) \
		2>&1 | $(SIM_DISPLAY_FILTER) | tee -a $(SIM_LOG)
	@if [ -f coverage.dat ]; then \
		mkdir -p $(COVERAGE_DIR); \
		mv -f coverage.dat $(COVERAGE_DIR)/$(TCNAME).dat; \
	else \
		echo "WARNING: Verilator did not produce coverage.dat"; \
	fi

# Alias.
run: sim

# Compile the simulator for one BP configuration without running a test.
#   make build                 # unicore  -> obj_dir/
#   make build BP_CFG_ID=9     # 2 cores  -> obj_dir_cfg9/
# Note: per-test defines (BP_DV_011/020/024) are only added by make sim
# TEST=..., so a plain build has none of them.
build: check_uvm
	@mkdir -p $(LOG_DIR) $(VERILATOR_BUILD_DIR)
	@echo "Building BP_CFG_ID=$(BP_CFG_ID) into $(VERILATOR_BUILD_DIR)"
	set -o pipefail; $(VERILATOR_CMD) 2>&1 | tee $(BUILD_LOG)

# Simulator path for the selected BP_CFG_ID (used by regression).
print_exe:
	@echo $(VERILATOR_EXE)

###############################################################################
# Regression
###############################################################################

# Regression rows contain: UVM test class, BP test ID, boot image (.nbf), and
# optionally cfg=<BP_CFG_ID> (default $(BP_CFG_ID), i.e. 9 = two cores). Each row runs on the
# simulator built for its config; a config whose simulator does not exist
# yet is built once (make build BP_CFG_ID=<n>) before its first row.
REGR_FILE ?= $(SIM_DIR)/../testlist/testlist.f

# Merge per-test Verilator coverage.dat files and generate both LCOV and HTML
# reports. This is RTL code coverage; bp_coverage.sv separately reports the
# test-plan/protocol functional coverage.
coverage_report:
	@mkdir -p $(COVERAGE_DIR)
	@files=$$(find "$(COVERAGE_DIR)" -maxdepth 1 -type f -name '*.dat' ! -name 'coverage.dat' -print); \
	if [ -z "$$files" ]; then \
		echo "ERROR: no per-test coverage files found in $(COVERAGE_DIR)"; \
		exit 1; \
	fi; \
	echo "Merging Verilator coverage from:"; \
	printf '%s\n' $$files; \
	$(VERILATOR_COVERAGE) --write "$(COVERAGE_MERGED)" $$files; \
	$(VERILATOR_COVERAGE) --write-info "$(COVERAGE_INFO)" $$files; \
	lcov --summary "$(COVERAGE_INFO)" | tee "$(COVERAGE_SUMMARY)"; \
	genhtml "$(COVERAGE_INFO)" --output-directory "$(COVERAGE_HTML_DIR)" --title "CPU Verilator code coverage" --quiet

regression: check_uvm
	@mkdir -p $(REGR_DIR) $(COVERAGE_DIR)
	@rm -f "$(COVERAGE_DIR)"/*.dat "$(COVERAGE_MERGED)" "$(COVERAGE_INFO)" "$(COVERAGE_SUMMARY)"
	@rm -rf "$(COVERAGE_HTML_DIR)"
	@if [ ! -f "$(REGR_FILE)" ]; then \
		echo "ERROR: Regression file not found:"; \
		echo "  $(REGR_FILE)"; \
		exit 1; \
	fi
	@fail=0; \
	built_cfgs=" "; \
	while IFS= read -r line || [ -n "$$line" ]; do \
		line=$$(echo "$$line" | sed 's/#.*//' | xargs); \
		[ -z "$$line" ] && continue; \
		read -r t test_id nbf opt extra <<< "$$line"; \
		cfg=$(BP_CFG_ID); \
		if [[ "$$opt" =~ ^cfg=([0-9]+)$$ ]]; then cfg=$${BASH_REMATCH[1]}; opt=; fi; \
		if [ -z "$$t" ] || [ -z "$$test_id" ] || [ -z "$$nbf" ] || [ -n "$$opt" ] || [ -n "$$extra" ] || [[ ! "$$test_id" =~ ^[0-9]+$$ ]] || [[ "$$nbf" != *.nbf ]]; then \
			echo "ERROR: Invalid regression row: $$line"; \
			fail=1; \
			continue; \
		fi; \
		tcname=$${nbf%.nbf}; \
		echo "=================================================="; \
		echo "=== Running test: $$t (ID=$$test_id, NBF=$$nbf, cfg=$$cfg)"; \
		echo "=================================================="; \
		exe=$$($(MAKE) --no-print-directory -s print_exe BP_CFG_ID=$$cfg); \
		if [ ! -f "$$exe" ] && [[ "$$built_cfgs" != *" $$cfg "* ]]; then \
			echo "Simulator for cfg=$$cfg not found ($$exe); building it"; \
			$(MAKE) --no-print-directory build BP_CFG_ID=$$cfg > /dev/null 2>&1 \
				|| echo "ERROR: build for cfg=$$cfg failed - see $(LOG_DIR)/build_cfg$$cfg.log"; \
			built_cfgs="$$built_cfgs$$cfg "; \
		fi; \
		if [ ! -f "$$exe" ]; then \
			echo ">>> FAIL: $$t (no simulator for cfg=$$cfg)"; \
			fail=1; \
			continue; \
		fi; \
		if ! $(MAKE) --no-print-directory compile TCNAME=$$tcname; then \
			echo ">>> FAIL: $$t (NBF build failed)"; \
			fail=1; \
			continue; \
		fi; \
		run_args=; \
		case "$$cfg" in 0|1|2|3|4|5) ;; *) run_args="$$run_args +verilator+error+limit+1000";; esac; \
		if "$$exe" \
			+UVM_TESTNAME=$$t \
			+BP_TEST_ID=$$test_id \
			+NBF_FILE=$(SIM_DIR)/$$nbf \
			+NBF_PRELOAD_ONLY=1 \
			+UVM_VERBOSITY=UVM_LOW \
			+UVM_OBJECTION_TRACE \
			'+uvm_set_action=*,UVM/COMP/NAME,UVM_WARNING,UVM_NO_ACTION' \
			$$run_args \
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
		if [ -f coverage.dat ]; then \
			mv -f coverage.dat "$(COVERAGE_DIR)/$$tcname.dat"; \
		else \
			echo ">>> FAIL: no coverage.dat generated for $$tcname"; \
			fail=1; \
		fi; \
	done < "$(REGR_FILE)"; \
	$(MAKE) --no-print-directory coverage_report || fail=1; \
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
	@echo " COVERAGE_DIR         = $(COVERAGE_DIR)"
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
	@echo "      Also merges RTL code coverage and writes logs/coverage/"
	@echo "  make coverage_report"
	@echo "      Merge existing per-test coverage.dat files"
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
