# Verilator 5.052 flow for the AXI4 -> APB bridge (RTL from SoC-Integration-Structure/DSN).
#
#   make                  build + run the random self-checking TB (default config)
#   make run SEED=7 NTXN=5000 MAXWAIT=8 RESETS=5
#   make reset-char       one-sided (AXI-only / APB-only) mid-traffic reset characterisation
#   make regress          seeds x RTL-parameter configs, prints a PASS/FAIL table
#   make orig             build + run the original directed TB (tb_axi4_to_apb_bridge_cdc)
#   make cov              coverage build, COV_SEEDS runs, merge -> coverage/ (report, annotate, html)
#   make cov-report       re-print the report (with holes) from coverage/merged.dat
#   make push GIT_MSG="..."   commit this flow's sources (+ coverage summary) and push the current branch
#   make clean
#
# RTL parameters per build: AXI_DW, APB_DW, FIFO_DEPTH (each config gets its own obj dir).

VERILATOR  ?= /opt/verilator-5.052/bin/verilator
AXI_DW     ?= 128
APB_DW     ?= 32
FIFO_DEPTH ?= 4
SEED       ?= 1
NTXN       ?= 2000
MAXWAIT    ?= 4
RESETS     ?= 0
PLUSARGS   ?=

VFLAGS  := --binary --timing -j 0 --assert -Wno-fatal -Wno-lint -Wno-style -Wno-TIMESCALEMOD
CFG     := a$(AXI_DW)_p$(APB_DW)_f$(FIFO_DEPTH)
OBJ     := obj_rand_$(CFG)
BIN     := $(OBJ)/Vtb_bridge_rand
SRCS    := $(shell grep -v '^\s*//' filelist_rand.f)
LOGDIR  := logs

REG_SEEDS   ?= 1 2 3 4 5
REG_RESET_SEEDS ?= 11 12      # extra seeds per config run with +RESETS=$(REG_RESETS) (both domains)
REG_RESETS  ?= 12          # one reset aimed at each of the 12 AXI/APB FSM states
REG_CONFIGS ?= 128:32:4 128:32:2 128:32:8 128:32:16 64:32:4 32:32:4 128:64:4

.PHONY: all build run regress orig clean cov cov-build cov-report reset-char push
all: run

build: $(BIN)

$(BIN): $(SRCS) filelist_rand.f
	$(VERILATOR) $(VFLAGS) --top-module tb_bridge_rand --Mdir $(OBJ) -f filelist_rand.f \
	    -GAXI_DW=$(AXI_DW) -GAPB_DW=$(APB_DW) -GFIFO_DEPTH=$(FIFO_DEPTH) > $(OBJ).build.log 2>&1 \
	    || { tail -30 $(OBJ).build.log; exit 1; }

run: $(BIN)
	@mkdir -p $(LOGDIR)
	./$(BIN) +verilator+seed+$(SEED) +NTXN=$(NTXN) +MAXWAIT=$(MAXWAIT) +RESETS=$(RESETS) $(PLUSARGS) \
	    | tee $(LOGDIR)/$(CFG)_s$(SEED).log | grep -E "CFG|ERROR|SUMMARY|writes=|AW/AR|coverage|errors=|TEST"

regress:
	@mkdir -p $(LOGDIR); fail=0; \
	for c in $(REG_CONFIGS); do \
	  set -- $$(echo $$c | tr ':' ' '); \
	  if ! $(MAKE) -s build AXI_DW=$$1 APB_DW=$$2 FIFO_DEPTH=$$3 > /dev/null 2>&1; then \
	    printf "%-16s BUILD FAIL (see obj_rand_a$$1_p$$2_f$$3.build.log)\n" "a$$1_p$$2_f$$3"; fail=1; continue; fi; \
	  for s in $(REG_SEEDS) $(REG_RESET_SEEDS); do \
	    rs=0; case " $(REG_RESET_SEEDS) " in *" $$s "*) rs=$(REG_RESETS);; esac; \
	    log=$(LOGDIR)/a$$1_p$$2_f$$3_s$$s.log; \
	    ./obj_rand_a$$1_p$$2_f$$3/Vtb_bridge_rand +verilator+seed+$$s +NTXN=$(NTXN) +MAXWAIT=$(MAXWAIT) +RESETS=$$rs $(PLUSARGS) > $$log 2>&1; \
	    if grep -q "TEST PASSED" $$log; then r=PASS; else r=FAIL; fail=1; fi; \
	    printf "%-16s seed=%-3s resets=%-2s %s  %s\n" "a$$1_p$$2_f$$3" $$s $$rs $$r "$$(grep -m1 -E 'ERROR' $$log | cut -c1-100)"; \
	  done; \
	done; exit $$fail

# One-sided resets are outside the bridge's assumptions (both domains must be
# reset together); this target documents the behaviour, failures are expected.
reset-char: $(BIN)
	@mkdir -p $(LOGDIR); for d in axi apb; do \
	  ./$(BIN) +verilator+seed+$(SEED) +NTXN=$(NTXN) +RESETS=3 +RESET_DOMAIN=$$d +NO_DIRECTED > $(LOGDIR)/reset_$$d.log 2>&1; \
	  printf "%-4s-only reset: %s\n      first error: %s\n" $$d "$$(grep -E 'TEST' $(LOGDIR)/reset_$$d.log)" \
	      "$$(grep -m1 ERROR $(LOGDIR)/reset_$$d.log | cut -c1-140)"; done

orig:
	$(VERILATOR) --binary --timing -j 0 -Wno-fatal -Wno-lint -Wno-style \
	    --top-module tb_axi4_to_apb_bridge_cdc --Mdir obj_dir -f filelist.f > obj_dir.build.log 2>&1
	./obj_dir/Vtb_axi4_to_apb_bridge_cdc

#---------------------------------------------------------------------------
# Coverage: line/branch + expr + toggle on the DUT (scoped by coverage_scope.vlt)
# plus functional coverage (covergroups). One build per RTL config.
#---------------------------------------------------------------------------
VCOV      ?= $(dir $(VERILATOR))verilator_coverage
COV_FLAGS := --coverage-line --coverage-toggle --coverage-expr --coverage-user
COV_SEEDS ?= 1 2 3 4 5 6 7 8
COV_RESET_SEEDS ?= 21 22 23 24   # run with +RESETS=$(REG_RESETS), both domains
COV_DIR   := coverage
COV_OBJ   := obj_cov_$(CFG)
COV_BIN   := $(COV_OBJ)/Vtb_bridge_rand

cov-build: $(COV_BIN)

$(COV_BIN): $(SRCS) filelist_rand.f coverage_scope.vlt
	$(VERILATOR) $(VFLAGS) $(COV_FLAGS) --top-module tb_bridge_rand --Mdir $(COV_OBJ) \
	    coverage_scope.vlt -f filelist_rand.f \
	    -GAXI_DW=$(AXI_DW) -GAPB_DW=$(APB_DW) -GFIFO_DEPTH=$(FIFO_DEPTH) > $(COV_OBJ).build.log 2>&1 \
	    || { tail -30 $(COV_OBJ).build.log; exit 1; }

cov: $(COV_BIN)
	@mkdir -p $(COV_DIR)/runs; rm -f $(COV_DIR)/runs/$(CFG)_s*.dat; fail=0; \
	for s in $(COV_SEEDS) $(COV_RESET_SEEDS); do \
	  rs=0; case " $(COV_RESET_SEEDS) " in *" $$s "*) rs=$(REG_RESETS);; esac; \
	  ./$(COV_BIN) +verilator+seed+$$s +NTXN=$(NTXN) +MAXWAIT=$(MAXWAIT) +RESETS=$$rs $(PLUSARGS) \
	      +verilator+coverage+file+$(COV_DIR)/runs/$(CFG)_s$$s.dat > $(COV_DIR)/runs/$(CFG)_s$$s.log 2>&1; \
	  if grep -q "TEST PASSED" $(COV_DIR)/runs/$(CFG)_s$$s.log; then echo "seed $$s resets=$$rs PASS"; else echo "seed $$s resets=$$rs FAIL"; fail=1; fi; \
	done; \
	$(VCOV) --write $(COV_DIR)/merged.dat $(COV_DIR)/runs/*.dat; \
	rm -rf $(COV_DIR)/annotated; $(VCOV) --annotate $(COV_DIR)/annotated --annotate-min 1 $(COV_DIR)/merged.dat > /dev/null; \
	if command -v genhtml > /dev/null; then \
	  $(VCOV) --write-info $(COV_DIR)/merged.info $(COV_DIR)/merged.dat && \
	  genhtml -q --branch-coverage -o $(COV_DIR)/html $(COV_DIR)/merged.info > /dev/null 2>&1 && \
	  echo "HTML report: $(COV_DIR)/html/index.html"; fi; \
	python3 cov_report.py $(COV_DIR)/merged.dat | tee $(COV_DIR)/summary.txt; exit $$fail

cov-report:
	python3 cov_report.py $(COV_DIR)/merged.dat --holes

#---------------------------------------------------------------------------
# Git: stage only the verification sources (build output is in .gitignore)
#---------------------------------------------------------------------------
GIT_MSG    ?= axi_apb_bridge_verif: random self-checking TB, Makefile and coverage flow
GIT_REMOTE ?= origin
GIT_BRANCH ?= $(shell git rev-parse --abbrev-ref HEAD)
GIT_FILES  := Makefile .gitignore filelist_rand.f coverage_scope.vlt cov_report.py \
              ../simulation/tb_bridge_rand.sv $(wildcard coverage/summary.txt)

push:
	git add $(GIT_FILES)
	@git diff --cached --quiet && echo "nothing new to commit" || git commit -m "$(GIT_MSG)"
	git push $(GIT_REMOTE) $(GIT_BRANCH)

clean:
	rm -rf obj_rand_* obj_cov_* obj_dir *.build.log $(LOGDIR) $(COV_DIR) *.vcd
