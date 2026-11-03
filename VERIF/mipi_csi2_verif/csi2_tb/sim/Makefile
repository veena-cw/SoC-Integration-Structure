SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c

SIM_DIR := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TB_DIR  := $(abspath $(SIM_DIR)/..)

BUILD_ROOT ?= $(SIM_DIR)/.csi2_uvm_build
OBJ_DIR    := $(BUILD_ROOT)/obj
LOG_ROOT   := $(SIM_DIR)/log

TEST_LIST := $(TB_DIR)/../test_names/testcase

TESTNAME ?= csi2_rx_raw7_test
SEED     ?= 1
JOBS     ?= 2
TIMEOUT  ?= 120s
WAVES    ?= 0

VERILATOR ?= /opt/verilator-5.052/bin/verilator
UVM_HOME  ?= $(abspath $(SIM_DIR)/../../../uvm-1.1d)

SIM_BINARY := $(OBJ_DIR)/Vcsi2_tb_top
TEST_LOG_DIR := $(LOG_ROOT)/$(TESTNAME)/seed_$(SEED)
LOG_FILE     := $(TEST_LOG_DIR)/run.log
BUILD_LOG    := $(TEST_LOG_DIR)/build.log
WAVE_FILE    := $(TEST_LOG_DIR)/csi2_wave.vcd

ifeq ($(TESTNAME),csi2_cphy_async_fifo_clock_ratio_test)
TEST_ARGS := +BFM_HALF_PERIOD=3 +AXI_HALF_PERIOD=7
else
TEST_ARGS :=
endif

INCLUDES := \
	-I"$(TB_DIR)/agent/tx_agent" \
	-I"$(TB_DIR)/agent/rx_agent" \
	-I"$(TB_DIR)/agent/axi_agent" \
	-I"$(TB_DIR)/agent/reset_agent" \
	-I"$(TB_DIR)/env" \
	-I"$(TB_DIR)/interface" \
	-I"$(TB_DIR)/tests" \
	-I"$(TB_DIR)/assertion"

COMMON := \
	--timing \
	--assert \
	--vpi \
	--top-module csi2_tb_top \
	--timescale 1ns/1ps

ifeq ($(WAVES),1)
TRACE_FLAGS := --trace-vcd --trace-structs
WAVE_ARGS   := +WAVES +WAVE_FILE=$(WAVE_FILE)
else
TRACE_FLAGS :=
WAVE_ARGS   :=
endif

.PHONY: all help check build run wave regression clean

all: run

help:
	@echo "make build TESTNAME=csi2_rx_raw7_test"
	@echo "make run   TESTNAME=csi2_rx_raw7_test"
	@echo "make wave  TESTNAME=csi2_rx_raw7_test"
	@echo "make regression"
	@echo "make clean"

check:
	@test -x "$(VERILATOR)" || { \
		echo "ERROR: Verilator not found: $(VERILATOR)"; \
		exit 1; \
	}

	@version=$$($(VERILATOR) --version | awk 'NR==1 {print $$2}'); \
	if [ "$$version" != "5.052" ]; then \
		echo "ERROR: Expected Verilator 5.052, found $$version"; \
		exit 1; \
	fi

	@test -f "$(UVM_HOME)/src/uvm_pkg.sv" || { \
		echo "ERROR: UVM not found: $(UVM_HOME)/src/uvm_pkg.sv"; \
		exit 1; \
	}

	@test -f "$(UVM_HOME)/src/dpi/uvm_dpi.cc" || { \
		echo "ERROR: UVM DPI source not found"; \
		exit 1; \
	}

	@test -f "$(TEST_LIST)" || { \
		echo "ERROR: Test list not found: $(TEST_LIST)"; \
		exit 1; \
	}

	@grep -Fxq "$(TESTNAME)" "$(TEST_LIST)" || { \
		echo "ERROR: Unknown test: $(TESTNAME)"; \
		echo "Available tests:"; \
		cat "$(TEST_LIST)"; \
		exit 1; \
	}

	@if [ "$(WAVES)" = "1" ]; then \
		command -v gtkwave >/dev/null 2>&1 || { \
			echo "ERROR: GTKWave is not installed or not in PATH"; \
			exit 1; \
		}; \
	fi

	@echo "Using Verilator: $$($(VERILATOR) --version)"
	@echo "Using UVM:       $(UVM_HOME)"
	@echo "Using test:      $(TESTNAME)"
	@echo "Waveform mode:   WAVES=$(WAVES)"

build: check
	@mkdir -p "$(OBJ_DIR)" "$(TEST_LOG_DIR)"
	@echo "Building $(TESTNAME)..."

	@cd "$(SIM_DIR)" && \
	"$(VERILATOR)" \
		--binary \
		-j "$(JOBS)" \
		$(COMMON) \
		$(INCLUDES) \
		$(TRACE_FLAGS) \
		-Wno-fatal \
		--Mdir "$(OBJ_DIR)" \
		-I"$(UVM_HOME)/src" \
		"$(UVM_HOME)/src/uvm_pkg.sv" \
		-f files.f \
		"$(UVM_HOME)/src/dpi/uvm_dpi.cc" \
		-CFLAGS "-I$(UVM_HOME)/src/dpi" \
		2>&1 | tee "$(BUILD_LOG)"

run: build
	@mkdir -p "$(TEST_LOG_DIR)"
	@echo "Running $(TESTNAME)..."

	@timeout "$(TIMEOUT)" \
		"$(SIM_BINARY)" \
		+UVM_TESTNAME="$(TESTNAME)" \
		+verilator+seed+"$(SEED)" \
		$(TEST_ARGS) \
		$(WAVE_ARGS) \
		2>&1 | tee "$(LOG_FILE)"

wave:
	@rm -f "$(WAVE_FILE)"
	@$(MAKE) \
		WAVES=1 \
		TESTNAME="$(TESTNAME)" \
		SEED="$(SEED)" \
		JOBS="$(JOBS)" \
		TIMEOUT="$(TIMEOUT)" \
		run

	@test -s "$(WAVE_FILE)" || { \
		echo "ERROR: Waveform file was not generated: $(WAVE_FILE)"; \
		exit 1; \
	}

	@echo "Waveform generated: $(WAVE_FILE)"
	@gtkwave "$(WAVE_FILE)" >/dev/null 2>&1 &

regression:
	@while IFS= read -r test_name; do \
		[ -z "$$test_name" ] && continue; \
		$(MAKE) run TESTNAME="$$test_name" SEED="$(SEED)" || exit $$?; \
	done < "$(TEST_LIST)"

clean:
	@rm -rf "$(BUILD_ROOT)"
