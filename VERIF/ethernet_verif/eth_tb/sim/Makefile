PROJECT := $(CURDIR)
TAXI_FL := $(PROJECT)/sim/taxi_sources.f
FULL_FL := $(PROJECT)/sim/complete_sources.f
TOP := tb_eth_dma_mac_datapath
SNAP := tb_sim

.PHONY: help clean list_rtl vivado_compile vivado_elab vivado_sim vivado verilator_lint verilator_compile verilator_run verilator
help:
	@echo "make vivado            # compile + elaborate + run self-checking integrated datapath test"
	@echo "make verilator         # lint + compile + run same self-checking integrated datapath test"
	@echo "make vivado_compile"
	@echo "make vivado_elab"
	@echo "make vivado_sim"
	@echo "make verilator_lint"
	@echo "make clean"
list_rtl:
	@cat $(TAXI_FL)
vivado_compile:
	rm -rf xsim.dir .Xil xvlog.log xvlog.pb
	xvlog -sv -f $(FULL_FL)
vivado_elab: vivado_compile
	xelab $(TOP) -s $(SNAP) -debug typical
vivado_sim: vivado_elab
	xsim $(SNAP) -runall
vivado: vivado_sim
verilator_lint:
	verilator --lint-only --timing -Wall -Wno-fatal -f $(FULL_FL) --top-module $(TOP)
verilator_compile:
	verilator --binary --timing -Wall -Wno-fatal -f $(FULL_FL) --top-module $(TOP) -Mdir obj_dir
verilator_run: verilator_compile
	./obj_dir/V$(TOP)
verilator: verilator_lint verilator_run
clean:
	rm -rf obj_dir xsim.dir .Xil *.log *.jou *.pb $(SNAP).wdb
