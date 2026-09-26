PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim


UVM_HOME := $(REPO_ROOT)/VERIF/uvm-1.1d
UVM_SRC  := $(UVM_HOME)/src




UVM_PKG := $(UVM_SRC)/uvm_pkg.sv
#FILELIST := $(SIM_DIR)/apb_filelist.f
FILELIST := $(SIM_DIR)/ahb_filelist.f

TOP      := plic_ahb_test_top
TESTNAME ?= plic_base_test



# ==================================================
# Verilator
# ==================================================

VERILATOR_MDIR  := $(SIM_DIR)/verilator_obj_dir
VERILATOR_EXE   := $(VERILATOR_MDIR)/V$(TOP)
VERILATOR_STAMP := $(SIM_DIR)/.verilator_build

VERILATOR_LOG_DIR := $(SIM_DIR)/verilator_log


# ==================================================
# VERILATOR
# ==================================================

verilator: verilator-sim


# --------------------------------------------------
# Verilator Build
# --------------------------------------------------

verilator-build: $(VERILATOR_STAMP)


$(VERILATOR_STAMP): $(FILELIST) $(SOURCE_FILES)

	@echo "========================================"
	@echo "        VERILATOR BUILD"
	@echo "========================================"

	@mkdir -p $(VERILATOR_LOG_DIR)

	cd $(SIM_DIR) && \
	verilator \
		--binary \
		--timing \
		--trace \
		--language 1800-2012 \
		--top-module $(TOP) \
		+define+UVM_NO_DPI \
		+incdir+$(UVM_SRC) \
		-f $(FILELIST) \
		--Mdir $(VERILATOR_MDIR) \
		-Wno-WIDTHEXPAND \
		-Wno-WIDTHTRUNC \
		-Wno-UNSIGNED \
		-Wno-PINMISSING \
		-Wno-IMPLICIT \
		-Wno-IGNOREDRETURN

	@touch $@


# --------------------------------------------------
# Verilator Simulation
# --------------------------------------------------

verilator-sim: verilator-build

	@mkdir -p $(VERILATOR_LOG_DIR)

	@echo "========================================"
	@echo "        VERILATOR SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "        LOG  = verilator_log/$(TESTNAME).log"
	@echo "========================================"

	cd $(SIM_DIR) && \
	$(VERILATOR_EXE) \
		+UVM_TESTNAME=$(TESTNAME) \
		2>&1 | tee $(VERILATOR_LOG_DIR)/$(TESTNAME).log
		
# ============================================================
# Waveform
# ============================================================

WAVEFORM := $(SIM_DIR)/dump.vcd

# ============================================================
# Run simulation + Open GTKWave
# ============================================================

waveform: verilator-sim
	@echo "=========================================="
	@echo "        OPENING GTKWave"
	@echo "=========================================="

	@if [ -f "$(WAVEFORM)" ]; then \
		gtkwave "$(WAVEFORM)" & \
	else \
		echo "ERROR: Waveform file not found: $(WAVEFORM)"; \
		exit 1; \
	fi



# ==================================================
# Vivado Compile
# ==================================================

vivado-compile:
	@echo "=============================="
	@echo " VIVADO COMPILE"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xvlog -sv \
		-L uvm \
		-f $(FILELIST)


# ==================================================
# Vivado Elaborate
# ==================================================

vivado-elab: vivado-compile
	@echo "=============================="
	@echo " VIVADO ELABORATE"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xelab $(TOP) \
		-s $(TOP)_sim


# ==================================================
# Vivado Simulation
# ==================================================

vivado: vivado-elab
	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="

	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"

vivado-sim: 
	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="
	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"
	
vivado-nogui: 
	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="
	cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--runall \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"	
# ==================================================
# Clean
# ==================================================

clean:
	rm -rf $(SIM_DIR)/xsim.dir
	rm -rf $(SIM_DIR)/.Xil
	rm -rf $(SIM_DIR)/$(TOP)_sim*
	rm -f $(SIM_DIR)/xvlog.pb
	rm -rf verilator_obj_dir
	rm -f .verilator_build
	


.PHONY: vivado vivado-compile vivado-elab verilator-sim verilator-build verilator clean