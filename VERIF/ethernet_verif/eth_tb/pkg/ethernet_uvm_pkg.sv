package ethernet_uvm_pkg;  // Implements this testbench declaration or operation.
import uvm_pkg::*;  // Imports symbols required by this testbench source.
`include "uvm_macros.svh"  // Implements this testbench declaration or operation.
`include "axil_item.sv" `include "axi_mem_item.sv" `include "reset_item.sv" `include "dma_descriptor_item.sv" `include "ethernet_frame_item.sv"  // Implements this testbench declaration or operation.
`include "ethernet_memory_model.sv"  // Implements this testbench declaration or operation.
`include "axil_sequencer.sv" `include "axil_driver.sv" `include "axil_monitor.sv" `include "axil_master_agent.sv"  // Implements this testbench declaration or operation.
`include "axi_mem_sequencer.sv" `include "axi_mem_slave_driver.sv" `include "axi_mem_monitor.sv" `include "axi_mem_slave_agent.sv"  // Implements this testbench declaration or operation.
`include "reset_sequencer.sv" `include "reset_driver.sv" `include "reset_monitor.sv" `include "reset_agent.sv"  // Implements this testbench declaration or operation.
`include "irq_monitor.sv" `include "ethernet_virtual_sequencer.sv" `include "basic_sequences.sv" `include "dma_virtual_sequences.sv"  // Implements this testbench declaration or operation.
`include "ethernet_ref_model.sv" `include "ethernet_scoreboard.sv" `include "ethernet_coverage.sv" `include "ethernet_env.sv" `include "ethernet_tests.sv"  // Implements this testbench declaration or operation.
endpackage  // Implements this testbench declaration or operation.
