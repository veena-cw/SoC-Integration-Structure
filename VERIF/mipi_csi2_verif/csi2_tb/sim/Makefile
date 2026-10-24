SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c

SIM_DIR    := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TB_DIR     := $(abspath $(SIM_DIR)/..)
BUILD_ROOT ?= $(SIM_DIR)/.csi2_uvm_build
OBJ_DIR    := $(BUILD_ROOT)/obj
LOG_DIR    := $(BUILD_ROOT)/log
WAVE_FILE  := $(BUILD_ROOT)/csi2_wave.fst
TEST_LIST  := $(TB_DIR)/../test_names/testcase

VERILATOR ?= $(shell command -v verilator)
UVM_HOME ?= $(abspath $(SIM_DIR)/../../../uvm-1.1d)
 
 

TESTNAME  ?= csi2_rx_raw7_test
SEED      ?= 1
JOBS      ?= 2
TIMEOUT   ?= 120s
WAVES     ?= 0

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
TRACE_FLAGS := --trace-fst --trace-structs
WAVE_ARGS   := +WAVES +WAVE_FILE=$(WAVE_FILE)
else
TRACE_FLAGS :=
WAVE_ARGS   :=
endif

SIM_BINARY := $(OBJ_DIR)/Vcsi2_tb_top
LOG_FILE   := $(LOG_DIR)/$(TESTNAME).log

.PHONY: all check build run wave clean help

all: run

help:
	@echo "make build TESTNAME=csi2_rx_raw7_test"
	@echo "make run   TESTNAME=csi2_rx_raw7_test"
	@echo "make wave  TESTNAME=csi2_rx_raw7_test"
	@echo "make clean"

check:
	@test -n "$(VERILATOR)" || { echo "Verilator not found"; exit 1; }
	@test -f "$(UVM_HOME)/src/uvm_pkg.sv" || { \
	  echo "UVM not found: $(UVM_HOME)"; exit 1; \
	}
	@test -f "$(TEST_LIST)" || { \
	  echo "Missing test list: $(TEST_LIST)"; exit 1; \
	}
	@grep -Fxq "$(TESTNAME)" "$(TEST_LIST)" || { \
	  echo "Unknown test: $(TESTNAME)"; \
	  cat "$(TEST_LIST)"; \
	  exit 1; \
	}

build: check
	@mkdir -p "$(OBJ_DIR)" "$(LOG_DIR)"
	@cd "$(SIM_DIR)" && \
	"$(VERILATOR)" --binary -j "$(JOBS)" \
	  $(COMMON) \
	  $(INCLUDES) \
	  -Wno-fatal \
	  $(TRACE_FLAGS) \
	  --Mdir "$(OBJ_DIR)" \
	  -I"$(UVM_HOME)/src" \
	  "$(UVM_HOME)/src/uvm_pkg.sv" \
	  -f files.f \
	  "$(UVM_HOME)/src/dpi/uvm_dpi.cc" \
	  -CFLAGS "-I$(UVM_HOME)/src/dpi" \
	  2>&1 | tee "$(LOG_DIR)/build.log"

run: build
	@timeout "$(TIMEOUT)" "$(SIM_BINARY)" \
	  +UVM_TESTNAME="$(TESTNAME)" \
	  +verilator+seed+"$(SEED)" \
	  $(WAVE_ARGS) \
	  2>&1 | tee "$(LOG_FILE)"
wave:
	@$(MAKE) WAVES=1 run TESTNAME="$(TESTNAME)" SEED="$(SEED)"
	@if command -v gtkwave >/dev/null 2>&1; then \
	  gtkwave "$(WAVE_FILE)" >/dev/null 2>&1 & \
	else \
	  echo "Waveform generated at: $(WAVE_FILE)"; \
	  echo "GTKWave is not installed."; \
	fi

clean:
	@rm -rf "$(BUILD_ROOT)"

