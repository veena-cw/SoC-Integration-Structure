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

  // AXI address and write-data channels are independent.  Keep accepted
  // address transfers in order and associate them with subsequent W beats.
  csi2_axi_write_item pending_aw_q[$];

  function new(string name = "csi2_axi_write_monitor", uvm_component parent);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("AXI_MON", "Missing environment configuration")
    axi_vif = cfg.axi_vif;
    if (axi_vif == null)
      `uvm_fatal("AXI_MON", "AXI virtual interface is null")
  endfunction

  task run_phase(uvm_phase phase);
    forever begin
      @(axi_vif.mon_cb);
      if (axi_vif.mon_cb.areset_n !== 1'b1) begin
        pending_aw_q.delete();
        continue;
      end

      if (axi_vif.mon_cb.awvalid && axi_vif.mon_cb.awready) begin
        csi2_axi_write_item aw_item;
        aw_item = csi2_axi_write_item::type_id::create("aw_item");
        aw_item.address = axi_vif.mon_cb.awaddr;
        aw_item.awid    = axi_vif.mon_cb.awid;
        aw_item.awlen   = axi_vif.mon_cb.awlen;
        aw_item.awsize  = axi_vif.mon_cb.awsize;
        aw_item.awburst = axi_vif.mon_cb.awburst;
        pending_aw_q.push_back(aw_item);
        aw_handshake_count++;
      end

      if (axi_vif.mon_cb.wvalid && axi_vif.mon_cb.wready) begin
        csi2_axi_write_item item;
        csi2_axi_write_item aw_item;
        w_handshake_count++;

        if (pending_aw_q.size() != 0) begin
          aw_item = pending_aw_q.pop_front();
        end
        else begin
          orphan_w_count++;
        end

        if (!(|axi_vif.mon_cb.wstrb)) begin
          zero_strobe_count++;
          continue;
        end

        item = csi2_axi_write_item::type_id::create("item");
        if (aw_item != null) begin
          item.address = aw_item.address;
          item.awid    = aw_item.awid;
          item.awlen   = aw_item.awlen;
          item.awsize  = aw_item.awsize;
          item.awburst = aw_item.awburst;
        end
        item.aw_seen = (aw_item != null);
        item.wlast   = axi_vif.mon_cb.wlast;

        // The active RAW7 RTL has seven strobe bits.  Bytes without a strobe
        // are intentionally discarded even when WDATA is nonzero.
        for (int byte_index = 0; byte_index < 7; byte_index++)
          if (axi_vif.mon_cb.wstrb[byte_index])
            item.accepted_bytes.push_back(
                axi_vif.mon_cb.wdata[byte_index*8 +: 8]);

        effective_write_count++;
        ap.write(item);
      end

      if (axi_vif.mon_cb.bvalid && axi_vif.mon_cb.bready)
        b_handshake_count++;
    end
  endtask
endclass : csi2_axi_write_monitor
