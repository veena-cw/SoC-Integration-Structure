`ifndef SD_EMMC_TB_PKG_SV
`define SD_EMMC_TB_PKG_SV



package sd_emmc_tb_pkg;

  import uvm_pkg::*;
  `include "uvm_macros.svh"
  virtual rst_if      rst_vif;
  virtual axi_lite_if axi_lite_vif;
  virtual axi_mem_if  axi_mem_vif;
  virtual sd_emmc_if  sd_emmc_vif;
  virtual irq_if      irq_vif;
  
  `include "axi_lite_seq_item.sv"
  `include "axi_mem_seq_item.sv"
  `include "sd_emmc_seq_item.sv"
  `include "irq_seq_item.sv"
  `include "rst_seq_item.sv"
  `include "rst_sequencer.sv"
  `include "sequencers.sv"
  `include "sd_emmc_virtual_sequencer.sv"
  `include "axi_lite_driver.sv"
  `include "axi_mem_driver.sv"
  `include "sd_emmc_driver.sv"
  `include "rst_driver.sv"
  `include "axi_lite_monitor.sv"
  `include "axi_mem_monitor.sv"
  `include "sd_emmc_monitor.sv"
  `include "irq_monitor.sv"
  `include "rst_monitor.sv"
  `include "axi_lite_agent.sv"
  `include "axi_mem_agent.sv"
  `include "sd_emmc_agent.sv"
  `include "irq_agent.sv"
  `include "rst_agent.sv"
  `include "axi_lite_base_seq.sv"
  `include "axi_mem_base_seq.sv"
  `include "sd_emmc_base_seq.sv"
  `include "virtual_seq.sv"
  `include "rst_assert_seq.sv"
  `include "sd_emmc_base_vseq.sv"
  `include "reg_rw_boundary_vseq.sv"
  `include "cmd_trigger_strobe_vseq.sv"
  `include "reg_lockout_dat_cmd_inhibit_vseq.sv"
  `include "sw_reset_all_cmd_dat_vseq.sv"
  `include "normal_int_status_w1c_vseq.sv"
  `include "reg_irq_gating_vseq.sv"
  `include "reg_reset_values_vseq.sv"
  `include "sd_emmc_reg_seq.sv"
  `include "sd_emmc_reg_ext_seq.sv"
  `include "sd_emmc_ref_model.sv"
  `include "cmd_error_set_vseq.sv"
  `include "cmd_crc7_vseq.sv"
  `include "cap_ver_status_vseq.sv"
  `include "bfm_init_vseq.sv"
  `include "bfm_cmd_legality_vseq.sv"
  `include "bfm_err_inject_vseq.sv"
 // `include "coverage.sv"
 // `include "assertions.sv"
  `include "scoreboard.sv"
//  `include "reg_model.sv"
  `include "env.sv"
  `include "base_test.sv"
  `include "tc_reg_rw_boundary_access_test.sv"
  `include "tc_cmd_trigger_strobe_test.sv"
  `include "tc_reg_lockout_dat_cmd_inhibit_test.sv"
  `include "tc_sw_reset_all_cmd_dat_test.sv"
  `include "tc_normal_int_status_w1c_test.sv"
  `include "tc_sd_emmc_reg_test.sv"
  `include "tc_sd_emmc_reg_ext_test.sv"
  `include "tc_reg_irq_gating_test.sv"
  `include "tc_reg_reset_values_test.sv"
  `include "tc_cmd_error_set_test.sv"
  `include "tc_cmd_crc7_test.sv"
  `include "tc_cap_ver_status_test.sv"
  `include "tc_bfm_init_test.sv"
  `include "tc_bfm_cmd_legality_test.sv"
  `include "tc_bfm_err_inject_test.sv"
   

endpackage : sd_emmc_tb_pkg

`endif //SD_EMMC_TB_PKG_SV
