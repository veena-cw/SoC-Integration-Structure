/*class csi2_ppi_driver extends uvm_driver #(csi2_rx_packet_item);
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
endclass : csi2_ppi_driver*/


class csi2_ppi_driver extends uvm_driver #(csi2_rx_packet_item);
  `uvm_component_utils(csi2_ppi_driver)

  csi2_env_config cfg;
  virtual c_phy_bfm_if phy_vif;
  uvm_analysis_port #(csi2_rx_packet_item) expected_ap;

  function new(
    string name = "csi2_ppi_driver",
    uvm_component parent = null
  );
    super.new(name, parent);
    expected_ap = new("expected_ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db#(csi2_env_config)::get(
          this, "", "env_cfg", cfg
        )) begin
      `uvm_fatal("PPI_DRV",
                 "Missing environment configuration")
    end

    phy_vif = cfg.phy_vif;

    if (phy_vif == null) begin
      `uvm_fatal("PPI_DRV",
                 "C-PHY BFM virtual interface is null")
    end
  endfunction

  task drive_item(csi2_rx_packet_item item);
    bit started;
    bit early_eot;
    int last_index;

    logic [63:0] header_word;
    logic [63:0] payload_words[$];


     // Build the packet header.

     // For a short packet, header bytes 2 and 3 contain short_data.
     // For a long packet, header bytes 2 and 3 contain word count.

    header_word = csi2_rtl_packet_builder::build_header_word(item);


     // Short packets do not have a payload or payload CRC.
     // Only long packets use build_payload_words().

    payload_words.delete();

    if (!item.is_short_packet)
    begin
      csi2_rtl_packet_builder::build_payload_words(item,payload_words);
    end

    `uvm_info("STIMULUS_CHECK", $sformatf(
        "packet=%s testcase=%s dtype=0x%02h vc=%0d vcx=%0d short_data=0x%04h payload=%0d payload_words=%0d transport_bytes=%0d header=%016h",
        item.is_short_packet ? "SHORT" : "LONG",
        item.test_case,
        item.datatype,
        item.vc,
        item.vcx,
        item.short_data,
        item.payload.size(),
        payload_words.size(),
        payload_words.size() * 8,
        header_word
      ),
      UVM_NONE
    )

    phy_vif.active_segment_mask = cfg.active_segment_mask;

    phy_vif.rtl_sync_workaround = cfg.rtl_sync_workaround;

    phy_vif.rtl_ulps_polarity_workaround = cfg.rtl_ulps_polarity_workaround;

    phy_vif.rtl_eot_workaround = cfg.rtl_eot_workaround;

    //Enter HS mode.

    phy_vif.start_hs(started);

    if (!started) begin
      `uvm_error("PPI_DRV",
                 "PHY BFM failed to enter HS mode")
      phy_vif.force_idle();
      return;
    end


     // Drive the initial synchronization sequence.

    phy_vif.drive_sync(
      item.sync_type,
      1'b1,
      cfg.active_segment_mask
    );

    if (phy_vif.last_status != 0)
    begin
      `uvm_error(
        "PPI_DRV",
        $sformatf(
          "drive_sync failed; BFM status=%0d",
          phy_vif.last_status
        )
      )
      phy_vif.force_idle();
      return;
    end


     //First header transfer required by the current RTL/BFM profile.

    phy_vif.drive_hs_word(
      header_word,
      1'b0,
      cfg.active_segment_mask
    );

    if (phy_vif.last_status != 0)
    begin
      `uvm_error(
        "PPI_DRV",
        $sformatf(
          "First header transfer failed; BFM status=%0d",
          phy_vif.last_status
        )
      )
      phy_vif.force_idle();
      return;
    end


     // Optional synchronization-error injection.

    if(item.errsotsynchs)
    begin
      phy_vif.errsotsynchs = 1'b1;
    end

    phy_vif.drive_rtl_inter_header_sync(
      item.sync_type,
      cfg.active_segment_mask
    );

    if (item.errsotsynchs) begin
      phy_vif.errsotsynchs = 1'b0;
    end

    if (phy_vif.last_status != 0)
    begin
      `uvm_error(
        "PPI_DRV",
        $sformatf(
          "Inter-header synchronization failed; BFM status=%0d",
          phy_vif.last_status
        )
      )
      phy_vif.force_idle();
      return;
    end


    // Second header transfer required by the current RTL workaround.

     //For a short packet, this is the final packet data word, so EoT is
     // indicated on this transfer.

     // For a long packet, payload words follow, so EoT remains low.

   phy_vif.drive_hs_word(
      header_word,
      item.is_short_packet && item.send_eot,
      cfg.active_segment_mask
    );

    if (phy_vif.last_status != 0)
    begin
      `uvm_error(
        "PPI_DRV",
        $sformatf(
          "Second header transfer failed; BFM status=%0d",
          phy_vif.last_status
        )
      )
      phy_vif.force_idle();
      return;
    end


     // SHORT-PACKET PATH

     // A short packet ends after its header. It must not enter the
     //payload loop because it has no payload and no payload CRC.

    if (item.is_short_packet)
    begin
      `uvm_info(
        "PPI_DRV_SHORT",
        $sformatf(
          "Short packet completed: dtype=0x%02h vc=%0d vcx=%0d data=0x%04h eot=%0b",
          item.datatype,
          item.vc,
          item.vcx,
          item.short_data,
          item.send_eot
        ),
        UVM_NONE
      )

      if (item.send_eot) begin
        phy_vif.drive_post_and_eot();
      end
      else begin
        phy_vif.finish_without_eot();
      end

      return;
    end


     // LONG-PACKET PATH

    `uvm_info(
      "PPI_DRV_LONG",
      $sformatf(
        "Driving %0d payload transport words to PHY BFM",
        payload_words.size()
      ),
      UVM_NONE
    )


     // Protect against accidentally trying to drive an empty long packet.
     // A separate zero-word-count test may need its own intended behavior.

    if (payload_words.size() == 0) begin
      `uvm_warning(
        "PPI_DRV_LONG",
        "Long packet contains no payload transport words"
      )

      if (item.send_eot) begin
        phy_vif.drive_post_and_eot();
      end
      else begin
        phy_vif.finish_without_eot();
      end

      return;
    end

    early_eot = (item.test_case == "END_EARLY_EOT");


     // Current early-EoT test transmits payload_words[0] through
     // payload_words[5], meaning six 64-bit transport words.

     // Clamp the index so that a small packet cannot access beyond
     // payload_words[].

    if (early_eot && (payload_words.size() > 6))
    begin
      last_index = 5;
    end
    else begin
      last_index = payload_words.size() - 1;
    end

    if (early_eot) begin
      `uvm_info(
        "PPI_DRV_EARLY_EOT",
        $sformatf(
          "Early EoT enabled: driving %0d of %0d payload transport words",
          last_index + 1,
          payload_words.size()
        ),
        UVM_NONE
      )
    end

    for (int index = 0; index <= last_index; index++) begin
      `uvm_info(
        "PPI_DRV_DATA",
        $sformatf(
          "Driving payload word[%0d]=%016h eot=%0b",
          index,
          payload_words[index],
          item.send_eot && (index == last_index)
        ),
        UVM_HIGH
      )

      phy_vif.drive_hs_word(
        payload_words[index],
        item.send_eot && (index == last_index),
        cfg.active_segment_mask
      );

      if (phy_vif.last_status != 0) begin
        `uvm_error(
          "PPI_DRV",
          $sformatf(
            "Payload word[%0d] failed; BFM status=%0d",
            index,
            phy_vif.last_status
          )
        )
        phy_vif.force_idle();
        return;
      end
    end

    if (item.send_eot) begin
      phy_vif.drive_post_and_eot();
    end
    else begin
      phy_vif.finish_without_eot();
    end
  endtask

  task run_phase(uvm_phase phase);
    csi2_rx_packet_item req;
    csi2_rx_packet_item expected;

    forever begin
      wait (cfg.rst_vif.rst_n === 1'b1);

      seq_item_port.get_next_item(req);

      drive_item(req);

      req.bfm_status = int'(phy_vif.last_status);

      req.bfm_completed =
          ((phy_vif.last_status == 0) &&
           (phy_vif.bfm_state == 0));


       // Create a separate snapshot for the scoreboard.

      expected =
          csi2_rx_packet_item::type_id::create("expected");

      expected.copy_from(req);
      expected_ap.write(expected);

      seq_item_port.item_done();
    end
  endtask

endclass : csi2_ppi_driver
