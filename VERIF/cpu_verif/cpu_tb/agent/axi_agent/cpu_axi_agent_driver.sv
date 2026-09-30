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

    write_active = 1'b0;
    read_active  = 1'b0;
    write_left   = 0;
    read_left    = 0;

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
      end

      // AXI permits AW and W to arrive in the same cycle. aw_fire is
      // included so the first W beat is not lost in that legal case.
      if (w_fire && (write_active || aw_fire)) begin
        mem.write_beat(write_addr,
                       vif.axi_drv_cb.m_axi_wdata,
                       vif.axi_drv_cb.m_axi_wstrb,
                       write_awsize);
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
          vif.m_axi_bresp <= 2'b00;
          vif.m_axi_bvalid <= 1'b1;
        end
        else begin
          write_addr += write_bytes;
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
      end

      // Generate the first response, or advance to the next beat after the
      // current response was accepted. RDATA/RVALID remain stable otherwise.
      if (read_active && !vif.m_axi_rvalid) begin
        vif.m_axi_rid   <= read_id;
        vif.m_axi_rdata <= mem.read_beat(read_addr, read_awsize);
        vif.m_axi_rresp <= 2'b00;
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
          read_addr += read_bytes;
          read_left--;
          vif.m_axi_rid   <= read_id;
          vif.m_axi_rdata <= mem.read_beat(read_addr + read_bytes, read_awsize);
          vif.m_axi_rresp <= 2'b00;
          vif.m_axi_rlast <= (read_left == 1);
          vif.m_axi_rvalid <= 1'b1;
        end
      end

      vif.m_axi_arready <= !read_active;
    end
  endtask
endclass
