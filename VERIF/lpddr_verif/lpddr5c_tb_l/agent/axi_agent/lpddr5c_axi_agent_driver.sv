
class lpddr5c_axi_agent_driver extends uvm_driver #(lpddr5c_axi_agent_seq_item);

  `uvm_component_utils(lpddr5c_axi_agent_driver)

  //============================================================
  // Virtual interface
  //============================================================
  virtual lpddr5c_AXI_if vif;


  //============================================================
  // Constructor
  //============================================================
  function new(string name = "lpddr5c_axi_agent_driver",
               uvm_component parent = null);

    super.new(name, parent);

  endfunction


  //============================================================
  // Build Phase
  //============================================================
  function void build_phase(uvm_phase phase);

    super.build_phase(phase);

    if (!uvm_resource_db#(virtual lpddr5c_AXI_if)::read_by_name(
         get_full_name(),
        "vif",
        vif,
        this)) begin

      `uvm_fatal("AXI_DRV",
                 "Could not get lpddr5c_AXI_if from uvm_resource_db")

    end

    `uvm_info("AXI_DRV",
              "AXI virtual interface obtained successfully",
              UVM_LOW)

  endfunction


  //============================================================
  // Run Phase
  //============================================================
  task run_phase(uvm_phase phase);

    lpddr5c_axi_agent_seq_item req;

    reset_signals();

    forever begin

      wait (vif.sys_rst_n === 1'b1);

      `uvm_info("AXI_DRV",
                "AXI driver ready",
                UVM_LOW)

      seq_item_port.get_next_item(req);

      `uvm_info("AXI_DRV",
                $sformatf("Received AXI transaction:\n%s",
                          req.sprint()),
                UVM_MEDIUM)

      drive_item(req);

      seq_item_port.item_done();

    end

  endtask


  //============================================================
  // Reset Signals
  //============================================================
  task reset_signals();

    `uvm_info("AXI_DRV",
              "Waiting for system reset assertion",
              UVM_LOW)

    wait (vif.sys_rst_n === 1'b0);

    `uvm_info("AXI_DRV",
              "System reset asserted",
              UVM_LOW)


    //==========================================================
    // AW
    //==========================================================
    vif.drv_cb.axi_awaddr  <= '0;
    vif.drv_cb.axi_awlen   <= 8'd0;
    vif.drv_cb.axi_awsize  <= 3'd0;
    vif.drv_cb.axi_awburst <= 2'b00;
    vif.drv_cb.axi_awvalid <= 1'b0;


    //==========================================================
    // W
    //==========================================================
    vif.drv_cb.axi_wdata  <= '0;
    vif.drv_cb.axi_wstrb  <= '0;
    vif.drv_cb.axi_wlast  <= 1'b0;
    vif.drv_cb.axi_wvalid <= 1'b0;


    //==========================================================
    // B
    //==========================================================
    vif.drv_cb.axi_bready <= 1'b0;


    //==========================================================
    // AR
    //==========================================================
    vif.drv_cb.axi_araddr  <= '0;
    vif.drv_cb.axi_arlen   <= 8'd0;
    vif.drv_cb.axi_arsize  <= 3'd0;
    vif.drv_cb.axi_arburst <= 2'b00;
    vif.drv_cb.axi_arvalid <= 1'b0;


    //==========================================================
    // R
    //==========================================================
    vif.drv_cb.axi_rready <= 1'b0;


    `uvm_info("AXI_DRV",
              "Waiting for reset deassertion",
              UVM_LOW)

    wait (vif.sys_rst_n === 1'b1);

    `uvm_info("AXI_DRV",
              $sformatf("System reset deasserted at %0t",
                        $time),
              UVM_LOW)

    @(vif.drv_cb);

  endtask


  /*task drive_item(lpddr5c_axi_agent_seq_item req);
if (req.is_write == 1'b1) begin 
  `uvm_info("AXI_DRV",
            "Starting AXI WRITE transaction",
            UVM_MEDIUM)

  drive_write_address(req);

  drive_write_data(req);

  wait_write_response(req);

  `uvm_info("AXI_DRV",
            "AXI WRITE transaction completed",
            UVM_MEDIUM)
            end

endtask*/
task drive_item(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            $sformatf(
              "Received AXI transaction: is_write=%0b ARADDR=0x%08h AWADDR=0x%08h",
              req.is_write,
              req.axi_araddr,
              req.axi_awaddr),
            UVM_MEDIUM)

  if (req.is_write == 1'b1) begin

    `uvm_info("AXI_DRV",
              "Starting AXI WRITE transaction",
              UVM_MEDIUM)

    drive_write_address(req);
    drive_write_data(req);
    wait_write_response(req);

    `uvm_info("AXI_DRV",
              "AXI WRITE transaction completed",
              UVM_MEDIUM)

  end
  else begin

    `uvm_info("AXI_DRV",
              "Starting AXI READ transaction",
              UVM_MEDIUM)

    drive_read_address(req);
    wait_read_data(req);

    `uvm_info("AXI_DRV",
              "AXI READ transaction completed",
              UVM_MEDIUM)

  end

endtask

task drive_write_address(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            $sformatf(
              "Driving AW: ADDR=0x%08h LEN=%0d SIZE=%0d BURST=%b",
              req.axi_awaddr,
              req.axi_awlen,
              req.axi_awsize,
              req.axi_awburst),
            UVM_MEDIUM)

  //==========================================================
  // Drive AW channel
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_awaddr  <= req.axi_awaddr;
  vif.drv_cb.axi_awlen   <= req.axi_awlen;
  vif.drv_cb.axi_awsize  <= req.axi_awsize;
  vif.drv_cb.axi_awburst <= req.axi_awburst;
  vif.drv_cb.axi_awvalid <= 1'b1;

  //==========================================================
  // Wait until AWREADY
  //==========================================================

  while (vif.drv_cb.axi_awready !== 1'b1) begin

    `uvm_info("AXI_DRV",
              $sformatf(
                "Waiting AWREADY: AWREADY=%b",
                vif.drv_cb.axi_awready),
              UVM_HIGH)

    @(vif.drv_cb);

  end

  // AWVALID and AWREADY are both high here
  `uvm_info("AXI_DRV",
            $sformatf(
              "AW HANDSHAKE: ADDR=0x%08h TIME=%0t",
              req.axi_awaddr,
              $time),
            UVM_MEDIUM)

  //==========================================================
  // Deassert AWVALID
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_awvalid <= 1'b0;

endtask
task drive_write_data(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            "Driving AXI W channel",
            UVM_MEDIUM)

  //==========================================================
  // Drive W channel
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_wdata  <= req.axi_wdata;
  vif.drv_cb.axi_wstrb  <= req.axi_wstrb;
  vif.drv_cb.axi_wlast  <= req.axi_wlast;
  vif.drv_cb.axi_wvalid <= 1'b1;

  `uvm_info("AXI_DRV",
            $sformatf(
              "W DRIVE: DATA=0x%032h WSTRB=0x%04h WLAST=%b",
              req.axi_wdata,
              req.axi_wstrb,
              req.axi_wlast),
            UVM_MEDIUM)

  //==========================================================
  // Wait for WREADY
  //==========================================================

  while (vif.drv_cb.axi_wready !== 1'b1) begin

    `uvm_info("AXI_DRV",
              $sformatf(
                "Waiting WREADY: WREADY=%b",
                vif.drv_cb.axi_wready),
              UVM_HIGH)

    @(vif.drv_cb);

  end

  //==========================================================
  // W handshake
  //==========================================================

  `uvm_info("AXI_DRV",
            $sformatf(
              "W HANDSHAKE: DATA=0x%032h TIME=%0t",
              req.axi_wdata,
              $time),
            UVM_MEDIUM)

  //==========================================================
  // Deassert WVALID
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_wvalid <= 1'b0;
  vif.drv_cb.axi_wlast  <= 1'b0;

endtask
task wait_write_response(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            "Waiting for AXI B response",
            UVM_MEDIUM)

  //==========================================================
  // Assert BREADY
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_bready <= 1'b1;

  //==========================================================
  // Wait for BVALID
  //==========================================================

  while (vif.drv_cb.axi_bvalid !== 1'b1) begin

    `uvm_info("AXI_DRV",
              $sformatf(
                "Waiting BVALID: BVALID=%b",
                vif.drv_cb.axi_bvalid),
              UVM_HIGH)

    @(vif.drv_cb);

  end

  //==========================================================
  // B response handshake
  //==========================================================

  `uvm_info("AXI_DRV",
            $sformatf(
              "B HANDSHAKE: BVALID=1 BREADY=1 BRESP=0x%0h TIME=%0t",
              vif.drv_cb.axi_bresp,
              $time),
            UVM_MEDIUM)

  if (vif.drv_cb.axi_bresp != 2'b00) begin

    `uvm_error("AXI_DRV",
               $sformatf(
                 "AXI WRITE ERROR: BRESP=0x%0h",
                 vif.drv_cb.axi_bresp))

  end
  else begin

    `uvm_info("AXI_DRV",
              "AXI WRITE response = OKAY",
              UVM_MEDIUM)

  end

  //==========================================================
  // Deassert BREADY
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_bready <= 1'b0;

endtask

/*task drive_read_item(lpddr5c_axi_agent_seq_item req);
if (req.is_write == 1'b0)

  `uvm_info("AXI_DRV",
            "Starting AXI READ transaction",
            UVM_MEDIUM)

  drive_read_address(req);

  wait_read_data(req);

  `uvm_info("AXI_DRV",
            "AXI READ transaction completed",
            UVM_MEDIUM)

endtask
*/

task drive_read_address(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            $sformatf(
              "Driving AR: ADDR=0x%08h LEN=%0d SIZE=%0d BURST=%b",
              req.axi_araddr,
              req.axi_arlen,
              req.axi_arsize,
              req.axi_arburst),
            UVM_MEDIUM)

  //==========================================================
  // Drive AR channel
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_araddr  <= req.axi_araddr;
  vif.drv_cb.axi_arlen   <= req.axi_arlen;
  vif.drv_cb.axi_arsize  <= req.axi_arsize;
  vif.drv_cb.axi_arburst <= req.axi_arburst;
  vif.drv_cb.axi_arvalid <= 1'b1;

  //==========================================================
  // Wait until ARREADY
  //==========================================================

  while (vif.drv_cb.axi_arready !== 1'b1) begin

    `uvm_info("AXI_DRV",
              $sformatf(
                "Waiting ARREADY: ARREADY=%b",
                vif.drv_cb.axi_arready),
              UVM_HIGH)

    @(vif.drv_cb);

  end

  // ARVALID and ARREADY are both high here

  `uvm_info("AXI_DRV",
            $sformatf(
              "AR HANDSHAKE: ADDR=0x%08h TIME=%0t",
              req.axi_araddr,
              $time),
            UVM_MEDIUM)

  //==========================================================
  // Deassert ARVALID
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_arvalid <= 1'b0;

endtask


task wait_read_data(lpddr5c_axi_agent_seq_item req);

  `uvm_info("AXI_DRV",
            "Waiting for AXI R response",
            UVM_MEDIUM)

  //==========================================================
  // Assert RREADY
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_rready <= 1'b1;

  //==========================================================
  // Wait for RVALID
  //==========================================================

  while (vif.drv_cb.axi_rvalid !== 1'b1) begin

    `uvm_info("AXI_DRV",
              $sformatf(
                "Waiting RVALID: RVALID=%b",
                vif.drv_cb.axi_rvalid),
              UVM_HIGH)

    @(vif.drv_cb);

  end

  //==========================================================
  // RDATA handshake
  //==========================================================

  `uvm_info("AXI_DRV",
            $sformatf(
              "R HANDSHAKE: RVALID=1 RREADY=1 RDATA=0x%032h RRESP=0x%0h RLAST=%b TIME=%0t",
              vif.drv_cb.axi_rdata,
              vif.drv_cb.axi_rresp,
              vif.drv_cb.axi_rlast,
              $time),
            UVM_MEDIUM)

  //==========================================================
  // Check RRESP
  //==========================================================

  if (vif.drv_cb.axi_rresp != 2'b00) begin

    `uvm_error("AXI_DRV",
               $sformatf(
                 "AXI READ ERROR: RRESP=0x%0h",
                 vif.drv_cb.axi_rresp))

  end
  else begin

    `uvm_info("AXI_DRV",
              "AXI READ response = OKAY",
              UVM_MEDIUM)

  end

  //==========================================================
  // Store read data into sequence item
  //==========================================================

  req.axi_rdata = vif.drv_cb.axi_rdata;
  req.axi_rresp = vif.drv_cb.axi_rresp;
  req.axi_rlast = vif.drv_cb.axi_rlast;

  `uvm_info("AXI_DRV",
            $sformatf(
              "AXI READ DATA: ADDR=0x%08h DATA=0x%032h",
              req.axi_araddr,
              req.axi_rdata),
            UVM_MEDIUM)

  //==========================================================
  // Deassert RREADY
  //==========================================================

  @(vif.drv_cb);

  vif.drv_cb.axi_rready <= 1'b0;

endtask
endclass
