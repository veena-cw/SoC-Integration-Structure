.PHONY: test compile clean all help

# Cocotb configuration
export LIBPYTHON_LOC=$(shell cocotb-config --libpython)
export PYGPI_PYTHON_BIN=$(shell which python)
COCOTB_LIB_DIR=$(shell cocotb-config --lib-dir)

# Directories
SRC_DIR = src
BUILD_DIR = build
TEST_DIR = test

# Source files
SV_SOURCES = $(wildcard $(SRC_DIR)/*.sv)

# Default target
all: compile

# Help target
help:
	@echo "tiny-tpu Build System"
	@echo "====================="
	@echo ""
	@echo "Available targets:"
	@echo "  make compile        - Compile all SystemVerilog to Verilog"
	@echo "  make test_pe        - Run PE testbench"
	@echo "  make test_systolic  - Run systolic array testbench"
	@echo "  make test_matmul    - Run matrix multiply testbench"
	@echo "  make test_softmax   - Run softmax unit testbench"
	@echo "  make test_layernorm - Run layernorm unit testbench"
	@echo "  make test_activation - Run activation unit testbench"
	@echo "  make test_decoder   - Run decoder testbench"
	@echo "  make test_all       - Run all tests"
	@echo "  make demo           - Run quick demo"
	@echo "  make clean          - Remove build artifacts"
	@echo ""
	@echo "Example: make test_softmax"

# Compile all SystemVerilog sources
compile: $(BUILD_DIR)/tpu.v

$(BUILD_DIR)/tpu.v: $(SV_SOURCES)
	mkdir -p $(BUILD_DIR)
	@echo "Converting SystemVerilog to Verilog..."
	sv2v -I $(SRC_DIR)/* -w $(BUILD_DIR)/tpu.v
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/tpu.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/tpu.v
	@echo "Compilation complete: $(BUILD_DIR)/tpu.v"

# Compile individual modules
compile_pe: $(BUILD_DIR)/pe.v
$(BUILD_DIR)/pe.v: $(SRC_DIR)/pe.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/pe.v $(SRC_DIR)/pe.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/pe.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/pe.v

compile_systolic: $(BUILD_DIR)/systolic_array.v
$(BUILD_DIR)/systolic_array.v: $(SRC_DIR)/pe.sv $(SRC_DIR)/systolic_array.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/systolic_array.v $(SRC_DIR)/pe.sv $(SRC_DIR)/systolic_array.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/systolic_array.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/systolic_array.v

compile_softmax: $(BUILD_DIR)/softmax_unit.v
$(BUILD_DIR)/softmax_unit.v: $(SRC_DIR)/softmax_unit.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/softmax_unit.v $(SRC_DIR)/softmax_unit.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/softmax_unit.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/softmax_unit.v

compile_layernorm: $(BUILD_DIR)/layernorm_unit.v
$(BUILD_DIR)/layernorm_unit.v: $(SRC_DIR)/layernorm_unit.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/layernorm_unit.v $(SRC_DIR)/layernorm_unit.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/layernorm_unit.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/layernorm_unit.v

compile_activation: $(BUILD_DIR)/activation_unit.v
$(BUILD_DIR)/activation_unit.v: $(SRC_DIR)/activation_unit.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/activation_unit.v $(SRC_DIR)/activation_unit.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/activation_unit.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/activation_unit.v

compile_decoder: $(BUILD_DIR)/decoder.v
$(BUILD_DIR)/decoder.v: $(SRC_DIR)/decoder.sv
	mkdir -p $(BUILD_DIR)
	sv2v -w $(BUILD_DIR)/decoder.v $(SRC_DIR)/decoder.sv
	@echo '`timescale 1ns/1ns' > $(BUILD_DIR)/temp.v
	@cat $(BUILD_DIR)/decoder.v >> $(BUILD_DIR)/temp.v
	@mv $(BUILD_DIR)/temp.v $(BUILD_DIR)/decoder.v

# Test targets
test_pe: compile_pe
	@echo "Running PE testbench..."
	iverilog -o $(BUILD_DIR)/pe_sim.vvp -s pe -g2012 $(BUILD_DIR)/pe.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_pe vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/pe_sim.vvp

test_systolic: compile_systolic
	@echo "Running Systolic Array testbench..."
	iverilog -o $(BUILD_DIR)/systolic_sim.vvp -s systolic_array -g2012 $(BUILD_DIR)/systolic_array.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_systolic vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/systolic_sim.vvp

test_matmul: compile_systolic
	@echo "Running Matrix Multiply testbench..."
	iverilog -o $(BUILD_DIR)/matmul_sim.vvp -s systolic_array -g2012 $(BUILD_DIR)/systolic_array.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_matmul vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/matmul_sim.vvp

test_softmax: compile_softmax
	@echo "Running Softmax Unit testbench..."
	iverilog -o $(BUILD_DIR)/softmax_sim.vvp -s softmax_unit -g2012 $(BUILD_DIR)/softmax_unit.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_softmax_unit vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/softmax_sim.vvp

test_layernorm: compile_layernorm
	@echo "Running LayerNorm Unit testbench..."
	iverilog -o $(BUILD_DIR)/layernorm_sim.vvp -s layernorm_unit -g2012 $(BUILD_DIR)/layernorm_unit.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_layernorm_unit vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/layernorm_sim.vvp

test_activation: compile_activation
	@echo "Running Activation Unit testbench..."
	iverilog -o $(BUILD_DIR)/activation_sim.vvp -s activation_unit -g2012 $(BUILD_DIR)/activation_unit.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_activation_unit vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/activation_sim.vvp

test_decoder: compile_decoder
	@echo "Running Decoder testbench..."
	iverilog -o $(BUILD_DIR)/decoder_sim.vvp -s decoder -g2012 $(BUILD_DIR)/decoder.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_decoder vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/decoder_sim.vvp

test_all: test_pe test_systolic test_matmul test_softmax test_layernorm test_activation test_decoder
	@echo "All tests completed!"

demo:
	@echo "=== tiny-tpu Demo ==="
	@python -c "from tiny_tpu.simulator import Simulator; s = Simulator(); print('Simulator loaded!')"

# Clean build artifacts
clean:
	rm -rf $(BUILD_DIR)/*.v $(BUILD_DIR)/*.vvp $(BUILD_DIR)/*.vcd
	rm -rf __pycache__ $(TEST_DIR)/__pycache__ $(TEST_DIR)/helpers/__pycache__
	rm -rf results.xml

# Generate VCD waveforms
test_%_waves: compile_systolic
	iverilog -o $(BUILD_DIR)/$*_sim.vvp -s systolic_array -g2012 $(BUILD_DIR)/systolic_array.v
	PYTHONPATH=$(TEST_DIR) COCOTB_TEST_MODULES=test.test_$* WAVES=1 vvp -M $(COCOTB_LIB_DIR) -m cocotbvpi_icarus $(BUILD_DIR)/$*_sim.vvp

# View waveforms with GTKWave
view_%: $(BUILD_DIR)/%.vcd
	gtkwave $<
