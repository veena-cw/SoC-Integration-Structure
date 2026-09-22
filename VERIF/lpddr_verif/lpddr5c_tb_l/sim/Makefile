# Makefile -- auto-generated. Targets assume Synopsys VCS; adjust for
# your simulator (Questa/Xcelium) if needed.

TOP        = lpddr_tb_top
TEST       ?= base_test
FILELIST   = filelist.f

.PHONY: all compile run clean

all: compile run

compile:
	vcs -full64 -sverilog -ntb_opts uvm-1.2 \
	    -timescale=1ns/1ps -debug_access+all \
	    -f $(FILELIST) -top $(TOP) -o simv

run:
	./simv +UVM_TESTNAME=$(TEST) +UVM_VERBOSITY=UVM_MEDIUM

clean:
	rm -rf simv simv.daidir csrc *.log *.vpd *.fsdb DVEfiles ucli.key
