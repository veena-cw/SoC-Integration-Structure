# NoC UVM simulation flow for Verilator 5.052
# Run this Makefile from: NoC_tb/sim

SHELL := /bin/bash

ROOT := ..

VERILATOR ?= verilator
REQUIRED_VLT ?= 5.052

TOP ?= NoC_top
TEST ?= NoC_base_test
SEED ?= 1
JOBS ?= 0

BUILD_DIR ?= build/verilator
OBJ_DIR := $(BUILD_DIR)/obj_dir
SIM_EXE := $(OBJ_DIR)/V$(TOP)

# Set this to the directory containing src/uvm_pkg.sv.
# Example:
# make run UVM_HOME=/home/user/uvm-1.2
UVM_HOME ?= $(shell \
	for d in "$${UVM_HOME:-}" /usr/share/uvm /usr/local/share/uvm; do \
		if [ -f "$$d/src/uvm_pkg.sv" ]; then echo "$$d"; break; fi; \
	done)

# Testbench sources. NoC_package.sv includes the UVM class files.
TB_SRCS := \
	$(ROOT)/interface/NoC_master_interface.sv \
	$(ROOT)/interface/NoC_slave_interface.sv \
	$(ROOT)/interface/NoC_reset_interface.sv \
	$(ROOT)/assertion/NoC_assertions.sv \
	$(ROOT)/env/NoC_package.sv \
	$(ROOT)/top/NoC_top.sv

TB_INC_DIRS := \
	-I$(ROOT)/interface \
	-I$(ROOT)/agent/master_agent \
	-I$(ROOT)/agent/slave_agent \
	-I$(ROOT)/agent/reset_agent \
	-I$(ROOT)/env \
	-I$(ROOT)/test \
	-I$(ROOT)/assertion \
	-I$(ROOT)/top

# Pass the RTL file list from the sim directory, for example:
# RTL_FILELIST=../../rtl/filelist.f
RTL_FILELIST ?=
RTL_SRCS ?=

ifneq ($(strip $(UVM_HOME)),)
UVM_INC_DIRS := -I$(UVM_HOME)/src -I$(UVM_HOME)/src/uvm
UVM_SRCS := $(UVM_HOME)/src/uvm_pkg.sv
else
UVM_INC_DIRS :=
UVM_SRCS :=
endif

VLT_FLAGS := \
	--sv \
	--timing \
	--binary \
	--top-module $(TOP) \
	--Mdir $(OBJ_DIR) \
	--prefix V$(TOP) \
	--Wno-fatal \
	--Wno-DECLFILENAME \
	--Wno-TIMESCALEMOD

ifneq ($(WAVES),)
VLT_FLAGS += --trace --trace-structs
endif

ifneq ($(JOBS),0)
VLT_FLAGS += -j $(JOBS)
endif

VLT_INPUTS := $(TB_INC_DIRS) $(UVM_INC_DIRS) $(UVM_SRCS) $(TB_SRCS) $(RTL_SRCS)

ifneq ($(strip $(RTL_FILELIST)),)
VLT_INPUTS += -f $(RTL_FILELIST)
endif

.PHONY: all help version check compile run clean distclean

all: run

help:
	@echo "NoC Verilator 5.052 flow"
	@echo "make check   - check Verilator, UVM, top module, and RTL inputs"
	@echo "make compile - compile the design"
	@echo "make run     - compile and run the UVM test"
	@echo "make clean   - remove Verilator build files"
	@echo ""
	@echo "Example:"
	@echo "make run UVM_HOME=/path/to/uvm TOP=NoC_top RTL_FILELIST=../../rtl/filelist.f TEST=NoC_base_test SEED=1"

version:
	@$(VERILATOR) --version

check:
	@command -v $(VERILATOR) >/dev/null 2>&1 || { echo "ERROR: Verilator was not found in PATH"; exit 2; }
	@actual=$$($(VERILATOR) --version | sed -n 's/.*Verilator \([0-9][0-9.]*\).*/\1/p'); \
	if [ "$$actual" != "$(REQUIRED_VLT)" ]; then \
		echo "WARNING: required Verilator $(REQUIRED_VLT), found $$actual"; \
	fi
	@if [ -z "$(UVM_HOME)" ] || [ ! -f "$(UVM_HOME)/src/uvm_pkg.sv" ]; then \
		echo "ERROR: set UVM_HOME to a directory containing src/uvm_pkg.sv"; \
		exit 2; \
	fi
	@top_file=$$(for f in $(TB_SRCS); do \
		[ -f "$$f" ] && printf '%s\n' "$$f"; \
	done | xargs -r grep -l -E "^[[:space:]]*module[[:space:]]+$(TOP)([[:space:](]|$$)" | head -n1); \
	if [ -z "$$top_file" ]; then \
		echo "ERROR: module $(TOP) was not found in TB_SRCS"; \
		echo "Set TOP to the real testbench top module"; \
		exit 2; \
	fi
	@if [ -z "$(strip $(RTL_FILELIST)$(RTL_SRCS))" ]; then \
		echo "WARNING: no RTL source list supplied"; \
	fi

compile: check
	@mkdir -p $(BUILD_DIR)
	$(VERILATOR) $(VLT_FLAGS) $(VLT_INPUTS)

run: compile
	$(SIM_EXE) +UVM_TESTNAME=$(TEST) +ntb_random_seed=$(SEED) $(PLUSARGS)

clean:
	rm -rf $(BUILD_DIR)

distclean: clean
	rm -f *.log *.vcd *.fst
