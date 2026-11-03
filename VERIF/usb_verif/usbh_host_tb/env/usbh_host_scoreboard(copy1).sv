// My Scoreboad.

`uvm_analysis_imp_decl(_axi4_agent) // Creates AXI monitor analysis-implementation type.
`uvm_analysis_imp_decl(_utmi_agent) // Creates UTMI monitor analysis-implementation type.

// Holds the expected USB packet for end-to-end comparison.
class usbh_host_expected_usb_packet;
  byte unsigned bytes[$]; // Expected packet bytes in wire order.
  string kind; // Packet category, such as token or data.
  function new(string packet_kind = "");
    kind = packet_kind;
  endfunction
endclass

class usbh_host_scoreboard extends uvm_scoreboard;
  // USB PID definitions
  // ------------------------------------------------------------------------
  localparam logic [7:0] PID_OUT   = 8'hE1;
  localparam logic [7:0] PID_IN    = 8'h69;
  localparam logic [7:0] PID_SOF   = 8'hA5;
  localparam logic [7:0] PID_SETUP = 8'h2D;
  localparam logic [7:0] PID_DATA0 = 8'hC3;
  localparam logic [7:0] PID_DATA1 = 8'h4B;
  localparam logic [7:0] PID_ACK   = 8'hD2;
  localparam logic [7:0] PID_NAK   = 8'h5A;
  localparam logic [7:0] PID_STALL = 8'h1E;

  // USB HOST REGISTER MAP
  // ------------------------------------------------------------------------
  localparam logic [31:0] USB_CTRL       = 32'h00;
  localparam logic [31:0] USB_STATUS     = 32'h04;
  localparam logic [31:0] USB_IRQ_ACK    = 32'h08;
  localparam logic [31:0] USB_IRQ_STS    = 32'h0C;
  localparam logic [31:0] USB_IRQ_MASK   = 32'h10;
  localparam logic [31:0] USB_XFER_DATA  = 32'h14;
  localparam logic [31:0] USB_XFER_TOKEN = 32'h18;
  localparam logic [31:0] USB_RX_STAT    = 32'h1C;
  localparam logic [31:0] USB_WR_DATA    = 32'h20;
  localparam logic [31:0] USB_RD_DATA    = 32'h20;

  `uvm_component_utils(usbh_host_scoreboard)
  uvm_analysis_imp_axi4_agent #(usbh_host_axi4_agent_seq_item, usbh_host_scoreboard) axi4_agent_export; // Receives AXI monitor transactions.
  uvm_analysis_imp_utmi_agent #(usbh_host_utmi_agent_seq_item, usbh_host_scoreboard) utmi_agent_export; // Receives UTMI monitor samples.
  int unsigned axi_write_count, axi_read_count; // AXI transaction counters.
  int unsigned tx_packet_count, rx_packet_count; // USB packet counters.
  int unsigned tx_byte_count, rx_byte_count; // Accepted UTMI byte counters.
  int unsigned rx_error_count, bad_pid_count; // UTMI error and PID counters.
  int unsigned axi_error_count, packet_error_count, comparison_error_count; // Scoreboard error counters.
  byte unsigned tx_packet[$], rx_packet[$]; // Current host-TX and device-RX packet buffers.
  byte unsigned tx_payload_fifo[$], expected_rx_data[$]; // Payload queues for checking transfers.
  usbh_host_expected_usb_packet expected_tx_packets[$]; // Expected host packets, in transmission order.
  bit tx_active, rx_active; // Indicates an active packet capture.
  bit [31:0] reg_ctrl, reg_irq_mask, reg_xfer_len, reg_token; // Minimal model of relevant host registers.
  bit reg_ctrl_valid, reg_irq_mask_valid, reg_xfer_len_valid, reg_token_valid; // Tracks registers written by the testbench.
  bit transaction_active, transaction_is_in, transaction_ack_expected; // Tracks current USB transfer context.
  bit [7:0] transaction_token_pid; // PID associated with the current transfer.
  bit last_rx_valid, last_rx_crc_valid; // Status of the most recently received packet.
  bit [7:0] last_rx_pid; // PID of the most recently received packet.
  bit [15:0] last_rx_payload_count; // Payload length excluding PID and CRC16.

  function new(string name = "usbh_host_scoreboard", uvm_component parent = null);
    super.new(name, parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    axi4_agent_export = new("axi4_agent_export", this); // Connect AXI analysis implementation.
    utmi_agent_export = new("utmi_agent_export", this); // Connect UTMI analysis implementation.
    axi_write_count = 0; axi_read_count = 0;
    tx_packet_count = 0; rx_packet_count = 0;
    tx_byte_count = 0; rx_byte_count = 0;
    rx_error_count = 0; bad_pid_count = 0;
    axi_error_count = 0; packet_error_count = 0; comparison_error_count = 0;
    tx_active = 0; rx_active = 0;
    reg_ctrl = '0; reg_irq_mask = '0; reg_xfer_len = '0; reg_token = '0;
    reg_ctrl_valid = 0; reg_irq_mask_valid = 0; reg_xfer_len_valid = 0; reg_token_valid = 0;
    transaction_active = 0; transaction_is_in = 0; transaction_ack_expected = 0;
    transaction_token_pid = '0;
    last_rx_valid = 0; last_rx_crc_valid = 0; last_rx_pid = '0; last_rx_payload_count = '0;
  endfunction

  function bit valid_axi_address(bit is_write, bit [31:0] addr);
    if (addr[1:0] != 2'b00) return 0; // Registers must be word-aligned.
    if (is_write)
      return addr inside {USB_CTRL, USB_IRQ_ACK, USB_IRQ_MASK, USB_XFER_DATA, USB_XFER_TOKEN, USB_WR_DATA}; // Supported write addresses.
    return addr inside {USB_CTRL, USB_STATUS, USB_IRQ_STS, USB_IRQ_MASK, USB_XFER_DATA, USB_XFER_TOKEN, USB_RX_STAT, USB_RD_DATA}; // Supported read addresses.
  endfunction

  function void axi_error(string message);
    axi_error_count++; // Count AXI protocol/model errors.
    `uvm_error("SCBD_AXI", message)
  endfunction

  function void packet_error(string message);
    packet_error_count++; // Count malformed packets or CRC/PID failures.
    `uvm_error("SCBD_USB", message)
  endfunction

  function void comparison_error(string message);
    comparison_error_count++; // Count expected-versus-actual mismatches.
    `uvm_error("SCBD_COMPARE", message)
  endfunction

  function bit [31:0] strobe_mask(bit [3:0] strobe);
    bit [31:0] mask;
    mask = '0;
    for (int lane = 0; lane < 4; lane++)
      if (strobe[lane]) mask[lane*8 +: 8] = 8'hFF; // Expand each WSTRB lane to eight mask bits.
    return mask;
  endfunction

  function void update_register_model(usbh_host_axi4_agent_seq_item t);
    bit [31:0] mask, next_token;
    mask = strobe_mask(t.strb); // Apply only byte lanes selected by WSTRB.
    case (t.addr)
      USB_CTRL: begin
        reg_ctrl = (reg_ctrl & ~mask) | (t.data & mask); // Update USB_CTRL model.
        if (mask != 0) reg_ctrl_valid = 1;
      end
      USB_IRQ_MASK: begin
        reg_irq_mask = (reg_irq_mask & ~mask) | (t.data & mask); // Update interrupt mask model.
        if (mask != 0) reg_irq_mask_valid = 1;
      end
      USB_XFER_DATA: begin
        reg_xfer_len = (reg_xfer_len & ~mask) | (t.data & mask); // Update transfer-length model.
        if (mask != 0) reg_xfer_len_valid = 1;
      end
      USB_XFER_TOKEN: begin
        next_token = (reg_token & ~mask) | (t.data & mask); // Merge token register write.
        reg_token = next_token;
        if (mask != 0) reg_token_valid = 1;
        if (next_token[31]) begin_expected_transaction(next_token); // START bit launches expected USB traffic.
        reg_token[31] = 1'b0; // START is treated as a self-clearing bit in this model.
      end
      USB_WR_DATA: begin
        if (t.strb[0]) tx_payload_fifo.push_back(t.data[7:0]); // Queue written TX payload byte.
      end
      default: begin end
    endcase
  endfunction

  function void compare_register_read(usbh_host_axi4_agent_seq_item t);
    bit [31:0] expected, compare_mask;
    bit model_valid;
    model_valid = 1;
    compare_mask = 32'hFFFF_FFFF; // Compare all bits unless a register has self-clearing fields.
    case (t.addr)
      USB_CTRL: begin expected = reg_ctrl; model_valid = reg_ctrl_valid; end
      USB_IRQ_MASK: begin expected = reg_irq_mask; model_valid = reg_irq_mask_valid; end
      USB_XFER_DATA: begin expected = reg_xfer_len; model_valid = reg_xfer_len_valid; end
      USB_XFER_TOKEN: begin
        expected = reg_token;
        model_valid = reg_token_valid;
        compare_mask[31] = 1'b0; // Ignore START because it may clear automatically.
      end
      default: model_valid = 0; // No reference value for other registers.
    endcase
    if (model_valid && ((t.rdata & compare_mask) !== (expected & compare_mask)))
      comparison_error($sformatf("AXI readback mismatch addr=0x%08h expected=0x%08h actual=0x%08h mask=0x%08h",
                                 t.addr, expected, t.rdata, compare_mask));
  endfunction

  function void compare_rx_status(usbh_host_axi4_agent_seq_item t);
    if (!last_rx_valid) return; // No valid captured packet to compare.
    if (t.rdata[23:16] !== last_rx_pid)
      comparison_error($sformatf("USB_RX_STAT response PID mismatch: UTMI=0x%02h AXI=0x%02h",
                                 last_rx_pid, t.rdata[23:16]));
    if (t.rdata[15:0] !== last_rx_payload_count)
      comparison_error($sformatf("USB_RX_STAT byte count mismatch: UTMI payload bytes=%0d AXI count=%0d",
                                 last_rx_payload_count, t.rdata[15:0]));
    if (last_rx_pid inside {PID_DATA0, PID_DATA1} && t.rdata[30] !== !last_rx_crc_valid)
      comparison_error($sformatf("USB_RX_STAT CRC_ERR mismatch: UTMI CRC valid=%0b AXI CRC_ERR=%0b",
                                 last_rx_crc_valid, t.rdata[30]));
  endfunction

  function void write_axi4_agent(usbh_host_axi4_agent_seq_item t);
    if (t == null) begin axi_error("Null AXI monitor item"); return; end
    if (!valid_axi_address(t.write, t.addr))
      axi_error($sformatf("Unsupported or unaligned AXI %s address 0x%08h", t.write ? "WRITE" : "READ", t.addr));
    if (t.len != 0)
      axi_error($sformatf("Expected single beat: LEN=%0d addr=0x%08h", t.len, t.addr));
    if (t.size != 3'd2)
      axi_error($sformatf("Expected 32-bit access: SIZE=%0d addr=0x%08h", t.size, t.addr));
    if (!(t.burst inside {2'b00, 2'b01}))
      axi_error($sformatf("Unexpected BURST=%0b addr=0x%08h", t.burst, t.addr));
    if (t.resp != 2'b00)
      axi_error($sformatf("AXI response error: %s addr=0x%08h RESP=%0b", t.write ? "WRITE" : "READ", t.addr, t.resp));
    if (t.resp_id != t.id)
      axi_error($sformatf("AXI response ID mismatch: request=%0h response=%0h", t.id, t.resp_id));

    if (t.write) begin
      axi_write_count++;
      if (!t.wlast)
        axi_error($sformatf("WLAST not asserted for single-beat write addr=0x%08h", t.addr));
      case (t.addr)
        USB_CTRL: if (t.data[31:9] != 0) axi_error($sformatf("USB_CTRL reserved bits set: 0x%08h", t.data));
        USB_IRQ_ACK: if (t.data[31:4] != 0) axi_error($sformatf("USB_IRQ_ACK reserved bits set: 0x%08h", t.data));
        USB_XFER_DATA: if (t.data[31:16] != 0) axi_error($sformatf("USB_XFER_DATA reserved bits set: 0x%08h", t.data));
        USB_XFER_TOKEN: if (t.data[27:24] != 0 || t.data[4:0] != 0) axi_error($sformatf("USB_XFER_TOKEN reserved bits set: 0x%08h", t.data));
        USB_WR_DATA: if (t.data[31:8] != 0) axi_error($sformatf("USB_WR_DATA reserved bits set: 0x%08h", t.data));
        default: begin end
      endcase
      if (t.resp == 2'b00) update_register_model(t); // Update the model only for successful writes.
      `uvm_info("SCBD_AXI", $sformatf("AXI WRITE #%0d addr=0x%08h data=0x%08h strb=%0h ID=%0h RESP=%0b",
                                     axi_write_count, t.addr, t.data, t.strb, t.id, t.resp), UVM_MEDIUM)
    end else begin
      axi_read_count++;
      if (!t.rlast)
        axi_error($sformatf("RLAST not asserted for single-beat read addr=0x%08h", t.addr));
      if (t.resp == 2'b00) begin
        compare_register_read(t); // Check readback against modeled registers where supported.
        if (t.addr == USB_RX_STAT) compare_rx_status(t); // Check receive status against UTMI observation.
        else if (t.addr == USB_RD_DATA && expected_rx_data.size() != 0) begin
          byte unsigned expected_byte;
          expected_byte = expected_rx_data.pop_front(); // Consume next expected received data byte.
          if (t.rdata[7:0] !== expected_byte)
            comparison_error($sformatf("USB_RD_DATA mismatch: expected=0x%02h actual=0x%02h",
                                       expected_byte, t.rdata[7:0]));
        end
      end
      `uvm_info("SCBD_AXI", $sformatf("AXI READ #%0d addr=0x%08h data=0x%08h ID=%0h RESP=%0b",
                                    axi_read_count, t.addr, t.rdata, t.id, t.resp), UVM_MEDIUM)
    end
  endfunction

  function bit valid_pid(byte unsigned pid);
    return (pid[7:4] == (4'hF ^ pid[3:0])); // USB PID upper nibble must complement lower nibble.
  endfunction

  function bit is_handshake_pid(byte unsigned pid);
    return pid inside {PID_ACK, PID_NAK, PID_STALL}; // ACK, NAK, STALL.
  endfunction

  function bit is_data_pid(byte unsigned pid);
    return pid inside {PID_DATA0, PID_DATA1}; // DATA0, DATA1.
  endfunction

  function bit is_token_pid(byte unsigned pid);
    return pid inside {PID_OUT, PID_IN, PID_SETUP, PID_SOF, 8'hF0, 8'h87}; // OUT, IN, SETUP, SOF, PING, SPLIT.
  endfunction

  function string pid_to_string(byte unsigned pid);
    case (pid)
      PID_OUT: return "OUT";
      PID_IN: return "IN";
      PID_SETUP: return "SETUP";
      PID_SOF: return "SOF";
      PID_DATA0: return "DATA0";
      PID_DATA1: return "DATA1";
      PID_ACK: return "ACK";
      PID_NAK: return "NAK";
      PID_STALL: return "STALL";
      8'h3C: return "PRE";
      8'h87: return "SPLIT";
      8'hF0: return "PING";
      default: return "UNKNOWN";
    endcase
  endfunction

  // USB token CRC5: input order is ADDRESS[0:6], then ENDPOINT[0:3].
  // Reflected polynomial = 0x14; initial and final XOR values = 0x1F.
  function bit [4:0] usb_crc5(bit [10:0] token_bits);
    bit [4:0] crc;
    bit mix;
    crc = 5'h1F; // USB CRC5 initial remainder.
    for (int i = 0; i < 11; i++) begin
      mix = crc[0] ^ token_bits[i]; // XOR next token bit with CRC LSB.
      crc = crc >> 1; // Reflected CRC shifts right.
      if (mix) crc = crc ^ 5'h14; // Apply reflected x^5+x^2+1 polynomial.
    end
    return crc ^ 5'h1F; // Final complement.
  endfunction

  // Updates reflected USB CRC16 for one byte; bytes and bits are processed LSB-first.
  function bit [15:0] usb_crc16_update(bit [15:0] crc_i, byte unsigned data);
    bit [15:0] crc;
    bit mix;
    crc = crc_i;
    for (int i = 0; i < 8; i++) begin
      mix = crc[0] ^ data[i]; // Combine current CRC LSB with incoming data bit.
      crc = crc >> 1;
      if (mix) crc = crc ^ 16'hA001; // Reflected CRC16 polynomial.
    end
    return crc; // Final XOR is applied after all payload bytes.
  endfunction

  function usbh_host_expected_usb_packet make_expected_token(byte unsigned pid, bit [6:0] address, bit [3:0] endpoint);
    usbh_host_expected_usb_packet packet;
    bit [10:0] token_bits;
    bit [4:0] crc;
    packet = new("token");
    token_bits = {endpoint, address}; // LSB-first processing starts at ADDRESS[0].
    crc = usb_crc5(token_bits);
    packet.bytes.push_back(pid); // Token byte 0 is PID.
    packet.bytes.push_back({endpoint[0], address}); // Token byte 1 carries address and EP0 bit.
    packet.bytes.push_back({crc, endpoint[3:1]}); // Token byte 2 carries CRC5 and remaining endpoint bits.
    return packet;
  endfunction

  function usbh_host_expected_usb_packet make_expected_data(byte unsigned pid, ref byte unsigned payload[$], int unsigned length);
    usbh_host_expected_usb_packet packet;
    bit [15:0] crc;
    int unsigned used;
    packet = new("data");
    packet.bytes.push_back(pid); // DATA PID is excluded from CRC16 calculation.
    crc = 16'hFFFF; // USB CRC16 initial remainder.
    used = 0;
    while (used < length && payload.size() != 0) begin
      packet.bytes.push_back(payload.pop_front()); // Append next expected payload byte.
      crc = usb_crc16_update(crc, packet.bytes[$]); // Update CRC using that byte.
      used++;
    end
    if (used != length)
      comparison_error($sformatf("AXI programmed TX length=%0d but only %0d payload byte(s) were written", length, used));
    crc = crc ^ 16'hFFFF; // Final complement after the payload.
    packet.bytes.push_back(crc[7:0]); // USB sends CRC16 low byte first.
    packet.bytes.push_back(crc[15:8]); // Then the CRC16 high byte.
    return packet;
  endfunction

  function void begin_expected_transaction(bit [31:0] token);
    byte unsigned pid;
    usbh_host_expected_usb_packet expected_packet;
    bit [6:0] address;
    bit [3:0] endpoint;
    int unsigned payload_length;
    bit [7:0] data_pid;
    pid = token[23:16]; // Extract token PID from control register value.
    address = token[15:9]; // Extract 7-bit device address.
    endpoint = token[8:5]; // Extract endpoint number.
    payload_length = reg_xfer_len[15:0]; // Use configured transfer length.
    transaction_active = 1;
    transaction_is_in = token[30]; // Direction bit: 1=IN, 0=OUT.
    transaction_ack_expected = token[29]; // Whether the transaction expects ACK handling.
    transaction_token_pid = pid;
    last_rx_valid = 0; last_rx_crc_valid = 0; last_rx_pid = '0; last_rx_payload_count = '0;

    if (!valid_pid(pid) || !is_token_pid(pid)) begin
      packet_error($sformatf("USB_XFER_TOKEN has invalid/non-token PID 0x%02h", pid));
      return;
    end
    if ((token[30] && pid != PID_IN) || (!token[30] && pid inside {PID_IN, PID_SOF, 8'hF0}))
      packet_error($sformatf("USB_XFER_TOKEN direction/PID mismatch: IN=%0b PID=0x%02h", token[30], pid));

    expected_packet = make_expected_token(pid, address, endpoint); // Predict host token packet.
    expected_tx_packets.push_back(expected_packet);
    if (!token[30] && pid inside {PID_OUT, PID_SETUP}) begin // OUT and SETUP may be followed by a DATA packet.
      data_pid = token[28] ? PID_DATA1 : PID_DATA0; // Select DATA1 or DATA0 from token configuration.
      expected_packet = make_expected_data(data_pid, tx_payload_fifo, payload_length);
      expected_tx_packets.push_back(expected_packet); // Queue expected data packet after token.
    end
  endfunction

  function bit check_packet_format(string direction, ref byte unsigned packet[$]);
    byte unsigned pid;
    bit [10:0] token_bits;
    bit [4:0] expected_crc5;
    bit [15:0] crc, transmitted_crc, actual_crc;

    if (packet.size() == 0) begin
      packet_error($sformatf("%s packet ended without any accepted bytes", direction));
      return 0;
    end
    pid = packet[0]; // First captured byte is the USB PID.
    if (!valid_pid(pid)) begin
      bad_pid_count++;
      packet_error($sformatf("%s invalid PID complement encoding: 0x%02h", direction, pid));
      return 0;
    end

    if (is_handshake_pid(pid) || pid == 8'h3C) begin // Handshake and PRE packets carry PID only.
      if (packet.size() != 1) begin
        packet_error($sformatf("%s %s packet has %0d bytes; expected PID only", direction, pid_to_string(pid), packet.size()));
        return 0;
      end
      return 1;
    end

    if (is_token_pid(pid)) begin
      if (packet.size() != 3) begin
        packet_error($sformatf("%s %s token has %0d bytes; expected 3", direction, pid_to_string(pid), packet.size()));
        return 0;
      end
      // Byte 1 = {ENDP[0], ADDR[6:0]}; byte 2 = {CRC5[4:0], ENDP[3:1]}.
      token_bits = {{packet[2][2:0], packet[1][7]}, packet[1][6:0]}; // Rebuild {ENDPOINT, ADDRESS} for CRC calculation.
      expected_crc5 = usb_crc5(token_bits);
      if (packet[2][7:3] !== expected_crc5) begin
        packet_error($sformatf("%s %s CRC5 mismatch: expected=%02h actual=%02h token_bits=%03h",
                               direction, pid_to_string(pid), expected_crc5, packet[2][7:3], token_bits));
        return 0;
      end
      return 1;
    end

    if (is_data_pid(pid)) begin
      if (packet.size() < 3) begin
        packet_error($sformatf("%s %s data packet has %0d bytes; expected PID, CRC16", direction, pid_to_string(pid), packet.size()));
        return 0;
      end
      crc = 16'hFFFF; // Initialize CRC16 before processing payload.
      for (int i = 1; i < packet.size() - 2; i++)
        crc = usb_crc16_update(crc, packet[i]); // Exclude PID and final two CRC bytes.
      transmitted_crc = crc ^ 16'hFFFF; // Apply USB CRC16 final complement.
      actual_crc = {packet[packet.size()-1], packet[packet.size()-2]}; // Reassemble high byte then low byte into numeric CRC.
      if (actual_crc !== transmitted_crc) begin
        packet_error($sformatf("%s %s CRC16 mismatch: expected=%04h actual=%04h (crc bytes low=%02h high=%02h)",
                               direction, pid_to_string(pid), transmitted_crc, actual_crc,
                               packet[packet.size()-2], packet[packet.size()-1]));
        return 0;
      end
      return 1;
    end
    packet_error($sformatf("%s unsupported USB PID 0x%02h", direction, pid));
    return 0;
  endfunction

  function void compare_tx_packet(ref byte unsigned actual[$]);
    usbh_host_expected_usb_packet expected_packet;
    bit is_sof;
    is_sof = actual.size() != 0 && actual[0] == PID_SOF; // SOF scheduling is not modeled here.
    if (is_sof) return;
    if (expected_tx_packets.size() == 0) begin
      comparison_error($sformatf("Unexpected host TX packet PID=0x%02h (%s), bytes=%0d",
                                 actual[0], pid_to_string(actual[0]), actual.size()));
      return;
    end
    expected_packet = expected_tx_packets.pop_front(); // Compare against oldest expected packet.
    if (expected_packet.bytes.size() != actual.size()) begin
      comparison_error($sformatf("Host TX %s packet length mismatch: expected=%0d actual=%0d PID=0x%02h",
                                 expected_packet.kind, expected_packet.bytes.size(), actual.size(), actual[0]));
      return;
    end
    for (int i = 0; i < actual.size(); i++) begin
      if (actual[i] !== expected_packet.bytes[i]) begin
        comparison_error($sformatf("Host TX %s packet byte[%0d] mismatch: expected=0x%02h actual=0x%02h",
                                   expected_packet.kind, i, expected_packet.bytes[i], actual[i]));
        return;
      end
    end
    `uvm_info("SCBD_COMPARE", $sformatf("Matched host TX %s packet (%0d bytes), PID=%s",
                                       expected_packet.kind, actual.size(), pid_to_string(actual[0])), UVM_MEDIUM)
  endfunction

  function void check_rx_transaction_response(byte unsigned pid);
    if (!transaction_active) return; // No active transaction context to validate.
    if (transaction_is_in) begin
      if (!(is_data_pid(pid) || pid inside {PID_NAK, PID_STALL}))
        packet_error($sformatf("Unexpected %s response to IN token", pid_to_string(pid)));
    end else if (!(is_handshake_pid(pid))) begin
      packet_error($sformatf("Unexpected %s response to OUT/SETUP token", pid_to_string(pid)));
    end
  endfunction

  function void finish_packet(string direction, ref byte unsigned packet[$]);
    byte unsigned pid;
    bit crc_valid, is_tx;
    int unsigned payload_length;
    usbh_host_expected_usb_packet expected_ack;
    if (packet.size() == 0) begin
      packet_error($sformatf("%s packet boundary with no captured bytes", direction));
      return;
    end
    pid = packet[0];
    is_tx = direction == "HOST_TX"; // Distinguish host transmit from device receive.
    crc_valid = check_packet_format(direction, packet); // Validate PID, packet length and CRC.
    if (is_tx) begin
      tx_packet_count++;
      compare_tx_packet(packet); // Check host output against expected packet queue.
    end else begin
      rx_packet_count++;
      check_rx_transaction_response(pid); // Check whether response type fits current transaction.
      last_rx_valid = valid_pid(pid);
      last_rx_crc_valid = crc_valid;
      last_rx_pid = pid;
      last_rx_payload_count = 0;
      if (is_data_pid(pid) && packet.size() >= 3) begin
        payload_length = packet.size() - 3; // Remove PID and two CRC bytes.
        last_rx_payload_count = payload_length;
        for (int i = 1; i < packet.size() - 2; i++)
          expected_rx_data.push_back(packet[i]); // Queue payload for later AXI read comparison.
        if (crc_valid && transaction_is_in && transaction_ack_expected) begin
          expected_ack = new("handshake");
          expected_ack.bytes.push_back(PID_ACK); // A valid IN data packet is normally acknowledged with ACK.
          expected_tx_packets.push_back(expected_ack);
        end
      end
      `uvm_info("SCBD_UTMI", $sformatf("DEVICE_RX packet #%0d PID=0x%02h (%s) bytes=%0d CRC=%s",
                                      rx_packet_count, pid, pid_to_string(pid), packet.size(),
                                      crc_valid ? "valid" : "invalid"), UVM_MEDIUM)
    end
  endfunction

  function void write_utmi_agent(usbh_host_utmi_agent_seq_item t);
    bit rx_was_active;
    if (t == null) begin packet_error("Null UTMI monitor item"); return; end
    if (t.rst_i === 1'b0) begin // Clear captured state during active-low reset.
      tx_packet.delete(); rx_packet.delete(); tx_payload_fifo.delete(); expected_rx_data.delete();
      expected_tx_packets.delete();
      tx_active = 0; rx_active = 0; transaction_active = 0; last_rx_valid = 0;
      return;
    end
    if (t.rst_i !== 1'b1) return; // Ignore unknown reset samples.

    if (t.utmi_txvalid_o === 1'b1) begin
      tx_active = 1;
      if (t.utmi_txready_i === 1'b1) begin
        tx_packet.push_back(t.utmi_data_out_o); // Capture only accepted host TX bytes.
        tx_byte_count++;
      end
    end else if (t.utmi_txvalid_o === 1'b0 && tx_active) begin
      finish_packet("HOST_TX", tx_packet); // TXVALID deassertion marks packet end in this monitor model.
      tx_packet.delete();
      tx_active = 0;
    end

    rx_was_active = rx_active;
    if (t.utmi_rxactive_i === 1'b1) begin
      rx_active = 1;
      if (t.utmi_rxvalid_i === 1'b1) begin
        rx_packet.push_back(t.utmi_data_in_i); // Capture valid device-to-host bytes.
        rx_byte_count++;
      end
      if (t.utmi_rxerror_i === 1'b1) begin
        rx_error_count++;
        packet_error("UTMI RXERROR asserted during RXACTIVE");
      end
    end else if (t.utmi_rxactive_i === 1'b0 && rx_was_active) begin
      finish_packet("DEVICE_RX", rx_packet); // RXACTIVE falling edge marks packet end.
      rx_packet.delete();
      rx_active = 0;
    end

    if (t.utmi_rxactive_i === 1'b1 && t.utmi_rxvalid_i === 1'b1 && t.utmi_rxerror_i === 1'b1)
      `uvm_warning("SCBD_UTMI", "RX byte accepted while RXERROR is asserted")
    `uvm_info("SCBD_UTMI", $sformatf("TXV=%0b TXREADY=%0b TXDATA=%02h RXACTIVE=%0b RXVALID=%0b RXDATA=%02h RXERR=%0b LINESTATE=%b",
                                    t.utmi_txvalid_o, t.utmi_txready_i, t.utmi_data_out_o,
                                    t.utmi_rxactive_i, t.utmi_rxvalid_i, t.utmi_data_in_i,
                                    t.utmi_rxerror_i, t.utmi_linestate_i), UVM_HIGH)
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (tx_active || tx_packet.size() != 0)
      packet_error($sformatf("Simulation ended with incomplete host TX packet (%0d accepted byte(s))", tx_packet.size()));
    if (rx_active || rx_packet.size() != 0)
      packet_error($sformatf("Simulation ended with incomplete device RX packet (%0d accepted byte(s))", rx_packet.size()));
    if (expected_tx_packets.size() != 0)
      comparison_error($sformatf("Simulation ended with %0d expected host TX packet(s) not observed", expected_tx_packets.size()));
  endfunction

  function void report_phase(uvm_phase phase);
    super.report_phase(phase);
    `uvm_info("SCBD_SUMMARY", $sformatf({"AXI writes=%0d reads=%0d errors=%0d; ",
                                        "host packets=%0d device packets=%0d; ",
                                        "TX bytes=%0d RX bytes=%0d RX errors=%0d bad PIDs=%0d; ",
                                        "packet errors=%0d mismatches=%0d pending TX expectations=%0d"},
                                       axi_write_count, axi_read_count, axi_error_count,
                                       tx_packet_count, rx_packet_count, tx_byte_count, rx_byte_count,
                                       rx_error_count, bad_pid_count, packet_error_count,
                                       comparison_error_count, expected_tx_packets.size()), UVM_NONE)
  endfunction
endclass : usbh_host_scoreboard
