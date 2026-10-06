class cpu_axi_agent_monitor #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_monitor;
  `uvm_component_param_utils(cpu_axi_agent_monitor #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH) txn_t;
  localparam int STRB_WIDTH = DATA_WIDTH / 8;

  virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH) vif;
  uvm_analysis_port #(txn_t) ap;

  function new(string name = "cpu_axi_agent_monitor", uvm_component parent = null);
    super.new(name, parent);
    ap = new("ap", this);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(
          virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH))::read_by_name(
          get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf(
        "[%s] AXI virtual interface not found", get_full_name()))
  endfunction

  task run_phase(uvm_phase phase);
    bit [ADDR_WIDTH-1:0] write_addr;
    bit [ID_WIDTH-1:0]   write_id;
    int unsigned         write_awsize;
    int unsigned         write_bytes;
    int unsigned         write_len;
    int unsigned         write_burst_len;
    int unsigned         write_burst_beats;
    bit [1:0]             write_burst_type;
    bit                  write_pending;

    bit [ADDR_WIDTH-1:0] read_addr;
    bit [ID_WIDTH-1:0]   read_id;
    int unsigned         read_awsize;
    int unsigned         read_bytes;
    int unsigned         read_len;
    int unsigned         read_burst_len;
    int unsigned         read_burst_beats;
    bit [1:0]             read_burst_type;
    bit                  read_pending;
    txn_t tr;

    write_pending = 1'b0;
    read_pending  = 1'b0;

    forever begin
      @(vif.axi_mon_cb);

      if (vif.axi_mon_cb.m_axi_awvalid && vif.axi_mon_cb.m_axi_awready) begin
        write_addr     = vif.axi_mon_cb.m_axi_awaddr;
        write_id       = vif.axi_mon_cb.m_axi_awid;
        write_awsize   = vif.axi_mon_cb.m_axi_awsize;
        write_bytes       = 1 << write_awsize;
        write_len         = vif.axi_mon_cb.m_axi_awlen;
        write_burst_len   = vif.axi_mon_cb.m_axi_awlen;
        write_burst_beats = write_burst_len + 1;
        write_burst_type  = vif.axi_mon_cb.m_axi_awburst;
        write_pending     = 1'b1;
        `uvm_info("AXI_BURST", $sformatf(
          "AW handshake addr=%h AWLEN=%0d beats=%0d AWSIZE=%0d AWBURST=%b",
          write_addr, write_burst_len, write_burst_beats,
          write_awsize, write_burst_type), UVM_LOW)
      end

      if (write_pending && vif.axi_mon_cb.m_axi_wvalid &&
          vif.axi_mon_cb.m_axi_wready) begin
        tr = txn_t::type_id::create("axi_write");
        tr.direction  = txn_t::AXI_WRITE;
        tr.id         = write_id;
        tr.addr       = write_addr;
        tr.data       = vif.axi_mon_cb.m_axi_wdata;
        tr.strb       = vif.axi_mon_cb.m_axi_wstrb;
        tr.awsize      = write_awsize;
        tr.size_bytes  = write_bytes;
        tr.burst_len   = write_burst_len;
        tr.burst_beats = write_burst_beats;
        tr.burst_type  = write_burst_type;
        tr.last        = vif.axi_mon_cb.m_axi_wlast;
        ap.write(tr);
        `uvm_info("AXI_MON", $sformatf("AXI WRITE %s", tr.convert2string()), UVM_LOW)

        // MMIO lane-convention check (bp_bedrock_axi4_bridge): a transfer
        // narrower than the bus (<= 8 B) must use only WDATA/WSTRB[63:0],
        // with exactly its bytes strobed at lane (addr % 8).
        if (write_bytes < STRB_WIDTH) begin
          bit [STRB_WIDTH-1:0] exp_strb;
          exp_strb = ((STRB_WIDTH'(1) << write_bytes) - 1) << (write_addr % 8);
          if (tr.strb !== exp_strb)
            `uvm_error("AXI_MMIO_LANE", $sformatf(
              "MMIO write addr=%h size=%0dB: WSTRB=%h, expected %h (lanes addr%%8 within [7:0])",
              write_addr, write_bytes, tr.strb, exp_strb))
          if (tr.data[DATA_WIDTH-1:64] !== '0)
            `uvm_error("AXI_MMIO_LANE", $sformatf(
              "MMIO write addr=%h size=%0dB: WDATA[%0d:64]=%h, expected 0",
              write_addr, write_bytes, DATA_WIDTH-1, tr.data[DATA_WIDTH-1:64]))
        end

        if (tr.last || (write_len == 0)) begin
          write_pending = 1'b0;
        end
        else begin
          write_addr += write_bytes;
          write_len--;
        end
      end

      if (vif.axi_mon_cb.m_axi_arvalid && vif.axi_mon_cb.m_axi_arready) begin
        read_addr    = vif.axi_mon_cb.m_axi_araddr;
        read_id      = vif.axi_mon_cb.m_axi_arid;
        read_awsize  = vif.axi_mon_cb.m_axi_arsize;
        read_bytes       = 1 << read_awsize;
        read_len         = vif.axi_mon_cb.m_axi_arlen;
        read_burst_len   = vif.axi_mon_cb.m_axi_arlen;
        read_burst_beats = read_burst_len + 1;
        read_burst_type  = vif.axi_mon_cb.m_axi_arburst;
        read_pending     = 1'b1;
        `uvm_info("AXI_BURST", $sformatf(
          "AR handshake addr=%h ARLEN=%0d beats=%0d ARSIZE=%0d ARBURST=%b",
          read_addr, read_burst_len, read_burst_beats,
          read_awsize, read_burst_type), UVM_LOW)

        tr = txn_t::type_id::create("axi_read");
        tr.direction  = txn_t::AXI_READ;
        tr.id         = read_id;
        tr.addr       = read_addr;
        tr.awsize      = read_awsize;
        tr.size_bytes  = read_bytes;
        tr.burst_len   = read_burst_len;
        tr.burst_beats = read_burst_beats;
        tr.burst_type  = read_burst_type;
        tr.last        = (read_len == 0);
        ap.write(tr);
        `uvm_info("AXI_MON", $sformatf("AXI READ %s", tr.convert2string()), UVM_LOW)
      end

      if (read_pending && vif.axi_mon_cb.m_axi_rvalid &&
          vif.axi_mon_cb.m_axi_rready) begin
        tr = txn_t::type_id::create("axi_read_data");
        tr.direction  = txn_t::AXI_READ;
        tr.id         = vif.axi_mon_cb.m_axi_rid;
        tr.addr       = read_addr;
        tr.data       = vif.axi_mon_cb.m_axi_rdata;
        tr.awsize      = read_awsize;
        tr.size_bytes  = read_bytes;
        tr.burst_len   = read_burst_len;
        tr.burst_beats = read_burst_beats;
        tr.burst_type  = read_burst_type;
        tr.resp        = vif.axi_mon_cb.m_axi_rresp;
        tr.last       = vif.axi_mon_cb.m_axi_rlast;
        `uvm_info("AXI_MON", $sformatf("AXI READ DATA %s", tr.convert2string()), UVM_LOW)

        if (tr.last || (read_len == 0)) begin
          read_pending = 1'b0;
        end
        else begin
          read_addr += read_bytes;
          read_len--;
        end
      end
    end
  endtask
endclass
