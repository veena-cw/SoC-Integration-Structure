//----------------------------------------------------------------------
// File Name   : sw_reset_all_cmd_dat_vseq.sv
// Test Case   : tc_sw_reset_all_cmd_dat
//
// Feature     : Software Reset For All (bit 0), CMD line (bit 1), DAT line (bit 2)
//               of the Software Reset register, offset 0x2F
//               = byte 3 of the dword at 0x2C (REG_CLK_CTRL), WSTRB = 4'b1000.
//
// Spec behaviour checked (SD Host Controller Simplified Spec 3.00, Software
// Reset register; add the clause number from your copy to bug reports):
//
//   R1  Reset CMD (bit 1) clears Present State "Command Inhibit (CMD)" [bit 0]
//       and leaves "Command Inhibit (DAT)" [bit 1] untouched.
//   R2  Reset DAT (bit 2) clears Present State "Command Inhibit (DAT)" [1],
//       "DAT Line Active" [2], "Write Transfer Active" [8],
//       "Read Transfer Active" [9] and leaves "Command Inhibit (CMD)" [0] alone.
//   R3  Reset All (bit 0) clears both inhibit bits and returns RW registers to
//       their default (0): Block Size/Count (0x04) is used as the witness.
//   R4  Every reset bit is self-clearing (reads back 0 once the reset is done).
//
// How the two inhibit conditions are created (Present State is read-only, so
// nothing is forced, both come from the real hardware path, through the BFM):
//   DAT inhibit : CMD17 with data-present.  The BFM is not in Transfer state,
//                 answers with R1 and never sends data, so the DAT circuit
//                 stays busy waiting for the read data.
//   CMD inhibit : CMD13 while the BFM is silent (inj_no_resp = 1), so the CMD
//                 circuit waits for a response that never comes.
//   CMD13 has no data/busy phase, so it may legally be issued while DAT is busy.
//   Both can therefore be set at the same time, which is what makes the
//   "does not touch the other circuit" checks meaningful.
//
// Each condition is confirmed through Present State.  If one cannot be
// established the sequence reports PRECONDITION once and skips only the checks
// that depend on it (so a known RTL bug does not cascade into false failures).
//
// Minimum read/write set: no baseline reads, no positive controls.
//----------------------------------------------------------------------
`ifndef SW_RESET_ALL_CMD_DAT_VSEQ_SV
`define SW_RESET_ALL_CMD_DAT_VSEQ_SV

class sw_reset_all_cmd_dat_vseq extends uvm_sequence #(axi_lite_seq_item);
  `uvm_object_utils(sw_reset_all_cmd_dat_vseq)

  // Register offsets (same map as the lockout sequence)
  localparam bit [31:0] REG_BLK_SIZE_CNT  = 32'h0000_0004;
  localparam bit [31:0] REG_ARG1          = 32'h0000_0008;
  localparam bit [31:0] REG_CMD_XFER      = 32'h0000_000C;  // [15:0] transfer mode, [31:16] command
  localparam bit [31:0] REG_PRESENT_STATE = 32'h0000_0024;  // RO
  localparam bit [31:0] REG_CLK_CTRL      = 32'h0000_002C;  // [15:0] clock ctrl, [23:16] timeout, [31:24] SW reset

  // Software Reset bits (byte 0x2F)
  localparam bit [2:0] RST_ALL = 3'b001;
  localparam bit [2:0] RST_CMD = 3'b010;
  localparam bit [2:0] RST_DAT = 3'b100;

  // Present State masks
  localparam bit [31:0] PS_CMD_INH  = 32'h0000_0001;
  localparam bit [31:0] PS_DAT_INH  = 32'h0000_0002;
  localparam bit [31:0] PS_DAT_SET  = 32'h0000_0306;  // DAT inhibit, DAT active, write active, read active
  localparam bit [31:0] PS_ALL_BUSY = 32'h0000_0307;  // everything above plus CMD inhibit

  // Stimulus values
  localparam bit [15:0] CLK_CTRL_VAL = 16'h0007;      // same value the lockout sequence uses
  localparam bit [31:0] BLK_A        = 32'h0001_0200; // non-default witness for the Reset All check
  localparam bit [15:0] TM_RD        = 16'h0010;      // transfer mode: read
  localparam bit [31:0] ARG_A        = 32'h1234_5678;
  // Command register word (bits 31:16):  index<<8 | data-present(5) | idx-chk(4) | crc-chk(3) | resp48(1)
  localparam bit [31:0] CMD17_RD     = 32'h113A_0000; // CMD17 with data present, R1
  localparam bit [31:0] CMD13_HANG   = 32'h0D1A_0000; // CMD13, R1, no data

  // Set by the test before start()
  virtual sd_emmc_if vif;               // needs use_bfm and inj_no_resp (see sd_emmc_if.sv)

  // Knobs
  bit          use_byte_strobe = 1;     // 1: write only byte 0x2F (WSTRB 4'b1000)
                                        // 0: full-word write that keeps the clock control value
                                        //    (use it if the RTL ignores WSTRB on 0x2C)
  int unsigned cmd_done_ns     = 5000;  // CMD17 command + R1 response time
  int unsigned hang_wait_ns    = 200;   // let the CMD13 launch propagate
  int unsigned poll_tries      = 10;    // self-clear polling
  int unsigned poll_delay_ns   = 200;

  int unsigned n_errors = 0;

  function new(string name = "sw_reset_all_cmd_dat_vseq");
    super.new(name);
  endfunction

  //--------------------------------------------------------------------
  // AXI-Lite helpers
  //--------------------------------------------------------------------
  task write_reg_strobe(bit [31:0] addr, bit [31:0] data, bit [3:0] strb);
    axi_lite_seq_item req = axi_lite_seq_item::type_id::create("req");
    start_item(req);
    req.cmd        = axi_lite_seq_item::AXI_WRITE;
    req.addr       = addr;
    req.write_data = data;
    req.wstrb      = strb;
    finish_item(req);
  endtask

  task read_reg(bit [31:0] addr, output bit [31:0] data);
    axi_lite_seq_item req = axi_lite_seq_item::type_id::create("req");
    start_item(req);
    req.cmd  = axi_lite_seq_item::AXI_READ;
    req.addr = addr;
    finish_item(req);
    data = req.read_data;
  endtask

  function void hard_fail(string msg);
    n_errors++;
    `uvm_error("TC_SWRST", msg)
  endfunction

  function void pass_info(string msg);
    `uvm_info("TC_SWRST", {"PASS: ", msg}, UVM_LOW)
  endfunction

  //--------------------------------------------------------------------
  // Software Reset register (0x2F)
  //--------------------------------------------------------------------
  task sw_reset(bit [2:0] bits);
    if (use_byte_strobe)
      write_reg_strobe(REG_CLK_CTRL, {5'd0, bits, 24'd0}, 4'b1000);
    else
      write_reg_strobe(REG_CLK_CTRL, {5'd0, bits, 8'h00, CLK_CTRL_VAL}, 4'hF);
  endtask

  // R4: poll until the written reset bit(s) read back 0
  task check_self_clear(string tag, bit [2:0] bits);
    bit [31:0] v;
    bit        done = 1'b0;
    int unsigned i = 0;
    while (!done && i < poll_tries) begin
      #(poll_delay_ns * 1ns);
      read_reg(REG_CLK_CTRL, v);
      if ((v[26:24] & bits) == 3'b000) done = 1'b1;
      i++;
    end
    if (done) pass_info($sformatf("%s: reset bit(s) 0x%0h self-cleared after %0d read(s)", tag, bits, i));
    else      hard_fail($sformatf("FAIL: %s: reset bit(s) 0x%0h still set after %0d reads (reg 0x2C = 0x%08h); Software Reset bits must self-clear",
                                  tag, bits, poll_tries, v));
  endtask

  //--------------------------------------------------------------------
  // Create the inhibit conditions
  //--------------------------------------------------------------------
  // DAT inhibit: read command with data present, card answers R1 and sends no data
  task hang_dat(output bit ok);
    bit [31:0] ps;
    vif.inj_no_resp = 1'b0;
    write_reg_strobe(REG_BLK_SIZE_CNT, BLK_A,         4'hF);
    write_reg_strobe(REG_CMD_XFER,     {16'h0, TM_RD}, 4'b0011);
    write_reg_strobe(REG_ARG1,         ARG_A,         4'hF);
    write_reg_strobe(REG_CMD_XFER,     CMD17_RD,      4'hC);   // launch (WSTRB 4'b1100)
    #(cmd_done_ns * 1ns);
    read_reg(REG_PRESENT_STATE, ps);
    ok = |(ps & PS_DAT_INH);
    if (!ok)
      hard_fail($sformatf("PRECONDITION: Command Inhibit (DAT) not set after CMD17 with data pending (Present State=0x%08h); DAT checks are skipped", ps));
  endtask

  // CMD inhibit: command that never gets a response (silent card)
  task hang_cmd(output bit ok);
    bit [31:0] ps;
    vif.inj_no_resp = 1'b1;
    write_reg_strobe(REG_CMD_XFER, CMD13_HANG, 4'hC);          // launch (WSTRB 4'b1100)
    #(hang_wait_ns * 1ns);
    read_reg(REG_PRESENT_STATE, ps);
    ok = |(ps & PS_CMD_INH);
    if (!ok)
      hard_fail($sformatf("PRECONDITION: Command Inhibit (CMD) not set while CMD13 is waiting for a response (Present State=0x%08h); CMD checks are skipped", ps));
  endtask

  //--------------------------------------------------------------------
  // Test body
  //--------------------------------------------------------------------
  virtual task body();
    bit [31:0] ps, v;
    bit        dat_ok, cmd_ok;

    if (vif == null) `uvm_fatal("TC_SWRST", "vif not set: BFM control (use_bfm / inj_no_resp) unavailable")

    `uvm_info("TC_SWRST", "=== Starting tc_sw_reset_all_cmd_dat sequence ===", UVM_LOW)

    // Setup (not a check): SD clock on, BFM answering
    write_reg_strobe(REG_CLK_CTRL, {16'h0, CLK_CTRL_VAL}, 4'hF);
    vif.use_bfm = 1'b1;
    #1us;

    //==================================================================
    // Scenario 1: CMD-line reset, then DAT-line reset, both inhibits set
    //==================================================================
    hang_dat(dat_ok);
    hang_cmd(cmd_ok);

    // ---- Reset CMD (R1)
    `uvm_info("TC_SWRST", "Reset CMD with CMD inhibit and DAT inhibit both set", UVM_LOW)
    sw_reset(RST_CMD);
    check_self_clear("S1_RST_CMD", RST_CMD);
    read_reg(REG_PRESENT_STATE, ps);
    if (cmd_ok) begin
      if (ps[0]) hard_fail($sformatf("FAIL: Reset CMD did not clear Command Inhibit (CMD), Present State=0x%08h", ps));
      else       pass_info($sformatf("Reset CMD cleared Command Inhibit (CMD), Present State=0x%08h", ps));
    end
    if (dat_ok) begin
      if (!ps[1]) hard_fail($sformatf("FAIL: Reset CMD also cleared Command Inhibit (DAT) (must only reset the command circuit), Present State=0x%08h", ps));
      else        pass_info("Reset CMD left Command Inhibit (DAT) set");
    end

    // ---- Reset DAT (R2): CMD inhibit set again, DAT inhibit still set
    hang_cmd(cmd_ok);
    `uvm_info("TC_SWRST", "Reset DAT with CMD inhibit and DAT inhibit both set", UVM_LOW)
    sw_reset(RST_DAT);
    check_self_clear("S1_RST_DAT", RST_DAT);
    read_reg(REG_PRESENT_STATE, ps);
    if (dat_ok) begin
      if ((ps & PS_DAT_SET) != 32'h0)
        hard_fail($sformatf("FAIL: Reset DAT did not clear DAT inhibit/active/transfer-active bits (mask 0x%08h), Present State=0x%08h", PS_DAT_SET, ps));
      else
        pass_info($sformatf("Reset DAT cleared DAT inhibit/active/transfer-active, Present State=0x%08h", ps));
    end
    if (cmd_ok) begin
      if (!ps[0]) hard_fail($sformatf("FAIL: Reset DAT also cleared Command Inhibit (CMD) (must only reset the data circuit), Present State=0x%08h", ps));
      else        pass_info("Reset DAT left Command Inhibit (CMD) set");
    end

    // Cleanup (not a check): release the hung CMD13
    sw_reset(RST_CMD);
    #200ns;

    //==================================================================
    // Scenario 2: Reset All with both inhibits set  (last: it also clears Clock Control)
    //==================================================================
    hang_dat(dat_ok);
    hang_cmd(cmd_ok);

    `uvm_info("TC_SWRST", "Reset All with CMD inhibit and DAT inhibit both set", UVM_LOW)
    sw_reset(RST_ALL);
    check_self_clear("S2_RST_ALL", RST_ALL);
    read_reg(REG_PRESENT_STATE, ps);
    if (dat_ok || cmd_ok) begin
      if ((ps & PS_ALL_BUSY) != 32'h0)
        hard_fail($sformatf("FAIL: Reset All left inhibit/active bits set (mask 0x%08h), Present State=0x%08h", PS_ALL_BUSY, ps));
      else
        pass_info($sformatf("Reset All cleared both inhibit bits, Present State=0x%08h", ps));
    end

    // R3: RW register back to default (spec: RW bits cleared to 0)
    read_reg(REG_BLK_SIZE_CNT, v);
    if (v !== 32'h0000_0000)
      hard_fail($sformatf("FAIL: Reset All did not restore Block Size/Count default: read=0x%08h exp=0x00000000 (written 0x%08h before reset)", v, BLK_A));
    else
      pass_info("Reset All restored Block Size/Count to its default");

    vif.inj_no_resp = 1'b0;
    `uvm_info("TC_SWRST", $sformatf("=== Completed tc_sw_reset_all_cmd_dat sequence, hard failures = %0d ===", n_errors), UVM_LOW)
  endtask

endclass : sw_reset_all_cmd_dat_vseq

`endif // SW_RESET_ALL_CMD_DAT_VSEQ_SV

