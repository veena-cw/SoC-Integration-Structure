#==================================================================================
#  Generic Verilator build / run / regression Makefile (UVM or plain SystemVerilog TB)
#==================================================================================
#  Copy this file into the simulation directory of any project, edit only the
#  "PROJECT SETTINGS" section (or override any variable on the command line) and run:
#
#    make help                                      list of targets and options
#    make compile                                   build the Verilator executable
#    make lint                                      lint only (no build)
#    make list                                      tests found in TESTLIST
#    make run TEST=my_test SEED=5                   one test, log on screen + file
#    make regression                                every test in TESTLIST, every seed in SEEDS
#    make regression SEEDS="1 2 3" JOBS=4           3 seeds per test, 4 simulations in parallel
#    make regression RANDOM_SEEDS=5                 5 random seeds per test
#    make regression TESTS="test_a test_b"          only these tests
#    make regression FILTER=axi                     only tests whose name contains "axi"
#    make rerun_failed                              rerun the failed test/seed pairs of the last regression
#    make compile COV=1 && make regression COV=1 && make cov_report     coverage regression
#    make compile TRACE=1 && make run TEST=my_test TRACE=1 PLUSARGS=+WAVES     .vcd waveform
#    make clean                                     remove builds, logs, coverage
#
#  Test list file (TESTLIST): one test per line, '#' starts a comment, optional
#  per-test plusargs after the name:
#      # name                 plusargs
#      smoke_test
#      dma_burst_test         +NUM_PKTS=200 +BURST=16
#      error_inject_test      +ERR_RATE=5
#
#  Pass / fail of every simulation (UVM=1):
#      PASS = exit code 0, no timeout, the UVM report summary shows "UVM_ERROR : 0" and
#             "UVM_FATAL : 0", no line matching FAIL_REGEX, and PASS_REGEX found (if set).
#      Missing UVM report summary (crash, hang, $finish before the report) = FAIL.
#  Plain SV testbench (UVM=0): set PASS_REGEX to the line your TB prints on success.
#
#  Results: $(REGR_DIR)/summary.txt, $(REGR_DIR)/failed.txt ("test seed" per line),
#           $(REGR_DIR)/<test>__s<seed>/sim.log for every simulation.
#==================================================================================

SHELL := /bin/bash
THIS_MAKEFILE := $(abspath $(lastword $(MAKEFILE_LIST)))

#==================================================================================
# PROJECT SETTINGS  (edit for your project)
#==================================================================================

# top-level module of the testbench
TOP          ?= lpddr_tb_top

# simulation directory = where make is started (copy the Makefile there, or use
# make -f ~/Documents/Makefile from that directory); builds, logs and results go here
SIM_DIR      ?= $(CURDIR)

# make (and the makefiles Verilator generates) cannot handle spaces or shell special characters
# in paths: stop with a clear message instead of confusing rule / shell errors
_LP := (
_RP := )
ifneq ($(words $(SIM_DIR)),1)
  $(error Path "$(SIM_DIR)" contains spaces. Rename the directory (e.g. "lpddr 1 (1)" -> lpddr_1) and run make again)
endif
ifneq ($(findstring $(_LP),$(SIM_DIR))$(findstring $(_RP),$(SIM_DIR)),)
  $(error Path "$(SIM_DIR)" contains parentheses. Rename the directory (e.g. "lpddr(1)" -> lpddr_1) and run make again)
endif

# source file list(s): Verilator -f format (file paths, +incdir+<dir>, +define+<NAME>[=<val>], -y <dir>)
#   e.g. FILELISTS = $(SIM_DIR)/rtl.f $(SIM_DIR)/tb.f
FILELISTS    ?= $(SIM_DIR)/filelist.f

# extra sources / include dirs / defines not in the file lists (optional)
SRCS         ?=
INCDIRS      ?=
DEFINES      ?=

# C / C++ sources (DPI, models) compiled into the executable (optional), and their flags
CPP_SRCS     ?=
CFLAGS       ?=
LDFLAGS      ?=

# test list and default test
TESTLIST     ?= $(SIM_DIR)/testlist.txt
TEST         ?= base_test

# ---- UVM ----------------------------------------------------------------------
# UVM=1: compile uvm_pkg.sv from UVM_HOME (directory with uvm_pkg.sv, e.g. 1800.2-2017 src/)
UVM          ?= 1
UVM_HOME     ?= $(shell echo $$UVM_HOME)
UVM_VERBOSITY?= UVM_MEDIUM
# UVM DPI: by default compiled without DPI (UVM_NO_DPI). To use the UVM DPI (regex for
# +uvm_set_* / resource_db wildcards, uvm_hdl_*), set UVM_DEFINES to your list and add the
# C sources, e.g. UVM_DPI_SRCS = $(UVM_HOME)/dpi/uvm_dpi.cc  (needs --vpi for uvm_hdl_*)
# UVM_ENABLE_DEPRECATED_API: keeps the UVM 1.2 API of older testbenches working with 1800.2-2017
# (global uvm_top, set_config_*, ...); remove it to enforce the strict 1800.2 API.
UVM_DEFINES  ?= +define+UVM_NO_DPI +define+UVM_REPORT_DISABLE_FILE_LINE +define+UVM_ENABLE_DEPRECATED_API
UVM_DPI_SRCS ?=

# ---- Verilator ----------------------------------------------------------------
VERILATOR    ?= $(firstword $(wildcard /opt/verilator-5.052/bin/verilator) verilator)
VERILATOR_COV?= $(dir $(shell command -v $(VERILATOR) 2>/dev/null))verilator_coverage
TIMESCALE    ?= 1ns/1ps
VJOBS        ?= 4                 # C++ compile jobs of one build
OPT          ?= -O2               # C++ optimisation (-O0 builds faster, runs slower)
# warnings: -Wall plus -Wno-fatal prints every warning but never stops the build
WARN_FLAGS   ?= -Wall -Wno-fatal
# VERBOSE=1: print the whole Verilator output on screen; default: only %Error lines (first
# SHOW_ERRORS lines) + warning / error counts, everything goes to $(BUILD_DIR)/build.log
VERBOSE      ?= 0
SHOW_ERRORS  ?= 200
# quieter build: WARN_FLAGS="-Wno-fatal -Wno-WIDTH"  (WIDTH* warnings from UVM `uvm_field_* macros)
# anything else for Verilator (e.g. --assert --x-assign unique --x-initial unique -Wno-WIDTH)
VFLAGS_EXTRA ?=
# waveforms: TRACE=1 (or vcd) builds with --trace -> .vcd, TRACE=fst builds with --trace-fst -> .fst
# (smaller, open with gtkwave). The TB must call $dumpfile / $dumpvars, e.g. in the top module:
#     initial if ($test$plusargs("WAVES")) begin $dumpfile("waves.vcd"); $dumpvars(0, tb_top); end
# and the run needs PLUSARGS=+WAVES. Trace builds use their own build dir (verilator_build_trace).
TRACE        ?= 0

# ---- runs / regression ---------------------------------------------------------
SEED         ?= 1
SEEDS        ?= $(SEED)
RANDOM_SEEDS ?=                   # N: replaces SEEDS with N random seeds
JOBS         ?= 1                 # simulations in parallel during a regression
TEST_TIMEOUT ?= 3600              # seconds per simulation (killed -> FAIL "timeout")
PLUSARGS     ?=                   # extra plusargs for every simulation, e.g. "+NO_WAVES"
FILTER       ?=                   # regression: only tests whose name contains this text
RUN_IN_DIR   ?= 1                 # 1: every simulation runs in its own directory (parallel-safe
                                  #    waves / output files); 0: runs in SIM_DIR (TB reads files
                                  #    with paths relative to SIM_DIR) -> use JOBS=1
FAIL_REGEX   ?= ^%Error|^%Fatal|Segmentation fault|core dumped|Assertion failed
PASS_REGEX   ?=                   # optional: line that must appear (required when UVM=0)
REGR_DIR     ?= $(SIM_DIR)/regr

# memory / CPU limit for builds and simulations on shared servers (empty = none), e.g.
#   MEMCAP = systemd-run --user --scope -q -p MemoryMax=12G -p MemorySwapMax=0
MEMCAP       ?=

# ---- coverage -----------------------------------------------------------------
# COV=1: build with --coverage (line, toggle, user covergroups/cover properties) into a separate
#        build dir; every simulation writes $(COV_DIR)/<test>__s<seed>.dat; make cov_report merges.
COV          ?= 0
COV_FLAGS    ?= --coverage
COV_DIR      ?= $(SIM_DIR)/cov_data
COV_REPORT   ?= $(SIM_DIR)/cov_report

#==================================================================================
# DERIVED SETTINGS  (normally no edits below this line)
#==================================================================================

strip_v = $(strip $(1))
VJOBS        := $(call strip_v,$(VJOBS))
JOBS         := $(call strip_v,$(JOBS))
TEST_TIMEOUT := $(call strip_v,$(TEST_TIMEOUT))
RUN_IN_DIR   := $(call strip_v,$(RUN_IN_DIR))
RANDOM_SEEDS := $(call strip_v,$(RANDOM_SEEDS))
PLUSARGS     := $(call strip_v,$(PLUSARGS))
FILTER       := $(call strip_v,$(FILTER))
PASS_REGEX   := $(call strip_v,$(PASS_REGEX))
COV          := $(call strip_v,$(COV))
TRACE        := $(call strip_v,$(TRACE))
UVM          := $(call strip_v,$(UVM))

TRACE_FLAGS  := $(if $(filter 1 vcd,$(TRACE)),--trace --trace-structs,$(if $(filter fst,$(TRACE)),--trace-fst --trace-structs))
BUILD_DIR    ?= $(SIM_DIR)/verilator_build$(if $(filter 1,$(COV)),_cov)$(if $(TRACE_FLAGS),_trace)
EXE          := $(BUILD_DIR)/V$(TOP)
BUILD_LOG    := $(BUILD_DIR)/build.log

ifeq ($(UVM),1)
  UVM_SRC    := +incdir+$(UVM_HOME) $(UVM_HOME)/uvm_pkg.sv
  UVM_PLUS    = +UVM_TESTNAME=$$t +UVM_VERBOSITY=$(UVM_VERBOSITY) +UVM_NO_RELNOTES
else
  UVM_SRC    :=
  UVM_DEFINES:=
  UVM_DPI_SRCS:=
  UVM_PLUS    =
endif

V_FLAGS = --binary -sv --top-module $(TOP) --Mdir $(BUILD_DIR) -j $(VJOBS) \
          --timescale $(TIMESCALE) --error-limit 200 $(WARN_FLAGS) \
          -CFLAGS "$(OPT) $(CFLAGS)" $(if $(strip $(LDFLAGS)),-LDFLAGS "$(LDFLAGS)") \
          $(TRACE_FLAGS) \
          $(if $(filter 1,$(COV)),$(COV_FLAGS)) $(VFLAGS_EXTRA)

V_INPUTS = $(UVM_DEFINES) $(addprefix +incdir+,$(INCDIRS)) $(addprefix +define+,$(DEFINES)) \
           $(UVM_SRC) $(addprefix -f ,$(FILELISTS)) $(SRCS) $(UVM_DPI_SRCS) $(CPP_SRCS)

# tests: TESTS on the command line, else every name in TESTLIST (optionally filtered)
TESTS        ?= $(shell sed 's/\#.*//' $(TESTLIST) 2>/dev/null | awk 'NF {print $$1}')
ifneq ($(FILTER),)
  TESTS      := $(foreach t,$(TESTS),$(if $(findstring $(FILTER),$(t)),$(t)))
endif
ifneq ($(RANDOM_SEEDS),)
  SEEDS      := $(shell for i in $$(seq $(RANDOM_SEEDS)); do echo $$(( (RANDOM << 15) | RANDOM )); done)
endif

# one id per simulation: <test>__s<seed>
RUN_IDS      ?= $(foreach t,$(TESTS),$(foreach s,$(SEEDS),$(t)__s$(s)))
RESULTS       = $(addprefix $(REGR_DIR)/,$(addsuffix /result,$(RUN_IDS)))
test_of       = $(word 1,$(subst __s, ,$(1)))
seed_of       = $(word 2,$(subst __s, ,$(1)))

# ---- shell snippets: per-test plusargs, simulation command, verdict -------------------------------
# $$t = test, $$s = seed, $$log = log file, $$rc = exit code -> $$st (PASS/FAIL), $$why
TEST_PLUSARGS = tp=$$(sed 's/\#.*//' $(TESTLIST) 2>/dev/null | awk -v t="$$t" '$$1 == t {$$1 = ""; print; exit}')

SIM_CMD = timeout -k 10 $(TEST_TIMEOUT) $(MEMCAP) $(EXE) $(UVM_PLUS) +verilator+seed+$$s \
          $(if $(filter 1,$(COV)),+verilator+coverage+file+$(COV_DIR)/$${t}__s$${s}.dat) $(PLUSARGS) $$tp

VERDICT = st=PASS; why=""; \
  if [ $$rc -eq 124 ] || [ $$rc -eq 137 -a $$(( SECONDS - t0 )) -ge $(TEST_TIMEOUT) ]; then \
    st=FAIL; why="timeout ($(TEST_TIMEOUT) s)"; \
  elif [ $$rc -eq 137 ]; then st=FAIL; why="killed (signal 9: memory cap / OOM?)"; \
  elif grep -Eq '$(FAIL_REGEX)' $$log; then st=FAIL; why=$$(grep -Em1 '$(FAIL_REGEX)' $$log | cut -c1-150); \
  elif [ "$(UVM)" = "1" ] && ! grep -Eq '^UVM_FATAL *: *0 *$$' $$log; then \
    st=FAIL; why=$$(grep -Eq '^UVM_FATAL *:' $$log && grep -Em1 'UVM_FATAL.*@' $$log | cut -c1-150 || echo "no UVM report summary (crash / hang / early \$$finish)"); \
  elif [ "$(UVM)" = "1" ] && ! grep -Eq '^UVM_ERROR *: *0 *$$' $$log; then \
    st=FAIL; why="$$(grep -Em1 '^UVM_ERROR *:' $$log | tr -s ' ') - first: $$(grep -Em1 'UVM_ERROR.*@' $$log | cut -c1-120)"; \
  elif [ -n '$(PASS_REGEX)' ] && ! grep -Eq '$(PASS_REGEX)' $$log; then st=FAIL; why="pass pattern '$(PASS_REGEX)' not found"; \
  elif [ $$rc -ne 0 ]; then st=FAIL; why="exit code $$rc"; \
  fi

.PHONY: help compile lint list run regression regr_runs regr_summary rerun_failed cov_report \
        clean clean_regr info check_env

#==================================================================================
# TARGETS
#==================================================================================

help:
	@echo ""
	@echo "Generic Verilator Makefile  (TOP=$(TOP), UVM=$(UVM), TESTLIST=$(TESTLIST))"
	@echo ""
	@echo "  make compile                          build $(EXE)"
	@echo "  make lint                             Verilator lint only"
	@echo "  make list                             tests in TESTLIST (after TESTS / FILTER)"
	@echo "  make run TEST=<name> SEED=<n>         one simulation (log: $(REGR_DIR)/<test>__s<seed>/sim.log)"
	@echo "  make regression                       all tests x SEEDS, summary in $(REGR_DIR)/summary.txt"
	@echo "  make rerun_failed                     failed pairs of the last regression -> $(REGR_DIR)_rerun"
	@echo "  make cov_report                       merge coverage of COV=1 runs -> $(COV_REPORT)"
	@echo "  make info                             show the resolved settings"
	@echo "  make clean / clean_regr               remove everything / only regression results"
	@echo ""
	@echo "  Options: SEEDS=\"1 2 3\"  RANDOM_SEEDS=N  JOBS=N  TESTS=\"a b\"  FILTER=text  PLUSARGS=\"+X=1\""
	@echo "           TEST_TIMEOUT=sec  UVM_VERBOSITY=UVM_LOW  COV=1  TRACE=1|fst  VJOBS=N  MEMCAP=\"systemd-run ...\""
	@echo ""

info:
	@echo "TOP          = $(TOP)"
	@echo "VERILATOR    = $(VERILATOR) ($$($(VERILATOR) --version 2>/dev/null))"
	@echo "FILELISTS    = $(FILELISTS)"
	@echo "UVM          = $(UVM)  UVM_HOME = $(UVM_HOME)"
	@echo "BUILD_DIR    = $(BUILD_DIR)"
	@echo "TESTLIST     = $(TESTLIST)"
	@echo "TESTS        = $(TESTS)"
	@echo "SEEDS        = $(SEEDS)"
	@echo "JOBS         = $(JOBS)   TEST_TIMEOUT = $(TEST_TIMEOUT) s   COV = $(COV)   TRACE = $(TRACE)"
	@echo "MEMCAP       = $(MEMCAP)"

check_env:
	@command -v $(VERILATOR) >/dev/null || { echo "ERROR: $(VERILATOR) not found (set VERILATOR=/path/to/verilator)"; exit 1; }
	@for f in $(FILELISTS); do [ -f "$$f" ] || { echo "ERROR: file list $$f not found (set FILELISTS)"; exit 1; }; done
	@if [ "$(UVM)" = "1" ] && [ ! -f "$(UVM_HOME)/uvm_pkg.sv" ]; then \
	  echo "ERROR: $(UVM_HOME)/uvm_pkg.sv not found (set UVM_HOME, or UVM=0 for a plain SV testbench)"; exit 1; fi

# ---- build ----------------------------------------------------------------------
compile: check_env
	@mkdir -p $(BUILD_DIR)
	@echo "== Verilator build of $(TOP) -> $(EXE)  (log $(BUILD_LOG))"
	@cd $(SIM_DIR) && set -o pipefail && \
	  if [ "$(VERBOSE)" = "1" ]; then \
	    $(MEMCAP) $(VERILATOR) $(V_FLAGS) $(V_INPUTS) 2>&1 | tee $(BUILD_LOG); \
	  else \
	    $(MEMCAP) $(VERILATOR) $(V_FLAGS) $(V_INPUTS) > $(BUILD_LOG) 2>&1; \
	  fi; \
	  rc=$$?; \
	  if [ "$(VERBOSE)" != "1" ]; then \
	    grep -A4 '^%Error' $(BUILD_LOG) | head -n $(SHOW_ERRORS); \
	    grep -E '^(make|g\+\+|c\+\+).*(Error|error)|error:' $(BUILD_LOG) | head -n 20; \
	  fi; \
	  echo "== $$(grep -c '^%Warning' $(BUILD_LOG)) warnings, $$(grep -c '^%Error' $(BUILD_LOG)) errors  (full output: $(BUILD_LOG))"; \
	  echo "== warnings by type:"; grep -o '^%Warning-[A-Z0-9_]*' $(BUILD_LOG) | sort | uniq -c | sort -rn | head -12; \
	  if [ $$rc -ne 0 ] || [ ! -x $(EXE) ]; then echo "== BUILD FAILED"; exit 1; fi; \
	  echo "== BUILD OK: $(EXE)"

lint: check_env
	@mkdir -p $(BUILD_DIR)
	cd $(SIM_DIR) && $(MEMCAP) $(VERILATOR) --lint-only -sv --timing --top-module $(TOP) \
	  --timescale $(TIMESCALE) $(WARN_FLAGS) $(VFLAGS_EXTRA) \
	  $(filter-out %.c %.cc %.cpp,$(V_INPUTS)) 2>&1 | tee $(BUILD_DIR)/lint.log

$(EXE):
	@echo "== $(EXE) missing: building"
	@$(MAKE) --no-print-directory -f $(THIS_MAKEFILE) compile

list:
	@echo "$(words $(TESTS)) tests x $(words $(SEEDS)) seeds = $(words $(RUN_IDS)) simulations"
	@for t in $(TESTS); do echo "  $$t"; done

# ---- single test ----------------------------------------------------------------
run: $(EXE)
	@t=$(TEST); s=$(SEED); d=$(REGR_DIR)/$(TEST)__s$(SEED); mkdir -p $$d $(if $(filter 1,$(COV)),$(COV_DIR)); \
	  log=$$d/sim.log; $(TEST_PLUSARGS); \
	  cd $(if $(filter 1,$(RUN_IN_DIR)),$$d,$(SIM_DIR)); \
	  echo "== run $$t seed $$s $$tp $(PLUSARGS)"; \
	  t0=$$SECONDS; set -o pipefail; $(SIM_CMD) 2>&1 | tee $$log; rc=$$?; \
	  $(VERDICT); \
	  echo ""; echo "######## $$t seed $$s: $$st $${why:+ - $$why}  ($$(( SECONDS - t0 )) s, log $$log) ########"; \
	  [ $$st = PASS ]

# ---- regression -----------------------------------------------------------------
regression: $(EXE)
	@if [ -z "$(strip $(RUN_IDS))" ]; then echo "ERROR: no tests (TESTLIST=$(TESTLIST), TESTS, FILTER)"; exit 1; fi
	@rm -rf $(REGR_DIR); mkdir -p $(REGR_DIR) $(if $(filter 1,$(COV)),$(COV_DIR))
	@echo "== regression: $(words $(TESTS)) tests x $(words $(SEEDS)) seeds = $(words $(RUN_IDS)) simulations, $(JOBS) in parallel"
	@echo "$(RUN_IDS)" | tr ' ' '\n' > $(REGR_DIR)/run_ids.txt
	@$(MAKE) --no-print-directory -f $(THIS_MAKEFILE) -j$(JOBS) regr_runs RUN_IDS="$(RUN_IDS)" SEEDS="$(SEEDS)"
	@$(MAKE) --no-print-directory -f $(THIS_MAKEFILE) regr_summary RUN_IDS="$(RUN_IDS)" SEEDS="$(SEEDS)"

regr_runs: $(RESULTS)

# one simulation; never fails make (the verdict goes into the result file)
$(REGR_DIR)/%/result:
	@t=$(call test_of,$*); s=$(call seed_of,$*); d=$(REGR_DIR)/$*; mkdir -p $$d; log=$$d/sim.log; \
	  $(TEST_PLUSARGS); \
	  cd $(if $(filter 1,$(RUN_IN_DIR)),$$d,$(SIM_DIR)); \
	  t0=$$SECONDS; $(SIM_CMD) > $$log 2>&1; rc=$$?; \
	  $(VERDICT); \
	  printf '%s\t%s\t%s\t%s\t%s\n' "$$st" "$$t" "$$s" "$$(( SECONDS - t0 ))" "$$why" > $@; \
	  printf '%-5s %-45s seed %-12s %5ss %s\n' "$$st" "$$t" "$$s" "$$(( SECONDS - t0 ))" "$$why"

regr_summary:
	@cd $(REGR_DIR) && { \
	  np=0; nf=0; : > failed.txt; : > summary.txt; \
	  for id in $(RUN_IDS); do \
	    if [ -f $$id/result ]; then IFS=$$'\t' read -r st t s sec why < $$id/result; \
	    else st=FAIL; t=$${id%__s*}; s=$${id##*__s}; sec=0; why="not run"; fi; \
	    printf '%-5s %-45s seed %-12s %6ss  %s\n' "$$st" "$$t" "$$s" "$$sec" "$$why" >> summary.txt; \
	    if [ "$$st" = PASS ]; then np=$$((np+1)); else nf=$$((nf+1)); echo "$$t $$s" >> failed.txt; fi; \
	  done; \
	  sort -k1,1r -k2,2 summary.txt -o summary.txt; \
	  { echo "-------------------------------------------------------------------------------"; \
	    echo "total $$((np+nf))   passed $$np   failed $$nf   (logs: $(REGR_DIR)/<test>__s<seed>/sim.log)"; \
	    [ $$nf -eq 0 ] && echo "REGRESSION PASSED" || echo "REGRESSION FAILED   (rerun: make rerun_failed)"; } >> summary.txt; \
	  echo ""; echo "================================ REGRESSION SUMMARY ================================"; \
	  cat summary.txt; \
	  [ $$nf -eq 0 ]; }

rerun_failed:
	@[ -s $(REGR_DIR)/failed.txt ] || { echo "no failed tests in $(REGR_DIR)/failed.txt"; exit 0; }; \
	  ids=$$(awk '{print $$1 "__s" $$2}' $(REGR_DIR)/failed.txt | tr '\n' ' '); \
	  echo "== rerun of: $$ids"; \
	  $(MAKE) --no-print-directory -f $(THIS_MAKEFILE) regression REGR_DIR=$(REGR_DIR)_rerun RUN_IDS="$$ids"

# ---- coverage -------------------------------------------------------------------
cov_report:
	@ls $(COV_DIR)/*.dat >/dev/null 2>&1 || { echo "ERROR: no $(COV_DIR)/*.dat (make compile COV=1; make regression COV=1)"; exit 1; }
	@mkdir -p $(COV_REPORT)
	$(VERILATOR_COV) -write $(COV_REPORT)/merged.dat $(COV_DIR)/*.dat
	$(VERILATOR_COV) -write-info $(COV_REPORT)/merged.info $(COV_REPORT)/merged.dat
	$(VERILATOR_COV) --annotate $(COV_REPORT)/annotate --annotate-min 1 $(COV_REPORT)/merged.dat | tee $(COV_REPORT)/summary.txt
	@echo "== $(COV_REPORT)/annotate: sources with hit counts ('%' = not hit)"
	@echo "== HTML (if lcov is installed): genhtml $(COV_REPORT)/merged.info -o $(COV_REPORT)/html"

# ---- clean ----------------------------------------------------------------------
clean_regr:
	rm -rf $(REGR_DIR) $(REGR_DIR)_rerun

clean: clean_regr
	rm -rf $(SIM_DIR)/verilator_build $(SIM_DIR)/verilator_build_cov $(SIM_DIR)/verilator_build_trace \
	  $(SIM_DIR)/verilator_build_cov_trace $(COV_DIR) $(COV_REPORT)

