###

TOP ?= $(shell git rev-parse --show-toplevel)

AS_INC_DIR=$(abspath ./include)
AS_SRC_DIR=$(abspath ./src)
UCODE_INC_DIR=$(abspath ./microcode/include)
UCODE_SRC_DIR=$(abspath ./microcode/cce)

ROMS_DIR=$(abspath ./roms)

CC=gcc
CXX=g++
COMMON_CFLAGS=-Wall -Wno-switch -Wno-format -Wno-unused-function
CXXFLAGS=-g -std=c++11 $(COMMON_CFLAGS)
CXXFLAGS +=-I$(AS_INC_DIR)

LD=g++
LFLAGS=-g $(COMMON_FLAGS)

AS_SRC=$(abspath $(wildcard $(AS_SRC_DIR)/*.cc))
AS_OBJ=$(AS_SRC:.cc=.o)
AS=bp-as

ECHO  ?= echo
CP    ?= cp
MKDIR ?= mkdir
SED   ?= sed
PERL  ?= perl
RM    ?= rm

UCODE_SRC=$(wildcard $(UCODE_SRC_DIR)/*.S)
UCODE_BUILD_SRC=$(addprefix $(ROMS_DIR)/, $(notdir $(UCODE_SRC)))
UCODE_MEM=$(UCODE_BUILD_SRC:.S=.mem)
UCODE_ADDR=$(UCODE_BUILD_SRC:.S=.addr)
UCODE_BIN=$(UCODE_BUILD_SRC:.S=.bin)
UCODE_DBG=$(UCODE_BUILD_SRC:.S=.dbg)

MODULE_NAME ?= bp_cce_inst_rom

PYTHON ?= python3

.DEFAULT: echo

echo:
	@$(ECHO) "try running: 'make as'"

# Assembler

%.o: %.cc
	$(CXX) $(CXXFLAGS) -c -o $@ $<

$(AS): $(AS_OBJ)
	$(LD) $(LFLAGS) -o $(AS) $(AS_OBJ)

as: $(AS)

# Microcode

dirs:
	$(MKDIR) -p $(ROMS_DIR)
	$(CP) $(UCODE_SRC_DIR)/* $(ROMS_DIR)/

%.addr: %.S
	$(PYTHON) py/addr.py -i $< > $@

%.pre: %.S
	$(CC) -E $(COMMON_CFLAGS) -I$(UCODE_INC_DIR) $< -o $@

%.mem: %.pre $(AS)
	./$(AS) -p -i $< -o $@

%.dbg: %.pre $(AS)
	./$(AS) -d -i $< -o $@

# We append 2 words of 1 at the end of the ucode. This sentinel is used by the
#   loader to determine the end of the binary and know to stop loading without counting
#   the length of the program.
%.bin: %.mem
	$(SED) -i -e '$$a1111111111111111111111111111111111111111111111111111111111111111' $^
	$(SED) -i -e '$$a1111111111111111111111111111111111111111111111111111111111111111' $^
	$(PERL) -ne 'print pack("B64", $$_)' < $^ > $@

bins: dirs $(UCODE_ADDR) $(UCODE_MEM) $(UCODE_BIN)

tidy:
	$(RM) -f $(AS_OBJ)

clean: tidy
	$(RM) -f $(AS)
	$(RM) -rf $(ROMS_DIR)

