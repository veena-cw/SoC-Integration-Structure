// ============================================================================
// cmd_crc7_vseq.sv        Plan ID: COMMON-F-010, CRC-7 half (Hardware CRC-7 Engine)
//
// Goal : prove both directions of the CRC-7 engine with CMD8:
//          Part 1  host -> card: the host sends a valid CRC-7, so the BFM accepts the
//                  command and answers, and the host reports Command Complete with no error.
//          Part 2  card -> host: the BFM corrupts the response CRC-7 (inj_resp_crc), so the
//                  host must report Command CRC Error (0x32[1], bit 17 of the 0x30 word).
// Flow : clocks on -> Part 1 -> clear status -> Part 2 (skipped with a PRECONDITION if
//        Part 1 failed, because the BFM never answered) -> restore the knob.
// Notes: the BFM only answers commands whose CRC-7, start bit and end bit are valid. If it
//        prints "CMD CRC/framing error" in the log, Part 1 fails and the cause is a DUT
//        CMD-line CRC defect or a sampling problem; the BFM log line tells which.
//        The CRC-16 half of F-010 belongs to the data-transfer tests.
// ============================================================================
class cmd_crc7_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(cmd_crc7_vseq)

  localparam bit [31:0] ERR_CRC = 32'h0002_0000;   // 0x32[1] Command CRC Error
  localparam bit [31:0] CMD_CC  = 32'h0000_0001;   // 0x30[0] Command Complete

  virtual sd_emmc_controller_sd_emmc_if vif;  
  function new(string name = "cmd_crc7_vseq");
    super.new(name);
  endfunction

  task body();
    
    bit [31:0] rd;
    bit        ok;

    if (!uvm_config_db#(virtual sd_emmc_controller_sd_emmc_if)::get(null, "", "vif", vif)) begin
    // If registered under a different context or name (e.g. uvm_root::get()), adjust string key accordingly
    `uvm_fatal("VIF_NULL", "cmd_crc7_vseq: Failed to get virtual interface 'vif' from uvm_config_db")
  end

    enable_clocks();
    
    vif.use_bfm    = 1'b1;
    bfm_setup();
    poll_max_reads = 200;
    
    

    // ---- Part 1: host -> card CRC-7 ------------------------------------------------------
    // Expected [SPEC]: the card accepts the command; Command Complete is set and no error bit is.
    // This RTL: the BFM printed "CMD CRC/framing error on CMD8" in earlier runs, so this part is
    //           expected to FAIL until the DUT/BFM disagreement is resolved.
    send_cmd(6'd8, 32'h0000_01AA, 2'b10);
    poll_reg(REG_INT_STAT_WORD, CMD_CC, CMD_CC, ok);
    read_reg(REG_INT_STAT_WORD, rd);
    if (!ok) begin
      fail("SPEC", "CRC7_CMD", $sformatf("card did not accept CMD8 (no Command Complete), 0x30=0x%08h; see the SD_BFM CRC/framing line", rd));
      `uvm_warning("CRC7", "PRECONDITION: Part 1 failed, response CRC-7 check (Part 2) skipped")
      clear_status();
      return;
    end
    if (rd[31:16] != 16'h0)
      fail("SPEC", "CRC7_CMD", $sformatf("error bits set after a valid CMD8 exchange, 0x30=0x%08h", rd));
    clear_status();

    // ---- Part 2: card -> host CRC-7 ------------------------------------------------------
    // Expected [SPEC]: a response with a wrong CRC-7 sets Command CRC Error 0x32[1].
    enable_clocks();

	vif.use_bfm       = 1'b1;
	vif.cfg_skip_crc7 = 1'b0;
	vif.inj_resp_crc  = 1'b1;
 //   vif.inj_resp_crc = 1'b1;
    send_cmd(6'd8, 32'h0000_01AA, 2'b10);
    poll_reg(REG_INT_STAT_WORD, ERR_CRC, ERR_CRC, ok);
    if (!ok)
      fail("SPEC", "CRC7_RESP", "Command CRC Error 0x32[1] not set after a response with a corrupted CRC-7");

    // Cleanup
    vif.inj_resp_crc = 1'b0;
    clear_status();
  endtask
endclass
