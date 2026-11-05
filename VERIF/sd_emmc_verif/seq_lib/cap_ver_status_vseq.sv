// ============================================================================
// cap_ver_status_vseq.sv        Plan ID: COMMON-F-017 (Capabilities, Version & Slot Status)
//
// Goal : the read-only identification registers must report what this RTL implements,
//        must be consistent with each other, and must ignore writes.
//          0x40 Capabilities (low)    0x44 Capabilities (high)
//          0xFC {Host Controller Version [31:16], Slot Interrupt Status [15:0]}
// Flow : three reads, one consistency check, one write-attempt/read-back check.
//        No clock enable and no card are needed.
// Tags : [DESIGN] = value this RTL returns (the exp_* knobs below; update them when the
//        RTL changes). [SPEC] = a rule that holds for any compliant controller.
// ============================================================================
class cap_ver_status_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(cap_ver_status_vseq)

  localparam bit [31:0] REG_CAP0 = 32'h0000_0040;
  localparam bit [31:0] REG_CAP1 = 32'h0000_0044;
  localparam bit [31:0] REG_VER  = 32'h0000_00FC;

  // Values the RTL read mux returns today (sd_emmc_controller_S00_AXI.sv).
  // 0x40 decodes as: 3.3V, High Speed, ADMA2, 8-bit, 50 MHz base clock, 512-byte max block.
  // 0x44 = 5: SDR50 and DDR50 supported. 0xFC[31:16] = 0x0002: spec version 3.00.
  bit [31:0] exp_cap0 = 32'h012C_32B2;
  bit [31:0] exp_cap1 = 32'h0000_0005;
  bit [31:0] exp_ver  = 32'h0002_0000;

  function new(string name = "cap_ver_status_vseq");
    super.new(name);
  endfunction

  task body();
    bit [31:0] cap0, cap1, ver, rd;

    read_reg(REG_CAP0, cap0);
    read_reg(REG_CAP1, cap1);
    read_reg(REG_VER,  ver);

    // 1) [DESIGN] the three registers report what the RTL implements.
    // Expected on this RTL: pass (the values are constants in the read mux).
    if (cap0 !== exp_cap0) fail("DESIGN", "CAP_VAL", $sformatf("0x40 read=0x%08h exp=0x%08h", cap0, exp_cap0));
    if (cap1 !== exp_cap1) fail("DESIGN", "CAP_VAL", $sformatf("0x44 read=0x%08h exp=0x%08h", cap1, exp_cap1));
    if (ver  !== exp_ver)  fail("DESIGN", "VER_VAL", $sformatf("0xFC read=0x%08h exp=0x%08h", ver,  exp_ver));

    // 2) [SPEC] UHS-I modes (SDR50/SDR104/DDR50 in 0x44[2:0]) need 1.8V signalling (0x40[26]).
    // Expected on this RTL: FAILS, because 0x44 = 5 claims SDR50/DDR50 while 0x40[26] = 0.
    if (cap1[2:0] != 3'b000 && cap0[26] !== 1'b1)
      fail("SPEC", "CAP_UHS", $sformatf("UHS-I modes advertised (0x44=0x%08h) but 1.8V not supported (0x40[26]=%0b)", cap1, cap0[26]));

    // 3) [SPEC] read-only registers ignore writes. Write all ones, read back, expect no change.
    // Expected on this RTL: pass (0x40, 0x44 and 0xFC are not decoded in the write case).
    write_reg_strobe(REG_CAP0, 32'hFFFF_FFFF, STRB_ALL);
    write_reg_strobe(REG_CAP1, 32'hFFFF_FFFF, STRB_ALL);
    write_reg_strobe(REG_VER,  32'hFFFF_FFFF, STRB_ALL);
    read_reg(REG_CAP0, rd); if (rd !== cap0) fail("SPEC", "RO_WRITE", $sformatf("0x40 changed by a write: 0x%08h -> 0x%08h", cap0, rd));
    read_reg(REG_CAP1, rd); if (rd !== cap1) fail("SPEC", "RO_WRITE", $sformatf("0x44 changed by a write: 0x%08h -> 0x%08h", cap1, rd));
    read_reg(REG_VER,  rd); if (rd !== ver)  fail("SPEC", "RO_WRITE", $sformatf("0xFC changed by a write: 0x%08h -> 0x%08h", ver,  rd));
  endtask
endclass
