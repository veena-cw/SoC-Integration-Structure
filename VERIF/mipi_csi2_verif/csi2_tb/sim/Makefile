# Store this file as VERIF/mipi_csi2_verif/csi2_tb/sim/Makefile.
# Run from csi2_tb/ with commands such as:
#   make -C sim run TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f
#   make -C sim wave TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f
#   make -C sim vivado TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f

SHELL := /bin/bash
.SHELLFLAGS := -eu -o pipefail -c
.DEFAULT_GOAL := help

SIM_DIR    := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
TB_DIR     := $(abspath $(SIM_DIR)/..)
REPO_ROOT  := $(abspath $(SIM_DIR)/../../../..)
IGNORE_DIR := $(SIM_DIR)/ignore
LOG_DIR    := $(SIM_DIR)/log
TEST_LIST  := $(TB_DIR)/../test_names/testcase

VERILATOR ?= $(HOME)/tools/verilator-5.052/bin/verilator
UVM_HOME  ?= $(HOME)/tools/uvm-verilator
JOBS      ?= 2
TESTNAME  ?= csi2_smoke_test
SEED      ?= 1
RUN_TIMEOUT ?= 120s
VFLAGS    ?=
WAVES     ?= 0

# Set this to the official design-team RTL file list when it is delivered.
# For Vivado compatibility, that RTL file list should use absolute source paths.
RTL_FILELIST ?=

# Verilator places all generated C++ and its executable directly in ignore/.
VERILATOR_SIM := $(IGNORE_DIR)/Vcsi2_tb_top
WAVE_FILE     := $(IGNORE_DIR)/csi2_wave.fst

INCLUDES := \
  -I"$(TB_DIR)/agent/tx_agent" \
  -I"$(TB_DIR)/agent/rx_agent" \
  -I"$(TB_DIR)/agent/reset_agent" \
  -I"$(TB_DIR)/env" \
  -I"$(TB_DIR)/interface" \
  -I"$(TB_DIR)/tests" \
  -I"$(TB_DIR)/assertion"
COMMON := --timing --assert --vpi --top-module csi2_tb_top --timescale 1ns/1ps -Wno-fatal
UVM_ARGS = -I"$(UVM_HOME)/src" "$(UVM_HOME)/src/uvm_pkg.sv"
RTL_ARGS = -f "$(RTL_FILELIST)"
PROJECT_ARGS := -f files.f
TRACE_FLAGS = $(if $(filter 1,$(WAVES)),--trace-fst --trace-structs,)
WAVE_ARGS   = $(if $(filter 1,$(WAVES)),+WAVES,)

TB_SOURCES := \
  $(TB_DIR)/interface/csi2_if.sv \
  $(TB_DIR)/interface/csi2_reset_if.sv \
  $(TB_DIR)/assertion/csi2_tx_assertions.sv \
  $(TB_DIR)/assertion/csi2_rx_assertions.sv \
  $(TB_DIR)/env/csi2_uvm_pkg.sv \
  $(TB_DIR)/top/csi2_tb_top.sv
XSIM_INCLUDES := \
  -i "$(TB_DIR)/agent/tx_agent" \
  -i "$(TB_DIR)/agent/rx_agent" \
  -i "$(TB_DIR)/agent/reset_agent" \
  -i "$(TB_DIR)/env" \
  -i "$(TB_DIR)/interface" \
  -i "$(TB_DIR)/tests" \
  -i "$(TB_DIR)/assertion"
XSIM_SNAPSHOT := csi2_standalone

.PHONY: help dirs check-tools check-test check-rtl lint build run wave \
        vivado-check vivado-build vivado organize clean

help:
	@echo 'Verilator commands:'
	@echo '  make -C sim run  TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f'
	@echo '  make -C sim wave TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f'
	@echo 'Vivado/XSIM command:'
	@echo '  make -C sim vivado TESTNAME=csi2_smoke_test RTL_FILELIST=/absolute/path/csi2_design.f'
	@echo 'Tests: csi2_smoke_test csi2_reset_tx_test csi2_reset_rx_test'
	@echo '       csi2_ecc1_test csi2_ecc2_test csi2_crc_test csi2_short_packet_test'
	@echo 'Other targets: lint build organize clean'
	@echo 'Overrides: JOBS=2 SEED=1 RUN_TIMEOUT=120s UVM_HOME=/path/to/uvm'

dirs:
	@mkdir -p "$(IGNORE_DIR)" "$(LOG_DIR)"

check-test:
	@test -n "$(TESTNAME)" || { echo 'TESTNAME must not be empty'; exit 1; }
	@test -f "$(TEST_LIST)" || { echo 'Missing test list: $(TEST_LIST)'; exit 1; }
	@grep -Fxq "$(TESTNAME)" "$(TEST_LIST)" || { \
	  echo 'Unknown TESTNAME: $(TESTNAME)'; \
	  echo 'Available tests:'; sed 's/^/  /' "$(TEST_LIST)"; exit 1; \
	}

check-rtl:
	@test -n "$(RTL_FILELIST)" || { echo 'Set RTL_FILELIST to the official CSI-2 design file list'; exit 1; }
	@test -f "$(RTL_FILELIST)" || { echo 'RTL file list not found: $(RTL_FILELIST)'; exit 1; }

check-tools:
	@"$(VERILATOR)" --version
	@"$(VERILATOR)" --version | awk '{split($$2,v,"."); if(v[1]<5 || (v[1]==5 && v[2]<52)) {print "This build targets Verilator >=5.052."; exit 1}}'
	@test -f "$(UVM_HOME)/src/uvm_pkg.sv" || { echo 'Missing UVM source: set UVM_HOME'; exit 1; }
	@test -f "$(UVM_HOME)/src/dpi/uvm_dpi.cc" || { echo 'Missing UVM DPI source'; exit 1; }
	@g++ --version | head -n 1
	@z3 --version
	@command -v timeout >/dev/null

lint: check-tools check-rtl dirs
	@cd "$(SIM_DIR)" && \
	  "$(VERILATOR)" --lint-only $(COMMON) $(INCLUDES) $(VFLAGS) $(TRACE_FLAGS) \
	  $(UVM_ARGS) $(RTL_ARGS) $(PROJECT_ARGS) \
	  2>&1 | tee "$(LOG_DIR)/verilator_lint.log"

# Verilator is called on every build so source and flag changes are detected.
build: check-tools check-rtl dirs
	@cd "$(SIM_DIR)" && \
	  "$(VERILATOR)" --binary -j $(JOBS) $(COMMON) $(INCLUDES) $(VFLAGS) $(TRACE_FLAGS) \
	  --Mdir "$(IGNORE_DIR)" $(UVM_ARGS) $(RTL_ARGS) $(PROJECT_ARGS) \
	  "$(UVM_HOME)/src/dpi/uvm_dpi.cc" \
	  -CFLAGS '-I$(UVM_HOME)/src/dpi' \
	  2>&1 | tee "$(LOG_DIR)/verilator_build.log"

# Complete Verilator build, UVM execution and pass/fail log validation.
run: check-test build
	@cd "$(SIM_DIR)" && \
	  timeout "$(RUN_TIMEOUT)" "$(VERILATOR_SIM)" \
	  +UVM_TESTNAME=$(TESTNAME) \
	  +verilator+seed+$(SEED) $(WAVE_ARGS) \
	  2>&1 | tee "$(LOG_DIR)/$(TESTNAME)_$(SEED).log"
	@grep -Eq '\[SB_SUMMARY\].*PASS' "$(LOG_DIR)/$(TESTNAME)_$(SEED).log"
	@grep -Eq 'UVM_ERROR[[:space:]]*:[[:space:]]*0[[:space:]]*$$' "$(LOG_DIR)/$(TESTNAME)_$(SEED).log"
	@grep -Eq 'UVM_FATAL[[:space:]]*:[[:space:]]*0[[:space:]]*$$' "$(LOG_DIR)/$(TESTNAME)_$(SEED).log"
	@! grep -Eq 'UVM_(ERROR|FATAL)[[:space:]]*:[[:space:]]*[1-9]' "$(LOG_DIR)/$(TESTNAME)_$(SEED).log"

# Build with FST tracing, run the test, and open the result in GTKWave.
wave: WAVES := 1
wave: run
	@if command -v gtkwave >/dev/null 2>&1; then \
	  echo "Opening $(WAVE_FILE)"; \
	  gtkwave "$(WAVE_FILE)" >/dev/null 2>&1 & \
	else \
	  echo "Waveform generated at $(WAVE_FILE)"; \
	  echo 'GTKWave is not installed; open this FST file in another viewer.'; \
	fi

vivado-check:
	@command -v xvlog >/dev/null || { echo 'xvlog not found; source Vivado settings64.sh first'; exit 1; }
	@command -v xelab >/dev/null || { echo 'xelab not found; source Vivado settings64.sh first'; exit 1; }
	@command -v xsim  >/dev/null || { echo 'xsim not found; source Vivado settings64.sh first'; exit 1; }

# Compile and elaborate inside ignore/, keeping XSIM databases out of the root.
vivado-build: vivado-check check-rtl dirs
	@cd "$(IGNORE_DIR)" && \
	  xvlog -sv -L uvm $(XSIM_INCLUDES) -f "$(RTL_FILELIST)" $(TB_SOURCES) \
	  2>&1 | tee "$(LOG_DIR)/xvlog.log"
	@cd "$(IGNORE_DIR)" && \
	  xelab -L uvm work.csi2_tb_top -s $(XSIM_SNAPSHOT) \
	  -debug typical -timescale 1ns/1ps \
	  2>&1 | tee "$(LOG_DIR)/xelab.log"

# Complete Vivado/XSIM compile, elaborate and UVM simulation.
vivado: check-test vivado-build
	@cd "$(IGNORE_DIR)" && \
	  xsim $(XSIM_SNAPSHOT) \
	  -testplusarg UVM_TESTNAME=$(TESTNAME) \
	  -sv_seed $(SEED) -runall \
	  -log "$(LOG_DIR)/xsim_$(TESTNAME)_$(SEED).log"
	@grep -Eq '\[SB_SUMMARY\].*PASS' "$(LOG_DIR)/xsim_$(TESTNAME)_$(SEED).log"
	@grep -Eq 'UVM_ERROR[[:space:]]*:[[:space:]]*0[[:space:]]*$$' "$(LOG_DIR)/xsim_$(TESTNAME)_$(SEED).log"
	@grep -Eq 'UVM_FATAL[[:space:]]*:[[:space:]]*0[[:space:]]*$$' "$(LOG_DIR)/xsim_$(TESTNAME)_$(SEED).log"

# One-time organization of generated files currently scattered in CSI-2/.
# It is never called automatically by run, wave, or vivado.
organize: dirs
	@shopt -s nullglob; \
	for file in "$(TB_DIR)"/*.log; do \
	  mv -n -- "$$file" "$(LOG_DIR)/"; \
	done; \
	for file in "$(TB_DIR)"/*.jou "$(TB_DIR)"/*.pb \
	            "$(TB_DIR)"/*.str "$(TB_DIR)"/*.wdb \
	            "$(TB_DIR)"/*.vcd; do \
	  mv -n -- "$$file" "$(IGNORE_DIR)/"; \
	done; \
	for dir in "$(TB_DIR)"/.Xil "$(TB_DIR)"/xsim.dir; do \
	  if [[ -e "$$dir" ]]; then mv -n -- "$$dir" "$(IGNORE_DIR)/"; fi; \
	done
	@echo "Useful logs: $(LOG_DIR)"
	@echo "Generated simulator files: $(IGNORE_DIR)"

# Removes only simulator-generated directories controlled by this Makefile.
clean:
	rm -rf -- "$(IGNORE_DIR)" "$(LOG_DIR)"
	@mkdir -p "$(IGNORE_DIR)" "$(LOG_DIR)"
