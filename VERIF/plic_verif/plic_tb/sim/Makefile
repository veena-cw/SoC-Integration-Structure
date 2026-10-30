PROJECT_ROOT := $(abspath $(dir $(lastword $(MAKEFILE_LIST)))/..)
SIM_DIR      := $(PROJECT_ROOT)/sim
SOC_ROOT     := $(abspath $(PROJECT_ROOT)/../../..)

# Every tool recipe first sources the SoC environment (sets REPO_ROOT, which
# the filelists use) and then returns to the directory make was started from
SHELL     := /bin/bash
SETUP_ENV := cd $(SOC_ROOT) && source ./source_file.sh && cd $(CURDIR) &&

# Parse-time fallback, so UVM_HOME resolves even without a sourced shell
REPO_ROOT ?= $(SOC_ROOT)
export REPO_ROOT

UVM_HOME := $(REPO_ROOT)/VERIF/uvm-1.1d
UVM_SRC  := $(UVM_HOME)/src




UVM_PKG := $(UVM_SRC)/uvm_pkg.sv
#FILELIST := $(SIM_DIR)/apb_filelist.f
FILELIST := $(SIM_DIR)/ahb_filelist.f

TOP      := plic_test_top
TESTNAME ?= plic_base_test



# ==================================================
# Verilator
# ==================================================

VERILATOR_MDIR  := $(SIM_DIR)/verilator_obj_dir
VERILATOR_EXE   := $(VERILATOR_MDIR)/V$(TOP)
VERILATOR_STAMP := $(SIM_DIR)/.verilator_build

VERILATOR_LOG_DIR := $(SIM_DIR)/verilator_log

VERILATOR_HOME_DEFAULT := /opt/verilator-5.052
VERILATOR_VERSION      := 5.052
ifeq ($(VERILATOR_HOME),)
  VERILATOR_HOME := $(VERILATOR_HOME_DEFAULT)
endif
VERILATOR     := $(VERILATOR_HOME)/bin/verilator
VERILATOR_COV := $(VERILATOR_HOME)/bin/verilator_coverage


# ==================================================
# Coverage
#   COVERAGE=1 (default): code coverage on the DUT (line/branch/expr/toggle)
#                         + functional coverage (covergroups, cover property)
#   COVERAGE=0          : plain build, no coverage.dat written
# ==================================================

COVERAGE ?= 1

COV_DIR       := $(SIM_DIR)/coverage
COV_TEST_DIR  := $(COV_DIR)/tests
COV_MERGED    := $(COV_DIR)/merged.dat
COV_CODE      := $(COV_DIR)/code_coverage.dat
COV_ANNOTATE  := $(COV_DIR)/annotate
COV_VLT       := $(SIM_DIR)/coverage_scope.vlt
CODE_COV_TYPES := line branch expr toggle
FCOV_REPORT   := $(PROJECT_ROOT)/scripts/plic_fcov_report.py

ifeq ($(COVERAGE),1)
  COV_FLAGS := --coverage-line --coverage-toggle --coverage-expr --coverage-user $(COV_VLT)
else
  COV_FLAGS :=
endif

# Rebuild when COVERAGE changes: the stamp depends on this file, which is
# rewritten only when the flags differ from the last build
VERILATOR_FLAGS_FILE := $(SIM_DIR)/.verilator_flags
$(shell mkdir -p $(SIM_DIR); echo '$(COV_FLAGS)' | cmp -s - $(VERILATOR_FLAGS_FILE) || echo '$(COV_FLAGS)' > $(VERILATOR_FLAGS_FILE))


# ==================================================
# VERILATOR
# ==================================================




# --------------------------------------------------
# Verilator Build
# --------------------------------------------------

verilator-build: $(VERILATOR_STAMP)


# Rebuild when any testbench source changes, not only the filelist
TB_SOURCES := $(shell find $(PROJECT_ROOT) -name '*.sv')

# --filter-type takes ONE type per call (a regex alternation matches nothing),
# so cov-report filters each type of CODE_COV_TYPES and merges them

# Code coverage scope = DUT only: exclude UVM, the std package and every
# TB file of the filelist (by basename, relative paths resolve via +incdir)
$(COV_VLT): $(FILELIST)
	@echo "\`verilator_config" > $@
	@echo 'coverage_off -file "*uvm*"' >> $@
	@echo 'coverage_off -file "*verilated_std.sv"' >> $@
	@grep -vE '^\s*(#|//|-f|\+)' $(FILELIST) | grep -v '/DSN/' | grep '\.sv' | \
		xargs -n1 basename | sort -u | \
		sed 's/.*/coverage_off -file "*\/&"/' >> $@

$(VERILATOR_STAMP): $(FILELIST) $(SOURCE_FILES) $(TB_SOURCES) $(VERILATOR_FLAGS_FILE) $(if $(filter 1,$(COVERAGE)),$(COV_VLT))

	@echo "========================================"
	@echo "        VERILATOR BUILD"
	@echo "========================================"

	@mkdir -p $(VERILATOR_LOG_DIR)

	$(SETUP_ENV) cd $(SIM_DIR) && \
	$(VERILATOR) \
		--binary \
		-j 0 \
		--timing \
		--trace \
		--language 1800-2012 \
		--top-module $(TOP) \
		+define+UVM_NO_DPI \
		+incdir+$(UVM_SRC) \
		-f $(FILELIST) \
		--Mdir $(VERILATOR_MDIR) \
		$(COV_FLAGS) \
		-Wno-WIDTHEXPAND \
		-Wno-WIDTHTRUNC \
		-Wno-UNSIGNED \
		-Wno-PINMISSING \
		-Wno-IMPLICIT \
		-Wno-IGNOREDRETURN \
		-Wno-MODDUP \
		-Wno-IGNOREDRETURN

	@touch $@


# --------------------------------------------------
# Verilator Simulation
# --------------------------------------------------

verilator-sim: verilator-build

	@mkdir -p $(VERILATOR_LOG_DIR) $(COV_TEST_DIR)

	@echo "========================================"
	@echo "        VERILATOR SIMULATION"
	@echo "        TEST = $(TESTNAME)"
	@echo "        LOG  = verilator_log/$(TESTNAME).log"
	@echo "========================================"

	$(SETUP_ENV) cd $(SIM_DIR) && \
	$(VERILATOR_EXE) \
		+UVM_TESTNAME=$(TESTNAME) \
		+verilator+coverage+file+$(COV_TEST_DIR)/$(TESTNAME).dat \
		2>&1 | tee $(VERILATOR_LOG_DIR)/$(TESTNAME).log
		
# --------------------------------------------------
# Verilator Regression: every test in TESTLIST, PASS/FAIL summary,
# then merges the per-test coverage and writes the reports (COVERAGE=1)
#   make verilator-regression
# --------------------------------------------------

TESTLIST ?= $(PROJECT_ROOT)/../testnames/plic_test_cases

verilator-regression: verilator-build

	@mkdir -p $(VERILATOR_LOG_DIR) $(COV_TEST_DIR)
	@rm -f $(COV_TEST_DIR)/*.dat
	@$(SETUP_ENV) fail=0; \
	for t in $$(grep -v '^\s*#' $(TESTLIST)); do \
		cd $(SIM_DIR) && $(VERILATOR_EXE) +UVM_TESTNAME=$$t \
			+verilator+coverage+file+$(COV_TEST_DIR)/$$t.dat > $(VERILATOR_LOG_DIR)/$$t.log 2>&1; \
		if grep -q "$$t : PASSED" $(VERILATOR_LOG_DIR)/$$t.log && \
		   ! grep -qE "UVM_(ERROR|FATAL) *: *[1-9]" $(VERILATOR_LOG_DIR)/$$t.log; then \
			echo ">>> PASS: $$t"; \
		else \
			echo ">>> FAIL: $$t  (verilator_log/$$t.log)"; fail=1; \
		fi; \
	done; \
	if [ "$(COVERAGE)" = "1" ]; then $(MAKE) --no-print-directory -f $(SIM_DIR)/Makefile cov-report; fi; \
	if [ $$fail -eq 0 ]; then echo "REGRESSION PASSED"; else echo "REGRESSION FAILED"; exit 1; fi

# --------------------------------------------------
# Coverage merge + reports (also usable on its own after runs)
#   make cov-merge   : coverage/tests/*.dat -> coverage/merged.dat
#   make cov-report  : merge, code coverage summary + annotated sources,
#                      functional coverage report (overall and per test)
# --------------------------------------------------

cov-merge:
	@if ! ls $(COV_TEST_DIR)/*.dat >/dev/null 2>&1; then \
		echo "ERROR: no coverage .dat files in $(COV_TEST_DIR)"; exit 1; fi
	@$(SETUP_ENV) $(VERILATOR_COV) --write $(COV_MERGED) $(COV_TEST_DIR)/*.dat
	@echo "Merged $$(ls $(COV_TEST_DIR)/*.dat | wc -l) test(s) -> coverage/merged.dat"

cov-report: cov-merge
	@echo "========================================"
	@echo "        CODE COVERAGE (DUT)"
	@echo "========================================"
	@$(SETUP_ENV) \
	for ty in $(CODE_COV_TYPES); do \
		$(VERILATOR_COV) --filter-type $$ty --write $(COV_DIR)/.code_$$ty.dat $(COV_MERGED) || exit 1; \
	done && \
	$(VERILATOR_COV) --write $(COV_CODE) $(foreach ty,$(CODE_COV_TYPES),$(COV_DIR)/.code_$(ty).dat) && \
	rm -f $(COV_DIR)/.code_*.dat && \
	$(VERILATOR_COV) $(COV_CODE) | tee $(COV_DIR)/code_coverage_summary.txt && \
	rm -rf $(COV_ANNOTATE) && \
	$(VERILATOR_COV) --annotate $(COV_ANNOTATE) --annotate-min 1 $(COV_CODE) | grep -A1 'Annotation Summary' && \
	$(VERILATOR_COV) --write-info $(COV_DIR)/code_coverage.info $(COV_CODE) && \
	$(VERILATOR_COV) --rank $(COV_TEST_DIR)/*.dat > $(COV_DIR)/test_rank.txt 2>&1; \
	echo "Annotated sources : coverage/annotate/  (lines marked %000000 are uncovered)"
	@echo "========================================"
	@echo "        FUNCTIONAL COVERAGE"
	@echo "========================================"
	@$(SETUP_ENV) \
	python3 $(FCOV_REPORT) --per-test $(COV_TEST_DIR)/*.dat -o $(COV_DIR)/fcov_per_test.txt && echo && \
	python3 $(FCOV_REPORT) $(COV_MERGED) -o $(COV_DIR)/fcov_report.txt
	@echo "Reports in sim/coverage/: code_coverage_summary.txt fcov_report.txt fcov_per_test.txt test_rank.txt code_coverage.info"

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

	$(SETUP_ENV) cd $(SIM_DIR) && \
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

	$(SETUP_ENV) cd $(SIM_DIR) && \
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

	$(SETUP_ENV) cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"

vivado-sim: 
	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="
	$(SETUP_ENV) cd $(SIM_DIR) && \
	xsim $(TOP)_sim \
		--gui \
		--testplusarg "UVM_TESTNAME=$(TESTNAME)"
	
vivado-nogui: 
	@echo "=============================="
	@echo " VIVADO SIMULATION"
	@echo " TEST = $(TESTNAME)"
	@echo "=============================="
	$(SETUP_ENV) cd $(SIM_DIR) && \
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
	rm -rf $(VERILATOR_MDIR)
	rm -f $(VERILATOR_STAMP) $(VERILATOR_FLAGS_FILE) $(COV_VLT)
	rm -rf $(COV_DIR)
	


.PHONY: vivado vivado-compile vivado-elab verilator-sim verilator-build verilator verilator-regression clean