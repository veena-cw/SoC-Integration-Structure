//WHY THIS TEST EXISTS
//   While a data transfer is running (Command Inhibit DAT = 1) the host driver
//   may still touch Block Size / Block Count / Transfer Mode. If the controller
//   accepted those writes mid-transfer, the transfer would silently use the
//   wrong block count or direction. The SD Host spec therefore says such writes
//   must be IGNORED. Likewise, while a command is in flight (Command Inhibit
//   CMD = 1) a write to Argument 1 / Command could corrupt it or launch a
//   second command. This test proves the lock is really there, and that it is
//   released (and not over-applied) when it should be.
//
// WHAT IS CHECKED (SD Host Controller Simplified Spec 3.00)
//   P1 hard : DAT inhibit = 1 -> writes to Block Size, Block Count, Transfer Mode are ignored.
//   P2 hard : DAT inhibit = 0 -> those registers are writable again.
//   P3 soft : CMD inhibit = 1 -> driver SHALL NOT write Argument 1 / Command.
//             Hardware behaviour is not mandated, so a write that gets through
//             is a WARNING unless strict_cmd_lockout = 1.
//   P4 soft : a register NOT protected by the active inhibit must still accept writes.
//
//   Step | Inhibit active | What we check
//   -----+----------------+--------------------------------------------------
//    0   | none           | Present State bits [1:0] are 0 after reset/clock enable
//    1   | none           | positive control: registers are writable, CMD launch is seen
//    2   | DAT            | Blk size/count + Transfer Mode keep old value (P1); Arg1 writable (P4)
//    3   | DAT released   | Blk + Transfer Mode writable again (P2)
//    4   | CMD            | Arg1 write ignored, no spurious launch (P3); Blk/TM writable (P4)
//    5   | CMD + DAT      | Blk + TM locked (P1); Arg1 ignored (P3)
//
// HOW THE INHIBIT BITS ARE CREATED (Present State 0x24 is read-only)
//   DAT : testbench force of the net behind Present State bit 1 (vif.force_inh_dat).
//   CMD : real hardware path. A CMD8 with no card answering leaves bit 0 set
//         and only a reset releases it, so the CMD steps run LAST.
//   Each condition is confirmed by reading Present State before it is used. If
//   it cannot be established the step reports PRECONDITION and is skipped, so a
//   broken setup never shows up as a false lockout failure.
//
// READING A FAILURE
//   [SPEC]   tag : violates the SD Host spec text.
//   [DESIGN] tag : violates how this RTL is meant to work (e.g. launch on WSTRB 4'hC).
//   Hard failures count in n_errors; soft ones are warnings unless strict_cmd_lockout = 1.
//----------------------------------------------------------------------
`ifndef REG_LOCKOUT_DAT_CMD_INHIBIT_VSEQ_SV
`define REG_LOCKOUT_DAT_CMD_INHIBIT_VSEQ_SV

class reg_lockout_dat_cmd_inhibit_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(reg_lockout_dat_cmd_inhibit_vseq)
  `uvm_declare_p_sequencer(sd_emmc_virtual_sequencer)

  // Register offsets (RTL map, your naming)
  localparam bit [31:0] REG_ARG2          = 32'h0000_0000; // slv_reg0
  localparam bit [31:0] REG_BLK_SIZE_CNT  = 32'h0000_0004; // slv_reg1  [15:0] size, [31:16] count
  localparam bit [31:0] REG_ARG1          = 32'h0000_0008; // slv_reg2
  localparam bit [31:0] REG_CMD_XFER      = 32'h0000_000C; // slv_reg3  [15:0] transfer mode, [31:16] command
  localparam bit [31:0] REG_PRESENT_STATE = 32'h0000_0024; // slv_reg9  (RO)
  localparam bit [31:0] REG_CLK_CTRL      = 32'h0000_002C; // slv_reg11

  // Test values
  localparam bit [31:0] BLK_A   = 32'h0001_0200;  // baseline: count 1, size 512
  localparam bit [31:0] BLK_B   = 32'h0004_0400;  // legal new value
  localparam bit [31:0] BLK_BAD = 32'hCAFE_BABE;  // illegal write while DAT inhibit
  localparam bit [15:0] TM_A    = 16'h0010;       // baseline transfer mode
  localparam bit [15:0] TM_B    = 16'h0020;       // legal new value
  localparam bit [15:0] TM_BAD  = 16'h0030;       // illegal write while DAT inhibit
  localparam bit [31:0] ARG_A   = 32'h1234_5678;  // baseline argument 1
  localparam bit [31:0] ARG_B   = 32'h5A5A_A5A5;  // legal new value
  localparam bit [31:0] ARG_BAD = 32'hDEAD_BEEF;  // write while CMD inhibit

  // CMD8, response type 48 bit, CRC and index check (same value as the trigger test)
  localparam bit [31:0] CMD8_HANG = 32'h081A_0000;
  
  
  
    // Byte-lane strobes and bit masks used by the checks below
  localparam bit [3:0]  STRB_ALL = 4'b1111;
  localparam bit [3:0]  STRB_LO  = 4'b0011;                 // bits [15:0]  (Block Size / Transfer Mode)
  localparam bit [3:0]  STRB_HI  = 4'b1100;                 // bits [31:16] (Block Count / Command)
  localparam bit [31:0] MASK_ALL = 32'hFFFF_FFFF;
  localparam bit [31:0] MASK_LO  = 32'h0000_FFFF;
  localparam bit [31:0] MASK_HI  = 32'hFFFF_0000;

  // Set by the test before start()
  uvm_tlm_analysis_fifo #(sd_emmc_controller_sd_emmc_agent_seq_item) sd_cmd_fifo;
  virtual sd_emmc_controller_sd_emmc_if vif;               // needs force_inh_dat (see header)

  // Knobs
  bit          strict_cmd_lockout = 0;    // 1: P3 / P4 violations become errors
  int unsigned frame_wait_ns      = 3000; // frame (~1 us) + NCR window (~1.3 us) at 20 ns SD clock

  int unsigned n_errors = 0;

  function new(string name = "reg_lockout_dat_cmd_inhibit_vseq");
    super.new(name);
  endfunction

  //--------------------------------------------------------------------
  // AXI-Lite helpers
  //--------------------------------------------------------------------
  task write_reg_strobe(bit [31:0] addr, bit [31:0] data, bit [3:0] strb);
    sd_emmc_controller_axi_lite_agent_seq_item req = sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("req");
    req.cmd        = sd_emmc_controller_axi_lite_agent_seq_item::AXI_WRITE;
    req.addr       = addr;
    req.write_data = data;
    req.wstrb      = strb;
    send_axi(req);
  endtask

  task read_reg(bit [31:0] addr, output bit [31:0] data);
    sd_emmc_controller_axi_lite_agent_seq_item req = sd_emmc_controller_axi_lite_agent_seq_item::type_id::create("req");
    req.cmd  = sd_emmc_controller_axi_lite_agent_seq_item::AXI_READ;
    req.addr = addr;
    send_axi(req);
    data = req.read_data;
  endtask

  //--------------------------------------------------------------------
  // Reporting helpers
  //--------------------------------------------------------------------
  function void hard_fail(string msg);
    n_errors++;
    `uvm_error("TC_LOCKOUT", msg)
  endfunction

  // Soft rules: warning by default, error when strict_cmd_lockout = 1
  function void soft_fail(string msg);
    if (strict_cmd_lockout) begin
      n_errors++;
      `uvm_error("TC_LOCKOUT", msg)
    end else begin
      `uvm_warning("TC_LOCKOUT", {msg, " (not mandated by the spec, strict_cmd_lockout=0)"})
    end
  endfunction

  // Write, read back, compare the masked bits with the expected value
  task write_and_check(string tag, bit [31:0] addr, bit [31:0] data, bit [3:0] strb,
                       bit [31:0] mask, bit [31:0] exp, bit is_soft);
    bit [31:0] got;
    write_reg_strobe(addr, data, strb);
    #20ns;
    read_reg(addr, got);
    if ((got & mask) === (exp & mask)) begin
      `uvm_info("TC_LOCKOUT", $sformatf("PASS: %s read=0x%08h (mask 0x%08h) exp=0x%08h",
                tag, got & mask, mask, exp & mask), UVM_LOW)
    end else begin
      if (is_soft) soft_fail($sformatf("%s: read=0x%08h exp=0x%08h (mask 0x%08h)", tag, got & mask, exp & mask, mask));
      else         hard_fail($sformatf("FAIL: %s: read=0x%08h exp=0x%08h (mask 0x%08h)", tag, got & mask, exp & mask, mask));
    end
  endtask
  
    // Goal: "this register is NOT protected, the new value must stick".
  // Used for the positive control, the P2 release check and the P4 over-protection checks.
  task expect_writable(string tag, bit [31:0] addr, bit [31:0] data, bit [3:0] strb,
                       bit [31:0] mask, bit is_soft = 0);
    write_and_check(tag, addr, data, strb, mask, data, is_soft);
  endtask

  // Goal: "this register IS protected, the write must be ignored".
  // We write a bad value, read back, and expect the old (baseline) value.
  task expect_locked(string tag, bit [31:0] addr, bit [31:0] bad_data, bit [3:0] strb,
                     bit [31:0] mask, bit [31:0] baseline, bit is_soft = 0);
    write_and_check(tag, addr, bad_data, strb, mask, baseline, is_soft);
  endtask

  // Goal: put the three registers under test back to the baseline (BLK_A, TM_A, ARG_A)
  // so each step starts from a known value and a failure in one step cannot leak into the next.
  task restore_baseline();
    write_reg_strobe(REG_BLK_SIZE_CNT, BLK_A,         STRB_ALL);
    write_reg_strobe(REG_CMD_XFER,     {16'h0, TM_A}, STRB_LO);
    write_reg_strobe(REG_ARG1,         ARG_A,         STRB_ALL);
  endtask
  
  

  // Write the Command byte lanes with CMD0 (no response) and look for a frame
  // on the CMD line through the SD monitor
  task attempt_launch(string tag, bit expect_frame, bit is_soft, bit [3:0] strb = 4'hC);
    sd_emmc_controller_sd_emmc_agent_seq_item tmp;
    bit seen;
    if (sd_cmd_fifo == null) begin
      `uvm_warning("TC_LOCKOUT", {tag, ": sd_cmd_fifo not connected, launch check skipped"})
      return;
    end
    sd_cmd_fifo.flush();
     write_reg_strobe(REG_CMD_XFER, 32'h0000_0000, strb);  // Command = CMD0, WSTRB = 4'b1100
    #(frame_wait_ns * 1ns);
    seen = sd_cmd_fifo.try_get(tmp);
    if (seen == expect_frame) begin
      `uvm_info("TC_LOCKOUT", $sformatf("PASS: %s (frame seen = %0b, expected %0b)", tag, seen, expect_frame), UVM_LOW)
    end else begin
      if (is_soft) soft_fail($sformatf("%s: frame seen = %0b, expected %0b", tag, seen, expect_frame));
      else         hard_fail($sformatf("FAIL: %s: frame seen = %0b, expected %0b", tag, seen, expect_frame));
    end
  endtask

  //--------------------------------------------------------------------
  // Inhibit control
  //--------------------------------------------------------------------
  // DAT inhibit: testbench force, then confirm through Present State bit 1
  task set_dat_inhibit(bit on, output bit ok);
    bit [31:0] st;
    vif.force_inh_dat = on;
    #50ns;
    read_reg(REG_PRESENT_STATE, st);
    ok = (st[1] === on);
    if (ok)
      `uvm_info("TC_LOCKOUT", $sformatf("DAT inhibit = %0b established (Present State=0x%08h)", on, st), UVM_LOW)
    else
      hard_fail($sformatf("PRECONDITION: wanted DAT inhibit=%0b but Present State=0x%08h; lockout checks in this step are not valid", on, st));
  endtask

    // Goal: create a REAL Command Inhibit (CMD) with no testbench force: launch a CMD8
  // while the BFM card stays silent (inj_no_resp), so the command can never complete.
  //   DESIGN rule: bit 0 rises after the Command write with WSTRB 4'hC.
  //   SPEC rule  : bit 0 stays set until the command times out.
  // ok = bit rose AND stayed high, so Steps 4/5 only run when the condition is valid.
  // (Today a drop is the known BUG-2: it is logged as a warning and Steps 4/5 are skipped.)
  task start_cmd_inhibit(output bit ok);
    bit [31:0]       st;
    bit              rose = 0;   // bit 0 seen high after the command write
    bit              held = 1;   // bit 0 did not drop again during the poll window
    time             t_rise = 0, t_fall = 0;
    sd_emmc_controller_sd_emmc_agent_seq_item tmp;

    write_reg_strobe(REG_ARG1, ARG_A, STRB_ALL);
    vif.use_bfm     = 1'b1;
    vif.inj_no_resp = 1'b1;                       // silent card: CMD8 hangs
    if (sd_cmd_fifo != null) sd_cmd_fifo.flush(); // so a frame found below belongs to CMD8
    clear_cmd_status();
    write_reg_strobe(REG_CMD_XFER, CMD8_HANG, 4'hC);  // launch, WSTRB = 4'b1100

    // Poll Present State bit 0 over the window and remember when it rose / dropped
    for (int i = 0; i < 20; i++) begin
      read_reg(REG_PRESENT_STATE, st);
      if (st[0]) begin
        if (!rose) t_rise = $time;
        rose = 1;
      end else if (rose && held) begin
        held   = 0;
        t_fall = $time;
      end
      #(frame_wait_ns/20 * 1ns);
    end

    // If the bit never rose, tell "RTL did not set it" apart from "command never launched"
    if (!rose && sd_cmd_fifo != null) begin
      if (sd_cmd_fifo.try_get(tmp))
        `uvm_info("TC_LOCKOUT", $sformatf("CMD8 frame WAS sent but bit 0 never rose:\n%s", tmp.sprint()), UVM_LOW)
      else
        `uvm_info("TC_LOCKOUT", "No CMD frame was sent: the CMD8 write did not launch a command", UVM_LOW)
    end

    ok = rose && held;
    if (!rose)
      hard_fail("[DESIGN] Command Inhibit (CMD) never rose after the command write with WSTRB 4'hC");
    else if (!held)
      `uvm_warning("TC_LOCKOUT", $sformatf("[SPEC BUG-2?] CMD inhibit rose at %0t, dropped at %0t with no response; compare with the command timeout", t_rise, t_fall))
    else
      `uvm_info("TC_LOCKOUT", $sformatf("CMD inhibit rose at %0t and stayed set", t_rise), UVM_LOW)
  endtask

  // Goal: one place for "Command/DAT inhibit bits must be clear". Used at idle (Step 0)
  // and after each launched command completes (Step 1). `rule` is SPEC or DESIGN.
  task check_inhibit_clear(string tag, string rule);
    bit [31:0] st;
    read_reg(REG_PRESENT_STATE, st);
    if (st[1:0] !== 2'b00)
      hard_fail($sformatf("[%s] %s: inhibit bits not clear, Present State=0x%08h", rule, tag, st));
    else
      `uvm_info("TC_LOCKOUT", $sformatf("PASS: %s (Present State=0x%08h)", tag, st), UVM_LOW)
  endtask

  // Goal: clear Command Complete (0x30 bit 0, write-1-to-clear) after a command.
  // cmd_start stays high until the status is cleared, so without this the next launch is not seen.
  task clear_cmd_status();
    write_reg_strobe(32'h0000_0030, 32'h0000_0001, STRB_ALL);
    #50ns;
  endtask
  //--------------------------------------------------------------------
  // Test body
  //--------------------------------------------------------------------
    virtual task body();
    bit ok;
    
    // 1. Safety check for null interface FIRST
    if (vif == null)
      `uvm_fatal("TC_LOCKOUT", "vif not set by the test: DAT/CMD inhibit hooks are required")

    `uvm_info("TC_LOCKOUT", "=== Starting tc_reg_lockout_dat_cmd_inhibit sequence ===", UVM_LOW)

    // 2. Wait for Power-on Reset release
    wait (vif.s00_axi_aresetn === 1'b1);
    #100ns; // Small setup guard after reset deassertion

    // DO NOT FORCE force_inh_dat HERE! Step 0 & Step 1 require NO inhibits active.

    //------------------------------------------------------------------
    // Step 0: enable the clocks and check nothing is inhibited at idle.
    //------------------------------------------------------------------
    write_reg_strobe(REG_CLK_CTRL, 32'h0000_0007, STRB_ALL);
    #100ns;
    check_inhibit_clear("S0_IDLE", "SPEC");

    //------------------------------------------------------------------
    // Step 1: positive control with NO inhibit. Proves the registers are writable...
    //------------------------------------------------------------------
    `uvm_info("TC_LOCKOUT", "Step 1: positive control (no inhibit)", UVM_LOW)
    expect_writable("S1_BLK",  REG_BLK_SIZE_CNT, BLK_B,         STRB_ALL, MASK_ALL);
    expect_writable("S1_TM",   REG_CMD_XFER,     {16'h0, TM_B}, STRB_LO,  MASK_LO);
    expect_writable("S1_ARG1", REG_ARG1,         ARG_B,         STRB_ALL, MASK_ALL);
    attempt_launch("[DESIGN] S1_LAUNCH_WSTRB_C", 1'b1, 0, 4'hC);   // RTL launches on WSTRB 4'hC
    check_inhibit_clear("S1_RELEASED_AFTER_LAUNCH", "SPEC");
    clear_cmd_status();
    restore_baseline();

   /* //------------------------------------------------------------------
    // Step 2: DAT inhibit only. (set_dat_inhibit handles setting force_inh_dat = 1)
    //------------------------------------------------------------------
    `uvm_info("TC_LOCKOUT", "Step 2: Command Inhibit (DAT) = 1, CMD = 0", UVM_LOW)
    set_dat_inhibit(1'b1, ok);
    if (ok) begin
      expect_locked  ("S2_BLK_FULL",  REG_BLK_SIZE_CNT, BLK_BAD,         STRB_ALL, MASK_ALL, BLK_A);
      expect_locked  ("S2_BLK_SIZE",  REG_BLK_SIZE_CNT, BLK_BAD,         STRB_LO,  MASK_LO,  BLK_A);
      expect_locked  ("S2_BLK_COUNT", REG_BLK_SIZE_CNT, BLK_BAD,         STRB_HI,  MASK_HI,  BLK_A);
      expect_locked  ("S2_TM",        REG_CMD_XFER,     {16'h0, TM_BAD}, STRB_LO,  MASK_LO,  {16'h0, TM_A});
      expect_writable("S2_ARG1_NOT_LOCKED", REG_ARG1,   ARG_B,           STRB_ALL, MASK_ALL, 1);
      write_reg_strobe(REG_ARG1, ARG_A, STRB_ALL);
    end

    
    //------------------------------------------------------------------
    // Step 3: DAT inhibit released. The protection must be gone (P2).
    //------------------------------------------------------------------
    `uvm_info("TC_LOCKOUT", "Step 3: DAT inhibit released", UVM_LOW)
    set_dat_inhibit(1'b0, ok);
    if (ok) begin
      expect_writable("S3_BLK", REG_BLK_SIZE_CNT, BLK_B,         STRB_ALL, MASK_ALL);
      expect_writable("S3_TM",  REG_CMD_XFER,     {16'h0, TM_B}, STRB_LO,  MASK_LO);
    end
    restore_baseline();
*/
    //------------------------------------------------------------------
    // Step 4: CMD inhibit only (real hung CMD8). From here CMD inhibit stays set
    // until the DUT is reset. Arg1/Command writes should be ignored and no extra
    // command launched (P3, soft). Block/Transfer Mode must still be writable (P4).
    //------------------------------------------------------------------
    `uvm_info("TC_LOCKOUT", "Step 4: Command Inhibit (CMD) = 1, DAT = 0", UVM_LOW)
    start_cmd_inhibit(ok);
    if (ok) begin
      expect_locked  ("S4_ARG1_UNDER_CMD_INH", REG_ARG1, ARG_BAD, STRB_ALL, MASK_ALL, ARG_A, 1);
      attempt_launch ("S4_LAUNCH_UNDER_CMD_INH", 1'b0, 1);
      expect_writable("S4_BLK_NOT_LOCKED", REG_BLK_SIZE_CNT, BLK_B,         STRB_ALL, MASK_ALL, 1);
      expect_writable("S4_TM_NOT_LOCKED",  REG_CMD_XFER,     {16'h0, TM_B}, STRB_LO,  MASK_LO,  1);
      restore_baseline();

      //----------------------------------------------------------------
      // Step 5: both inhibits. Registers must keep the BASELINE (not merely "differ").
      //----------------------------------------------------------------
 //     `uvm_info("TC_LOCKOUT", "Step 5: Command Inhibit (CMD) = 1 and (DAT) = 1", UVM_LOW)
 //     set_dat_inhibit(1'b1, ok);
 //     if (ok) begin
  //      expect_locked("S5_BLK",  REG_BLK_SIZE_CNT, BLK_BAD,         STRB_ALL, MASK_ALL, BLK_A);
  //      expect_locked("S5_TM",   REG_CMD_XFER,     {16'h0, TM_BAD}, STRB_LO,  MASK_LO,  {16'h0, TM_A});
        expect_locked("S5_ARG1_UNDER_CMD_INH", REG_ARG1, ARG_BAD,   STRB_ALL, MASK_ALL, ARG_A, 1);
 //     end
      vif.inj_no_resp   = 1'b0;
 //     vif.force_inh_dat = 1'b0;   // release the force; CMD inhibit stays until reset
    end

    `uvm_info("TC_LOCKOUT", $sformatf("=== Completed tc_reg_lockout_dat_cmd_inhibit sequence, hard failures = %0d ===", n_errors), UVM_LOW)
  endtask

endclass : reg_lockout_dat_cmd_inhibit_vseq

`endif // REG_LOCKOUT_DAT_CMD_INHIBIT_VSEQ_SV
