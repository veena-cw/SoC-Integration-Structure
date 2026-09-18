PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim

UVM_HOME := /home/cw028_harish/uvm-1.1d

FILELIST := $(SIM_DIR)/i2c_tb_filelist.f

TOP      := test_top
TESTNAME ?= apb_i2c_reg_write_read_test


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


.PHONY: vivado vivado-compile vivado-elab clean
