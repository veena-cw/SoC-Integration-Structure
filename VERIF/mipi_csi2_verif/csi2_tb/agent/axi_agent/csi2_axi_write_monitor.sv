class csi2_axi_write_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_axi_write_monitor)

  csi2_env_config cfg;
  virtual csi2_axi_write_if axi_vif;

  uvm_analysis_port #(csi2_axi_write_item) ap;

  int unsigned w_handshake_count;
  int unsigned aw_handshake_count;
  int unsigned b_handshake_count;
  int unsigned orphan_w_count;
  int unsigned zero_strobe_count;
  int unsigned effective_write_count;

  /*
   * AXI AW and W channels are independent.
   *
   * pending_aw_q contains accepted AW transactions that have not yet
   * started receiving W data.
   */
  csi2_axi_write_item pending_aw_q[$];

  /*
   * active_aw represents the AW transaction associated with the
   * currently active W burst.
   *
   * It remains valid until an accepted W beat asserts WLAST.
   */
  csi2_axi_write_item active_aw;

  int unsigned active_w_beat_count;

  function new(
    string name = "csi2_axi_write_monitor",
    uvm_component parent = null
  );
    super.new(name, parent);
    ap = new("ap", this);
  endfunction


  function void build_phase(uvm_phase phase);
    super.build_phase(phase);

    if (!uvm_config_db#(csi2_env_config)::get(
          this,
          "",
          "env_cfg",
          cfg
        )) begin
      `uvm_fatal(
        "AXI_MON",
        "Missing environment configuration"
      )
    end

    axi_vif = cfg.axi_vif;

    if (axi_vif == null) begin
      `uvm_fatal(
        "AXI_MON",
        "AXI virtual interface is null"
      )
    end
  endfunction


  task run_phase(uvm_phase phase);
    forever begin
      @(axi_vif.mon_cb);

      /*
       * Clear all monitor state during reset.
       */
      if (axi_vif.mon_cb.areset_n !== 1'b1) begin
        pending_aw_q.delete();
        active_aw           = null;
        active_w_beat_count = 0;

        w_handshake_count   = 0;
        aw_handshake_count  = 0;
        b_handshake_count   = 0;
        orphan_w_count      = 0;
        zero_strobe_count   = 0;
        effective_write_count = 0;

        continue;
      end

      /*
       * Capture every accepted AW transaction.
       *
       * Multiple accepted AW transactions can remain queued while
       * the current W burst is being transferred.
       */
      if (axi_vif.mon_cb.awvalid &&
          axi_vif.mon_cb.awready) begin

        csi2_axi_write_item aw_item;

        aw_item =
            csi2_axi_write_item::type_id::create("aw_item");

        aw_item.address = axi_vif.mon_cb.awaddr;
        aw_item.awid    = axi_vif.mon_cb.awid;
        aw_item.awlen   = axi_vif.mon_cb.awlen;
        aw_item.awsize  = axi_vif.mon_cb.awsize;
        aw_item.awburst = axi_vif.mon_cb.awburst;

        pending_aw_q.push_back(aw_item);

        aw_handshake_count++;

        `uvm_info(
          "AXI_MON_AW",
          $sformatf(
            "AW #%0d address=0x%0h id=%0d len=%0d size=%0d burst=%0d pending=%0d",
            aw_handshake_count,
            aw_item.address,
            aw_item.awid,
            aw_item.awlen,
            aw_item.awsize,
            aw_item.awburst,
            pending_aw_q.size()
          ),
          UVM_HIGH
        )
      end

      /*
       * Capture every accepted W beat.
       */
      if (axi_vif.mon_cb.wvalid &&
          axi_vif.mon_cb.wready) begin

        csi2_axi_write_item item;
        bit effective_beat;

        w_handshake_count++;

        /*
         * Associate a new AW only when starting a new W burst.
         *
         * Do not pop another AW for every W beat.
         */
        if (active_aw == null) begin
          if (pending_aw_q.size() != 0) begin
            active_aw = pending_aw_q.pop_front();
            active_w_beat_count = 0;
          end
          else begin
            orphan_w_count++;

            `uvm_warning(
              "AXI_MON_ORPHAN_W",
              $sformatf(
                "W beat #%0d has no associated AW transaction",
                w_handshake_count
              )
            )
          end
        end

        effective_beat = (|axi_vif.mon_cb.wstrb);

        /*
         * A zero-strobe beat is still an AXI W handshake, but it does
         * not write any bytes.
         */
        if (!effective_beat) begin
          zero_strobe_count++;

          `uvm_warning(
            "AXI_MON_ZERO_STROBE",
            $sformatf(
              "W beat #%0d has WSTRB=0 WLAST=%0b",
              w_handshake_count,
              axi_vif.mon_cb.wlast
            )
          )
        end
        else begin
          item =
              csi2_axi_write_item::type_id::create("item");

          /*
           * Copy the AW metadata associated with this complete burst.
           */
          if (active_aw != null) begin
            item.address = active_aw.address;
            item.awid    = active_aw.awid;
            item.awlen   = active_aw.awlen;
            item.awsize  = active_aw.awsize;
            item.awburst = active_aw.awburst;
          end

          item.aw_seen = (active_aw != null);
          item.wlast   = axi_vif.mon_cb.wlast;

          /*
           * Store only byte lanes enabled by WSTRB.
           */
          for (
            int byte_index = 0;
            byte_index < $bits(axi_vif.mon_cb.wstrb);
            byte_index++
          ) begin
            if (axi_vif.mon_cb.wstrb[byte_index]) begin
              item.accepted_bytes.push_back(
                axi_vif.mon_cb.wdata[
                  byte_index*8 +: 8
                ]
              );
            end
          end

          effective_write_count++;

          ap.write(item);
        end

        /*
         * Count this W beat inside the active burst.
         */
        if (active_aw != null) begin
          active_w_beat_count++;
        end

        /*
         * WLAST completes the current W burst.
         *
         * Only here should active_aw be cleared.
         */
        if (axi_vif.mon_cb.wlast) begin
          if (active_aw != null) begin
            if (active_w_beat_count !=
                (int'(active_aw.awlen) + 1)) begin

              `uvm_warning(
                "AXI_MON_BURST_LENGTH",
                $sformatf(
                  "WLAST received after %0d beats; AWLEN=%0d expects %0d beats",
                  active_w_beat_count,
                  active_aw.awlen,
                  int'(active_aw.awlen) + 1
                )
              )
            end
          end

          active_aw           = null;
          active_w_beat_count = 0;
        end
      end

      /*
       * Capture accepted B responses.
       */
      if (axi_vif.mon_cb.bvalid &&
          axi_vif.mon_cb.bready) begin
        b_handshake_count++;
      end
    end
  endtask

endclass : csi2_axi_write_monitor
