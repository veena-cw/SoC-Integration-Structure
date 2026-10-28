class csi2_ppi_driver extends uvm_driver #(csi2_rx_packet_item);
  `uvm_component_utils(csi2_ppi_driver)

  csi2_env_config cfg;
  virtual c_phy_bfm_if phy_vif;
  uvm_analysis_port #(csi2_rx_packet_item) expected_ap;

  function new(string name = "csi2_ppi_driver", uvm_component parent);
    super.new(name, parent);
    expected_ap = new("expected_ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("PPI_DRV", "Missing environment configuration")
    phy_vif = cfg.phy_vif;
    if (phy_vif == null)
      `uvm_fatal("PPI_DRV", "C-PHY BFM virtual interface is null")
  endfunction

  task drive_item(csi2_rx_packet_item item);
    bit started;
    logic [63:0] header_word;
    logic [63:0] payload_words[$];
    int last_index;
    bit early_eot;

    header_word = csi2_rtl_packet_builder::build_header_word(item);
    csi2_rtl_packet_builder::build_payload_words(item, payload_words);

    `uvm_info("STIMULUS_CHECK",$sformatf("DATA TYPE:%0h payload=%0d bytes payload_words=%0d transport_bytes=%0d, header=%016h", item.datatype ,item.payload.size(),
            payload_words.size(),
            payload_words.size() * 8,
            header_word),
            UVM_NONE)

    phy_vif.active_segment_mask          = cfg.active_segment_mask;
    phy_vif.rtl_sync_workaround          = cfg.rtl_sync_workaround;
    phy_vif.rtl_ulps_polarity_workaround = cfg.rtl_ulps_polarity_workaround;
    phy_vif.rtl_eot_workaround           = cfg.rtl_eot_workaround;

    phy_vif.start_hs(started);
    if (!started)
    begin
      phy_vif.force_idle();
      return;
    end

    phy_vif.drive_sync(item.sync_type, 1'b1, cfg.active_segment_mask);
    if (phy_vif.last_status != 0)
    begin
      phy_vif.force_idle();
      return;
    end

    phy_vif.drive_hs_word(header_word, 1'b0, cfg.active_segment_mask);
    if (phy_vif.last_status != 0) begin
      phy_vif.force_idle();
      return;
    end

    if (item.errsotsynchs)
    phy_vif.errsotsynchs = 1'b1;

    phy_vif.drive_rtl_inter_header_sync(item.sync_type, cfg.active_segment_mask);

    if (item.errsotsynchs)
    phy_vif.errsotsynchs = 1'b0;

    if (phy_vif.last_status != 0) begin
      phy_vif.force_idle();
      return;
    end
    phy_vif.drive_hs_word(header_word, 1'b0, cfg.active_segment_mask);
    if (phy_vif.last_status != 0) begin
      phy_vif.force_idle();
      return;
    end

    `uvm_info("PPI_DRV", $sformatf("Driving %0d payload words to PHY BFM",payload_words.size()), UVM_NONE)



early_eot = (item.test_case == "END_EARLY_EOT");
last_index = early_eot ? 5 : payload_words.size() - 1;

for (int index = 0; index <= last_index; index++)
begin
  phy_vif.drive_hs_word(
    payload_words[index],
    item.send_eot && (index == last_index),
    cfg.active_segment_mask
  );

  if (phy_vif.last_status != 0) begin
    phy_vif.force_idle();
    return;
  end
end

if (item.send_eot)
  phy_vif.drive_post_and_eot();
else
  phy_vif.finish_without_eot();
  endtask

  task run_phase(uvm_phase phase);
    csi2_rx_packet_item req;
    csi2_rx_packet_item expected;

    forever
    begin
      wait (cfg.rst_vif.rst_n === 1'b1);
      seq_item_port.get_next_item(req);
      drive_item(req);

      req.bfm_status    = int'(phy_vif.last_status);
      req.bfm_completed = ((phy_vif.last_status == 0) &&
                          (phy_vif.bfm_state == 0));

      expected = csi2_rx_packet_item::type_id::create("expected");
      expected.copy_from(req);
      expected_ap.write(expected);
      seq_item_port.item_done();
    end
  endtask
endclass : csi2_ppi_driver
