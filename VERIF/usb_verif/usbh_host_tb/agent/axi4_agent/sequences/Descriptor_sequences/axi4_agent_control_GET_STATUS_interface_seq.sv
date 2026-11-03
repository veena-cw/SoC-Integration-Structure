// IMPLEMENTATION:
// 1. Send SETUP with bmRequestType=8'h81, bRequest=8'h00,
//    wValue=0, wIndex=0 (interface 0), and wLength=2.
// 2. Check that the SETUP transaction receives ACK.
// 3. Issue DATA IN and verify DATA1 PID, a two-byte payload,
//    and interface status equal to the expected value 16'h0000.
// 4. Send the zero-length OUT status stage and check for ACK.
// EXPECTED RESULT:
// Interface status = 16'h0000 for the current BFM implementation.
// Report UVM PASS only after every check above succeeds.

class axi4_agent_control_GET_STATUS_interface_seq
  extends usbh_host_axi4_agent_base_seq;

  `uvm_object_utils(
    axi4_agent_control_GET_STATUS_interface_seq
  )
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_OUT   = 8'hE1;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_DATA1 = 8'h4B;

  localparam logic [6:0] DEV_ADDR = 7'd5;
  localparam logic [3:0] EP0      = 4'd0;
  localparam logic [7:0] INTERFACE_NUM = 8'd0;

  localparam logic [15:0] EXPECTED_STATUS = 16'h0000;

  logic [31:0] status;
  logic [31:0] read_data;
  logic [15:0] interface_status;
  logic [7:0] setup_data [0:7];
  int i;

  function new(string name =
      "axi4_agent_control_GET_STATUS_interface_seq");
    super.new(name);
  endfunction

  virtual task body();

    `uvm_info("GET_STATUS_IF",
      "Starting GET_STATUS for interface 0",
      UVM_LOW)

    // bmRequestType = 0x81: Device-to-host,
    // standard request, interface recipient.
    setup_data[0] = 8'h81;
    setup_data[1] = 8'h00; // GET_STATUS
    setup_data[2] = 8'h00; // wValue LSB
    setup_data[3] = 8'h00; // wValue MSB
    setup_data[4] = INTERFACE_NUM; // wIndex LSB
    setup_data[5] = 8'h00; // wIndex MSB
    setup_data[6] = 8'h02; // wLength = 2
    setup_data[7] = 8'h00;

    // --------------------------------------------------
    // Stage 1: SETUP transaction
    // --------------------------------------------------
    clear_usb_interrupts();

    write_reg(USB_XFER_DATA, 32'd8);

    // Assumes USB_WR_DATA accepts one payload byte per
    // write, as in the existing testbench implementation.
    for (i = 0; i < 8; i++) begin
      write_reg(USB_WR_DATA, {24'h0, setup_data[i]});
    end

    issue_token(PID_SETUP, 1'b0, 1'b0,
                DEV_ADDR, EP0, status);

    check_response_pid(status, PID_ACK,
                       "GET_STATUS_IF_SETUP");

    if (status[15:0] != 16'd0)
      `uvm_fatal("GET_STATUS_IF",
        $sformatf("SETUP stage unexpected count: %0d",
                  status[15:0]))

    // --------------------------------------------------
    // Stage 2: DATA IN transaction
    // --------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd2);

    issue_token(PID_IN, 1'b1, 1'b1,
                DEV_ADDR, EP0, status);

    check_response_pid(status, PID_DATA1,
                       "GET_STATUS_IF_DATA_IN");

    if (status[15:0] != 16'd2)
      `uvm_fatal("GET_STATUS_IF",
        $sformatf("Expected 2 status bytes, got %0d",
                  status[15:0]))

    read_reg(USB_RD_DATA, read_data);
    interface_status = read_data[15:0];

    if (interface_status !== EXPECTED_STATUS)
      `uvm_fatal("GET_STATUS_IF",
        $sformatf("Interface status mismatch: expected "
          // Two-byte status value
          // returned by the BFM for a valid interface.
          // Reserved bits must be zero.
          // Adjust EXPECTED_STATUS if BFM behavior changes.
          "0x%04h, received 0x%04h",
          EXPECTED_STATUS, interface_status))

    if (interface_status[15:1] !== 15'h0000)
      `uvm_fatal("GET_STATUS_IF",
        "Reserved interface status bits are nonzero")

    // --------------------------------------------------
    // Stage 3: Status OUT transaction (zero length)
    // --------------------------------------------------
    clear_usb_interrupts();
    write_reg(USB_XFER_DATA, 32'd0);

    issue_token(PID_OUT, 1'b0, 1'b1,
                DEV_ADDR, EP0, status);

    check_response_pid(status, PID_ACK,
                       "GET_STATUS_IF_STATUS_OUT");

    if (status[15:0] != 16'd0)
      `uvm_fatal("GET_STATUS_IF",
        $sformatf("Status OUT should be zero length, got %0d",
                  status[15:0]))

    `uvm_info("GET_STATUS_IF",
      $sformatf(
        "PASS: GET_STATUS interface %0d completed. "
        "Interface status=0x%04h",
        INTERFACE_NUM, interface_status),
      UVM_LOW)

  endtask

endclass

