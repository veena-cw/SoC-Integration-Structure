// ============================================================================
// reg_reset_values_vseq.sv          Plan ID: COMMON-F-014 (Register Reset Values)
//
// Goal : after the power-on reset, the bits the plan names must read their
//        documented default of 0: Command/Data Inhibit and DAT line active
//        (0x24[2:0]), Normal/Error Interrupt Status (0x30/0x32) and Software
//        Reset (0x2F[2:0]).
// Flow : must be the FIRST thing the test does after reset (no enable_clocks,
//        no clear_status), so the reads see pure reset state.
// Notes: 0x30[7:6] (Card Insertion/Removal) are masked, because they may
//        legitimately be set by card-detect at reset. Present State[19:16]
//        is out of the mask on purpose (known to read 1 in this RTL).
//        Failures are tagged [SPEC].
// ============================================================================
class reg_reset_values_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(reg_reset_values_vseq)

  function new(string name = "reg_reset_values_vseq");
    super.new(name);
  endfunction

  // Goal: read one 32-bit aligned word and require (word & mask) == 0.
  // Flow: single helper so each register is one line in body().
  task chk_zero(bit [11:0] addr, bit [31:0] mask, string what);
    bit [31:0] rd;
    read_reg(addr, rd);
    if ((rd & mask) !== 32'h0)
      `uvm_error("RST_VAL", $sformatf("[SPEC] %s not 0 after reset: 0x%03h=0x%08h (mask 0x%08h)",
                                      what, addr, rd, mask))
  endtask

   // Flow: three reads straight after the power-on reset, before anything is written.
  // Each read must return 0 in the masked bits.
  task body();
    // Present State [2:0] = {DAT line active, Command Inhibit DAT, Command Inhibit CMD}.
    // Expected [SPEC] and this RTL: all 0 at reset (slv_reg9 resets to 0).
    // Present State[19:16] is outside the mask on purpose: the RTL hard-wires it to 1111.
    chk_zero(12'h024, 32'h0000_0007, "Present State inhibit bits [2:0]");

    // Software Reset is 0x2F, i.e. bits [31:24] of the 0x2C word; bits [2:0] = [26:24].
    // Expected [SPEC] and this RTL: 0 at reset (slv_reg11 resets to 0, and [26:24] are
    // cleared by the register file every clock).
    chk_zero(12'h02C, 32'h0700_0000, "Software Reset 0x2F[2:0]");

    // Interrupt Status words 0x30 (normal) and 0x32 (error), card insertion/removal masked.
    // Expected [SPEC]  : 0 after reset (no events yet).
    // This RTL         : the read is (status & 0x34-enable) and 0x34 resets to 0, so this
    //                    can never fail here; it only proves the reset value is hidden.
    chk_zero(12'h030, 32'hFFFF_FF3F, "Normal/Error Interrupt Status");
  endtask
endclass

