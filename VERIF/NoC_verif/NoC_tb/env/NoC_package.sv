package NoC_uvm_pkg;
  import uvm_pkg::*;
  //import NoC_pkg::*;
  `include "uvm_macros.svh"
  `include "NoC_slave_config.sv"
  `include "NoC_master_config.sv"
  `include "NoC_env_config.sv"

  `include "NoC_reset_config.sv"
  `include "NoC_reset_seq_item.sv"
  `include "NoC_reset_sqr.sv"
  `include "NoC_reset_seq.sv"
  `include "NoC_reset_driver.sv"
  `include "NoC_reset_monitor.sv"
  `include "NoC_reset_agent.sv"
  `include "NoC_reset_agent_top.sv"

  `include "NoC_slave_seq_item.sv"
  `include "NoC_slave_sqr.sv"
  `include "NoC_slave_seq.sv"
  `include "NoC_slave_driver.sv"
  `include "NoC_slave_monitor.sv"
  `include "NoC_slave_agent.sv"
  `include "NoC_slave_agent_top.sv"


  `include "NoC_master_seq_item.sv"
  `include "NoC_master_sqr.sv"
  `include "NoC_master_seq.sv"
  `include "NoC_master_driver.sv"
  `include "NoC_master_monitor.sv"
  `include "NoC_master_agent.sv"
  `include "NoC_master_agent_top.sv"

  `include "NoC_scoreboard.sv"
  `include "virtual_sqr.sv"
  `include "virtual_seq.sv"
  `include "NoC_env.sv"
  `include "NoC_test.sv"

endpackage : NoC_uvm_pkg
