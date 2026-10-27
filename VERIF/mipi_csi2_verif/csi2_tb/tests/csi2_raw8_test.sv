class csi2_raw8_test extends csi2_base_test;
  `uvm_component_utils(csi2_raw8_test)

  function new(string name = "csi2_raw8_test",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    csi2_raw8_seq sequence_h;
    apply_reset();
    sequence_h = csi2_raw8_seq::type_id::create("raw8_sequence");
    sequence_h.start(env.ppi_agent.sequencer);

    // Drain the LLP, pixel-converter and AXI CDC paths.
    repeat (3000) @(env_cfg.axi_vif.mon_cb);

    `uvm_info("RX_raw8_STATUS",
              $sformatf("BFM status=%0d state=%0d dtype=0x%02h lane_err=%0b llp_err=%0b  pixel_valid=%0d axi_wr_en=%0d fifo_read=%0d fifo_full=%0d length_vld=%0d AW=%0d W handshakes=%0d B=%0d orphan-W=%0d zero-strobe=%0d effective=%0d",
                        env_cfg.phy_vif.last_status,
                        env_cfg.phy_vif.bfm_state,
                        env_cfg.status_vif.dtype,
                        env_cfg.status_vif.lane_err,
                        env_cfg.status_vif.llp_err_vld,
                        env.internal_monitor.pixel_valid_cycles,
                        env.internal_monitor.axi_wr_en_cycles,
                        env.internal_monitor.axi_fifo_read_cycles,
                        env.internal_monitor.axi_full_cycles,
                        env.internal_monitor.data_length_vld_cycles,
                        env.axi_monitor.aw_handshake_count,
                        env.axi_monitor.w_handshake_count,
                        env.axi_monitor.b_handshake_count,
                        env.axi_monitor.orphan_w_count,
                        env.axi_monitor.zero_strobe_count,
                        env.axi_monitor.effective_write_count), UVM_NONE)
  endtask
endclass : csi2_raw8_test
