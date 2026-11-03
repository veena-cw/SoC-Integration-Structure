// USB Host UVM scoreboard: merged implementation
// Assumptions to verify against your RTL:
// 1) AXI addresses are absolute 0x1040_0000 + register offset.
// 2) USB_CTRL bits: [0] SOF enable, [1:2] OPMODE, [3:4] XCVRSELECT,
//    [5] TERMSELECT, [6] DPPULLDOWN, [7] DMPULLDOWN, [8] TX_FLUSH.
// 3) USB_XFER_TOKEN: START[31], IN[30], ACK[29], DATAX[28],
//    PID[23:16], DEV_ADDR[15:9], EP_ADDR[8:5].
// 4) UTMI TX packet boundaries are inferred from TXVALID deassertion;
//    RX packet boundaries from RXACTIVE deassertion.
// 5) Verify CRC5/CRC16 vectors and register semantics against your RTL/spec.
//
// Connect:
//   axi4_agent.monitor.ap -> scoreboard.axi4_agent_export
//   utmi_agent.monitor.ap -> scoreboard.utmi_agent_export
//
// Required sequence item fields follow the two uploaded scoreboard versions.

`uvm_analysis_imp_decl(_axi4_agent)
`uvm_analysis_imp_decl(_utmi_agent)

class usbh_sb_expected_packet;
  byte unsigned bytes[$];
  string kind;
  int unsigned xfer_id;
  function new(string k = "", int unsigned id = 0);
    kind = k;
    xfer_id = id;
  endfunction
endclass

class usbh_sb_transfer;
  int unsigned id;
  bit is_in, ack_req, datax;
  bit [7:0] token_pid;
  bit [6:0] dev_addr;
  bit [3:0] ep_addr;
  int unsigned tx_len;
  byte unsigned tx_payload[$];
  bit token_seen, data_seen, response_seen, expect_ack, ack_seen;
  function new(); endfunction
endclass

class usbh_host_scoreboard extends uvm_scoreboard;
  `uvm_component_utils(usbh_host_scoreboard)

  uvm_analysis_imp_axi4_agent #(usbh_host_axi4_agent_seq_item,
                                usbh_host_scoreboard) axi4_agent_export;
  uvm_analysis_imp_utmi_agent #(usbh_host_utmi_agent_seq_item,
                                usbh_host_scoreboard) utmi_agent_export;

  localparam bit [31:0] USB_BASE = 32'h1040_0000;
  localparam bit [31:0] USB_CTRL       = USB_BASE + 32'h00;
  localparam bit [31:0] USB_STATUS     = USB_BASE + 32'h04;
  localparam bit [31:0] USB_IRQ_ACK    = USB_BASE + 32'h08;
  localparam bit [31:0] USB_IRQ_STS    = USB_BASE + 32'h0C;
  localparam bit [31:0] USB_IRQ_MASK   = USB_BASE + 32'h10;
  localparam bit [31:0] USB_XFER_DATA  = USB_BASE + 32'h14;
  localparam bit [31:0] USB_XFER_TOKEN = USB_BASE + 32'h18;
  localparam bit [31:0] USB_RX_STAT    = USB_BASE + 32'h1C;
  localparam bit [31:0] USB_WR_DATA    = USB_BASE + 32'h20;
  localparam bit [31:0] USB_RD_DATA    = USB_BASE + 32'h20;

  localparam byte unsigned PID_OUT   = 8'hE1;
  localparam byte unsigned PID_IN    = 8'h69;
  localparam byte unsigned PID_SOF   = 8'hA5;
  localparam byte unsigned PID_SETUP = 8'h2D;
  localparam byte unsigned PID_DATA0 = 8'hC3;
  localparam byte unsigned PID_DATA1 = 8'h4B;
  localparam byte unsigned PID_ACK   = 8'hD2;
  localparam byte unsigned PID_NAK   = 8'h5A;
  localparam byte unsigned PID_STALL = 8'h1E;
  localparam byte unsigned PID_PRE   = 8'h3C;
  localparam byte unsigned PID_PING  = 8'hB4;
  localparam byte unsigned PID_SPLIT = 8'h78;

  // Configuration knobs.
  bit addresses_are_absolute = 1;
  bit check_phy_ctrl = 1;
  bit check_sof_seq = 1;
  bit check_irq_sts = 1;
  bit check_rx_stat = 1;
  bit check_rd_data_enable = 1;
  bit rx_count_includes_crc = 0;
  bit keep_bad_crc_payload = 0;
  int unsigned phy_settle_cycles = 8;
  int unsigned rx_stat_settle_cycles = 6;

  int unsigned axi_write_count, axi_read_count;
  int unsigned tx_packet_count, rx_packet_count;
  int unsigned tx_byte_count, rx_byte_count, rx_error_count, bad_pid_count;
  int unsigned axi_error_count, packet_error_count, comparison_error_count;
  int unsigned cmp_pass_count, xfer_start_count, xfer_done_count, sof_count, phy_error_count;

  byte unsigned tx_packet[$], rx_packet[$];
  bit tx_active, rx_active, rx_err_in_packet;

  // Register reference model.
  bit [31:0] reg_ctrl, reg_irq_mask, reg_xfer_data, reg_token;
  bit ctrl_valid, irq_mask_valid, xfer_data_valid, token_valid;
  byte unsigned expected_tx_fifo[$], expected_rx_fifo[$];
  usbh_sb_expected_packet expected_tx_packets[$];
  usbh_sb_transfer transfers[$];
  int unsigned next_transfer_id;

  // RX status snapshot.
  bit rx_snapshot_valid;
  bit [7:0] rx_snapshot_pid;
  int unsigned rx_snapshot_count, rx_cycles_since_end;
  bit rx_snapshot_crc_error;

  // PHY/SOF/IRQ state.
  int unsigned phy_settle_count;
  bit phy_mismatch_reported;
  bit phy_match_reported;
  bit sof_seen;
  bit [10:0] last_sof_frame;
  bit [3:0] irq_cause_allowed;
  bit [3:0] irq_ack_pending;
  bit line_state_valid;
  bit [1:0] previous_line_state;
  
  
  // PHY mismatch grace period for AXI/UTMI monitor ordering.
  bit          phy_mismatch_pending;
  int unsigned phy_mismatch_grace_count;


  // USB_STATUS is dynamic: SOF_TIME [31:16] can advance between reads,
  // while RX_ERROR [2] and LINESTATE [1:0] are live read-only status fields.
  // Track the low status fields around an intentional read-only write probe.
  bit status_sample_valid;
  bit [2:0] last_status_low;
  bit status_ro_write_pending;
  bit [2:0] status_before_ro_write;
  int unsigned ro_write_probe_count;

  // Diagnostic context is included in every scoreboard UVM_ERROR.  The AXI
  // context contains the complete bus transaction; the UTMI context contains
  // the captured USB packet or the relevant sampled interface signals.
  string last_transaction_context = "No transaction has been observed yet";
  string last_check_name = "No check reported yet";
  string last_expected_context = "N/A";
  string last_actual_context = "N/A";
  bit    last_check_failed = 0;

  function new(string name="usbh_host_scoreboard", uvm_component parent=null);
    super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);
    super.build_phase(phase);
    axi4_agent_export = new("axi4_agent_export", this);
    utmi_agent_export = new("utmi_agent_export", this);
    clear_reference_model();
    axi_write_count=0; axi_read_count=0;
    tx_packet_count=0; rx_packet_count=0;
    tx_byte_count=0; rx_byte_count=0; rx_error_count=0; bad_pid_count=0;
    axi_error_count=0; packet_error_count=0; comparison_error_count=0;
    cmp_pass_count=0; xfer_start_count=0; xfer_done_count=0;
    sof_count=0; phy_error_count=0; next_transfer_id=0;
    ro_write_probe_count=0;
  endfunction

  function void clear_reference_model();
    tx_packet.delete(); rx_packet.delete();
    expected_tx_fifo.delete(); expected_rx_fifo.delete();
    expected_tx_packets.delete(); transfers.delete();
    reg_ctrl='0; reg_irq_mask='0; reg_xfer_data='0; reg_token='0;
    ctrl_valid=0; irq_mask_valid=0; xfer_data_valid=0; token_valid=0;
    tx_active=0; rx_active=0; rx_err_in_packet=0;
    rx_snapshot_valid=0; rx_snapshot_pid='0; rx_snapshot_count=0;
    rx_snapshot_crc_error=0; rx_cycles_since_end=0;
    phy_settle_count=0; phy_mismatch_reported=0; phy_match_reported=0;
    sof_seen=0; last_sof_frame='0; irq_cause_allowed='0;
    irq_ack_pending='0;
    line_state_valid=0; previous_line_state='0;
    status_sample_valid=0; last_status_low='0;
    status_ro_write_pending=0; status_before_ro_write='0;
    
    phy_mismatch_pending = 1'b0;
    phy_mismatch_grace_count = 0;

  endfunction

  // Use this before each condition so the log has explicit expected/actual
  // values for PASS as well as FAIL.  A failed condition is consumed by the
  // following fail_axi/fail_packet/fail_compare call.
  function void log_condition(string check_name,
                              string expected_value,
                              string actual_value,
                              bit passed);
    last_check_name       = check_name;
    last_expected_context = expected_value;
    last_actual_context   = actual_value;
    last_check_failed     = !passed;
    `uvm_info("USB_SB_CHECK",
      $sformatf("%s | CHECK=%s | EXPECTED={%s} | ACTUAL={%s} | TRANSACTION={%s}",
        passed ? "PASS" : "FAIL", check_name, expected_value, actual_value,
        last_transaction_context), UVM_LOW)
  endfunction

  function void log_error_with_context(string report_id, string msg);
    string expected_detail;
    string actual_detail;
    if (last_check_failed) begin
      expected_detail = last_expected_context;
      actual_detail   = last_actual_context;
    end else begin
      // The specific error text is retained below even for protocol/state
      // errors that do not have a single scalar expected/actual pair.
      expected_detail = "See ERROR_DETAIL (no scalar expected value for this error)";
      actual_detail   = "See ERROR_DETAIL and TRANSACTION_CONTEXT";
      last_check_name = msg;
    end
    `uvm_error(report_id,
      $sformatf("ERROR_DETAIL=%s\nCHECK=%s\nEXPECTED={%s}\nACTUAL={%s}\nTRANSACTION_CONTEXT={%s}",
        msg, last_check_name, expected_detail, actual_detail,
        last_transaction_context))
    last_check_failed = 0;
  endfunction

  function void fail_axi(string msg);
    axi_error_count++;
    log_error_with_context("USB_SB_AXI", msg);
  endfunction
  function void fail_packet(string msg);
    packet_error_count++;
    log_error_with_context("USB_SB_PACKET", msg);
  endfunction
  function void fail_compare(string msg);
    comparison_error_count++;
    log_error_with_context("USB_SB_COMPARE", msg);
  endfunction
  function void pass_compare(string msg);
    cmp_pass_count++;
    `uvm_info("USB_SB_MATCH", msg, UVM_MEDIUM)
  endfunction

  function bit [31:0] normalize_addr(bit [31:0] addr);
    // Accept either absolute register addresses or register offsets.
    // Absolute: USB_BASE + offset; offset-only: 0x00 through 0x20.
    // Preserve unknown addresses so validation still reports invalid accesses.
    if (addr >= USB_BASE && addr <= USB_BASE + 32'h20)
      return addr;
    if (addr <= 32'h20)
      return USB_BASE + addr;
    return addr;
  endfunction

  // This checks the legal access direction, not just whether the numerical
  // address exists. A write to a known read-only register can still be a
  // useful negative functional test: AXI may return OKAY while the register
  // ignores the write. Handle that case explicitly in write_axi4_agent().
  function bit valid_axi_address(bit wr, bit [31:0] addr);
    bit [31:0] a;
    a=normalize_addr(addr);
    if (a[1:0] != 0) return 0; // Reject unaligned accesses
    // Reject addresses outside the implemented register map
    if ((a < USB_BASE) || (a > USB_BASE + 32'h20)) 
      return 0; 
    if (wr)
      return a inside {USB_CTRL,USB_IRQ_ACK,USB_IRQ_MASK,USB_XFER_DATA,USB_XFER_TOKEN,USB_WR_DATA};
    else begin
      return a inside {USB_STATUS,USB_IRQ_STS,USB_RX_STAT,USB_RD_DATA,USB_CTRL,USB_IRQ_MASK,USB_XFER_DATA,USB_XFER_TOKEN};
    end
  endfunction
  
  function bit [1:0] expected_axi_response(bit wr,bit [31:0] addr);
	    bit [31:0] a;
	    a = normalize_addr(addr);
	    // Unaligned address
	    if (a[1:0] != 2'b00)
		return 2'b11; // DECERR
	    // Known read-only register write probe.
	    // Confirm the expected response against RTL behavior/spec.
	    if (wr && is_read_only_register(a))
		return 2'b00; // OKAY, write ignored
	    // Supported register and access direction
	    if (valid_axi_address(wr, a))
		return 2'b00; // OKAY
	    // Unsupported/unmapped address
	    return 2'b11;     // DECERR
  endfunction

  function bit is_read_only_register(bit [31:0] a);
    // USB_RD_DATA shares offset 0x20 with write-only USB_WR_DATA; hence it is
    // deliberately not listed here as a prohibited write address.
    return a inside {USB_STATUS, USB_IRQ_STS, USB_RX_STAT};
  endfunction

  // Mask of implemented fields that may be affected by writes to a register.
  // Bits outside these masks are reserved and must not enter the reference model.
  // USB_CTRL[8] is retained in the model as defined by the existing scoreboard;
  // TX_FLUSH side effect is handled separately below.
  function bit [31:0] implemented_write_mask(bit [31:0] a);
    case (a)
      USB_CTRL:       return 32'h0000_01FF; // [8:0]
      USB_IRQ_ACK:    return 32'h0000_000F; // [3:0], W1C
      USB_IRQ_MASK:   return 32'h0000_000F; // [3:0]
      USB_XFER_DATA:  return 32'h0000_FFFF; // [15:0]
      USB_XFER_TOKEN: return 32'hF0FF_FFE0; // [31:28], [23:5]
      USB_WR_DATA:    return 32'h0000_00FF; // [7:0]
      default:        return 32'h0000_0000;
    endcase
  endfunction

  function void check_usb_status(bit [31:0] value);
    // Bits [15:3] are reserved; [31:16] is a changing SOF_TIME field.
    `uvm_info("USB_SB_ACTUAL_STATUS",
      $sformatf("ACTUAL USB_STATUS=0x%08h SOF_TIME=0x%04h RX_ERROR=%0b LINESTATE=%02b",
        value, value[31:16], value[2], value[1:0]), UVM_LOW)
    `uvm_info("USB_SB_EXPECTED_STATUS",
      $sformatf("EXPECTED USB_STATUS invariants: reserved[15:3]=0%s",
        status_ro_write_pending ? $sformatf("; low[2:0] must remain %03b after RO write", status_before_ro_write) : "; low[2:0] are live status fields; SOF_TIME is dynamic"), UVM_LOW)
    log_condition("USB_STATUS reserved bits [15:3]",
      "13'b0", $sformatf("reserved[15:3]=0x%04h", value[15:3]),
      value[15:3] === 13'b0);
    if (value[15:3] !== 13'b0)
      fail_compare($sformatf("USB_STATUS reserved bits [15:3] must be zero; expected=0, actual=0x%08h", value[15:3]));

    // After an intentional write probe, check that writable-looking data did
    // not corrupt the low status fields. Ignore SOF_TIME because it is live.
    if (status_ro_write_pending) begin
      log_condition("USB_STATUS read-only write does not alter live low status bits",
        $sformatf("bits[2:0]=%03b (sampled before write)", status_before_ro_write),
        $sformatf("bits[2:0]=%03b (read after write)", value[2:0]),
        value[2:0] === status_before_ro_write);
      if (value[2:0] !== status_before_ro_write)
        fail_compare($sformatf("USB_STATUS read-only write changed status bits [2:0]: expected_before=%03b actual_after=%03b full_rdata=0x%08h",
          status_before_ro_write, value[2:0], value));
      else
        pass_compare($sformatf("USB_STATUS read-only write ignored; stable bits [2:0]=%03b", value[2:0]));
      status_ro_write_pending=0;
    end

    last_status_low=value[2:0];
    status_sample_valid=1;
  endfunction

  function bit [31:0] byte_mask(bit [3:0] strb);
    bit [31:0] m;
    m='0;
    for (int i=0;i<4;i++) if (strb[i]) m[i*8 +: 8]=8'hFF;
    return m;
  endfunction

  function bit valid_pid(byte unsigned pid);
    return pid[7:4] == (4'hF ^ pid[3:0]);
  endfunction
  function bit is_handshake(byte unsigned pid);
    return pid inside {PID_ACK,PID_NAK,PID_STALL};
  endfunction
  function bit is_data(byte unsigned pid);
    return pid inside {PID_DATA0,PID_DATA1};
  endfunction
  function bit is_token(byte unsigned pid);
    return pid inside {PID_OUT,PID_IN,PID_SETUP,PID_SOF,PID_PING,PID_SPLIT};
  endfunction
  function string pid_name(byte unsigned pid);
    case(pid)
      PID_OUT:return "OUT"; PID_IN:return "IN"; PID_SETUP:return "SETUP";
      PID_SOF:return "SOF"; PID_DATA0:return "DATA0"; PID_DATA1:return "DATA1";
      PID_ACK:return "ACK"; PID_NAK:return "NAK"; PID_STALL:return "STALL";
      PID_PRE:return "PRE"; PID_PING:return "PING"; PID_SPLIT:return "SPLIT";
      default:return "UNKNOWN";
    endcase
  endfunction

  // Format a packet/payload queue for diagnostic expected-vs-actual logs.
  // Example: [69 00 00] or [11 22 33 44].
  function string bytes_to_string(input byte unsigned data[$]);
    string result;
    result = "[";
    foreach (data[i]) begin
      if (i != 0) result = {result, " "};
      result = {result, $sformatf("%02h", data[i])};
    end
    result = {result, "]"};
    return result;
  endfunction

  // Reflected USB CRC algorithms. Verify with independent known vectors before sign-off.
  function bit [4:0] usb_crc5(bit [10:0] bits_in);
    bit [4:0] c;
    bit mix;
    c=5'h1F;
    for (int i=0;i<11;i++) begin
      mix=c[0]^bits_in[i];
      c=c>>1;
      if (mix) c=c^5'h14;
    end
    return c^5'h1F;
  endfunction

  function bit [15:0] crc16_update(bit [15:0] crc_in, byte unsigned b);
    bit [15:0] c;
    bit mix;
    c=crc_in;
    for (int i=0;i<8;i++) begin
      mix=c[0]^b[i];
      c=c>>1;
      if (mix) c=c^16'hA001;
    end
    return c;
  endfunction

  function bit [15:0] usb_crc16(ref byte unsigned payload[$]);
    bit [15:0] c;
    c=16'hFFFF;
    foreach(payload[i]) c=crc16_update(c,payload[i]);
    return c^16'hFFFF;
  endfunction

  function usbh_sb_expected_packet expected_token(byte unsigned pid,
                                                      bit [6:0] addr,
                                                      bit [3:0] ep,
                                                      int unsigned id);
    usbh_sb_expected_packet p;
    bit [10:0] token_bits;
    bit [4:0] crc;
    p=new("token",id);
    token_bits={ep,addr};
    crc=usb_crc5(token_bits);
    p.bytes.push_back(pid);
    p.bytes.push_back({ep[0],addr});
    p.bytes.push_back({crc,ep[3:1]});
    return p;
  endfunction

  function usbh_sb_expected_packet expected_data(byte unsigned pid,
                                                  ref byte unsigned payload[$],
                                                  int unsigned length,
                                                  int unsigned id);
    usbh_sb_expected_packet p;
    byte unsigned b;
    bit [15:0] crc;
    p=new("data",id);
    p.bytes.push_back(pid);
    crc=16'hFFFF;
    for (int i=0;i<length;i++) begin
      if (payload.size()==0) begin
        log_condition($sformatf("xfer %0d TX payload FIFO availability at byte %0d", id, i),
          $sformatf("byte[%0d] available; requested_length=%0d", i, length),
          $sformatf("FIFO size=%0d", payload.size()), 1'b0);
        fail_compare($sformatf("xfer %0d: expected %0d TX bytes but FIFO ran empty at byte %0d; EXPECTED byte available, ACTUAL FIFO size=0",id,length,i));
        break;
      end
      b=payload.pop_front();
      p.bytes.push_back(b);
      crc=crc16_update(crc,b);
    end
    crc=crc^16'hFFFF;
    p.bytes.push_back(crc[7:0]);
    p.bytes.push_back(crc[15:8]);
    return p;
  endfunction

  function void start_transfer(bit [31:0] token);
    usbh_sb_transfer x;
    usbh_sb_expected_packet p;
    byte unsigned data_pid;
    byte unsigned expected_payload_log[$];
    x=new();
    x.id=next_transfer_id++;
    x.is_in=token[30]; x.ack_req=token[29]; x.datax=token[28];
    x.token_pid=token[23:16]; x.dev_addr=token[15:9]; x.ep_addr=token[8:5];
    x.tx_len=reg_xfer_data[15:0];
    log_condition("XFER_TOKEN PID is a valid USB token PID",
      "valid complemented PID and token PID", $sformatf("PID=0x%02h (%s), valid_pid=%0b, is_token=%0b", x.token_pid, pid_name(x.token_pid), valid_pid(x.token_pid), is_token(x.token_pid)),
      valid_pid(x.token_pid) && is_token(x.token_pid));
    if (!valid_pid(x.token_pid) || !is_token(x.token_pid))
      fail_axi($sformatf("XFER_TOKEN contains invalid/non-token PID: expected valid token PID, actual PID=0x%02h",x.token_pid));
    log_condition("XFER_TOKEN direction agrees with PID",
      x.is_in ? "IN=1 and PID=IN(0x69)" : "IN=0 and PID is not IN",
      $sformatf("IN=%0b PID=%s(0x%02h)", x.is_in, pid_name(x.token_pid), x.token_pid),
      !((x.is_in && x.token_pid!=PID_IN) || (!x.is_in && x.token_pid==PID_IN)));
    if ((x.is_in && x.token_pid!=PID_IN) ||
        (!x.is_in && x.token_pid==PID_IN))
      fail_axi($sformatf("XFER_TOKEN direction/PID mismatch: expected direction consistent with PID; actual IN=%0b PID=%s(0x%02h)",x.is_in,pid_name(x.token_pid),x.token_pid));
    if (!x.is_in && x.token_pid inside {PID_OUT,PID_SETUP}) begin
      for (int i=0;i<x.tx_len;i++) begin
        if (expected_tx_fifo.size()==0) begin
          log_condition($sformatf("xfer %0d TX payload byte[%0d] availability", x.id, i),
            $sformatf("TX payload byte available; TX_LEN=%0d", x.tx_len),
            $sformatf("expected_tx_fifo.size=%0d", expected_tx_fifo.size()), 1'b0);
          fail_compare($sformatf("xfer %0d: TX length=%0d but only %0d bytes available; EXPECTED byte[%0d] present, ACTUAL FIFO size=0",x.id,x.tx_len,i,i));
          break;
        end
        x.tx_payload.push_back(expected_tx_fifo.pop_front());
      end
    end
    transfers.push_back(x);
    p=expected_token(x.token_pid,x.dev_addr,x.ep_addr,x.id);
    expected_tx_packets.push_back(p);
    // Preserve a copy for the expected-transaction log because expected_data()
    // consumes x.tx_payload while constructing the expected packet bytes.
    expected_payload_log = x.tx_payload;
    if (!x.is_in && x.token_pid inside {PID_OUT,PID_SETUP}) begin
      data_pid=x.datax ? PID_DATA1 : PID_DATA0;
      p=expected_data(data_pid,x.tx_payload,x.tx_len,x.id);
      expected_tx_packets.push_back(p);
    end
    rx_snapshot_valid=0;
    irq_cause_allowed[1]=1; // DONE may occur after a transfer starts.
    irq_cause_allowed[2]=1; // ERR may occur after a transfer starts.
    xfer_start_count++;
    `uvm_info("USB_SB_EXPECTED_XFER",
      $sformatf("EXPECTED transfer from AXI programming: id=%0d TOKEN=0x%08h PID=%s direction=%s device=%0d endpoint=%0d DATAx=%0b TX_LEN=%0d expected_TX_payload=%s",
        x.id, token, pid_name(x.token_pid), x.is_in ? "IN" : "OUT/SETUP",
        x.dev_addr, x.ep_addr, x.datax, x.tx_len, bytes_to_string(expected_payload_log)), UVM_LOW)
  endfunction

  function void compare_tx_packet(ref byte unsigned actual[$]);
    usbh_sb_expected_packet exp;
    last_transaction_context = $sformatf("UTMI HOST_TX packet: bytes=%0d data=%s", actual.size(), bytes_to_string(actual));
    if (actual.size()==0) begin
      log_condition("Host TX packet is non-empty", "at least 1 byte", "0 bytes", 1'b0);
      fail_packet("Empty host TX packet; EXPECTED at least 1 byte, ACTUAL 0 bytes");
      return;
    end
    if (actual[0]==PID_SOF) begin
      `uvm_info("USB_SB_ACTUAL_TX",
        $sformatf("ACTUAL host TX SOF packet: pid=%s bytes=%0d data=%s",
          pid_name(actual[0]), actual.size(), bytes_to_string(actual)), UVM_LOW)
      check_sof(actual);
      return;
    end
    if (expected_tx_packets.size()==0) begin
      log_condition("Observed host TX packet has a queued expectation",
        "expected packet queue size > 0", $sformatf("expected packet queue size=%0d", expected_tx_packets.size()), 1'b0);
      `uvm_info("USB_SB_EXPECTED_TX", "EXPECTED host TX packet: NONE (no queued expectation)", UVM_LOW)
      `uvm_info("USB_SB_ACTUAL_TX",
        $sformatf("ACTUAL unexpected host TX packet: pid=%s bytes=%0d data=%s",
          pid_name(actual[0]), actual.size(), bytes_to_string(actual)), UVM_LOW)
      fail_compare($sformatf("Unexpected host TX packet %s (0x%02h)",pid_name(actual[0]),actual[0]));
      return;
    end

    exp=expected_tx_packets.pop_front();
    `uvm_info("USB_SB_EXPECTED_TX",
      $sformatf("EXPECTED host TX packet: xfer=%0d kind=%s pid=%s bytes=%0d data=%s",
        exp.xfer_id, exp.kind, (exp.bytes.size() ? pid_name(exp.bytes[0]) : "EMPTY"),
        exp.bytes.size(), bytes_to_string(exp.bytes)), UVM_LOW)
    `uvm_info("USB_SB_ACTUAL_TX",
      $sformatf("ACTUAL host TX packet: xfer=%0d expected_kind=%s pid=%s bytes=%0d data=%s",
        exp.xfer_id, exp.kind, pid_name(actual[0]), actual.size(), bytes_to_string(actual)), UVM_LOW)

    // Explicit transfer-length and payload-data checking for host DATA packets.
    // USB DATA packet layout: PID + payload + CRC16 (2 bytes).
    // TX_LEN is the programmed USB_XFER_DATA value for this transfer.
    // Keep this check independent of the generic expected-packet comparison
    // so a packet that exceeds TX_LEN always produces a clear scoreboard error.
    if ((exp.kind == "data") && is_data(actual[0])) begin
      int unsigned expected_tx_len;
      int unsigned actual_payload_len;
      bit tx_context_found;

      expected_tx_len = 0;
      actual_payload_len = (actual.size() >= 3) ? (actual.size() - 3) : 0;
      tx_context_found = 1'b0;

      foreach (transfers[i]) begin
        if (transfers[i].id == exp.xfer_id) begin
          expected_tx_len = transfers[i].tx_len;
          tx_context_found = 1'b1;
          break;
        end
      end

      if (!tx_context_found) begin
        log_condition(
          $sformatf("xfer %0d DATA packet has TX_LEN context", exp.xfer_id),
          "matching transfer context with programmed TX_LEN",
          "no matching transfer context",
          1'b0
        );
        fail_compare($sformatf(
          "Cannot check DATA payload length: transfer id=%0d not found",
          exp.xfer_id
        ));
        return;
      end

      `uvm_info("USB_SB_TX_LENGTH",
        $sformatf(
          "xfer=%0d TX_LEN=%0d actual_payload_bytes=%0d packet_bytes=%0d expected_packet=%s actual_packet=%s",
          exp.xfer_id, expected_tx_len, actual_payload_len, actual.size(),
          bytes_to_string(exp.bytes), bytes_to_string(actual)),
        UVM_LOW)

      log_condition(
        $sformatf("xfer %0d DATA payload length equals TX_LEN", exp.xfer_id),
        $sformatf("payload=%0d bytes", expected_tx_len),
        $sformatf("payload=%0d bytes (packet=%0d bytes)",
                  actual_payload_len, actual.size()),
        (actual.size() >= 3) &&
        (actual_payload_len == expected_tx_len)
      );

      if ((actual.size() < 3) ||
          (actual_payload_len != expected_tx_len)) begin
        fail_compare($sformatf(
          {"xfer %0d TX_LEN violation: programmed TX_LEN=%0d payload bytes, ",
           "actual DATA payload=%0d bytes; PID and CRC16 excluded. ",
           "EXPECTED_PACKET=%s ACTUAL_PACKET=%s"},
          exp.xfer_id, expected_tx_len, actual_payload_len,
          bytes_to_string(exp.bytes), bytes_to_string(actual)
        ));
        return;
      end

      // Compare payload bytes directly, excluding PID and CRC16.
      // Generic packet comparison below also checks PID, CRC, and all bytes.
      for (int payload_idx = 0;
           payload_idx < expected_tx_len;
           payload_idx++) begin
        if ((payload_idx + 1 >= exp.bytes.size() - 2) ||
            (payload_idx + 1 >= actual.size() - 2)) begin
          fail_compare($sformatf(
            "xfer %0d payload byte[%0d] missing: TX_LEN=%0d expected_packet_bytes=%0d actual_packet_bytes=%0d",
            exp.xfer_id, payload_idx, expected_tx_len,
            exp.bytes.size(), actual.size()
          ));
          return;
        end

        log_condition(
          $sformatf("xfer %0d TX payload byte[%0d]", exp.xfer_id, payload_idx),
          $sformatf("0x%02h", exp.bytes[payload_idx + 1]),
          $sformatf("0x%02h", actual[payload_idx + 1]),
          actual[payload_idx + 1] === exp.bytes[payload_idx + 1]
        );

        if (actual[payload_idx + 1] !== exp.bytes[payload_idx + 1]) begin
          fail_compare($sformatf(
            {"xfer %0d TX payload data mismatch at payload byte[%0d]: ",
             "EXPECTED=0x%02h ACTUAL=0x%02h TX_LEN=%0d ",
             "EXPECTED_PACKET=%s ACTUAL_PACKET=%s"},
            exp.xfer_id, payload_idx, exp.bytes[payload_idx + 1],
            actual[payload_idx + 1], expected_tx_len,
            bytes_to_string(exp.bytes), bytes_to_string(actual)
          ));
          return;
        end
      end
    end

    log_condition($sformatf("xfer %0d %s packet length", exp.xfer_id, exp.kind),
      $sformatf("%0d bytes", exp.bytes.size()),
      $sformatf("%0d bytes", actual.size()), actual.size()==exp.bytes.size());
    if (actual.size()!=exp.bytes.size()) begin
      fail_compare($sformatf("xfer %0d %s packet length mismatch: EXPECTED bytes=%0d data=%s; ACTUAL bytes=%0d data=%s",
        exp.xfer_id,exp.kind,exp.bytes.size(),bytes_to_string(exp.bytes),actual.size(),bytes_to_string(actual)));
      return;
    end
    for (int i=0;i<actual.size();i++) begin
      log_condition($sformatf("xfer %0d %s packet byte[%0d]", exp.xfer_id, exp.kind, i),
        $sformatf("0x%02h", exp.bytes[i]), $sformatf("0x%02h", actual[i]), actual[i]===exp.bytes[i]);
      if (actual[i]!==exp.bytes[i]) begin
        fail_compare($sformatf("xfer %0d %s packet mismatch at byte[%0d]: EXPECTED=0x%02h ACTUAL=0x%02h; EXPECTED_PACKET=%s ACTUAL_PACKET=%s",
          exp.xfer_id,exp.kind,i,exp.bytes[i],actual[i],bytes_to_string(exp.bytes),bytes_to_string(actual)));
        return;
      end
    end
    pass_compare($sformatf("xfer %0d host %s packet matched: EXPECTED=%s ACTUAL=%s",
      exp.xfer_id,exp.kind,bytes_to_string(exp.bytes),bytes_to_string(actual)));
    if (actual[0] inside {PID_OUT,PID_IN,PID_SETUP}) begin
      foreach (transfers[i]) begin
        if (transfers[i].id==exp.xfer_id) begin
          transfers[i].token_seen=1;
          break;
        end
      end
    end
    if (exp.kind=="data") begin
      foreach (transfers[i]) begin
        if (transfers[i].id==exp.xfer_id) begin transfers[i].data_seen=1; break; end
      end
    end
    if (actual[0]==PID_ACK) begin
      foreach (transfers[i]) begin
        if (transfers[i].id==exp.xfer_id) begin
          transfers[i].ack_seen=1; transfers[i].expect_ack=0;
          transfers.delete(i); xfer_done_count++; break;
        end
      end
    end
  endfunction

  function bit validate_packet(ref byte unsigned p[$], input string direction);
    byte unsigned pid;
    bit [10:0] token_bits;
    bit [4:0] crc5;
    bit [15:0] crc, got_crc;
    last_transaction_context = $sformatf("%s packet: bytes=%0d data=%s", direction, p.size(), bytes_to_string(p));
    if (p.size()==0) begin
      log_condition($sformatf("%s packet non-empty", direction), "at least 1 byte", "0 bytes", 1'b0);
      fail_packet({direction,": empty packet; EXPECTED at least 1 byte, ACTUAL 0 bytes"}); return 0;
    end
    pid=p[0];
    log_condition($sformatf("%s PID complement", direction), "PID[7:4] == ~PID[3:0]", $sformatf("PID=0x%02h complement_valid=%0b", pid, valid_pid(pid)), valid_pid(pid));
    if (!valid_pid(pid)) begin
      bad_pid_count++; fail_packet($sformatf("%s invalid PID complement: expected upper nibble complement, actual PID=0x%02h",direction,pid)); return 0;
    end
    if (is_handshake(pid) || pid==PID_PRE) begin
      log_condition($sformatf("%s %s handshake packet size", direction, pid_name(pid)), "1 byte (PID only)", $sformatf("%0d bytes", p.size()), p.size()==1);
      if (p.size()!=1) begin fail_packet($sformatf("%s %s should be PID-only: expected 1 byte, actual %0d bytes data=%s",direction,pid_name(pid),p.size(),bytes_to_string(p))); return 0; end
      return 1;
    end
    if (is_token(pid)) begin
      log_condition($sformatf("%s %s token packet size", direction, pid_name(pid)), "3 bytes", $sformatf("%0d bytes", p.size()), p.size()==3);
      if (p.size()!=3) begin fail_packet($sformatf("%s %s token size: expected 3 bytes, actual %0d bytes data=%s",direction,pid_name(pid),p.size(),bytes_to_string(p))); return 0; end
      token_bits={{p[2][2:0],p[1][7]},p[1][6:0]};
      crc5=usb_crc5(token_bits);
      log_condition($sformatf("%s %s CRC5", direction, pid_name(pid)),
        $sformatf("0x%02h", crc5), $sformatf("0x%02h", p[2][7:3]), p[2][7:3]===crc5);
      if (p[2][7:3]!==crc5) begin
        fail_packet($sformatf("%s %s CRC5 mismatch expected=0x%02h actual=0x%02h packet=%s",direction,pid_name(pid),crc5,p[2][7:3],bytes_to_string(p)));
        return 0;
      end
      return 1;
    end
    if (is_data(pid)) begin
      log_condition($sformatf("%s %s DATA packet minimum size", direction, pid_name(pid)),
        "at least 3 bytes (PID + CRC16)", $sformatf("%0d bytes", p.size()), p.size()>=3);
      if (p.size()<3) begin fail_packet($sformatf("%s DATA packet too short: expected >=3 bytes, actual %0d bytes data=%s",direction,p.size(),bytes_to_string(p))); return 0; end
      crc=16'hFFFF;
      for (int i=1;i<p.size()-2;i++) crc=crc16_update(crc,p[i]);
      crc=crc^16'hFFFF;
      got_crc={p[p.size()-1],p[p.size()-2]};
      log_condition($sformatf("%s %s CRC16", direction, pid_name(pid)),
        $sformatf("0x%04h", crc), $sformatf("0x%04h", got_crc), got_crc===crc);
      if (got_crc!==crc) begin
        fail_packet($sformatf("%s %s CRC16 mismatch expected=0x%04h actual=0x%04h packet=%s",direction,pid_name(pid),crc,got_crc,bytes_to_string(p)));
        return 0;
      end
      return 1;
    end
    log_condition($sformatf("%s PID is supported by scoreboard", direction),
      "handshake, token, DATA0 or DATA1 PID", $sformatf("unsupported PID=0x%02h", pid), 1'b0);
    fail_packet($sformatf("%s unsupported PID 0x%02h packet=%s",direction,pid,bytes_to_string(p)));
    return 0;
  endfunction

  function void check_sof(ref byte unsigned p[$]);
    bit [10:0] frame;
    if (p.size()!=3) return; // validate_packet reports packet size/CRC separately
    frame={p[2][2:0],p[1]};
    sof_count++;
    irq_cause_allowed[0]=1;
    if (check_sof_seq && sof_seen) begin
      log_condition("SOF frame number increments modulo 2048",
        $sformatf("%0d", (last_sof_frame+11'd1)&11'h7FF), $sformatf("%0d", frame),
        frame===((last_sof_frame+11'd1)&11'h7FF));
      if (frame!==((last_sof_frame+11'd1)&11'h7FF))
        fail_compare($sformatf("SOF frame sequence expected=%0d actual=%0d", (last_sof_frame+11'd1)&11'h7FF,frame));
    end
    if (ctrl_valid && phy_settle_count==0) begin
      log_condition("SOF packet is enabled when observed",
        "USB_CTRL.ENABLE_SOF=1", $sformatf("USB_CTRL.ENABLE_SOF=%0b", reg_ctrl[0]), reg_ctrl[0]===1'b1);
      if (!reg_ctrl[0]) fail_compare("SOF observed while USB_CTRL.ENABLE_SOF=0; EXPECTED enable=1, ACTUAL enable=0");
    end
    last_sof_frame=frame; sof_seen=1;
  endfunction

  function void check_device_packet(ref byte unsigned p[$], bit rxerr);
    byte unsigned pid;
    byte unsigned payload[$];
    bit crc_ok;
    int unsigned count;
    usbh_sb_transfer x;
    if (p.size()==0) return;
    pid=p[0];
    last_transaction_context = $sformatf("UTMI DEVICE_RX packet: pid=%s(0x%02h) bytes=%0d data=%s RXERROR=%0b", pid_name(pid), pid, p.size(), bytes_to_string(p), rxerr);
    `uvm_info("USB_SB_ACTUAL_DEVICE_RX",
      $sformatf("ACTUAL device-to-host UTMI packet: pid=%s (0x%02h) bytes=%0d data=%s RXERROR=%0b",
        pid_name(pid), pid, p.size(), bytes_to_string(p), rxerr), UVM_LOW)
    crc_ok=validate_packet(p,"DEVICE_RX") && !rxerr;
    if (transfers.size()==0) begin
      log_condition("Device response corresponds to an outstanding host transfer",
        "at least one outstanding transfer", "outstanding transfers=0", 1'b0);
      `uvm_info("USB_SB_EXPECTED_DEVICE_RX",
        "EXPECTED device response: NONE (no outstanding host transfer)", UVM_LOW)
      fail_compare($sformatf("Device response %s without outstanding transfer",pid_name(pid)));
    end else begin
      x=transfers[0];
      if (x.is_in) begin
        `uvm_info("USB_SB_EXPECTED_DEVICE_RX",
          $sformatf("EXPECTED response class for xfer=%0d IN token: DATA0/DATA1 with valid CRC, or configured NAK/STALL response; token PID=%s device=%0d endpoint=%0d",
            x.id, pid_name(x.token_pid), x.dev_addr, x.ep_addr), UVM_LOW)
      end else begin
        `uvm_info("USB_SB_EXPECTED_DEVICE_RX",
          $sformatf("EXPECTED response class for xfer=%0d %s token: ACK/NAK/STALL as allowed by endpoint/request state; device=%0d endpoint=%0d",
            x.id, pid_name(x.token_pid), x.dev_addr, x.ep_addr), UVM_LOW)
      end
      if (is_handshake(pid)) begin
        log_condition("Device response handshake is valid for transfer direction",
          x.is_in ? "IN transfer must not receive ACK as its response" : "OUT/SETUP may receive ACK/NAK/STALL",
          $sformatf("direction=%s response=%s", x.is_in ? "IN" : "OUT/SETUP", pid_name(pid)),
          !(x.is_in && pid==PID_ACK));
        if (x.is_in && pid==PID_ACK)
          fail_compare("Device ACK is not a valid response to an IN token; EXPECTED DATA/NAK/STALL, ACTUAL ACK");
        x.response_seen=1;
        if (pid==PID_NAK || pid==PID_STALL || (!x.is_in && pid==PID_ACK)) begin
          transfers.delete(0); xfer_done_count++;
        end
      end else if (is_data(pid)) begin
        log_condition("Device DATA response is valid for host transfer direction",
          "IN transfer when device sends DATA", $sformatf("direction=%s device_PID=%s", x.is_in ? "IN" : "OUT/SETUP", pid_name(pid)), x.is_in);
        if (!x.is_in) fail_compare("Device DATA received for OUT/SETUP transaction; EXPECTED handshake response, ACTUAL DATA packet");
        if (p.size()>=3) begin
          for (int i=1;i<p.size()-2;i++) payload.push_back(p[i]);
          count=payload.size();
          if (crc_ok || keep_bad_crc_payload)
            foreach(payload[i]) expected_rx_fifo.push_back(payload[i]);
          rx_snapshot_valid=1; rx_snapshot_pid=pid;
          rx_snapshot_count=count+(rx_count_includes_crc?2:0);
          rx_snapshot_crc_error=!crc_ok; rx_cycles_since_end=0;
          x.response_seen=1;
          if (crc_ok && x.ack_req) begin
            x.expect_ack=1;
            // ACK expected packet must be correlated to this transfer.
            begin
              usbh_sb_expected_packet ackp;
              ackp=new("ack",x.id); ackp.bytes.push_back(PID_ACK);
              expected_tx_packets.push_back(ackp);
            end
          end else begin
            transfers.delete(0); xfer_done_count++;
          end
        end
      end else begin
        log_condition($sformatf("Device PID is a valid response for transfer %0d", x.id),
          "DATA0/DATA1 or ACK/NAK/STALL according to transfer direction", $sformatf("PID=%s(0x%02h)", pid_name(pid), pid), 1'b0);
        fail_compare($sformatf("Unexpected device PID %s (0x%02h) for transfer %0d",pid_name(pid),pid,x.id));
      end
    end
    if (is_handshake(pid)) begin
      rx_snapshot_valid=1; rx_snapshot_pid=pid; rx_snapshot_count=0;
      rx_snapshot_crc_error=0; rx_cycles_since_end=0;
    end
  endfunction


function void check_phy(usbh_host_utmi_agent_seq_item t);
  bit mismatch;

  if (!check_phy_ctrl || !ctrl_valid) begin
    phy_mismatch_pending = 1'b0;
    phy_mismatch_grace_count = 0;
    return;
  end

  // An AXI CTRL write has updated the reference model.
  // Allow the PHY to settle before checking the outputs again.
  if (phy_settle_count > 0) begin
    phy_settle_count--;

    phy_mismatch_pending = 1'b0;
    phy_mismatch_grace_count = 0;
    phy_mismatch_reported = 1'b0;
    return;
  end

  // Compare actual UTMI PHY outputs against the CTRL model.
  mismatch =
      (t.utmi_dmpulldown_o !== reg_ctrl[7])   ||
      (t.utmi_dppulldown_o !== reg_ctrl[6])   ||
      (t.utmi_termselect_o  !== reg_ctrl[5])  ||
      (t.utmi_xcvrselect_o  !== reg_ctrl[4:3])||
      (t.utmi_op_mode_o     !== reg_ctrl[2:1]);

  if (mismatch) begin

    // First mismatching sample:
    // defer the error because the AXI monitor may not yet have
    // published the USB_CTRL write that changed the PHY outputs.
    if (!phy_mismatch_pending) begin
      phy_mismatch_pending = 1'b1;
      phy_mismatch_grace_count = phy_settle_cycles;

      `uvm_info("USB_SB_PHY_DEFER",
        $sformatf(
          {"Deferring PHY comparison for %0d UTMI samples. ",
           "CTRL model=0x%08h; actual DP_PD=%0b DM_PD=%0b ",
           "TERM=%0b XCVR=%02b OPMODE=%02b"},
          phy_settle_cycles,
          reg_ctrl,
          t.utmi_dppulldown_o,
          t.utmi_dmpulldown_o,
          t.utmi_termselect_o,
          t.utmi_xcvrselect_o,
          t.utmi_op_mode_o
        ),
        UVM_MEDIUM
      );

      return;
    end

    // Wait for the AXI monitor/model update to arrive.
    if (phy_mismatch_grace_count > 0) begin
      phy_mismatch_grace_count--;
      return;
    end

    // A persistent mismatch is a genuine scoreboard failure.
    phy_match_reported = 1'b0;

    if (!phy_mismatch_reported) begin
      log_condition(
        "UTMI PHY outputs match USB_CTRL reference model",
        $sformatf(
          "DM_PD=%0b DP_PD=%0b TERM=%0b XCVR=%02b OPMODE=%02b",
          reg_ctrl[7], reg_ctrl[6], reg_ctrl[5],
          reg_ctrl[4:3], reg_ctrl[2:1]
        ),
        $sformatf(
          "DM_PD=%0b DP_PD=%0b TERM=%0b XCVR=%02b OPMODE=%02b",
          t.utmi_dmpulldown_o, t.utmi_dppulldown_o,
          t.utmi_termselect_o, t.utmi_xcvrselect_o,
          t.utmi_op_mode_o
        ),
        1'b0
      );

      phy_error_count++;

      fail_compare(
        $sformatf(
          {"Persistent PHY/USB_CTRL mismatch after grace period. ",
           "CTRL=0x%08h DP_PD=%b DM_PD=%b TERM=%b ",
           "XCVR=%b OPMODE=%b"},
          reg_ctrl,
          t.utmi_dppulldown_o,
          t.utmi_dmpulldown_o,
          t.utmi_termselect_o,
          t.utmi_xcvrselect_o,
          t.utmi_op_mode_o
        )
      );

      phy_mismatch_reported = 1'b1;
    end
  end
  else begin

    // Outputs match the current model: cancel any pending mismatch.
    phy_mismatch_pending = 1'b0;
    phy_mismatch_grace_count = 0;
    phy_mismatch_reported = 1'b0;

    if (!phy_match_reported) begin
      log_condition(
        "UTMI PHY outputs match USB_CTRL reference model",
        $sformatf(
          "DM_PD=%0b DP_PD=%0b TERM=%0b XCVR=%02b OPMODE=%02b",
          reg_ctrl[7], reg_ctrl[6], reg_ctrl[5],
          reg_ctrl[4:3], reg_ctrl[2:1]
        ),
        $sformatf(
          "DM_PD=%0b DP_PD=%0b TERM=%0b XCVR=%02b OPMODE=%02b",
          t.utmi_dmpulldown_o, t.utmi_dppulldown_o,
          t.utmi_termselect_o, t.utmi_xcvrselect_o,
          t.utmi_op_mode_o
        ),
        1'b1
      );
    end

    phy_match_reported = 1'b1;
  end
endfunction


  function void check_rx_status(bit [31:0] v);
    if (!rx_snapshot_valid || v[31] || rx_cycles_since_end<rx_stat_settle_cycles) return;
    `uvm_info("USB_SB_EXPECTED_RX_STAT",
      $sformatf("EXPECTED USB_RX_STAT fields: RESP_PID=0x%02h COUNT=%0d CRC_ERR=%0b RESP_TIMEOUT=0",
        rx_snapshot_pid, rx_snapshot_count, rx_snapshot_crc_error), UVM_LOW)
    `uvm_info("USB_SB_ACTUAL_RX_STAT",
      $sformatf("ACTUAL USB_RX_STAT=0x%08h RESP_PID=0x%02h COUNT=%0d CRC_ERR=%0b RESP_TIMEOUT=%0b IDLE=%0b START_PEND=%0b",
        v, v[23:16], v[15:0], v[30], v[29], v[28], v[31]), UVM_LOW)
    log_condition("USB_RX_STAT RESP_PID", $sformatf("0x%02h", rx_snapshot_pid), $sformatf("0x%02h", v[23:16]), v[23:16]===rx_snapshot_pid);
    if (v[23:16]!==rx_snapshot_pid)
      fail_compare($sformatf("RX_STAT PID expected=0x%02h actual=0x%02h",rx_snapshot_pid,v[23:16]));
    log_condition("USB_RX_STAT COUNT", $sformatf("%0d", rx_snapshot_count), $sformatf("%0d", v[15:0]), v[15:0]===rx_snapshot_count[15:0]);
    if (v[15:0]!==rx_snapshot_count[15:0])
      fail_compare($sformatf("RX_STAT COUNT expected=%0d actual=%0d",rx_snapshot_count,v[15:0]));
    log_condition("USB_RX_STAT CRC_ERR", $sformatf("%0b", rx_snapshot_crc_error), $sformatf("%0b", v[30]), v[30]===rx_snapshot_crc_error);
    if (v[30]!==rx_snapshot_crc_error)
      fail_compare($sformatf("RX_STAT CRC_ERR expected=%0b actual=%0b",rx_snapshot_crc_error,v[30]));
    log_condition("USB_RX_STAT RESP_TIMEOUT", "0 (device packet was observed)", $sformatf("%0b", v[29]), v[29]===1'b0);
    if (v[29]) fail_compare("RX_STAT RESP_TIMEOUT expected=0 after observing a device packet, actual=1");
  endfunction

  function void check_rd_data(bit [31:0] v);
    byte unsigned expected_byte;
    if (expected_rx_fifo.size()==0) begin
      log_condition("USB_RD_DATA read has an expected RX byte queued",
        "at least one expected RX byte", $sformatf("expected_rx_fifo.size=%0d actual_RDATA=0x%08h", expected_rx_fifo.size(), v), 1'b0);
      `uvm_info("USB_SB_EXPECTED_RD_DATA", "EXPECTED USB_RD_DATA byte: NONE (no queued expected RX payload)", UVM_LOW)
      `uvm_info("USB_SB_ACTUAL_RD_DATA",
        $sformatf("ACTUAL USB_RD_DATA=0x%08h byte[7:0]=0x%02h", v, v[7:0]), UVM_LOW)
      `uvm_warning("USB_SB_RDDATA","RD_DATA read with no expected RX byte")
      last_check_failed=0; // Warning-only condition; do not attach it to a later error.
      return;
    end
    expected_byte=expected_rx_fifo.pop_front();
    `uvm_info("USB_SB_EXPECTED_RD_DATA",
      $sformatf("EXPECTED USB_RD_DATA byte[7:0]=0x%02h", expected_byte), UVM_LOW)
    `uvm_info("USB_SB_ACTUAL_RD_DATA",
      $sformatf("ACTUAL USB_RD_DATA=0x%08h byte[7:0]=0x%02h", v, v[7:0]), UVM_LOW)
    log_condition("USB_RD_DATA payload byte", $sformatf("0x%02h", expected_byte), $sformatf("0x%02h", v[7:0]), v[7:0]===expected_byte);
    if (v[7:0]!==expected_byte)
      fail_compare($sformatf("USB_RD_DATA mismatch: EXPECTED byte=0x%02h ACTUAL=0x%02h FULL_RDATA=0x%08h",
        expected_byte,v[7:0],v));
    else pass_compare($sformatf("USB_RD_DATA matched: EXPECTED=0x%02h ACTUAL=0x%02h",
      expected_byte,v[7:0]));
  endfunction


function void check_irq_status(bit [31:0] v);
  bit [2:0] spurious;
  bit [2:0] ack_still_set;
  bit expected_device_detect;
  bit device_detect_known;

  // IRQ_STS[3] = device_det_q & !reg_irq_mask[3].
  // Bits [2:0] are event/status causes.
  spurious = v[2:0] & ~irq_cause_allowed[2:0];

  log_condition(
    "USB_IRQ_STS cause bits [2:0] are explained by observed events",
    $sformatf("unexpected_bits=0 (allowed=0x%0h)",
              irq_cause_allowed[2:0]),
    $sformatf("unexpected_bits=0x%0h IRQ_STS=0x%08h",
              spurious, v),
    !(|spurious)
  );

  if (|spurious)
    fail_compare($sformatf(
      "IRQ_STS has unexplained cause bits 0x%0h (status=0x%08h allowed=0x%0h)",
      spurious, v, irq_cause_allowed[2:0]
    ));

  // Device detect follows the UTMI line state and mask.
  // SE0 = 2'b00; a non-SE0 state indicates device presence.
  // Mask bit 3 = 1 suppresses the visible status.
  device_detect_known = line_state_valid && irq_mask_valid;

  expected_device_detect =
      line_state_valid &&
      (previous_line_state != 2'b00) &&
      !reg_irq_mask[3];

  if (device_detect_known) begin
    log_condition(
      "USB_IRQ_STS DEVICE_DETECT follows live line state and mask",
      $sformatf(
        "expected IRQ_STS[3]=%0b (LINESTATE=%02b MASK[3]=%0b)",
        expected_device_detect, previous_line_state, reg_irq_mask[3]
      ),
      $sformatf(
        "actual IRQ_STS[3]=%0b IRQ_STS=0x%08h",
        v[3], v
      ),
      v[3] === expected_device_detect
    );

    if (v[3] !== expected_device_detect)
      fail_compare($sformatf(
        "DEVICE_DETECT mismatch: expected=%0b actual=%0b LINESTATE=%02b MASK[3]=%0b IRQ_STS=0x%08h",
        expected_device_detect, v[3], previous_line_state,
        reg_irq_mask[3], v
      ));
  end
  else begin
    // Do not report a mismatch until both model inputs are known.
    log_condition(
      "USB_IRQ_STS DEVICE_DETECT model inputs available",
      "line-state sample and IRQ mask have been observed",
      $sformatf(
        "line_state_valid=%0b irq_mask_valid=%0b actual_bit=%0b",
        line_state_valid, irq_mask_valid, v[3]
      ),
      1'b1
    );
  end

  // Reserved bits [31:4] should be zero.
  log_condition(
    "USB_IRQ_STS reserved bits [31:4] are zero",
    "0x0000000",
    $sformatf("0x%07h", v[31:4]),
    v[31:4] === 0
  );

  if (v[31:4] !== 0) begin
    `uvm_warning("USB_SB_IRQ",
      $sformatf("IRQ_STS reserved bits set: 0x%08h", v))
    last_check_failed = 0;
  end

  // W1C tracking applies only to IRQ cause bits [2:0].
  // IRQ_STS[3] is live DEVICE_DETECT status, not a sticky W1C cause.
  //
  // Check which acknowledged causes are STILL set in this sample.
  ack_still_set = v[2:0] & irq_ack_pending[2:0];

  if (|ack_still_set) begin
    log_condition(
      "USB_IRQ_ACK W1C clears acknowledged IRQ bits [2:0]",
      $sformatf(
        "IRQ_STS bits in pending ACK mask 0x%0h are zero",
        irq_ack_pending[2:0]
      ),
      $sformatf(
        "IRQ_STS=0x%08h retains ACKed bits 0x%0h",
        v, ack_still_set
      ),
      1'b0
    );

    fail_compare($sformatf(
      "IRQ_ACK W1C failure: ACK mask=0x%0h IRQ_STS=0x%08h retains bits=0x%0h",
      irq_ack_pending[2:0], v, ack_still_set
    ));
  end

  // Clear ACK-pending bits individually when the sampled status bit is LOW.
  // Keep pending bits that remain HIGH so a failed W1C is not silently lost.
  //
  // IMPORTANT:
  // Do NOT clear irq_cause_allowed here. A new transfer may have re-enabled
  // DONE/ERR after the ACK write. Clearing the allowance here caused the
  // false "unexplained DONE" error seen during IRQ polling.
  irq_ack_pending[2:0] =
      irq_ack_pending[2:0] & v[2:0];

endfunction



function void update_write_model(
  bit [31:0] a,
  usbh_host_axi4_agent_seq_item t
);
  bit [31:0] mask;
  bit [31:0] implemented_mask;
  bit [31:0] effective_mask;
  bit [31:0] merged;

  mask = byte_mask(t.strb);
  implemented_mask = implemented_write_mask(a);
  effective_mask = mask & implemented_mask;

  case (a)

    USB_CTRL: begin
      // Model implemented USB_CTRL bits only.
      // Reserved bits must not modify the reference model.
      merged = (reg_ctrl & ~effective_mask) |
               (t.data & effective_mask);

      if (reg_ctrl[0] !== merged[0])
        sof_seen = 0;

      reg_ctrl = merged & implemented_mask;

      if (effective_mask != 0) begin
        ctrl_valid = 1'b1;
        phy_settle_count = phy_settle_cycles;
      end

      // TX_FLUSH side effect.
      if (t.strb[1] && t.data[8])
        expected_tx_fifo.delete();
    end

    USB_IRQ_ACK: begin
      // Bits [2:0] are sticky event/status causes acknowledged using W1C.
      // Bit [3] is live DEVICE_DETECT status and is not tracked as W1C.
      //
      // Record the ACK for verification on the next IRQ_STS sample.
      // Immediately retire the previous event allowance so that an old
      // event cannot remain allowed after software acknowledges it.
      //
      // If a new transfer starts after this write, start_transfer() can
      // re-enable the corresponding DONE/ERR allowance independently.
      if (t.strb[0]) begin
        irq_ack_pending[2:0] =
            irq_ack_pending[2:0] | t.data[2:0];

irq_cause_allowed[2:0] =
            irq_cause_allowed[2:0] & ~t.data[2:0];
      end
    end

    USB_IRQ_MASK: begin 
      // Implemented interrupt mask bits are [3:0].
      // Bit 3 = 1 means masked; bit 3 = 0 means unmasked.
      if (t.strb[0]) begin
        reg_irq_mask = {28'h0, t.data[3:0]};
        irq_mask_valid = 1'b1;
      end
    end

    USB_XFER_DATA: begin
      // TX length occupies bits [15:0].
      // Ignore reserved/high-half bits.
      reg_xfer_data =
        ((reg_xfer_data & ~effective_mask) |
         (t.data & effective_mask)) & 32'h0000_FFFF;

      if (|(effective_mask & 32'h0000_FFFF))
        xfer_data_valid = 1'b1;
    end

    USB_XFER_TOKEN: begin
      // Reserved fields are excluded from the reference model.
      merged = (reg_token & ~effective_mask) |
               (t.data & effective_mask);

      reg_token = merged & implemented_mask;
      token_valid = (effective_mask != 0);

      if (t.data[31] && t.strb[3])
        start_transfer(merged);

      // START self-clears in the reference model.
      reg_token[31] = 0;
    end

    USB_WR_DATA: begin
      // Only the low byte is TX payload.
      if (t.strb[0])
        expected_tx_fifo.push_back(t.data[7:0]);
    end

    default: begin
      // No reference-model update for other registers.
    end

  endcase
endfunction


  function void write_axi4_agent(usbh_host_axi4_agent_seq_item t);
    bit [31:0] a;
    bit [31:0] lane_mask;
    bit [31:0] ignored_write_bits;
    bit ro_write_probe;
    
    bit [1:0] exp_resp;
    bit  address_supported;
    
    if (t==null) begin
      last_transaction_context="AXI monitor supplied a null transaction item";
      log_condition("AXI analysis item is non-null", "valid AXI transaction item", "null item", 1'b0);
      fail_axi("Null AXI item: expected valid AXI transaction object, actual null");
      return;
    end
    a=normalize_addr(t.addr);
    last_transaction_context = $sformatf("AXI %s raw_addr=0x%08h normalized_addr=0x%08h WDATA=0x%08h RDATA=0x%08h STRB=%b ID=%0h RESP_ID=%0h RESP=%0b LEN=%0d SIZE=%0d BURST=%b WLAST=%0b RLAST=%0b",
      t.write ? "WRITE" : "READ", t.addr, a, t.data, t.rdata, t.strb,
      t.id, t.resp_id, t.resp, t.len, t.size, t.burst, t.wlast, t.rlast);

    // Transaction-level trace: print every observed AXI transaction, not only mismatches.
    `uvm_info("USB_SB_AXI_ACTUAL",
      $sformatf("ACTUAL AXI %s: raw_addr=0x%08h normalized_addr=0x%08h WDATA=0x%08h RDATA=0x%08h STRB=%b ID=%0h RESP_ID=%0h RESP=%0b LEN=%0d SIZE=%0d BURST=%b WLAST=%0b RLAST=%0b",
        t.write ? "WRITE" : "READ", t.addr, a, t.data, t.rdata, t.strb, t.id, t.resp_id, t.resp, t.len, t.size, t.burst, t.wlast, t.rlast), UVM_LOW)
    `uvm_info("USB_SB_AXI_EXPECTED",
      $sformatf("AXI reference expectations: address_%s_supported=%0b (known register + direction), aligned=%0b, LEN=0_expected=%0b, SIZE=2_expected=%0b, response_OKAY_expected=1, expected_response_ID=%0h%s",
        t.write ? "write" : "read", valid_axi_address(t.write,t.addr) || (t.write && (a[1:0] == 2'b00) && is_read_only_register(a)),
        (a[1:0] == 2'b00), (t.len == 0), (t.size == 3'd2), t.id,
        (t.write && (a[1:0] == 2'b00) && is_read_only_register(a)) ? "; RO write probe must not alter the register" : ""), UVM_LOW)
    
    address_supported = valid_axi_address(t.write, a) || (t.write && is_read_only_register(a));
    exp_resp = expected_axi_response(t.write, a);
    
    ro_write_probe = t.write && (a[1:0] == 2'b00) && is_read_only_register(a);
    log_condition("AXI address and access direction are supported",
      (t.write && (a[1:0] == 2'b00) && is_read_only_register(a)) ? "known aligned RO write probe is allowed" : "supported register and legal access direction",
      $sformatf("addr=0x%08h write=%0b supported=%0b aligned=%0b", t.addr, t.write, valid_axi_address(t.write,t.addr), a[1:0]==2'b00),
      valid_axi_address(t.write,t.addr) || (t.write && (a[1:0] == 2'b00) && is_read_only_register(a)));
    if (!valid_axi_address(t.write,t.addr)) begin
      if (ro_write_probe) begin
        // This is a known, aligned RO register—not an unsupported AXI address.
        // The RTL is expected to ignore the write; verify USB_STATUS on the
        // next read when a previous sample is available as a baseline.
        ro_write_probe_count++;
        if (a==USB_STATUS && status_sample_valid) begin
          status_before_ro_write=last_status_low;
          status_ro_write_pending=1;
        end else if (a==USB_STATUS) begin
          `uvm_warning("USB_SB_RO_WRITE", "USB_STATUS write probe has no prior read baseline; read-only side-effect comparison skipped")
        end
        `uvm_info("USB_SB_RO_WRITE",
          $sformatf("Observed write probe to read-only register 0x%08h; AXI response and ignored-write behavior will be checked", t.addr), UVM_MEDIUM)
      end else begin
        `uvm_info("AXI_NEGATIVE_ACCESS",$sformatf("Unsupported/unaligned AXI %s access address 0x%08h",t.write?"WRITE":"READ",t.addr),UVM_MEDIUM);
      end
    end
/*
    log_condition("AXI LEN is single beat", "LEN=0", $sformatf("LEN=%0d", t.len), t.len==0);
    if (t.len!=0) fail_axi($sformatf("AXI LEN expected=0 actual=%0d at 0x%08h",t.len,t.addr));
    log_condition("AXI SIZE is 32-bit", "SIZE=2", $sformatf("SIZE=%0d", t.size), t.size==3'd2);
    if (t.size!=3'd2) fail_axi($sformatf("AXI SIZE expected=2 (32-bit), actual=%0d at 0x%08h",t.size,t.addr));
    log_condition("AXI burst type is supported", "BURST=FIXED(00) or INCR(01)", $sformatf("BURST=%b", t.burst), t.burst inside {2'b00,2'b01});
    if (!(t.burst inside {2'b00,2'b01})) fail_axi($sformatf("Unsupported AXI burst: expected 00 or 01, actual %b",t.burst));
    log_condition("AXI response is OKAY", "RESP=00", $sformatf("RESP=%b", t.resp), t.resp==2'b00);
    if (t.resp!=2'b00) fail_axi($sformatf("AXI response expected OKAY(00) actual=%b at 0x%08h",t.resp,t.addr)); 
    */
    log_condition("AXI response ID matches request ID", $sformatf("RESP_ID=%0h",t.id), $sformatf("RESP_ID=%0h",t.resp_id), t.resp_id===t.id);
    if (t.resp_id!==t.id) fail_axi($sformatf("AXI ID mismatch expected response ID=%0h actual response ID=%0h request ID=%0h",t.id,t.resp_id,t.id));

    if (t.write) begin
      axi_write_count++;
      log_condition("AXI write WLAST", "WLAST=1", $sformatf("WLAST=%0b", t.wlast), t.wlast===1'b1);
      if (!t.wlast) fail_axi($sformatf("AXI write WLAST expected=1 actual=%0b at 0x%08h",t.wlast,t.addr));
      // Reserved WDATA bits are not an AXI protocol failure. Report them as
      // ignored, and never copy them into the register reference model.
      lane_mask = byte_mask(t.strb);
      ignored_write_bits = t.data & lane_mask & ~implemented_write_mask(a);
      log_condition("Reserved/unsupported WDATA bits are ignored by the reference model",
        "reserved bits do not alter modeled register state",
        $sformatf("ignored_bits=0x%08h implemented_mask=0x%08h WDATA=0x%08h STRB=%b", ignored_write_bits, implemented_write_mask(a), t.data, t.strb), 1'b1);
      if (ignored_write_bits != 32'h0)
        `uvm_info("USB_SB_RESERVED_WRITE_IGNORED",
          $sformatf("Ignored reserved/unsupported write-data bits: addr=0x%08h WDATA=0x%08h STRB=%b ignored_bits=0x%08h implemented_mask=0x%08h",
            t.addr, t.data, t.strb, ignored_write_bits, implemented_write_mask(a)), UVM_LOW)

      if (t.resp==2'b00) update_write_model(a,t);
    end else begin
      axi_read_count++;
      log_condition("AXI read RLAST", "RLAST=1", $sformatf("RLAST=%0b", t.rlast), t.rlast===1'b1);
      if (!t.rlast) fail_axi($sformatf("AXI read RLAST expected=1 actual=%0b at 0x%08h",t.rlast,t.addr));
      if (t.resp==2'b00) begin
        case(a)
          USB_STATUS: check_usb_status(t.rdata);
          USB_IRQ_STS: if (check_irq_sts) check_irq_status(t.rdata);
          USB_RX_STAT: if (check_rx_stat) check_rx_status(t.rdata);
          USB_RD_DATA: if (check_rd_data_enable) check_rd_data(t.rdata);
          default: begin end
        endcase
        // Readback checks only for modeled registers whose semantics are known.
        if (a==USB_CTRL && ctrl_valid) begin
          `uvm_info("USB_SB_REG_EXPECTED_ACTUAL",
            $sformatf("USB_CTRL readback: EXPECTED=0x%08h ACTUAL=0x%08h", reg_ctrl, t.rdata), UVM_LOW)
          log_condition("USB_CTRL readback", $sformatf("0x%08h", reg_ctrl), $sformatf("0x%08h", t.rdata), t.rdata===reg_ctrl);
          if (t.rdata!==reg_ctrl)
            fail_compare($sformatf("USB_CTRL readback mismatch: EXPECTED=0x%08h ACTUAL=0x%08h",reg_ctrl,t.rdata));
        end
        if (a==USB_IRQ_MASK && irq_mask_valid) begin
          `uvm_info("USB_SB_REG_EXPECTED_ACTUAL",
            $sformatf("USB_IRQ_MASK readback: EXPECTED=0x%08h ACTUAL=0x%08h", reg_irq_mask, t.rdata), UVM_LOW)
          log_condition("USB_IRQ_MASK readback", $sformatf("0x%08h", reg_irq_mask), $sformatf("0x%08h", t.rdata), t.rdata===reg_irq_mask);
          if (t.rdata!==reg_irq_mask)
            fail_compare($sformatf("USB_IRQ_MASK readback mismatch: EXPECTED=0x%08h ACTUAL=0x%08h",reg_irq_mask,t.rdata));
        end
        if (a==USB_XFER_DATA && xfer_data_valid) begin
          `uvm_info("USB_SB_REG_EXPECTED_ACTUAL",
            $sformatf("USB_XFER_DATA readback: EXPECTED=0x%08h ACTUAL=0x%08h", reg_xfer_data, t.rdata), UVM_LOW)
          log_condition("USB_XFER_DATA readback", $sformatf("0x%08h", reg_xfer_data), $sformatf("0x%08h", t.rdata), t.rdata===reg_xfer_data);
          if (t.rdata!==reg_xfer_data)
            fail_compare($sformatf("USB_XFER_DATA readback mismatch: EXPECTED=0x%08h ACTUAL=0x%08h",reg_xfer_data,t.rdata));
        end
      end
    end
    `uvm_info("USB_SB_AXI_RESULT",
      $sformatf("AXI transaction result: op=%s addr=0x%08h actual_resp=%0b expected_resp=OKAY actual_data=0x%08h",
        t.write ? "WRITE" : "READ", t.addr, t.resp, t.write ? t.data : t.rdata), UVM_LOW)
  endfunction

  function void write_utmi_agent(usbh_host_utmi_agent_seq_item t);
    bit rst_active;
    bit crc_ok;
    if (t==null) begin
      last_transaction_context="UTMI monitor supplied a null transaction item";
      log_condition("UTMI analysis item is non-null", "valid UTMI sample item", "null item", 1'b0);
      fail_packet("Null UTMI item: expected valid UTMI sample object, actual null");
      return;
    end
    // This merged version assumes active-low reset, matching the second source.
    last_transaction_context = $sformatf("UTMI sample rst_i=%0b TXVALID=%0b TXREADY=%0b DATA_OUT=0x%02h RXACTIVE=%0b RXVALID=%0b DATA_IN=0x%02h RXERROR=%0b LINESTATE=%02b PHY(DM_PD=%0b DP_PD=%0b TERM=%0b XCVR=%02b OPMODE=%02b)",
      t.rst_i, t.utmi_txvalid_o, t.utmi_txready_i, t.utmi_data_out_o,
      t.utmi_rxactive_i, t.utmi_rxvalid_i, t.utmi_data_in_i, t.utmi_rxerror_i,
      t.utmi_linestate_i, t.utmi_dmpulldown_o, t.utmi_dppulldown_o,
      t.utmi_termselect_o, t.utmi_xcvrselect_o, t.utmi_op_mode_o);
    rst_active=(t.rst_i===1'b0);
    if (rst_active) begin
      clear_reference_model();
      return;
    end
    if (t.rst_i!==1'b1) return;

    if (rx_cycles_since_end<32'hFFFF) rx_cycles_since_end++;
    if (line_state_valid && t.utmi_linestate_i!==previous_line_state)
      irq_cause_allowed[3]=1;
    previous_line_state=t.utmi_linestate_i;
    line_state_valid=!$isunknown(t.utmi_linestate_i);

    check_phy(t);

    // Host -> device. Count only TXVALID && TXREADY accepted bytes.
    if (t.utmi_txvalid_o===1'b1) begin
      tx_active=1;
      if (t.utmi_txready_i===1'b1) begin
        tx_packet.push_back(t.utmi_data_out_o);
        tx_byte_count++;
      end
    end else if (tx_active) begin
      if (tx_packet.size()!=0) begin
        crc_ok=validate_packet(tx_packet,"HOST_TX");
        compare_tx_packet(tx_packet);
        tx_packet_count++;
      end
      tx_packet.delete(); tx_active=0;
    end

    // Device -> host. Capture only RXVALID bytes inside RXACTIVE.
    if (t.utmi_rxactive_i===1'b1) begin
      rx_active=1;
      if (t.utmi_rxvalid_i===1'b1) begin
        rx_packet.push_back(t.utmi_data_in_i);
        rx_byte_count++;
      end
      if (t.utmi_rxerror_i===1'b1) begin
        rx_error_count++; rx_err_in_packet=1;
      end
    end else if (rx_active) begin
      if (rx_packet.size()!=0) begin
        check_device_packet(rx_packet,rx_err_in_packet);
        rx_packet_count++;
      end
      rx_packet.delete(); rx_active=0; rx_err_in_packet=0;
    end
  endfunction

  function void check_phase(uvm_phase phase);
    super.check_phase(phase);
    if (tx_active || tx_packet.size()!=0) begin
      last_transaction_context=$sformatf("CHECK_PHASE incomplete HOST_TX packet: active=%0b bytes=%0d data=%s", tx_active, tx_packet.size(), bytes_to_string(tx_packet));
      log_condition("Host TX packet is complete at end of simulation", "TXVALID-deasserted packet boundary observed", $sformatf("tx_active=%0b packet_bytes=%0d", tx_active, tx_packet.size()), 1'b0);
      fail_packet($sformatf("Simulation ended with incomplete host TX packet: expected completed packet boundary, actual active=%0b bytes=%0d data=%s",tx_active,tx_packet.size(),bytes_to_string(tx_packet)));
    end
    if (rx_active || rx_packet.size()!=0) begin
      last_transaction_context=$sformatf("CHECK_PHASE incomplete DEVICE_RX packet: active=%0b bytes=%0d data=%s", rx_active, rx_packet.size(), bytes_to_string(rx_packet));
      log_condition("Device RX packet is complete at end of simulation", "RXACTIVE-deasserted packet boundary observed", $sformatf("rx_active=%0b packet_bytes=%0d", rx_active, rx_packet.size()), 1'b0);
      fail_packet($sformatf("Simulation ended with incomplete device RX packet: expected completed packet boundary, actual active=%0b bytes=%0d data=%s",rx_active,rx_packet.size(),bytes_to_string(rx_packet)));
    end
    if (expected_tx_packets.size()!=0) begin
      last_transaction_context=$sformatf("CHECK_PHASE pending expected host packets=%0d observed_host_packets=%0d", expected_tx_packets.size(), tx_packet_count);
      log_condition("All expected host packets were observed", "pending expected packets=0", $sformatf("pending expected packets=%0d observed=%0d", expected_tx_packets.size(), tx_packet_count), 1'b0);
      fail_compare($sformatf("Expected host packets not observed: expected pending=0, actual pending=%0d observed=%0d",expected_tx_packets.size(),tx_packet_count));
    end
    foreach(transfers[i]) begin
      last_transaction_context=$sformatf("CHECK_PHASE transfer id=%0d PID=%s device=%0d endpoint=%0d token_seen=%0b data_seen=%0b response_seen=%0b expect_ack=%0b ack_seen=%0b", transfers[i].id, pid_name(transfers[i].token_pid), transfers[i].dev_addr, transfers[i].ep_addr, transfers[i].token_seen, transfers[i].data_seen, transfers[i].response_seen, transfers[i].expect_ack, transfers[i].ack_seen);
      if (!transfers[i].token_seen) begin
        log_condition($sformatf("xfer %0d token observed", transfers[i].id), "token_seen=1", "token_seen=0", 1'b0);
        fail_compare($sformatf("xfer %0d START token not observed: expected token_seen=1, actual=0",transfers[i].id));
      end else if (transfers[i].expect_ack && !transfers[i].ack_seen) begin
        log_condition($sformatf("xfer %0d expected host ACK observed", transfers[i].id), "ack_seen=1", "ack_seen=0", 1'b0);
        fail_compare($sformatf("xfer %0d expected host ACK not observed: expected ack_seen=1, actual=0",transfers[i].id));
      end else if (!transfers[i].response_seen) begin
        log_condition($sformatf("xfer %0d device response observed", transfers[i].id), "response_seen=1", "response_seen=0", 1'b0);
        `uvm_warning("USB_SB_XFER",$sformatf("xfer %0d has no observed device response",transfers[i].id))
        last_check_failed=0; // Kept as a warning in the existing scoreboard policy.
      end
    end
    if (expected_tx_fifo.size()!=0) begin
      last_transaction_context=$sformatf("CHECK_PHASE expected TX FIFO has %0d unconsumed bytes: %s", expected_tx_fifo.size(), bytes_to_string(expected_tx_fifo));
      log_condition("All expected TX payload bytes were consumed", "expected_tx_fifo.size=0", $sformatf("expected_tx_fifo.size=%0d", expected_tx_fifo.size()), 1'b0);
      `uvm_warning("USB_SB_FIFO",$sformatf("%0d TX payload byte(s) not consumed by a START",expected_tx_fifo.size()))
      last_check_failed=0;
    end
    if (expected_rx_fifo.size()!=0) begin
      last_transaction_context=$sformatf("CHECK_PHASE expected RX FIFO has %0d unread bytes: %s", expected_rx_fifo.size(), bytes_to_string(expected_rx_fifo));
      log_condition("All expected RX payload bytes were read through RD_DATA", "expected_rx_fifo.size=0", $sformatf("expected_rx_fifo.size=%0d", expected_rx_fifo.size()), 1'b0);
      `uvm_warning("USB_SB_FIFO",$sformatf("%0d RX payload byte(s) not read through RD_DATA",expected_rx_fifo.size()))
      last_check_failed=0;
    end
    if (status_ro_write_pending) begin
      last_transaction_context="CHECK_PHASE USB_STATUS read-only write probe had no follow-up read";
      log_condition("USB_STATUS RO write probe verified by a subsequent read", "status_ro_write_pending=0", "status_ro_write_pending=1", 1'b0);
      fail_compare("USB_STATUS was written but no subsequent read was observed to verify that the RO write was ignored; expected follow-up read, actual none");
    end
  endfunction

  function void report_phase(uvm_phase phase);
    bit failed;
    super.report_phase(phase);
    failed=(axi_error_count!=0)||(packet_error_count!=0)||(comparison_error_count!=0)||(bad_pid_count!=0);
    `uvm_info("USB_SB_SUMMARY",$sformatf(
      "AXI writes=%0d reads=%0d AXI errors=%0d RO write probes=%0d; TX packets=%0d RX packets=%0d TX bytes=%0d RX bytes=%0d RX errors=%0d bad PIDs=%0d",
      axi_write_count,axi_read_count,axi_error_count,ro_write_probe_count,tx_packet_count,rx_packet_count,tx_byte_count,rx_byte_count,rx_error_count,bad_pid_count),UVM_NONE)
    `uvm_info("USB_SB_SUMMARY",$sformatf(
      "Packet errors=%0d comparison errors=%0d matches=%0d transfers started=%0d completed=%0d SOF=%0d PHY errors=%0d pending expected packets=%0d",
      packet_error_count,comparison_error_count,cmp_pass_count,xfer_start_count,xfer_done_count,sof_count,phy_error_count,expected_tx_packets.size()),UVM_NONE)
    if (failed)
      `uvm_error("USB_SB_RESULT",
        $sformatf("SCOREBOARD RESULT: FAIL\nLAST_TRANSACTION_CONTEXT={%s}\nLAST_CHECK={%s}\nEXPECTED={%s}\nACTUAL={%s}",
          last_transaction_context, last_check_name, last_expected_context, last_actual_context))
    else `uvm_info("USB_SB_RESULT","SCOREBOARD RESULT: PASS",UVM_NONE)
  endfunction
endclass : usbh_host_scoreboard


