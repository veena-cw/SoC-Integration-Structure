
class axi4_agent_out_of_range_addr_seq extends
    usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(axi4_agent_out_of_range_addr_seq)

  // USB Host AXI address aperture
  localparam logic [31:0] USB_BASE_ADDR = 32'h1040_0000;
  localparam logic [31:0] USB_ADDR_SIZE = 32'h0010_0000;
  localparam logic [31:0] USB_ADDR_END  = 32'h1050_0000;

  localparam logic [1:0] RESP_OKAY   = 2'b00;
  localparam logic [1:0] RESP_DECERR = 2'b11;

  function new(string name = "axi4_agent_out_of_range_addr_seq");
    super.new(name);
  endfunction


  // --------------------------------------------------
  // WRITE transaction and response checking
  // --------------------------------------------------
  task automatic check_write(
      input logic [31:0] addr,
      input logic [31:0] data,
      input logic [3:0]  txn_id,
      input logic [1:0]  expected_resp
  );

    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("wr_req");

    start_item(req);

    req.write = 1'b1;
    req.addr  = addr;
    req.data  = data;
    req.strb  = 4'b1111;
    req.id    = txn_id;
    req.len   = 0;
    req.size  = 2;
    req.burst = 2'b01;
    req.wlast = 1'b1;

    finish_item(req);

    `uvm_info("ADDR_BOUNDARY_WR",
      $sformatf(
        "WRITE ADDR=%08h DATA=%08h BRESP=%02b EXPECTED=%02b",
        addr, data, req.resp, expected_resp),
      UVM_MEDIUM)

    if (req.resp_id !== txn_id) begin
      `uvm_error("ADDR_BOUNDARY_WR_ID",
        $sformatf("BID mismatch: Expected=%0h Actual=%0h",
                  txn_id, req.resp_id))
    end

    if (req.resp !== expected_resp) begin
      `uvm_error("ADDR_BOUNDARY_WR_RESP",
        $sformatf(
          "WRITE response mismatch ADDR=%08h EXPECTED=%02b ACTUAL=%02b",
          addr, expected_resp, req.resp))
    end
    else begin
      `uvm_info("ADDR_BOUNDARY_WR_PASS",
        $sformatf(
          "WRITE PASS ADDR=%08h BRESP=%02b",
          addr, req.resp),
        UVM_LOW)
    end

  endtask


  // --------------------------------------------------
  // READ transaction and response checking
  // --------------------------------------------------
  task automatic check_read(
      input logic [31:0] addr,
      input logic [3:0]  txn_id,
      input logic [1:0]  expected_resp
  );

    usbh_host_axi4_agent_seq_item req;

    req = usbh_host_axi4_agent_seq_item::type_id::create("rd_req");

    start_item(req);

    req.write = 1'b0;
    req.addr  = addr;
    req.data  = '0;
    req.strb  = '0;
    req.id    = txn_id;
    req.len   = 0;
    req.size  = 2;
    req.burst = 2'b01;
    req.rlast = 1'b1;

    finish_item(req);

    `uvm_info("ADDR_BOUNDARY_RD",
      $sformatf(
        "READ ADDR=%08h RDATA=%08h RRESP=%02b EXPECTED=%02b",
        addr, req.rdata, req.resp, expected_resp),
      UVM_MEDIUM)

    if (req.resp_id !== txn_id) begin
      `uvm_error("ADDR_BOUNDARY_RD_ID",
        $sformatf("RID mismatch: Expected=%0h Actual=%0h",
                  txn_id, req.resp_id))
    end

    if (req.resp !== expected_resp) begin
      `uvm_error("ADDR_BOUNDARY_RD_RESP",
        $sformatf(
          "READ response mismatch ADDR=%08h EXPECTED=%02b ACTUAL=%02b",
          addr, expected_resp, req.resp))
    end

    if (expected_resp == RESP_DECERR) begin
      if (req.rdata !== 32'h0000_0000) begin
        `uvm_error("ADDR_BOUNDARY_RD_DATA",
          $sformatf(
            "DECERR read data mismatch ADDR=%08h DATA=%08h",
            addr, req.rdata))
      end
    end

    if (req.rlast !== 1'b1) begin
      `uvm_error("ADDR_BOUNDARY_RD_LAST",
        $sformatf("RLAST not asserted ADDR=%08h", addr))
    end

    if ((req.resp === expected_resp) &&
        (req.resp_id === txn_id) &&
        (req.rlast === 1'b1) &&
        ((expected_resp != RESP_DECERR) ||
         (req.rdata === 32'h0000_0000))) begin

      `uvm_info("ADDR_BOUNDARY_RD_PASS",
        $sformatf(
          "READ PASS ADDR=%08h RRESP=%02b",
          addr, req.resp),
        UVM_LOW)
    end

  endtask


  // --------------------------------------------------
  // MAIN SEQUENCE
  // --------------------------------------------------
  virtual task body();

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Starting USB AXI address boundary verification",
      UVM_LOW)


    // ==================================================
    // 1. BELOW BASE ADDRESS
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing address below USB aperture",
      UVM_LOW)

    check_write(32'h103F_FFFC, 32'h1234_5678,
                4'h1, RESP_DECERR);

    check_read(32'h103F_FFFC,
               4'h2, RESP_DECERR);


    // ==================================================
    // 2. LOWER BOUNDARY - USB_BASE_ADDR
    // USB_CTRL register
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing USB aperture lower boundary",
      UVM_LOW)

    check_write(32'h1040_0000, 32'h0000_0001,
                4'h3, RESP_OKAY);

    check_read(32'h1040_0000,
               4'h4, RESP_OKAY);


    // ==================================================
    // 3. SECOND VALID REGISTER - USB_STATUS
    // Read-only register
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing valid USB_STATUS register address",
      UVM_LOW)

    check_read(32'h1040_0004,
               4'h5, RESP_OKAY);


    // ==================================================
    // 4. UPPER IN-RANGE ADDRESS
    // Inside aperture, but unmapped local register
    // Wrapper accepts/forwards the address.
    // USB Host local decoder returns DECERR.
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing upper in-range aperture boundary",
      UVM_LOW)
    

    check_write(32'h104F_FFFC, 32'hA5A5_5A5A,
                4'h7, RESP_DECERR);
    check_read(32'h104F_FFFC,
               4'h6, RESP_DECERR);

    // ==================================================
    // 5. EXACT UPPER BOUNDARY
    // USB_ADDR_END is exclusive
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing exclusive upper boundary",
      UVM_LOW)

    check_write(32'h1050_0000, 32'hDEAD_BEEF,
                4'h8, RESP_DECERR);

    check_read(32'h1050_0000,
               4'h9, RESP_DECERR);


    // ==================================================
    // 6. ABOVE UPPER BOUNDARY
    // ==================================================

    `uvm_info("ADDR_BOUNDARY_SEQ",
      "Testing address above USB aperture",
      UVM_LOW)

    check_write(32'h1050_0004, 32'hCAFE_BABE,
                4'hA, RESP_DECERR);

    check_read(32'h1050_0004,
               4'hB, RESP_DECERR);


    `uvm_info("ADDR_BOUNDARY_SEQ",
      "USB AXI address boundary verification completed",
      UVM_LOW)

  endtask

endclass

