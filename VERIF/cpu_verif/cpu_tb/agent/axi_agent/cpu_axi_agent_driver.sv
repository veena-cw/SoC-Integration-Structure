class cpu_axi_agent_driver #(
  parameter int DATA_WIDTH = `CPU_AXI_DATA_WIDTH,
  parameter int ADDR_WIDTH = `CPU_AXI_ADDR_WIDTH,
  parameter int ID_WIDTH   = `CPU_AXI_ID_WIDTH
) extends uvm_driver #(cpu_axi_txn #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH));
  localparam int STRB_WIDTH = DATA_WIDTH / 8;

  `uvm_component_param_utils(cpu_axi_agent_driver #(DATA_WIDTH, ADDR_WIDTH, ID_WIDTH))

  typedef cpu_axi_mem_model #(DATA_WIDTH, ADDR_WIDTH) mem_t;
  virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH) vif;
  mem_t mem;

  // Error injection (off by default). A test sets these through
  // uvm_config_db on this driver: any write/read whose address falls in
  // [slverr_base, slverr_base+err_size) gets BRESP/RRESP = SLVERR (2'b10),
  // in [decerr_base, decerr_base+err_size) DECERR (2'b11). Errored writes
  // are not stored; errored reads return ERR_RDATA on every 8-byte lane.
  localparam bit [63:0] ERR_RDATA = 64'hDEAD_BEEF_0BAD_0BAD;
  longint unsigned slverr_base;
  longint unsigned decerr_base;
  longint unsigned err_size;

  // Back-pressure (off by default, also set through uvm_config_db):
  //   bp_stall      : after every AW/W/AR handshake, hold AWREADY, WREADY
  //                   and ARREADY low for this many AXI cycles
  //   bp_resp_delay : wait this many AXI cycles before BVALID / RVALID
  int unsigned bp_stall;
  int unsigned bp_resp_delay;

  function bit [1:0] resp_for(input bit [ADDR_WIDTH-1:0] addr);
    if (err_size != 0 && addr >= slverr_base && addr < slverr_base + err_size)
      return 2'b10;
    if (err_size != 0 && addr >= decerr_base && addr < decerr_base + err_size)
      return 2'b11;
    return 2'b00;
  endfunction

  function string resp_name(input bit [1:0] r);
    return (r == 2'b10) ? "SLVERR" : (r == 2'b11) ? "DECERR" : (r == 2'b01) ? "EXOKAY" : "OKAY";
  endfunction

  function new(string name = "cpu_axi_agent_driver", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    if (!uvm_resource_db#(
          virtual cpu_AXI_if #(ID_WIDTH, ADDR_WIDTH, DATA_WIDTH))::read_by_name(
          get_full_name(), "vif", vif, this))
      `uvm_fatal("NOVIF", $sformatf(
        "[%s] AXI virtual interface not found", get_full_name()))
    slverr_base = 0;
    decerr_base = 0;
    err_size    = 0;
    void'(uvm_config_db#(longint unsigned)::get(this, "", "slverr_base", slverr_base));
    void'(uvm_config_db#(longint unsigned)::get(this, "", "decerr_base", decerr_base));
    void'(uvm_config_db#(longint unsigned)::get(this, "", "err_size",    err_size));
    bp_stall      = 0;
    bp_resp_delay = 0;
    void'(uvm_config_db#(int unsigned)::get(this, "", "bp_stall",      bp_stall));
    void'(uvm_config_db#(int unsigned)::get(this, "", "bp_resp_delay", bp_resp_delay));
    if (bp_stall != 0 || bp_resp_delay != 0)
      `uvm_info("AXI_BP_CFG", $sformatf(
        "back-pressure on: READY low %0d cycles after each handshake, B/R delayed %0d cycles",
        bp_stall, bp_resp_delay), UVM_LOW)
    mem_t::slverr_base = slverr_base;
    mem_t::decerr_base = decerr_base;
    mem_t::err_size    = err_size;
    if (err_size != 0)
      `uvm_info("AXI_ERR_CFG", $sformatf(
        "error injection on: SLVERR %h-%h, DECERR %h-%h",
        slverr_base, slverr_base + err_size - 1,
        decerr_base, decerr_base + err_size - 1), UVM_LOW)
  endfunction

  // INCR burst: every beat after the first starts at the next
  // size-aligned address, even when the first beat was unaligned.
  static function bit [ADDR_WIDTH-1:0] next_beat_addr(
    input bit [ADDR_WIDTH-1:0] addr,
    input int unsigned         bytes
  );
    return (addr - (addr % bytes)) + bytes;
  endfunction

  task run_phase(uvm_phase phase);
    bit [ID_WIDTH-1:0]   aw_id;
    bit [ADDR_WIDTH-1:0] write_addr;
    int unsigned         write_awsize;
    int unsigned         write_bytes;
    int unsigned         write_left;
    bit                  write_active;
    bit [ADDR_WIDTH-1:0] read_addr;
    int unsigned         read_awsize;
    int unsigned         read_bytes;
    int unsigned         read_left;
    bit [ID_WIDTH-1:0]   read_id;
    bit                  read_active;
    bit                  aw_fire;
    bit                  w_fire;
    bit                  ar_fire;
    bit [1:0]            write_resp;
    bit [1:0]            read_resp;
    int unsigned         stall_cnt;
    bit                  b_pending;
    int unsigned         b_delay_cnt;
    int unsigned         r_delay_cnt;

    write_active = 1'b0;
    read_active  = 1'b0;
    write_left   = 0;
    read_left    = 0;
    write_resp   = 2'b00;
    read_resp    = 2'b00;
    stall_cnt    = 0;
    b_pending    = 1'b0;
    b_delay_cnt  = 0;
    r_delay_cnt  = 0;

    vif.m_axi_awready <= 1'b1;
    vif.m_axi_wready  <= 1'b1;
    vif.m_axi_arready <= 1'b1;
    vif.m_axi_bvalid <= 1'b0;
    vif.m_axi_rvalid <= 1'b0;
    vif.m_axi_bid    <= '0;
    vif.m_axi_bresp  <= 2'b00;
    vif.m_axi_rid    <= '0;
    vif.m_axi_rdata  <= '0;
    vif.m_axi_rresp  <= 2'b00;
    vif.m_axi_rlast  <= 1'b0;

    forever begin
      @(vif.axi_drv_cb);

      // cpu_tb_top presents an active-high reset to the CPU and AXI bridge;
      // the AXI driver uses the complementary reset-ready condition here.
      if (!vif.axi_reset_i) begin
        write_active = 1'b0;
        read_active  = 1'b0;
        write_left   = 0;
        read_left    = 0;
        stall_cnt    = 0;
        b_pending    = 1'b0;
        r_delay_cnt  = 0;
        vif.m_axi_bvalid <= 1'b0;
        vif.m_axi_rvalid <= 1'b0;
        vif.m_axi_rlast  <= 1'b0;
        vif.m_axi_awready <= 1'b1;
        vif.m_axi_wready  <= 1'b1;
        vif.m_axi_arready <= 1'b1;
        continue;
      end

      // Keep the response channels stable until the master accepts them.
      if (vif.m_axi_bvalid && vif.axi_drv_cb.m_axi_bready)
        vif.m_axi_bvalid <= 1'b0;

      aw_fire = vif.axi_drv_cb.m_axi_awvalid &&
                vif.m_axi_awready;
      w_fire  = vif.axi_drv_cb.m_axi_wvalid &&
                vif.m_axi_wready;
      ar_fire = vif.axi_drv_cb.m_axi_arvalid &&
                vif.m_axi_arready;

      if (aw_fire) begin
        aw_id         = vif.axi_drv_cb.m_axi_awid;
        write_addr    = vif.axi_drv_cb.m_axi_awaddr;
        write_awsize  = vif.axi_drv_cb.m_axi_awsize;
        write_bytes   = mem_t::beat_bytes(write_awsize);
        write_left    = vif.axi_drv_cb.m_axi_awlen + 1;
        write_active  = 1'b1;
        write_resp    = resp_for(write_addr);
      end

      // AXI permits AW and W to arrive in the same cycle. aw_fire is
      // included so the first W beat is not lost in that legal case.
      if (w_fire && (write_active || aw_fire)) begin
        if (write_resp == 2'b00)
          mem.write_beat(write_addr,
                         vif.axi_drv_cb.m_axi_wdata,
                         vif.axi_drv_cb.m_axi_wstrb,
                         write_awsize);
        else
          `uvm_info("AXI_ERR", $sformatf(
            "write addr=%h data=%h strb=%h -> BRESP=%s (not stored)",
            write_addr, vif.axi_drv_cb.m_axi_wdata,
            vif.axi_drv_cb.m_axi_wstrb, resp_name(write_resp)), UVM_LOW)
        `uvm_info("AXI_DRV",
                  $sformatf("write addr=%h awsize=%0d data=%h strb=%h last=%0b",
                            write_addr, write_awsize,
                            vif.axi_drv_cb.m_axi_wdata,
                            vif.axi_drv_cb.m_axi_wstrb,
                            vif.axi_drv_cb.m_axi_wlast),
                  UVM_HIGH)

        if (vif.axi_drv_cb.m_axi_wlast || (write_left <= 1)) begin
          write_active = 1'b0;
          write_left   = 0;
          vif.m_axi_bid   <= aw_id;
          vif.m_axi_bresp <= write_resp;
          b_pending    = 1'b1;
          b_delay_cnt  = bp_resp_delay;
        end
        else begin
          write_addr = next_beat_addr(write_addr, write_bytes);
          write_left--;
        end
      end

      if (ar_fire && !read_active) begin
        read_id      = vif.axi_drv_cb.m_axi_arid;
        read_addr    = vif.axi_drv_cb.m_axi_araddr;
        read_awsize  = vif.axi_drv_cb.m_axi_arsize;
        read_bytes   = mem_t::beat_bytes(read_awsize);
        read_left    = vif.axi_drv_cb.m_axi_arlen + 1;
        read_active  = 1'b1;
        r_delay_cnt  = bp_resp_delay;
        read_resp    = resp_for(read_addr);
        if (read_resp != 2'b00)
          `uvm_info("AXI_ERR", $sformatf(
            "read addr=%h -> RRESP=%s, RDATA=%h on every lane",
            read_addr, resp_name(read_resp), ERR_RDATA), UVM_LOW)
      end

      // Generate the first response, or advance to the next beat after the
      // current response was accepted. RDATA/RVALID remain stable otherwise.
      // B response, after bp_resp_delay cycles.
      if (b_pending) begin
        if (b_delay_cnt == 0) begin
          vif.m_axi_bvalid <= 1'b1;
          b_pending = 1'b0;
        end
        else
          b_delay_cnt--;
      end

      if (read_active && !vif.m_axi_rvalid && (r_delay_cnt != 0))
        r_delay_cnt--;
      else if (read_active && !vif.m_axi_rvalid) begin
        vif.m_axi_rid   <= read_id;
        vif.m_axi_rdata <= (read_resp == 2'b00) ? mem.read_beat(read_addr, read_awsize)
                                                : {(DATA_WIDTH/64){ERR_RDATA}};
        vif.m_axi_rresp <= read_resp;
        vif.m_axi_rlast <= (read_left == 1);
        vif.m_axi_rvalid <= 1'b1;
        `uvm_info("AXI_DRV",
                  $sformatf("read response addr=%h awsize=%0d data=%h last=%0b",
                            read_addr, read_awsize,
                            mem.read_beat(read_addr, read_awsize),
                            (read_left == 1)),
                  UVM_HIGH)
      end
      else if (vif.m_axi_rvalid && vif.axi_drv_cb.m_axi_rready) begin
        if (read_left <= 1) begin
          read_active = 1'b0;
          read_left   = 0;
          vif.m_axi_rvalid <= 1'b0;
          vif.m_axi_rlast  <= 1'b0;
        end
        else begin
          read_addr = next_beat_addr(read_addr, read_bytes);
          read_left--;
          vif.m_axi_rid   <= read_id;
          vif.m_axi_rdata <= (read_resp == 2'b00) ? mem.read_beat(read_addr, read_awsize)
                                                  : {(DATA_WIDTH/64){ERR_RDATA}};
          vif.m_axi_rresp <= read_resp;
          vif.m_axi_rlast <= (read_left == 1);
          vif.m_axi_rvalid <= 1'b1;
        end
      end

      // Back-pressure: READY low for bp_stall cycles after any handshake.
      if (aw_fire || w_fire || ar_fire)
        stall_cnt = bp_stall;
      else if (stall_cnt != 0)
        stall_cnt--;
      vif.m_axi_awready <= (stall_cnt == 0);
      vif.m_axi_wready  <= (stall_cnt == 0);
      vif.m_axi_arready <= !read_active && (stall_cnt == 0);
    end
  endtask
endclass
