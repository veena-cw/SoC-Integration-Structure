SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c

#------------------------------------------------------------
# Directories
#------------------------------------------------------------

SIM_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TB_DIR  := $(abspath $(SIM_DIR)/..)

BUILD_ROOT ?= $(SIM_DIR)/build
OBJ_DIR    := $(BUILD_ROOT)/verilator/obj_dir
LOG_DIR    := $(BUILD_ROOT)/log

#------------------------------------------------------------
# Tools
#------------------------------------------------------------

VERILATOR ?= $(shell \
	if [ -x /opt/verilator-5.052/bin/verilator ]; then \
		echo /opt/verilator-5.052/bin/verilator; \
	else \
		command -v verilator; \
	fi)

# UVM is located at VERIF/uvm-1.1d
UVM_HOME ?= $(abspath $(SIM_DIR)/../../../uvm-1.1d)
UVM_SRC  := $(UVM_HOME)/src
UVM_DPI  := $(UVM_SRC)/dpi/uvm_dpi.cc

#------------------------------------------------------------
# User options
#------------------------------------------------------------

TESTNAME ?= NoC_test
SEED     ?= 1
JOBS     ?= 1
TIMEOUT  ?= 120s
WAVES    ?= 0

SIM_BINARY := $(OBJ_DIR)/VNoC_top
COMPILE_LOG := $(LOG_DIR)/compile.log
RUN_LOG     := $(LOG_DIR)/$(TESTNAME).log

#------------------------------------------------------------
# Include directories
#------------------------------------------------------------

INCLUDES := \
	-I../interface \
	-I../agent/master_agent \
	-I../agent/slave_agent \
	-I../agent/reset_agent \
	-I../env \
	-I../test \
	-I../assertion \
	-I../top \
	-I$(UVM_SRC) \
	-I$(UVM_SRC)/uvm

#------------------------------------------------------------
# SystemVerilog sources
#------------------------------------------------------------

SV_FILES := \
	../interface/NoC_master_interface.sv \
	../interface/NoC_slave_interface.sv \
	../interface/NoC_reset_interface.sv \
	../assertion/NoC_assertions.sv \
	../env/NoC_package.sv \
	../top/NoC_top.sv

#------------------------------------------------------------
# Waveform options
#------------------------------------------------------------

ifeq ($(WAVES),1)
TRACE_FLAGS := --trace-vcd --trace-structs
WAVE_ARGS   := +WAVES
else
TRACE_FLAGS :=
WAVE_ARGS   :=
endif

#------------------------------------------------------------
# Targets
#------------------------------------------------------------

.PHONY: all check compile build run wave clean help

all: run

help:
	@echo ""
	@echo "Available commands:"
	@echo "  make compile"
	@echo "  make build TESTNAME=NoC_test"
	@echo "  make run TESTNAME=NoC_test"
	@echo "  make wave TESTNAME=NoC_test"
	@echo "  make clean"
	@echo ""

check:
	@test -x "$(VERILATOR)" || { \
		echo "ERROR: Verilator was not found"; \
		exit 1; \
	}

	@test -f "$(UVM_SRC)/uvm_pkg.sv" || { \
		echo "ERROR: UVM package not found:"; \
		echo "       $(UVM_SRC)/uvm_pkg.sv"; \
		exit 1; \
	}

	@test -f "$(UVM_DPI)" || { \
		echo "ERROR: UVM DPI source not found:"; \
		echo "       $(UVM_DPI)"; \
		exit 1; \
	}

	@mkdir -p "$(OBJ_DIR)" "$(LOG_DIR)"

	@echo "Using Verilator:"
	@"$(VERILATOR)" --version

	@echo "Using UVM:"
	@echo "$(UVM_SRC)"

compile: check
	@echo "Compiling NoC UVM environment..."

	@cd "$(SIM_DIR)" && \
	"$(VERILATOR)" \
		--sv \
		--timing \
		--vpi \
		--binary \
		--top-module NoC_top \
		--Mdir "$(OBJ_DIR)" \
		--prefix VNoC_top \
		-j "$(JOBS)" \
		-Wno-fatal \
		-Wno-DECLFILENAME \
		-Wno-TIMESCALEMOD \
		$(TRACE_FLAGS) \
		$(INCLUDES) \
		"$(UVM_SRC)/uvm_pkg.sv" \
		$(SV_FILES) \
		"$(UVM_DPI)" \
		-CFLAGS "-I$(UVM_SRC)/dpi" \
		2>&1 | tee "$(COMPILE_LOG)"

build: compile

run: compile
	@echo "Running test: $(TESTNAME)"

	@timeout "$(TIMEOUT)" \
		"$(SIM_BINARY)" \
		+UVM_TESTNAME="$(TESTNAME)" \
		+verilator+seed+"$(SEED)" \
		$(WAVE_ARGS) \
		2>&1 | tee "$(RUN_LOG)"

wave:
	@$(MAKE) clean
	@$(MAKE) \
		WAVES=1 \
		TESTNAME="$(TESTNAME)" \
		SEED="$(SEED)" \
		run

	@if [ -f "$(SIM_DIR)/NoC_top.vcd" ]; then \
		gtkwave "$(SIM_DIR)/NoC_top.vcd" & \
	elif [ -f "$(SIM_DIR)/wave.vcd" ]; then \
		gtkwave "$(SIM_DIR)/wave.vcd" & \
	else \
		echo "Waveform file was not generated."; \
	fi

clean:
	@rm -rf "$(BUILD_ROOT)"
	@rm -f "$(SIM_DIR)"/*.vcd
	@rm -f "$(SIM_DIR)"/*.fst

	@echo "NoC build files and logs removed."
