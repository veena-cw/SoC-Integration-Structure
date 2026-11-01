class csi2_rx_internal_monitor extends uvm_monitor;
  `uvm_component_utils(csi2_rx_internal_monitor)

  uvm_analysis_port #(csi2_rx_packet_item) short_ap;

  int unsigned short_packet_count;

  bit [5:0]  short_dtype;
  bit [15:0] short_data;
  bit [1:0]  short_vc;

  bit previous_short_pkt_vld;

  csi2_env_config cfg;
  virtual csi2_rx_status_if status_vif;

  int unsigned pixel_valid_cycles;
  int unsigned axi_wr_en_cycles;
  int unsigned axi_full_cycles;
  int unsigned axi_fifo_read_cycles;
  int unsigned data_length_vld_cycles;

  function new(string name = "csi2_rx_internal_monitor",
               uvm_component parent);
    super.new(name, parent);
    short_ap = new("short_ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_config_db#(csi2_env_config)::get(this, "", "env_cfg", cfg))
      `uvm_fatal("INTERNAL_MON", "Missing environment configuration")
    status_vif = cfg.status_vif;
    if (status_vif == null)
      `uvm_fatal("INTERNAL_MON", "RX status virtual interface is null")
  endfunction

  task monitor_short_packets();
  csi2_rx_packet_item observed;

  forever begin
    @(status_vif.llp_cb);

    if (status_vif.llp_cb.rst_n !== 1'b1) begin
      previous_short_pkt_vld = 1'b0;
      observed = null;
      continue;
    end

  if ((status_vif.llp_cb.short_pkt_vld === 1'b1) &&
    (status_vif.llp_cb.long_pkt_vld  !== 1'b1) &&
    !previous_short_pkt_vld)
    begin

      observed = csi2_rx_packet_item::type_id::create(
          "observed_short");

      observed.is_short_packet = 1'b1;
      observed.datatype = status_vif.llp_cb.dtype;
    end

    if (observed != null &&
        status_vif.llp_cb.short_pkt_vld &&
        status_vif.llp_cb.rx_lm_byte_vld_r) begin

      case (status_vif.llp_cb.llp_dec_ctr)
        5'h2, 5'h12:
          observed.vc = status_vif.llp_cb.decoded_vc;

        5'h3, 5'h13:
          observed.short_data[7:0] =
              status_vif.llp_cb.short_data_lsb;

        5'h4, 5'h14:
          observed.short_data[15:8] =
              status_vif.llp_cb.short_data_msb;
      endcase
    end

   if (!status_vif.llp_cb.short_pkt_vld &&
    previous_short_pkt_vld &&
    observed != null) begin

  short_packet_count++;

  /*
   * Store the last decoded short-packet metadata
   * for the test status message.
   */
  short_dtype = observed.datatype;
  short_data  = observed.short_data;
  short_vc    = observed.vc;

  /*
   * Send this observed packet to the scoreboard.
   */
    short_ap.write(observed);
    observed = null;
    end
    previous_short_pkt_vld =
    (status_vif.llp_cb.short_pkt_vld === 1'b1) && (status_vif.llp_cb.long_pkt_vld  !== 1'b1);
  end
endtask
  task monitor_rx_domain();
    forever begin
      @(status_vif.rx_cb);
      if (status_vif.rx_cb.rst_n === 1'b1 &&
          status_vif.rx_cb.rx_pixel_dvalid)
        pixel_valid_cycles++;
    end
  endtask

  task monitor_axi_domain();
    forever begin
      @(status_vif.axi_cb);
      if (status_vif.axi_cb.rst_n !== 1'b1)
        continue;
      if (status_vif.axi_cb.axi_wr_en)
        axi_wr_en_cycles++;
      if (status_vif.axi_cb.axi_full)
        axi_full_cycles++;
      if (status_vif.axi_cb.axi_fifo_rd_vld)
        axi_fifo_read_cycles++;
      if (status_vif.axi_cb.data_length_vld)
        data_length_vld_cycles++;
    end
  endtask

  task run_phase(uvm_phase phase);
   fork
      monitor_rx_domain();
      monitor_axi_domain();
      monitor_short_packets();
   join
  endtask
endclass : csi2_rx_internal_monitor
