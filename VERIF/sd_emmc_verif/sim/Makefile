#==================================================================================
#  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
#==================================================================================

SHELL       := /bin/bash
.SHELLFLAGS := -o pipefail -c

###############################################################################
# Paths and Directories
###############################################################################

ROOT           := $(abspath $(dir $(lastword $(MAKEFILE_LIST))))
REPO_ROOT      := $(abspath $(ROOT)/..)
REPO_PARENT    := $(abspath $(REPO_ROOT)/..)
REPO_NAME      := $(notdir $(REPO_ROOT))
PROJ_NAME      := $(notdir $(ROOT))
SCRIPT_DIR     = $(ROOT)/scripts
BUILD_DIR      = $(ROOT)/build
WORK           = $(BUILD_DIR)/work
LOG_DIR        = $(ROOT)/logs
WAVE_DIR       = $(ROOT)/waves
REGR_FILE      = $(ROOT)/filelists/tests.f
TOP            = tb_top

# ==============================================================================
# Local RTL Paths & Filelist Setup (Current Local Copy in SD_eMMC_2710)
# ==============================================================================
RTL_DIR_1 := $(abspath $(ROOT)/../../sd_emmc_dsn/sd_emmc/rtl)
RTL_DIR_2 := $(abspath $(ROOT)/../../sd_emmc_dsn/async_fifo/rtl)

RTL_FILELIST   := $(BUILD_DIR)/rtl.f
TB_FILELIST    := $(ROOT)/filelist.f
UVM_FILELIST   := $(ROOT)/filelist.f

XVLOG_RTL_FILELIST = $(BUILD_DIR)/rtl.xvlog.f
XVLOG_UVM_FILELIST = $(BUILD_DIR)/uvm.xvlog.f
TB_FILE        = $(ROOT)/../top/$(TOP).sv

.PHONY: gen_local_rtl_f

gen_local_rtl_f:
	@mkdir -p $(BUILD_DIR)
	@echo "Generating local RTL filelist..."
	@find $(RTL_DIR_1) $(RTL_DIR_2) -type f \( -name "*.v" -o -name "*.sv" -o -name "*.vh" -o -name "*.svh" -o -name "*.h" \) > $(RTL_FILELIST)

$(RTL_FILELIST): gen_local_rtl_f

lint compile: gen_local_rtl_f

###############################################################################
# UVM Configuration
###############################################################################

#UVM_HOME ?= /home/cw001_sujatha/Desktop/Test1/SD_eMMC/SD_eMMC_2809/SoC-Integration-Structure/VERIF/uvm-1.1d/src
override UVM_HOME = /home/cw001_sujatha/Desktop/Test1/SD_eMMC/SD_eMMC_2809/SoC-Integration-Structure/VERIF/uvm-1.1d/src
UVM_PKG   = $(UVM_HOME)/uvm_pkg.sv

###############################################################################
# Test Inputs
###############################################################################

TESTNAME      ?= base_test
UVM_VERBOSITY ?= UVM_MEDIUM
SEED          ?= 1

###############################################################################
# Simulator Selection
###############################################################################

SIM ?= verilator

ifneq ($(filter verilator,$(MAKECMDGOALS)),)
	SIM := verilator
endif

ifneq ($(filter vivado,$(MAKECMDGOALS)),)
	SIM := vivado
endif

###############################################################################
# Vivado Flags
###############################################################################

XVLOG = xvlog
XELAB = xelab
XSIM  = xsim
XCRG  = xcrg

XVLOG_FLAGS = -sv -L uvm
XELAB_FLAGS = -L uvm --timescale 1ns/1ps -debug typical
XSIM_SNAPSHOT = $(BUILD_DIR)/xsim.dir/$(TOP)/xsimk

###############################################################################
# Verilator Configuration
###############################################################################

VERILATOR ?= verilator
VERILATOR_BUILD_DIR ?= $(ROOT)/verilator_build
VERILATOR_TOP ?= $(TOP)
VERILATOR_EXE = $(VERILATOR_BUILD_DIR)/V$(VERILATOR_TOP)

VERILATOR_FLAGS = --binary -sv --build --cc --Mdir $(VERILATOR_BUILD_DIR) \
                  --error-limit 100 --converge-limit 10000000 -Wall \
                  --timescale 1ns/1ps --trace --trace-depth 99 --top-module $(VERILATOR_TOP) -Wno-RANDC

DEV ?= 1
ifeq ($(DEV),1)
VERILATOR_FLAGS += -j 0 --output-split 20000 --output-split-cfuncs 20000
export OBJCACHE   := ccache
export OPT_FAST   := -O0
export OPT_SLOW   := -O0
export OPT_GLOBAL := -O0
endif

DISABLED_WARNINGS = -Wno-UNOPTFLAT -Wno-DECLFILENAME -Wno-CONSTRAINTIGN -Wno-VARHIDDEN \
                    -Wno-WIDTHTRUNC -Wno-CASTCONST -Wno-WIDTHEXPAND -Wno-UNDRIVEN \
                    -Wno-UNUSEDSIGNAL -Wno-UNUSEDPARAM -Wno-SYMRSVDWORD -Wno-ZERODLY \
                    -Wno-CASEINCOMPLETE -Wno-fatal -Wno-REALCVT -Wno-PINCONNECTEMPTY \
                    -Wno-LATCH -Wno-GENUNNAMED -Wno-COVERIGN -Wno-EOFNEWLINE \
                    -Wno-CMPCONST -Wno-IMPORTSTAR -Wno-SYNCASYNCNET -Wno-ASCRANGE \
                    -Wno-ALWCOMBORDER -Wno-MULTIDRIVEN -Wno-INCABSPATH -Wno-IMPLICITSTATIC \
                    -Wno-UNUSEDGENVAR -Wno-PROCASSINIT -Wno-MISINDENT -Wno-WIDTH -Wno-UNUSED

# Fixed: Replacing REPO_NAME with ROOT so Verilator looks in your active directory
VERILATOR_INCDIRS = +incdir+$(RTL_DIR_1) \
                    +incdir+$(RTL_DIR_2) \
                    +incdir+"$(UVM_HOME)" \
		    +incdir+$(REPO_ROOT)/env \
                    +incdir+$(REPO_ROOT)/interface \
                    +incdir+$(REPO_ROOT)/agent \
                    +incdir+$(REPO_ROOT)/tests \
                    +incdir+$(REPO_ROOT)/top \
                    +incdir+$(REPO_ROOT)/seq_lib \
                    +incdir+$(REPO_ROOT)/bfm \
                    +incdir+$(REPO_ROOT)/scoreboard 
		    
VERILATOR_DEFINES = +define+SVA_ON +define+UVM_REPORT_DISABLE_FILE_LINE +define+UVM_NO_DPI
#VERILATOR_DEFINES = +define+SVA_ON +define+UVM_REPORT_DISABLE_FILE_LINE +define+UVM_NO_DPI +define+UVM_NO_WAIT_FOR_NBA
VERILATOR_CPP_SRCS =

# Combined Sources
SRCS = -f $(RTL_FILELIST) -f $(UVM_FILELIST)

VERILATOR_SRCS = $(UVM_PKG) \
	 $(if $(RTL_FILELIST),-f $(RTL_FILELIST)) \
                 $(if $(UVM_FILELIST),-f $(UVM_FILELIST))

###############################################################################
# Coverage Configuration
###############################################################################

FCOV ?= 0
CCOV ?= 0
CCOV_TYPE ?= sbct
COV_DIR = $(ROOT)/cov_db

ifeq ($(CCOV),1)
	XELAB_FLAGS += -cc_type $(CCOV_TYPE)
endif

XSIM_COV_FLAGS :=
ifneq (,$(filter 1,$(FCOV) $(CCOV)))
	XELAB_FLAGS += -coverage
	XSIM_COV_FLAGS := -testplusarg coverage -cov_db_name $(TESTNAME) -cov_db_dir $(COV_DIR)
endif

VERILATOR_TEST_ARG = +UVM_TESTNAME=$(TESTNAME) +UVM_VERBOSITY=$(UVM_VERBOSITY)

###############################################################################
# Filelist Tools Helpers
###############################################################################

$(XVLOG_RTL_FILELIST): $(RTL_FILELIST)
	@mkdir -p $(BUILD_DIR)
	@cp $(RTL_FILELIST) $@

$(XVLOG_UVM_FILELIST): $(UVM_FILELIST)
	@mkdir -p $(BUILD_DIR)
	@cp $(UVM_FILELIST) $@

gen-rtl: gen_local_rtl_f

FORCE:

.PHONY: FORCE gen-rtl

###############################################################################
# Verification / Check targets
###############################################################################

check_uvm:
	@echo ""
	@echo "=================================================="
	@echo " Checking UVM"
	@echo "=================================================="
	@echo "UVM_HOME = $(UVM_HOME)"
	@echo "UVM_PKG  = $(UVM_PKG)"
	@echo ""

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
	@echo " TESTNAME             = $(TESTNAME)"
	@echo "=============================================="
	@echo ""

###############################################################################
# Build Rules
###############################################################################

ifeq ($(SIM),vivado)
compile: compile-vivado
else ifeq ($(SIM),verilator)
compile: compile-verilator
endif

compile-vivado: $(XVLOG_RTL_FILELIST) $(XVLOG_UVM_FILELIST)
	@mkdir -p $(WORK)
	$(XVLOG) $(XVLOG_FLAGS) -work work -f $(XVLOG_RTL_FILELIST) -f $(XVLOG_UVM_FILELIST)

VSRCS := $(shell find $(ROOT) \( -name '*.sv' -o -name '*.svh' -o -name '*.v' \)) $(RTL_FILELIST) $(UVM_FILELIST) $(lastword $(MAKEFILE_LIST))

$(VERILATOR_EXE): $(VSRCS) | check_uvm
	@rm -f $(VERILATOR_EXE)
	@echo "=================================================="
	@echo " Compiling using Verilator + UVM"
	@echo "=================================================="
	@mkdir -p $(VERILATOR_BUILD_DIR)
	$(VERILATOR) $(VERILATOR_FLAGS) $(DISABLED_WARNINGS) $(VERILATOR_DEFINES) $(VERILATOR_INCDIRS) $(VERILATOR_SRCS) $(VERILATOR_CPP_SRCS) 2>&1 | tee $(ROOT)/verilator_compile.log

compile-verilator: $(VERILATOR_EXE)

###############################################################################
# Execution Targets
###############################################################################

ifeq ($(SIM),vivado)
elab: elab-vivado
run: run-vivado
else ifeq ($(SIM),verilator)
elab: elab-verilator
run: run-verilator
endif

elab-vivado: compile-vivado
	$(XELAB) $(XELAB_FLAGS) -L work work.$(TOP) -snapshot $(TOP) -mt 8

elab-verilator:
	@echo "Verilator performs elaboration during compilation."

run-vivado: ensure-vivado-snapshot
	@mkdir -p $(LOG_DIR) $(COV_DIR)
	$(XSIM) $(TOP) -testplusarg UVM_TESTNAME=$(TESTNAME) -testplusarg UVM_VERBOSITY=$(UVM_VERBOSITY) -testplusarg UVM_NO_RELNOTES -sv_seed $(SEED) $(XSIM_COV_FLAGS) -log $(LOG_DIR)/$(TESTNAME).log -runall

ensure-vivado-snapshot:
	@if [ -x "$(XSIM_SNAPSHOT)" ]; then echo "== reusing XSim snapshot: $(XSIM_SNAPSHOT)"; else $(MAKE) --no-print-directory elab-vivado; fi

# Fixed: Removed "cd $(REPO_PARENT)" so simulation runs in local sim folder
run-verilator:
	@mkdir -p $(LOG_DIR)
	$(VERILATOR_EXE) $(VERILATOR_TEST_ARG) +UVM_OBJECTION_TRACE 2>&1 | tee $(LOG_DIR)/$(TESTNAME).log

clean:
	rm -rf xsim.dir .simvision .webtalk .Xil *.jou *.log *.pb *.wdb *.vcd *.fst build logs waves regr_logs $(COV_DIR) $(ROOT)/cov_report $(VERILATOR_BUILD_DIR)

.PHONY: compile compile-vivado compile-verilator elab elab-vivado elab-verilator run run-vivado run-verilator clean lint
