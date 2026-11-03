class csi2_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(csi2_scoreboard)

  csi2_env_config cfg;

  uvm_tlm_analysis_fifo #(csi2_rx_packet_item)
    expected_fifo;

  uvm_tlm_analysis_fifo #(csi2_axi_write_item)
    actual_fifo;

  uvm_tlm_analysis_fifo #(csi2_rx_packet_item)
    short_actual_fifo;

  csi2_pixel_unpacker pixel_unpacker;

  byte unsigned expected_bytes[$];
  byte unsigned actual_bytes[$];

  bit [23:0] expected_pixels[$];

  bit [5:0] expected_datatype;
  bit       expected_datatype_valid;

  /*
   * Expected short-packet information.
   */
  bit [5:0]  expected_short_dtype_q[$];
  bit [15:0] expected_short_data_q[$];
  bit [1:0]  expected_short_vc_q[$];

  /*
   * Actual short-packet information.
   */
  bit [5:0]  actual_short_dtype_q[$];
  bit [15:0] actual_short_data_q[$];
  bit [1:0]  actual_short_vc_q[$];

  int unsigned expected_transaction_count;
  int unsigned expected_long_count;
  int unsigned expected_short_count;
  int unsigned actual_short_count;

  int unsigned effective_write_count;
  int unsigned mismatch_count;

  bit          all_bfm_completed = 1'b1;
  int unsigned last_bfm_status;

  /*
   * Error observation.
   */
  bit       llp_err_seen;
  bit [2:0] llp_err_code;
  time      llp_err_time;

  bit       lane_err_seen;
  time      lane_err_time;

  /*
   * Set when the sequence intentionally injects an error.
   */
  bit expected_error_injection;


  function new(
    string name = "csi2_scoreboard",
    uvm_component parent = null
  );
    super.new(name, parent);
  endfunction


  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    expected_fifo     = new("expected_fifo", this);
    actual_fifo       = new("actual_fifo", this);
    short_actual_fifo = new("short_actual_fifo", this);

    pixel_unpacker = new();

    if (!uvm_config_db#(csi2_env_config)::get(
          this,
          "",
          "env_cfg",
          cfg
        )) begin
      `uvm_fatal(
        "SB",
        "Missing environment configuration"
      )
    end
  endfunction


  function bit is_supported_raw(
    input bit [5:0] datatype
  );
    return datatype inside {
      DT_RAW6,
      DT_RAW7,
      DT_RAW8,
      DT_RAW10,
      DT_RAW12,
      DT_RAW14,
      DT_RAW16,
      DT_RGB555,
      DT_RGB666
    };
  endfunction


  /*
   * Collect packets sent by the driver.
   */
  task collect_expected();
    csi2_rx_packet_item item;

    forever begin
      expected_fifo.get(item);

      expected_transaction_count++;

      all_bfm_completed &=
        item.bfm_completed;

      last_bfm_status =
        item.bfm_status;

      /*
       * Remember that this test intentionally injected an error.
       */
      if (item.errsoths || item.errsotsynchs || item.erresc ||
          item.errsyncesc || item.errcontrol ||
          item.errcontentionlp0 || item.errcontentionlp1 ||
          item.expect_dut_error) begin
        expected_error_injection = 1'b1;
      end

      /*
       * SHORT PACKET
       */
      if (item.is_short_packet) begin
        expected_short_count++;

        expected_short_dtype_q.push_back(
          item.datatype
        );

        expected_short_data_q.push_back(
          item.short_data
        );

        expected_short_vc_q.push_back(
          item.vc
        );

        `uvm_info(
          "SB_EXPECTED_SHORT",
          $sformatf(
            "Expected short packet #%0d dtype=0x%02h data=0x%04h vc=%0d",
            expected_short_count,
            item.datatype,
            item.short_data,
            item.vc
          ),
          UVM_MEDIUM
        )

        continue;
      end

      /*
       * LONG PACKET
       */
      expected_long_count++;

      if (!is_supported_raw(item.datatype)) begin
        mismatch_count++;

        `uvm_error(
          "SB_FORMAT",
          $sformatf(
            "Unsupported long-packet datatype 0x%02h",
            item.datatype
          )
        )

        continue;
      end

      /*
       * Current scoreboard supports one RAW format per test.
       */
      if (expected_datatype_valid &&
          (expected_datatype != item.datatype)) begin

        mismatch_count++;

        `uvm_error(
          "SB_FORMAT",
          $sformatf(
            "Multiple long-packet datatypes detected: previous=0x%02h current=0x%02h",
            expected_datatype,
            item.datatype
          )
        )

        continue;
      end

      expected_datatype       = item.datatype;
      expected_datatype_valid = 1'b1;

      foreach (item.payload[index]) begin
        expected_bytes.push_back(
          item.payload[index]
        );
      end

      if (item.expect_dut_error)
        continue;

      /*
       * Convert expected CSI-2 transport bytes into pixels.
       */
      begin
        int unsigned line_width;
        string error_msg;

        bit [23:0] unpacked_pixels[];
        bit [9:0]  y_samples[];
        bit [9:0]  u_samples[];
        bit [9:0]  v_samples[];

        if (!pixel_unpacker.infer_line_width(
              item.datatype,
              item.payload.size(),
              ODD_LINE,
              line_width,
              error_msg
            )) begin

          mismatch_count++;

          `uvm_error(
            "SB_CSI_UNPACK",
            $sformatf(
              "Cannot infer line width: %s",
              error_msg
            )
          )

          continue;
        end

        if (!pixel_unpacker.unpack(
              item.datatype,
              item.payload,
              line_width,
              ODD_LINE,
              unpacked_pixels,
              y_samples,
              u_samples,
              v_samples,
              error_msg
            )) begin

          mismatch_count++;

          `uvm_error(
            "SB_CSI_UNPACK",
            $sformatf(
              "CSI-2 payload unpack failed: %s",
              error_msg
            )
          )

          continue;
        end

        foreach (unpacked_pixels[index]) begin
          expected_pixels.push_back(
            unpacked_pixels[index]
          );
        end

        `uvm_info(
          "SB_EXPECTED",
          $sformatf(
            "Expected dtype=0x%02h transport_bytes=%0d pixels=%0d",
            item.datatype,
            item.payload.size(),
            unpacked_pixels.size()
          ),
          UVM_MEDIUM
        )
      end
    end
  endtask


  /*
   * Collect accepted AXI output bytes.
   */
  task collect_actual();
    csi2_axi_write_item item;

    forever begin
      actual_fifo.get(item);

      effective_write_count++;

      foreach (item.accepted_bytes[index]) begin
        actual_bytes.push_back(
          item.accepted_bytes[index]
        );
      end
    end
  endtask


  /*
   * Collect decoded short packets from the internal monitor.
   */
  task collect_actual_short();
    csi2_rx_packet_item item;

    forever begin
      short_actual_fifo.get(item);

      actual_short_count++;

      actual_short_dtype_q.push_back(
        item.datatype
      );

      actual_short_data_q.push_back(
        item.short_data
      );

      actual_short_vc_q.push_back(
        item.vc
      );

      `uvm_info(
        "SB_ACTUAL_SHORT",
        $sformatf(
          "Observed short packet #%0d dtype=0x%02h data=0x%04h vc=%0d",
          actual_short_count,
          item.datatype,
          item.short_data,
          item.vc
        ),
        UVM_MEDIUM
      )
    end
  endtask


  /*
   * Capture DUT error pulses.
   */
  task collect_errors();
    forever begin
      @(cfg.status_vif.rx_cb);

      if (cfg.status_vif.rx_cb.rst_n !== 1'b1) begin
        continue;
      end

      if (cfg.status_vif.rx_cb.llp_err_vld === 1'b1) begin
        llp_err_seen = 1'b1;
        llp_err_code = cfg.status_vif.rx_cb.llp_err;
        llp_err_time = $time;

        `uvm_info(
          "SB_LLP_CAPTURE",
          $sformatf(
            "LLP error captured: time=%0t code=%0d",
            llp_err_time,
            llp_err_code
          ),
          UVM_NONE
        )
      end

      if (cfg.status_vif.rx_cb.lane_err === 1'b1) begin
        lane_err_seen = 1'b1;
        lane_err_time = $time;

        `uvm_info(
          "SB_LANE_CAPTURE",
          $sformatf(
            "Lane error captured: time=%0t",
            lane_err_time
          ),
          UVM_NONE
        )
      end
    end
  endtask


  task run_phase(uvm_phase phase);
    fork
      collect_expected();
      collect_actual();
      collect_actual_short();
      collect_errors();
    join
  endtask


  function void check_phase(uvm_phase phase);
    bit [23:0] actual_pixels[];

    string error_msg;

    int unsigned short_compare_count;
    int unsigned pixel_compare_count;

    super.check_phase(phase);

    /*
     * Basic BFM transaction checks.
     */
    if ((expected_transaction_count == 0) && !cfg.control_only_test) begin
      mismatch_count++;

      `uvm_error(
        "SB_CHECK",
        "No completed BFM transaction was observed"
      )
    end

    if (!all_bfm_completed && !cfg.control_only_test &&
        !cfg.reset_interruption_test) begin
      mismatch_count++;

      `uvm_error(
        "SB_CHECK",
        $sformatf(
          "A BFM transaction did not complete; last status=%0d",
          last_bfm_status
        )
      )
    end

    /*
     * ERROR-INJECTION CHECK
     *
     * For normal tests, any DUT error is a failure.
     *
     * For an error-injection test, at least one error indication
     * is expected and must not be reported as an unexpected failure.
     */
    if (cfg.control_only_test) begin
      `uvm_info("SB_CONTROL_ONLY",
                "Skipping packet-path error checks for control-only test",
                UVM_NONE)
    end
    else if (cfg.reset_interruption_test) begin
      `uvm_info("SB_RESET_INTERRUPT",
                "Packet interruption by reset was intentional", UVM_NONE)
    end
    else if (expected_error_injection) begin
      if (!llp_err_seen &&
          !lane_err_seen) begin

        mismatch_count++;

        `uvm_error(
          "SB_EXPECTED_ERROR",
          "Error injection was requested, but no LLP or lane error was observed"
        )
      end
      else begin
        `uvm_info(
          "SB_EXPECTED_ERROR",
          $sformatf(
            "Expected DUT error observed: llp_seen=%0b llp_code=%0d llp_time=%0t lane_seen=%0b lane_time=%0t",
            llp_err_seen,
            llp_err_code,
            llp_err_time,
            lane_err_seen,
            lane_err_time
          ),
          UVM_NONE
        )
      end
    end
    else begin
      if (llp_err_seen) begin
        mismatch_count++;

        `uvm_error(
          "SB_DUT_ERROR",
          $sformatf(
            "Unexpected LLP error captured at time=%0t code=%0d",
            llp_err_time,
            llp_err_code
          )
        )
      end

      if (lane_err_seen) begin
        mismatch_count++;

        `uvm_error(
          "SB_DUT_ERROR",
          $sformatf(
            "Unexpected lane error captured at time=%0t",
            lane_err_time
          )
        )
      end
    end

    /*
     * SHORT-PACKET CHECK
     */
    if (expected_short_count != actual_short_count) begin
      mismatch_count++;

      `uvm_error(
        "SB_SHORT_COUNT",
        $sformatf(
          "Short-packet count differs: expected=%0d actual=%0d",
          expected_short_count,
          actual_short_count
        )
      )
    end

    short_compare_count =
      (expected_short_count < actual_short_count) ?
      expected_short_count :
      actual_short_count;

    for (int index = 0;
         index < short_compare_count;
         index++) begin

      if (expected_short_dtype_q[index] !=
          actual_short_dtype_q[index]) begin

        mismatch_count++;

        `uvm_error(
          "SB_SHORT_DTYPE",
          $sformatf(
            "Short packet[%0d] datatype differs: expected=0x%02h actual=0x%02h",
            index,
            expected_short_dtype_q[index],
            actual_short_dtype_q[index]
          )
        )
      end

      if (expected_short_data_q[index] !=
          actual_short_data_q[index]) begin

        mismatch_count++;

        `uvm_error(
          "SB_SHORT_DATA",
          $sformatf(
            "Short packet[%0d] data differs: expected=0x%04h actual=0x%04h",
            index,
            expected_short_data_q[index],
            actual_short_data_q[index]
          )
        )
      end

      if (expected_short_vc_q[index] !=
          actual_short_vc_q[index]) begin

        mismatch_count++;

        `uvm_error(
          "SB_SHORT_VC",
          $sformatf(
            "Short packet[%0d] VC differs: expected=%0d actual=%0d",
            index,
            expected_short_vc_q[index],
            actual_short_vc_q[index]
          )
        )
      end
    end

    /*
     * A test containing only short packets must not produce
     * payload writes on AXI.
     */
    if ((expected_long_count == 0) &&
        (expected_short_count != 0)) begin

      if ((effective_write_count != 0) ||
          (actual_bytes.size() != 0)) begin

        mismatch_count++;

        `uvm_error(
          "SB_SHORT_AXI",
          $sformatf(
            "Short-only test generated AXI payload data: writes=%0d bytes=%0d",
            effective_write_count,
            actual_bytes.size()
          )
        )
      end

      return;
    end

    /*
     * No long packet means no RAW pixel comparison is required.
     */
    if (expected_long_count == 0) begin
      return;
    end

    if (cfg.reset_interruption_test)
      return;

    if (expected_error_injection)
      return;

    if (!expected_datatype_valid) begin
      mismatch_count++;

      `uvm_error(
        "SB_FORMAT",
        "Expected long-packet datatype is unavailable"
      )

      return;
    end

    if (cfg.status_vif.dtype !==
        expected_datatype) begin

      mismatch_count++;

      `uvm_error(
        "SB_DTYPE",
        $sformatf(
          "Expected datatype 0x%02h, observed 0x%02h",
          expected_datatype,
          cfg.status_vif.dtype
        )
      )
    end

    if (effective_write_count == 0) begin
      mismatch_count++;

      `uvm_error(
        "SB_AXI",
        "No effective AXI write was observed"
      )

      return;
    end

    /*
     * IMPORTANT:
     *
     * Use the RAW-format-aware AXI unpacker from
     * csi2_pixel_unpacker.
     *
     * RAW10 requires 40-bit group decoding and cannot use the
     * previous generic LSB-first scoreboard function.
     */
    if (!pixel_unpacker.unpack_axi_raw(
          expected_datatype,
          actual_bytes,
          actual_pixels,
          error_msg
        )) begin

      mismatch_count++;

      `uvm_error(
        "SB_AXI_UNPACK",
        $sformatf(
          "AXI pixel unpack failed: %s",
          error_msg
        )
      )

      return;
    end

    if (actual_pixels.size() !=
        expected_pixels.size()) begin

      mismatch_count++;

      `uvm_error(
        "SB_PIXEL_COUNT",
        $sformatf(
          "Pixel count differs: expected=%0d actual=%0d",
          expected_pixels.size(),
          actual_pixels.size()
        )
      )
    end

    pixel_compare_count =
      (actual_pixels.size() < expected_pixels.size()) ?
      actual_pixels.size() :
      expected_pixels.size();

    for (int index = 0;
         index < pixel_compare_count;
         index++) begin

      if (actual_pixels[index] !=
          expected_pixels[index]) begin

        mismatch_count++;

        `uvm_error(
          "SB_PIXEL_DATA",
          $sformatf(
            "Pixel[%0d] expected=0x%06h actual=0x%06h dtype=0x%02h",
            index,
            expected_pixels[index],
            actual_pixels[index],
            expected_datatype
          )
        )

        /*
         * Report the first pixel mismatch only.
         */
        break;
      end
    end

    `uvm_info(
      "SB_PIXEL_CHECK",
      $sformatf(
        "Compared dtype=0x%02h expected_pixels=%0d actual_pixels=%0d expected_transport_bytes=%0d actual_axi_bytes=%0d",
        expected_datatype,
        expected_pixels.size(),
        actual_pixels.size(),
        expected_bytes.size(),
        actual_bytes.size()
      ),
      UVM_NONE
    )
  endfunction


  function void report_phase(uvm_phase phase);
    super.report_phase(phase);

    if (mismatch_count == 0) begin
      `uvm_info(
        "SB_SUMMARY",
        $sformatf(
          "PASS packets=%0d long=%0d expected_short=%0d actual_short=%0d expected_pixels=%0d axi_bytes=%0d writes=%0d",
          expected_transaction_count,
          expected_long_count,
          expected_short_count,
          actual_short_count,
          expected_pixels.size(),
          actual_bytes.size(),
          effective_write_count
        ),
        UVM_NONE
      )
    end
    else begin
      `uvm_error(
        "SB_SUMMARY",
        $sformatf(
          "FAIL packets=%0d long=%0d expected_short=%0d actual_short=%0d expected_pixels=%0d axi_bytes=%0d writes=%0d mismatches=%0d",
          expected_transaction_count,
          expected_long_count,
          expected_short_count,
          actual_short_count,
          expected_pixels.size(),
          actual_bytes.size(),
          effective_write_count,
          mismatch_count
        )
      )
    end
  endfunction

endclass : csi2_scoreboard
