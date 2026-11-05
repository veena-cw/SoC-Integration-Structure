// ============================================================================
// reg_irq_gating_vseq.sv      Plan ID: COMMON-F-016 (Status/Signal Enable gating, Force Event)
//
// Goal : verify the two enable layers on the error path, using Force Event
//        (0x52 bit 0, Command Timeout) as the event source, so no card is needed:
//          1) Error Status Enable (0x36) = 0 -> forced event must NOT set 0x32[0]
//          2) Error Status Enable bit 0 = 1  -> forced event sets 0x32[0] and the
//             summary bit 0x30[15]
//          3) Error Signal Enable (0x3A) = 0 -> interrupt pin stays low
//          4) Error Signal Enable bit 0 = 1  -> interrupt pin goes high
// Flow : enables are 16-bit halves of word 0x34 ({0x36,0x34}); Force Event for
//        errors is the upper half of word 0x50 ({0x52,0x50}); signal enables are
//        word 0x38 ({0x3A,0x38}). Upper-half writes use WSTRB 4'hC.
// Cleanup: clear the error status (W1C) and drop the enables so later tests
//        start clean.
// ============================================================================
class reg_irq_gating_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(reg_irq_gating_vseq)

  localparam bit [11:0] REG_INT_STAT   = 12'h030;  // {0x32 err, 0x30 norm}
  localparam bit [11:0] REG_STAT_EN    = 12'h034;  // {0x36 err en, 0x34 norm en}
  localparam bit [11:0] REG_SIG_EN     = 12'h038;  // {0x3A err sig, 0x38 norm sig}
  localparam bit [11:0] REG_FORCE      = 12'h050;  // {0x52 err force, 0x50 acmd force}

  function new(string name = "reg_irq_gating_vseq");
    super.new(name);
  endfunction

  // Goal: read the physical interrupt pin a few clocks after the last register access.
  // Flow: read_reg already costs AXI cycles; one extra clock lets the pin settle.
  task sample_irq(output bit irq);
    @(sd_emmc_tb_pkg::sd_emmc_vif.monitor_cb);
    irq = sd_emmc_tb_pkg::sd_emmc_vif.monitor_cb.interrupt;
  endtask

    // Flow: a real Command Timeout (silent BFM card) is the error source, because this RTL
  // has no Force Event decode. Steps 1-2 check enable gating on the status register, steps
  // 3-4 the summary bit and the interrupt pin, step 5 Force Event.
  task body();
    bit [31:0] rd;
    bit        irq;
    virtual sd_emmc_if vif;

    vif = sd_emmc_tb_pkg::sd_emmc_vif;
    vif.use_bfm     = 1'b1;
    vif.inj_no_resp = 1'b1;                                  // BFM stays silent -> Command Timeout
    enable_clocks();                                         // also sets 0x34 = all ones
    write_reg_strobe(REG_STAT_EN, 32'h0000_0000, STRB_ALL);  // now turn every status enable off

    // ---- Step 1: event raised while its enable is 0 must not be visible ----------------
    // Expected [SPEC]  : 0x32 reads 0. This RTL: PASSES (the read is masked by 0x34).
    send_cmd(6'd8, 32'h0000_01AA, 2'b10);
    #5us;                                                   // 64-clock timeout plus margin
    read_reg(REG_INT_STAT, rd);
    if (rd[31:16] !== 16'h0)
      `uvm_error("IRQ_GATE", $sformatf("[SPEC] error status visible with Error Status Enable=0, 0x30=0x%08h", rd))

    // ---- Step 2: enabling later must NOT reveal the old event -----------------------------
    // Expected [SPEC]  : still 0, because the bit never latched while disabled.
    // This RTL         : gates only the read, so the event reappears -> FAILS as [SPEC]
    //                    ([DESIGN]: enable masks the read, it does not stop the bit setting).
    write_reg_strobe(REG_STAT_EN, 32'hFFFF_FFFF, STRB_ALL);
    read_reg(REG_INT_STAT, rd);
    if (rd[31:16] !== 16'h0)
      `uvm_error("IRQ_GATE", $sformatf("[SPEC] event raised while disabled appeared after enabling, 0x30=0x%08h", rd))

    // ---- Step 3: fresh event with enable on must be visible, with the summary bit --------
    // Expected [SPEC]  : 0x32 non-zero and 0x30[15] = 1.
    // This RTL         : 0x32 should be non-zero; bit 15 is not implemented (reads 0) ->
    //                    the summary check FAILS as [SPEC] ([DESIGN]: no summary bit).
    clear_status();
    send_cmd(6'd8, 32'h0000_01AA, 2'b10);
    #20us;
    read_reg(REG_INT_STAT, rd);
    if (rd[31:16] === 16'h0) begin
      `uvm_warning("IRQ_GATE", "PRECONDITION: no error status after a silent-card command, remaining checks skipped")
      vif.inj_no_resp = 1'b0;
      return;
    end
    if (rd[15] !== 1'b1)
      `uvm_error("IRQ_GATE", $sformatf("[SPEC] Error summary 0x30[15] not set with an error pending, 0x30=0x%08h", rd))

    // ---- Step 4: Signal Enable gates the interrupt pin -------------------------------------
    // Expected [SPEC]  : pin low with 0x38/0x3A = 0, high with the error enabled.
    // This RTL         : 0x38/0x3A drive int_sig_en_o -> expected to PASS if the top
    //                    level ANDs status with it.
    write_reg_strobe(REG_SIG_EN, 32'h0000_0000, STRB_ALL);
    sample_irq(irq);
    if (irq !== 1'b0) `uvm_error("IRQ_GATE", "[SPEC] interrupt pin high while Error Signal Enable=0")
    write_reg_strobe(REG_SIG_EN, 32'hFFFF_FFFF, STRB_ALL);
    sample_irq(irq);
    if (irq !== 1'b1) `uvm_error("IRQ_GATE", "[SPEC] interrupt pin low with error pending and Error Signal Enable=1")

    // ---- Step 5: Force Event (0x52 bit 0) must set 0x32[0] when enabled -------------------
    // Expected [SPEC]  : 0x32[0] = 1 after the write, with no card activity.
    // This RTL         : 0x50 is not decoded (default branch) -> FAILS as [SPEC]
    //                    ([DESIGN]: Force Event not implemented, mark F-016 partial).
    write_reg_strobe(REG_SIG_EN, 32'h0000_0000, STRB_ALL);
    vif.inj_no_resp = 1'b0;
    clear_status();
    write_reg_strobe(REG_FORCE, 32'h0001_0000, 4'hC);
    read_reg(REG_INT_STAT, rd);
    if (rd[16] !== 1'b1)
      `uvm_error("IRQ_GATE", $sformatf("[SPEC] Force Event 0x52[0] did not set 0x32[0], 0x30=0x%08h", rd))

    // Cleanup: leave status and enables cleared so a following test starts clean.
    clear_status();
    write_reg_strobe(REG_STAT_EN, 32'h0000_0000, STRB_ALL);
  endtask
endclass

