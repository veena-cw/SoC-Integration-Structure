class csi2_back_to_back_short_test extends csi2_base_test;
  `uvm_component_utils(csi2_back_to_back_short_test)

  function new(
    string name = "csi2_back_to_back_short_test",
    uvm_component parent = null
  );
    super.new(name, parent);
  endfunction

  virtual task run_scenario();
    csi2_back_to_back_short_seq sequence_h;

    apply_reset();

    sequence_h =
        csi2_back_to_back_short_seq::type_id::create(
          "back_to_back_short_sequence"
        );

    sequence_h.start(env.ppi_agent.sequencer);

    /*
     * Allow the LLP short-packet decoder and scoreboard
     * to process both packets.
     */
    repeat (3000) @(env_cfg.axi_vif.mon_cb);

    `uvm_info(
      "RX_BACK_TO_BACK_SHORT_STATUS",
      $sformatf(
        {"BFM status=%0d state=%0d ",
         "dtype=0x%02h lane_err=%0b llp_err=%0b ",
         "short_packets=%0d ",
         "last_short_dtype=0x%02h ",
         "last_short_data=0x%04h ",
         "last_short_vc=%0d ",
         "pixel_valid=%0d ",
         "AW=%0d W=%0d B=%0d effective=%0d"},
        env_cfg.phy_vif.last_status,
        env_cfg.phy_vif.bfm_state,
        env_cfg.status_vif.dtype,
        env_cfg.status_vif.lane_err,
        env_cfg.status_vif.llp_err_vld,

        env.internal_monitor.short_packet_count,
        env.internal_monitor.short_dtype,
        env.internal_monitor.short_data,
        env.internal_monitor.short_vc,

        env.internal_monitor.pixel_valid_cycles,

        env.axi_monitor.aw_handshake_count,
        env.axi_monitor.w_handshake_count,
        env.axi_monitor.b_handshake_count,
        env.axi_monitor.effective_write_count
      ),
      UVM_NONE
    )
  endtask

endclass : csi2_back_to_back_short_test
