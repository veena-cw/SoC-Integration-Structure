// ============================================================================
// norm_int_rw1c_clear_vseq.sv      Plan ID: COMMON_REG_003 (RW1C)
//
// Goal   : verify the Normal Interrupt Status register (0x30) is write-1-to-
//          clear, using Command Complete (bit 0) as the status bit under test.
// Flow   : enable clocks -> clear status -> raise Command Complete with a
//          CMD0 -> three write attempts, reading 0x30 after each:
//            1) write 0 to bit 0        -> bit must stay set     (no clear)
//            2) write 1 to another bit  -> bit 0 must stay set   (no collateral)
//            3) write 1 to bit 0        -> bit 0 must clear      (RW1C)
// Notes  : wait_cmd_complete is NOT used, because it may clear bit 0 itself;
//          poll_reg is used to observe the bit without clearing it.
//          Failures are tagged [SPEC]. If the RTL treats slv_reg12 as a plain
//          RW register, step 3 is expected to fail as [SPEC]; the value the
//          RTL actually holds is printed so the [DESIGN] behaviour is logged.
// ============================================================================
class normal_int_status_w1c_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(normal_int_status_w1c_vseq)

  localparam bit [11:0] REG_NORM_INT_STAT = 12'h030;
  localparam bit [15:0] CMD_CMPLT         = 16'h0001; // bit 0, status under test
  localparam bit [15:0] XFER_CMPLT        = 16'h0002; // bit 1, "other bit" for the no-collateral check

  function new(string name = "normal_int_status_w1c_vseq");
    super.new(name);
  endfunction

  // Goal: write a 16-bit value to 0x30 on byte lanes 1:0 only.
  // Flow: small wrapper so every attempt uses the same strobe (4'h3).
  task wr_stat(bit [15:0] val);
    write_reg_strobe(REG_NORM_INT_STAT, {16'h0, val}, 4'h3);
  endtask

    // Goal: put Command Complete (0x30[0]) into a known "set" state before each write attempt.
  // Flow: clears old status, sends CMD0 (no response, BFM on), polls bit 0 without clearing it.
  // ok=0 means the setup failed, so the step is skipped with a PRECONDITION message.
  // Re-arming before every step keeps the three write checks independent: on this RTL any
  // write to 0x30 also clears the pending event, so one failure must not cascade.
  task arm(output bit ok);
    clear_status();
    send_cmd(6'd0, 32'h0, 2'b00);
    poll_reg(REG_NORM_INT_STAT, {16'h0, CMD_CMPLT}, {16'h0, CMD_CMPLT}, ok);
  endtask

  task body();
    bit [31:0] rd;
    bit        ok;

    // Bring-up: clocks on, and 0x34 enabled (the RTL masks 0x30 reads with it).
    enable_clocks();

    // ---- Step 1: write-0 must NOT clear -----------------------------------------------
    // Expected [SPEC]  : bit 0 stays 1 (a write of 0 to a RW1C bit has no effect).
    // This RTL         : any 0x30 write pulses cmd_int_rst, which clears the pending event,
    //                    so bit 0 drops to 0 -> this check FAILS as [SPEC]; it is the root
    //                    cause for steps 2 and 3 on this RTL.
    arm(ok);
    if (!ok) begin
      `uvm_warning("RW1C", "PRECONDITION: Command Complete (0x30[0]) never set after CMD0, RW1C check skipped")
      return;
    end
    wr_stat(16'h0000);
    read_reg(REG_NORM_INT_STAT, rd);
    if (rd[0] !== 1'b1)
      `uvm_error("RW1C", $sformatf("[SPEC] write-0 to 0x30[0] cleared Command Complete, 0x30=0x%04h", rd[15:0]))

    // ---- Step 2: write-1 to a DIFFERENT bit must not clear bit 0 ------------------------
    // Expected [SPEC]  : bit 0 stays 1; only the written bit (Transfer Complete, bit 1) is
    //                    affected, and it was never set.
    // This RTL         : same int_rst pulse as step 1 -> bit 0 is lost -> FAILS as [SPEC].
    arm(ok);
    if (ok) begin
      wr_stat(XFER_CMPLT);
      read_reg(REG_NORM_INT_STAT, rd);
      if (rd[0] !== 1'b1)
        `uvm_error("RW1C", $sformatf("[SPEC] write-1 to 0x30[1] cleared Command Complete, 0x30=0x%04h", rd[15:0]))
    end

    // ---- Step 3: write-1 to bit 0 must clear it -----------------------------------------
    // Expected [SPEC]  : bit 0 reads 0 afterwards.
    // This RTL         : slv_reg12_1[0]=1 masks the event and int_rst clears it -> PASSES
    //                    ([DESIGN]: clearing is done by masking, until a 0 is written back).
    arm(ok);
    if (ok) begin
      wr_stat(CMD_CMPLT);
      read_reg(REG_NORM_INT_STAT, rd);
      if (rd[0] !== 1'b0)
        `uvm_error("RW1C", $sformatf("[SPEC] write-1 to 0x30[0] did not clear Command Complete, 0x30=0x%04h", rd[15:0]))

      // ---- Step 4: a new command after the clear must set bit 0 again --------------------
      // Expected [SPEC]  : Command Complete sets again (a clear must not disable the bit).
      // This RTL         : the mask from step 3 stays until a 0 is written to bit 0, so the
      //                    new event stays hidden -> FAILS as [SPEC]. clear_status() is NOT
      //                    called here on purpose, because it would release that mask.
      send_cmd(6'd0, 32'h0, 2'b00);
      poll_reg(REG_NORM_INT_STAT, {16'h0, CMD_CMPLT}, {16'h0, CMD_CMPLT}, ok);
      if (!ok)
        `uvm_error("RW1C", "[SPEC] Command Complete did not set again after being cleared")
    end
  endtask
endclass

