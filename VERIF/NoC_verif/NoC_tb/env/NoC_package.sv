package NoC_uvm_pkg;
  import uvm_pkg::*;
  import NoC_pkg::*;
  `include "uvm_macros.svh"

  `include "NoC_env_config.sv"

 // `include "NoC_reset_config.sv"
  `include "NoC_reset_sequence_item.sv"
  `include "NoC_reset_sequencer.sv"
  `include "NoC_reset_sequence.sv"
  `include "NoC_reset_driver.sv"
  `include "NoC_reset_monitor.sv"
  `include "NoC_reset_agent.sv"
  
  `include "NoC_slave_config.sv"
  `include "NoC_slave_sequence_item.sv"
  `include "NoC_slave_sequencer.sv"
  `include "NoC_slave_sequence.sv"
  `include "NoC_slave_driver.sv"
  `include "NoC_slave_monitor.sv"
  `include "NoC_slave_agent.sv"
  
  `include "NoC_master_config.sv"
  `include "NoC_master_sequence_item.sv"
  `include "NoC_master_sequencer.sv"
  `include "NoC_master_sequence.sv"
  `include "NoC_master_driver.sv"
  `include "NoC_master_monitor.sv"
  `include "NoC_master_agent.sv"
  
  `include "NoC_scoreboard.sv"
  `include "virtual_seq.sv"
  `include "virtual_sqr.sv"
  `include "NoC_env.sv"
  `include "NoC_test.sv"
  
endpackage : NoC_uvm_pkg
