# ============================================================
# APB_UART_IP (apb_uart_tb) UVM Verification Makefile
# Run from the sim/ directory: cd sim && make
# ============================================================

SHELL := /bin/bash

PROJECT_DIR := $(CURDIR)

VIVADO_LOG_DIR     := $(PROJECT_DIR)/vivado_logs
VIVADO_WORK_DIR    := $(PROJECT_DIR)/vivado_files
VERILATOR_LOG_DIR  := $(PROJECT_DIR)/verilator_logs
VERILATOR_WORK_DIR := $(PROJECT_DIR)/verilator_files

FILELIST := $(PROJECT_DIR)/filelist.f
TOP      := tb_top

# ---- UVM_HOME (only used by Verilator) ----
UVM_HOME_DEFAULT := /home/cw032_kiran/Documents/UVM/uvm-1.2/src
ifeq ($(UVM_HOME),)
  UVM_HOME := $(UVM_HOME_DEFAULT)
endif

TESTNAME ?= uart_smoke_test
SEED     ?= 1

XVLOG := xvlog
XELAB := xelab
XSIM  := xsim
VL    := verilator

.PHONY: all
all: vivado

.PHONY: help
help:
	@echo "Targets:"
	@echo "  vivado / vivado_compile / vivado_elaborate / vivado_run / vivado_clean"
	@echo "  verilator / verilator_lint / verilator_compile / verilator_run / verilator_clean"
	@echo "  clean"
	@echo ""
	@echo "TESTNAME (default uart_smoke_test) selects the UVM test."
	@echo "UVM_HOME (for Verilator) = $(UVM_HOME)"

# UVM check -- needed ONLY for Verilator
.PHONY: check_uvm_home
check_uvm_home:
	@if [ ! -f "$(UVM_HOME)/uvm_pkg.sv" ]; then \
		echo "ERROR: uvm_pkg.sv not found in $(UVM_HOME)"; \
		exit 1; \
	fi
	@echo "UVM_HOME = $(UVM_HOME)"

# ============================================================
# Vivado -- uses Vivado's OWN precompiled UVM via -L uvm
# ============================================================
.PHONY: vivado_compile
vivado_compile:
	@echo ""
	@echo "=================================================="
	@echo "  Vivado: xvlog (compile)"
	@echo "=================================================="
	@mkdir -p "$(VIVADO_LOG_DIR)" "$(VIVADO_WORK_DIR)"
	$(XVLOG) -sv \
		-L uvm \
		-i "$(PROJECT_DIR)/../rtl" \
		-i "$(PROJECT_DIR)/../interface" \
		-i "$(PROJECT_DIR)/../agent" \
		-i "$(PROJECT_DIR)/../agent/sequences" \
		-i "$(PROJECT_DIR)/../env" \
		-i "$(PROJECT_DIR)/../tests" \
		-i "$(PROJECT_DIR)/../assertions" \
		-i "$(PROJECT_DIR)/../top" \
		-f "$(FILELIST)" \
		--log "$(VIVADO_LOG_DIR)/xvlog.log"
	@echo "xvlog finished. Log: vivado_logs/xvlog.log"

.PHONY: vivado_elaborate
vivado_elaborate:
	@echo ""
	@echo "=================================================="
	@echo "  Vivado: xelab (elaborate)"
	@echo "=================================================="
	@mkdir -p "$(VIVADO_LOG_DIR)" "$(VIVADO_WORK_DIR)"
	$(XELAB) -L uvm \
		--timescale 1ns/1ps \
		$(TOP) \
		-s $(TOP)_sim \
		--log "$(VIVADO_LOG_DIR)/xelab.log"
	@echo "xelab finished. Log: vivado_logs/xelab.log"

.PHONY: vivado_run
vivado_run:
	@echo ""
	@echo "=================================================="
	@echo "  Vivado: xsim (run)  Test: $(TESTNAME)  Seed: $(SEED)"
	@echo "=================================================="
	@mkdir -p "$(VIVADO_LOG_DIR)" "$(VIVADO_WORK_DIR)"
	$(XSIM) $(TOP)_sim \
		--runall \
		--testplusarg UVM_TESTNAME=$(TESTNAME) \
		--testplusarg UVM_VERBOSITY=UVM_MEDIUM \
		--sv_seed $(SEED) \
		--log "$(VIVADO_LOG_DIR)/$(TESTNAME).log"
	@echo "xsim finished. Log: vivado_logs/$(TESTNAME).log"

.PHONY: vivado
vivado: vivado_compile vivado_elaborate vivado_run
	@echo "=== Vivado flow complete ==="

.PHONY: vivado_clean
vivado_clean:
	rm -rf "$(VIVADO_LOG_DIR)" "$(VIVADO_WORK_DIR)"
	rm -rf xsim.dir *.jou *.pb *.wdb
	@echo "Vivado clean complete."

# ============================================================
# Verilator -- uses external UVM_HOME
# ============================================================
.PHONY: verilator_lint
verilator_lint: check_uvm_home
	@echo ""
	@echo "=================================================="
	@echo "  Verilator: lint"
	@echo "=================================================="
	@mkdir -p "$(VERILATOR_LOG_DIR)"
	$(VL) --lint-only \
		-sv \
		--top-module $(TOP) \
		--timescale 1ns/1ps \
		-Wall -Wno-fatal \
		-Wno-UNOPTFLAT -Wno-UNUSEDSIGNAL -Wno-DECLFILENAME \
		-Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		-Wno-COVERIGN -Wno-EOFNEWLINE -Wno-IMPORTSTAR \
		-Wno-UNDRIVEN -Wno-UNSIGNED \
		"$(UVM_HOME)/uvm_pkg.sv" \
		-f "$(FILELIST)" \
		+incdir+"$(UVM_HOME)" \
		+define+UVM_NO_DPI \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/verilator_lint.log"
	@echo "Verilator lint finished."

.PHONY: verilator_compile
verilator_compile: check_uvm_home
	@echo ""
	@echo "=================================================="
	@echo "  Verilator: compile"
	@echo "=================================================="
	@mkdir -p "$(VERILATOR_LOG_DIR)" "$(VERILATOR_WORK_DIR)"
	@set -o pipefail; \
	$(VL) --binary \
		-sv \
		--Mdir "$(VERILATOR_WORK_DIR)" \
		--top-module $(TOP) \
		--timescale 1ns/1ps \
		--build-jobs 4 \
		-CFLAGS "-O0" \
		--trace --trace-depth 2 \
		-Wall -Wno-fatal \
		-Wno-UNOPTFLAT -Wno-UNUSEDSIGNAL -Wno-DECLFILENAME \
		-Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		-Wno-COVERIGN -Wno-EOFNEWLINE -Wno-IMPORTSTAR \
		-Wno-UNDRIVEN -Wno-UNSIGNED \
		"$(UVM_HOME)/uvm_pkg.sv" \
		-f "$(FILELIST)" \
		+incdir+"$(UVM_HOME)" \
		+define+UVM_NO_DPI \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/verilator_compile.log"
	@if [ ! -f "$(VERILATOR_WORK_DIR)/V$(TOP)" ]; then \
		echo ""; \
		echo "ERROR: Verilator build failed - V$(TOP) not produced."; \
		echo "See $(VERILATOR_LOG_DIR)/verilator_compile.log"; \
		exit 1; \
	fi
	@echo "Verilator compile finished."
	@echo "Executable: $(VERILATOR_WORK_DIR)/V$(TOP)"

.PHONY: verilator_run
verilator_run:
	@echo ""
	@echo "=================================================="
	@echo "  Verilator: run  Test: $(TESTNAME)"
	@echo "=================================================="
	@if [ ! -f "$(VERILATOR_WORK_DIR)/V$(TOP)" ]; then \
		echo "ERROR: $(VERILATOR_WORK_DIR)/V$(TOP) not found."; \
		echo "       Run 'make verilator_compile' first."; \
		exit 1; \
	fi
	"$(VERILATOR_WORK_DIR)/V$(TOP)" \
		+UVM_TESTNAME=$(TESTNAME) \
		+UVM_VERBOSITY=UVM_MEDIUM \
		+UVM_NO_RELNOTES \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/$(TESTNAME).log"
	@echo "Verilator run finished. Log: verilator_logs/$(TESTNAME).log"

.PHONY: verilator
verilator: verilator_compile verilator_run
	@echo "=== Verilator flow complete ==="

.PHONY: verilator_clean
verilator_clean:
	rm -rf "$(VERILATOR_LOG_DIR)" "$(VERILATOR_WORK_DIR)"
	@echo "Verilator clean complete."

.PHONY: clean
clean: vivado_clean verilator_clean
	@echo "All clean."
