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
# Large UVM + coverage builds can exhaust RAM when PCH jobs run in parallel.
BUILD_JOBS ?= 1

XVLOG := xvlog
XELAB := xelab
XSIM  := xsim
VERILATOR    := verilator
VERILATOR_COVERAGE ?= verilator_coverage
VERILATOR_EXE := $(VERILATOR_WORK_DIR)/V$(TOP)

COVERAGE_CFG     := $(PROJECT_DIR)/verilator_coverage.vlt
COVERAGE_DIR     := $(VERILATOR_LOG_DIR)/coverage
COVERAGE_INDIV_DIR := $(COVERAGE_DIR)/individual
COVERAGE_REG_DIR := $(COVERAGE_DIR)/regression
COVERAGE_MERGED  := $(COVERAGE_DIR)/merged.dat
COVERAGE_RAW_INFO := $(COVERAGE_DIR)/raw.info
COVERAGE_INFO    := $(COVERAGE_DIR)/rtl.info
COVERAGE_HTML    := $(COVERAGE_DIR)/html
OVERALL_FUNCTIONAL_SUMMARY := $(COVERAGE_DIR)/overall_functional_summary.txt
OVERALL_CODE_SUMMARY := $(COVERAGE_DIR)/overall_code_summary.txt
REGRESSION_LIST ?= $(PROJECT_DIR)/regression_tests.f
REGRESSION_LOG_DIR := $(VERILATOR_LOG_DIR)/regression
REGRESSION_RESULTS := $(COVERAGE_DIR)/regression_results.txt
# Select a single gap type with GAP_TYPE=branch, expr, toggle or all.
GAP_TYPE ?= all

.PHONY: all
all: vivado

.PHONY: help
help:
	@echo "Targets:"
	@echo "  vivado / vivado_compile / vivado_elaborate / vivado_run / vivado_clean"
	@echo "  verilator / verilator_lint / verilator_compile / verilator_run / verilator_clean"
	@echo "  regression / uart_regression_test / cov_merge / coverage_report / coverage_gaps / functional_coverage"
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
	$(VERILATOR) --lint-only \
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

# ============================================================
# Verilator: coverage-enabled compile and individual tests
# ============================================================
.PHONY: verilator_compile
verilator_compile: check_uvm_home
	@echo "=================================================="
	@echo "  Verilator: compile (coverage enabled)"
	@echo "=================================================="
	@mkdir -p "$(VERILATOR_LOG_DIR)" "$(VERILATOR_WORK_DIR)" "$(COVERAGE_DIR)"
	@test -f "$(COVERAGE_CFG)" || { echo "ERROR: Missing $(COVERAGE_CFG)"; exit 1; }
	@set -o pipefail; \
	$(VERILATOR) --binary \
		-sv \
		--Mdir "$(VERILATOR_WORK_DIR)" \
		--top-module $(TOP) \
		--timescale 1ns/1ps \
		--build-jobs $(BUILD_JOBS) \
		-CFLAGS "-O0" \
		--trace --trace-depth 2 \
		--coverage \
		"$(COVERAGE_CFG)" \
		-Wall -Wno-fatal \
		-Wno-UNOPTFLAT -Wno-UNUSEDSIGNAL -Wno-DECLFILENAME \
		-Wno-WIDTHEXPAND -Wno-WIDTHTRUNC \
		-Wno-COVERIGN -Wno-EOFNEWLINE -Wno-IMPORTSTAR \
		-Wno-UNDRIVEN -Wno-UNSIGNED \
		-Wno-BLKANDNBLK \
		"$(UVM_HOME)/uvm_pkg.sv" \
		-f "$(FILELIST)" \
		+incdir+"$(UVM_HOME)" \
		+define+UVM_NO_DPI \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/verilator_compile.log"
	@test -x "$(VERILATOR_WORK_DIR)/V$(TOP)" || { \
		echo "ERROR: Verilator build failed; see verilator_compile.log"; exit 1; }
	@echo "Verilator coverage-enabled binary: $(VERILATOR_EXE)"

.PHONY: verilator_run
verilator_run:
	@test -x "$(VERILATOR_EXE)" || { echo "ERROR: Run make verilator_compile first"; exit 1; }
	@mkdir -p "$(VERILATOR_LOG_DIR)" "$(COVERAGE_INDIV_DIR)"
	@echo "Verilator test: $(TESTNAME)"
	@set -o pipefail; \
	cd "$(PROJECT_DIR)" && "$(VERILATOR_EXE)" \
		"+UVM_TESTNAME=$(TESTNAME)" \
		"+verilator+seed+$(SEED)" \
		+UVM_VERBOSITY=UVM_MEDIUM +UVM_NO_RELNOTES \
		"+verilator+coverage+file+$(COVERAGE_INDIV_DIR)/$(TESTNAME).dat" \
		2>&1 | tee "$(VERILATOR_LOG_DIR)/$(TESTNAME).log"
	@! grep -Eq 'UVM_(ERROR|FATAL)[[:space:]]*:[[:space:]]*[1-9][0-9]*' \
		"$(VERILATOR_LOG_DIR)/$(TESTNAME).log" || { \
		echo "ERROR: $(TESTNAME) reported UVM errors/fatals"; exit 1; }
	@grep -q -- '--- UVM Report Summary ---' \
		"$(VERILATOR_LOG_DIR)/$(TESTNAME).log" || { \
		echo "ERROR: $(TESTNAME) ended without a UVM summary"; exit 1; }
	@test -s "$(COVERAGE_INDIV_DIR)/$(TESTNAME).dat" || { \
		echo "ERROR: Coverage was not written for $(TESTNAME)"; exit 1; }
	@echo "Individual test complete; functional coverage is shown above."

.PHONY: verilator
verilator: verilator_compile verilator_run
	@echo "=== Individual Verilator test complete ==="

# ============================================================
# Regression: independent UVM_TESTNAME simulations, one executable
# ============================================================
.PHONY: regression uart_regression_test
uart_regression_test: regression
regression: verilator_compile
	@test -f "$(REGRESSION_LIST)" || { \
		echo "ERROR: Missing regression list $(REGRESSION_LIST)"; exit 1; }
	@mkdir -p "$(REGRESSION_LOG_DIR)" "$(COVERAGE_REG_DIR)" "$(COVERAGE_DIR)"
	@rm -f "$(COVERAGE_REG_DIR)"/*.dat "$(COVERAGE_MERGED)"
	@printf '%-32s %s\n' 'TEST' 'RESULT' > "$(REGRESSION_RESULTS)"
	@set -o pipefail; fail=0; count=0; \
	while IFS= read -r test || [ -n "$$test" ]; do \
		test="$${test%%#*}"; test="$$(echo "$$test" | tr -d '[:space:]')"; \
		[ -z "$$test" ] && continue; \
		case "$$test" in *[!a-zA-Z0-9_]*) echo "INVALID test name: $$test"; fail=1; continue;; esac; \
		count=$$((count + 1)); \
		log="$(REGRESSION_LOG_DIR)/$$test.log"; \
		dat="$(COVERAGE_REG_DIR)/$$test.dat"; \
		echo "=================================================="; \
		echo "REGRESSION TEST $$count: $$test"; \
		echo "=================================================="; \
		rc=0; \
		(cd "$(PROJECT_DIR)" && "$(VERILATOR_EXE)" \
			"+UVM_TESTNAME=$$test" "+verilator+seed+$(SEED)" \
			+UVM_VERBOSITY=UVM_MEDIUM +UVM_NO_RELNOTES \
			"+verilator+coverage+file+$$dat") 2>&1 | tee "$$log" || rc=1; \
		if grep -Eq 'UVM_(ERROR|FATAL)[[:space:]]*:[[:space:]]*[1-9][0-9]*' "$$log"; then rc=1; fi; \
		if ! grep -q -- '--- UVM Report Summary ---' "$$log"; then rc=1; fi; \
		if [ ! -s "$$dat" ]; then echo "ERROR: No coverage database for $$test"; rc=1; fi; \
		if [ $$rc -eq 0 ]; then result=PASS; else result=FAIL; fail=1; fi; \
		printf '%-32s %s\n' "$$test" "$$result" | tee -a "$(REGRESSION_RESULTS)"; \
	done < "$(REGRESSION_LIST)"; \
	if [ $$count -eq 0 ]; then echo "ERROR: empty regression list"; exit 1; fi; \
	echo "=================================================="; \
	cat "$(REGRESSION_RESULTS)"; \
	echo "=============================================="; \
	$(MAKE) --no-print-directory coverage_report || fail=1; \
	if [ $$fail -ne 0 ]; then echo 'REGRESSION FAILED'; exit 1; fi; \
	echo 'REGRESSION PASSED'

# Merge only THIS regression's .dat files; never mix in old solo runs.
.PHONY: cov_merge
cov_merge:
	@mkdir -p "$(COVERAGE_DIR)"
	@files=("$(COVERAGE_REG_DIR)"/*.dat); \
	if [ ! -f "$${files[0]}" ]; then echo "ERROR: No regression coverage data; run make regression"; exit 1; fi; \
	$(VERILATOR_COVERAGE) --write "$(COVERAGE_MERGED)" "$${files[@]}"
	@echo "Merged coverage: $(COVERAGE_MERGED)"

# Overall functional summary, overall RTL code summary, merged RTL HTML.
.PHONY: coverage_report functional_coverage
coverage_report: cov_merge
	@set -o pipefail; $(MAKE) --no-print-directory functional_coverage | tee "$(OVERALL_FUNCTIONAL_SUMMARY)"
	@echo "=============================================="
	@echo "REGRESSION: OVERALL RTL CODE COVERAGE"
	@echo "=============================================="
	@command -v lcov >/dev/null && command -v genhtml >/dev/null || { \
		echo "ERROR: install lcov/genhtml for RTL HTML output"; exit 1; }
	@# Export all records, then limit the LCOV report to RTL source paths.
	@$(VERILATOR_COVERAGE) --write-info \
		"$(COVERAGE_RAW_INFO)" "$(COVERAGE_MERGED)"
	@grep -qE '^SF:.*rtl/.*[.]sv' "$(COVERAGE_RAW_INFO)" || { \
		echo "ERROR: No RTL coverage records in merged data. Check --coverage and .vlt settings."; exit 1; }
	@lcov --extract "$(COVERAGE_RAW_INFO)" '*rtl/*.sv' -o "$(COVERAGE_INFO)" --quiet
	@# Verilator emits RTL line/expr/toggle/branch points as generic LCOV BRDA.
	@# LCOV extraction omits BRDA by default. Restore ONLY native RTL branch
	@# points from merged.dat so HTML Branch does not accidentally count toggles.
	@# Keep FN/FNDA untouched: Verilator did not export SV function-call bins.
	@set -o pipefail; awk ' \
		FNR==NR { \
			if ($$0 !~ /^C /) next; \
			q=sprintf("%c",39); first=index($$0,q); last=0; \
			for (z=length($$0); z>first; z--) \
				if (substr($$0,z,1)==q) {last=z; break} \
			if (!first || !last) next; \
			file=type=line=""; \
			nfields=split(substr($$0,first+1,last-first-1),fields,"\001"); \
			for (i=1;i<=nfields;i++) { \
				split(fields[i],entry,"\002"); \
				if (entry[1]=="f") file=entry[2]; \
				else if (entry[1]=="t") type=entry[2]; \
				else if (entry[1]=="l") line=entry[2]; \
			} \
			if (type!="branch" || file !~ /(^|\/)rtl\/[^\/]+[.]sv$$/ || \
				line !~ /^[0-9]+$$/) next; \
			hits=substr($$0,last+1)+0; \
			idx=num[file SUBSEP line]++; \
			data[file]=data[file] sprintf("BRDA:%d,0,%d,%d\n",line,idx,hits); \
			total[file]++; if (hits>0) covered[file]++; \
			next; \
		} \
		/^SF:/ {file=substr($$0,4); print; next} \
		/^end_of_record$$/ { \
			if (total[file]) { \
				printf "%s",data[file]; \
				printf "BRF:%d\nBRH:%d\n",total[file],covered[file]; \
			} \
			print; file=""; next; \
		} \
		{print} \
	' "$(COVERAGE_MERGED)" "$(COVERAGE_INFO)" > "$(COVERAGE_INFO).tmp" && \
		mv "$(COVERAGE_INFO).tmp" "$(COVERAGE_INFO)"
	@printf 'REGRESSION: OVERALL RTL CODE COVERAGE\n' > "$(OVERALL_CODE_SUMMARY)"
	@# Report executable RTL source lines from LCOV, not Verilator basic-block counts.
	@set -o pipefail; summary="$$(lcov --summary "$(COVERAGE_INFO)" 2>&1)" || { echo "ERROR: LCOV summary failed"; exit 1; }; \
		line_info="$$(printf '%s\n' "$$summary" | awk '/^[[:space:]]*lines[.]*:/ {sub(/^[^:]*:[[:space:]]*/, ""); print; exit}')"; \
		[ -n "$$line_info" ] || { echo "ERROR: Missing RTL source-line coverage"; exit 1; }; \
		printf 'RTL code coverage (UVM/testbench excluded):\n' | tee -a "$(OVERALL_CODE_SUMMARY)"; \
		printf '  %-18s: %s\n' "Line" "$$line_info" | tee -a "$(OVERALL_CODE_SUMMARY)"
	@# Count only native code points whose source file belongs to ../rtl/*.sv.
	@# Toggle scope: all internal RTL signals and implemented register bits.
	@# Exclude constant readback upper bits and APB address bits outside the
	@# legal 0x00..0x18 aligned register range. This is a legal-access metric:
	@# raw merged.dat remains unmodified for full RTL/invalid-access auditing.
	@# Do not print detailed uncovered-point lists in the console/report.
	@set -o pipefail; awk ' \
		BEGIN { \
			width["thr_reg"]=8; width["rhr_reg"]=8; \
			width["sr_reg"]=6; width["cr_reg"]=13; \
			width["brdr_reg"]=15; width["ier_reg"]=3; width["isr_reg"]=7; \
			metric[1]="branch"; metric[2]="expr"; metric[3]="toggle"; \
			metric[4]="fsm_state"; metric[5]="fsm_arc"; \
		} \
		/^C / { \
			q=sprintf("%c",39); first=index($$0,q); last=0; \
			for (z=length($$0); z>first; z--) \
				if (substr($$0,z,1)==q) {last=z; break} \
			if (!first || !last) next; \
			file=type=point=""; \
			nfields=split(substr($$0,first+1,last-first-1),fields,"\001"); \
			for (i=1;i<=nfields;i++) { \
				split(fields[i],entry,"\002"); \
				if (entry[1]=="f") file=entry[2]; \
				else if (entry[1]=="t") type=entry[2]; \
				else if (entry[1]=="o") point=entry[2]; \
			} \
			if (file !~ /(^|\/)rtl\/[^\/]+[.]sv$$/) next; \
			if (type!="branch" && type!="expr" && type!="toggle" && \
				type!="fsm_state" && type!="fsm_arc") next; \
			if (type=="toggle" && file ~ /(^|\/)rtl\/uart_apb_top[.]sv$$/ && \
				point ~ /^[A-Za-z_][A-Za-z_0-9]*\[[0-9]+\]:(0->1|1->0)$$/) { \
				reg=point; sub(/\[.*/, "", reg); \
				bit=point; sub(/^[^[]*\[/,"",bit); sub(/\].*/,"",bit); \
				if ((reg in width) && (bit+0)>width[reg]) next; \
				if ((reg=="PADDR" || reg=="addr") && \
				    ((bit+0)<2 || (bit+0)>4)) next; \
				if (reg=="PRDATA" && (bit+0)>=16) next; \
			} \
			hits=substr($$0,last+1)+0; \
			total[type]++; if (hits>0) covered[type]++; \
		} \
		END { \
			if (!total["branch"] || !total["expr"] || !total["toggle"]) { \
				print "ERROR: Missing RTL code coverage points" > "/dev/stderr"; exit 1; \
			} \
			label["branch"]="Branch"; label["expr"]="Expression"; \
			label["toggle"]="Toggle"; label["fsm_state"]="FSM State"; \
			label["fsm_arc"]="FSM Arc"; \
			for(j=1;j<=5;j++) { \
				t=metric[j]; \
				if (total[t]) printf "  %-18s: %6.2f%% (%d/%d)\n", \
					label[t],100*covered[t]/total[t],covered[t],total[t]; \
				else printf "  %-18s: N/A (0/0)\n",label[t]; \
			} \
			print "Toggle scope: all RTL signals, excluding reserved/constant bits and invalid-access-only address bits."; \
		} \
	' "$(COVERAGE_MERGED)" | tee -a "$(OVERALL_CODE_SUMMARY)"
	@genhtml --quiet --branch-coverage "$(COVERAGE_INFO)" \
		--output-directory "$(COVERAGE_HTML)" \
		--title "UART Regression RTL Code Coverage"
	@echo "Overall functional summary: $(OVERALL_FUNCTIONAL_SUMMARY)"
	@echo "RTL code HTML report: $(COVERAGE_HTML)/index.html"

# Diagnostic report: show missed RTL branch/expr/toggle coverage without changing
# normal regression summary, RTL source files, or coverage databases.
# Example: make coverage_gaps GAP_TYPE=toggle
.PHONY: coverage_gaps
coverage_gaps:
	@test -s "$(COVERAGE_MERGED)" || { \
		echo "ERROR: Missing $(COVERAGE_MERGED). Run make coverage_report first."; exit 1; }
	@case "$(GAP_TYPE)" in all|branch|expr|toggle) ;; \
		*) echo "ERROR: GAP_TYPE must be all, branch, expr or toggle"; exit 1 ;; esac
	@awk -v wanted="$(GAP_TYPE)" ' \
		BEGIN { \
			width["thr_reg"]=8; width["rhr_reg"]=8; \
			width["sr_reg"]=6; width["cr_reg"]=13; \
			width["brdr_reg"]=15; width["ier_reg"]=3; width["isr_reg"]=7; \
			kind[1]="branch"; kind[2]="expr"; kind[3]="toggle"; \
		} \
		/^C / { \
			q=sprintf("%c",39); first=index($$0,q); last=0; \
			for (z=length($$0); z>first; z--) \
				if (substr($$0,z,1)==q) {last=z; break} \
			if (!first || !last) next; \
			file=type=point=line=""; \
			nfields=split(substr($$0,first+1,last-first-1),fields,"\001"); \
			for (i=1;i<=nfields;i++) { \
				split(fields[i],entry,"\002"); \
				if (entry[1]=="f") file=entry[2]; \
				else if (entry[1]=="t") type=entry[2]; \
				else if (entry[1]=="o") point=entry[2]; \
				else if (entry[1]=="l") line=entry[2]; \
			} \
			if (file !~ /(^|\/)rtl\/[^\/]+[.]sv$$/) next; \
			if (type!="branch" && type!="expr" && type!="toggle") next; \
			if (wanted!="all" && wanted!=type) next; \
			if (type=="toggle" && file ~ /(^|\/)rtl\/uart_apb_top[.]sv$$/ && \
				point ~ /^[A-Za-z_][A-Za-z_0-9]*\[[0-9]+\]:(0->1|1->0)$$/) { \
				reg=point; sub(/\[.*/, "", reg); \
				bit=point; sub(/^[^[]*\[/,"",bit); sub(/\].*/,"",bit); \
				if ((reg in width) && (bit+0)>width[reg]) next; \
				if ((reg=="PADDR" || reg=="addr") && \
				    ((bit+0)<2 || (bit+0)>4)) next; \
				if (reg=="PRDATA" && (bit+0)>=16) next; \
			} \
			hits=substr($$0,last+1)+0; \
			if (hits==0) missing[type,++count[type]]=file ":" line "  " point; \
		} \
		END { \
			for (j=1;j<=3;j++) { \
				t=kind[j]; if (wanted!="all" && wanted!=t) continue; \
				printf "\nUNHIT RTL %s COVERAGE POINTS (%d)\n", t, count[t]; \
				if (!count[t]) print "  None"; \
				for (i=1;i<=count[t];i++) print "  " missing[t,i]; \
			} \
		} \
	' "$(COVERAGE_MERGED)"

# Read merged SystemC::Coverage-3 bin counts using standard awk only.
# Keep UVM covergroups and TB-top FSM covergroups separate from RTL code metrics.
# FSM names are unique per DUT and direction; cp_state/cp_arc are separate.
functional_coverage:
	@test -s "$(COVERAGE_MERGED)" || { echo "ERROR: No merged coverage data; run make regression or make cov_merge"; exit 1; }
	@awk ' \
		BEGIN { \
			name[1]="frame_cg";     label[1]="Frame coverage"; \
			name[2]="direction_cg"; label[2]="Direction coverage"; \
			name[3]="error_cg";     label[3]="Error coverage"; \
			name[4]="irq_cg";       label[4]="IRQ coverage"; \
			name[5]="apb_cg";       label[5]="APB coverage"; \
			name[6]="d1_tx_fsm_cg"; label[6]="D1 TX FSM State"; point[6]="cp_state"; \
			name[7]="d1_tx_fsm_cg"; label[7]="D1 TX FSM Arc"; point[7]="cp_arc"; \
			name[8]="d1_rx_fsm_cg"; label[8]="D1 RX FSM State"; point[8]="cp_state"; \
			name[9]="d1_rx_fsm_cg"; label[9]="D1 RX FSM Arc"; point[9]="cp_arc"; \
			name[10]="d2_tx_fsm_cg"; label[10]="D2 TX FSM State"; point[10]="cp_state"; \
			name[11]="d2_tx_fsm_cg"; label[11]="D2 TX FSM Arc"; point[11]="cp_arc"; \
			name[12]="d2_rx_fsm_cg"; label[12]="D2 RX FSM State"; point[12]="cp_state"; \
			name[13]="d2_rx_fsm_cg"; label[13]="D2 RX FSM Arc"; point[13]="cp_arc"; \
		} \
		/^C / { \
			if (!index($$0, "\001t\002covergroup") && \
			    !index($$0, "\001t\002funccov")) next; \
			# Only individual bin records: ignore metadata/aggregate entries. \
			if (!index($$0, "\001bin\002")) next; \
			group=0; matches=0; \
			for (i=1; i<=13; i++) { \
				if (index($$0, name[i]) && (i<=5 || \
				    index($$0, "." point[i] "."))) {group=i; matches++} \
			} \
			if (matches != 1 || !match($$0, /[0-9]+[[:space:]]*$$/)) {bad++; next} \
			count=substr($$0, RSTART, RLENGTH)+0; \
			total[group]++; if (count>0) covered[group]++; \
		} \
		END { \
			for (i=1; i<=13; i++) { \
				if (total[i]==0) { \
					printf "ERROR: No bins for %s%s in merged data\n", \
					       name[i],(i<=5 ? "" : "." point[i]) > "/dev/stderr"; \
					bad++; \
				} \
			} \
			if (bad) {printf "ERROR: %d missing/invalid coverage records\n", bad > "/dev/stderr"; exit 1} \
			print "========================================"; \
			print "REGRESSION: OVERALL FUNCTIONAL COVERAGE"; \
			print "========================================"; \
			for (i=1; i<=13; i++) { \
				if (i==6) print "---------- FSM state / arc coverage ----------"; \
				printf "  %-20s : %6.2f %% (%d/%d bins)\n", label[i], \
				       100*covered[i]/total[i], covered[i], total[i]; \
				all_covered+=covered[i]; all_total+=total[i]; \
			} \
			print "----------------------------------------"; \
			printf "  %-20s : %6.2f %% (%d/%d bins)\n", \
			       "Overall functional", 100*all_covered/all_total, all_covered, all_total; \
			print "========================================"; \
		} \
	' "$(COVERAGE_MERGED)"

.PHONY: verilator_clean
verilator_clean:
	rm -rf "$(VERILATOR_LOG_DIR)" "$(VERILATOR_WORK_DIR)"
	@echo "Verilator clean complete."

.PHONY: clean
clean: vivado_clean verilator_clean
	@echo "All clean."

