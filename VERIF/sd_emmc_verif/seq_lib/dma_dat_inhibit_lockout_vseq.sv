// Feature: DAT-inhibit register lockout, checked during a real ADMA2 data transfer (no testbench force).
// Goal: while a CMD17 data phase is running (Present State bit 1 = Command Inhibit DAT), writes to
//       Block Size/Count (0x04) and Transfer Mode (0x0C[15:0]) must be ignored, an unprotected
//       register (Argument 1, 0x08) must still change, and bit 1 must drop when the transfer ends.
// Flow: bfm_setup -> enable_clocks -> sd_init -> launch CMD17 with ADMA2 (same register writes as dma_cmd)
//       -> clear Command Complete (starts the DMA) -> wait for DAT inhibit -> lockout writes/checks
//       -> wait for Transfer Complete -> check the bit released.
class dma_dat_inhibit_lockout_vseq extends dma_base_vseq;
  `uvm_object_utils(dma_dat_inhibit_lockout_vseq)

  localparam bit [32:0] TBL = 33'h0000_1000;
  localparam bit [32:0] DST = 33'h0000_3000;
  localparam bit [31:0] MASK_BLK = 32'hFFFF_0FFF;   // block count [31:16] + block size [11:0]

  function new(string name = "dma_dat_inhibit_lockout_vseq");
    super.new(name);
  endfunction

  virtual task body();
    bit init_ok, cmd_ok, busy_ok, tc_ok;
    bit [31:0] b04, b0c, g04, g0c, g08, ps;
    `uvm_info("DMA_LOCK", "=== dma_dat_inhibit_lockout_vseq start ===", UVM_LOW)
    bfm_setup();
    enable_clocks();
    sd_init(init_ok);
    if (!init_ok) begin precond("card init did not reach Transfer state; lockout steps skipped"); return; end

    // Launch one 512-byte CMD17 read through ADMA2 (descriptor at TBL, destination DST).
    mem_clear(DST, 512);
    put_desc(TBL, 0, DESC_TRAN_END, 16'd512, 32'(DST));
    write_reg_strobe(DMA_REG_HOST, 32'h0000_0010, 4'h1);
    write_reg_strobe(DMA_REG_ADMA_ADDR, 32'(TBL), STRB_ALL);
    write_reg_strobe(DMA_REG_BLK, {16'd1, 4'h0, 12'd512}, STRB_ALL);
    write_reg_strobe(REG_ARG1, 32'h0, STRB_ALL);
    write_reg_strobe(REG_CMD_XFER, {16'h0, 16'h0011}, 4'h3);     // Transfer Mode: DMA enable + read
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd17, RESP_48, 1'b0, 1'b1), 16'h0}, cmd_strb);
    wait_cmd_done(cmd_ok);
    clear_status();                                               // this DUT starts the ADMA on this clear

    // Wait for the design itself to raise DAT inhibit (Present State bit 1).
    poll_max_reads = 2000;
    poll_reg(REG_PRESENT_STATE, 32'h2, 32'h2, busy_ok);
    if (!busy_ok) begin precond("DAT inhibit never rose during CMD17; lockout steps skipped"); return; end

    // Baseline, then try to overwrite the protected registers while the transfer is still running.
    read_reg(32'h04, b04);  read_reg(32'h0C, b0c);
    write_reg_strobe(32'h04, 32'h0002_0100, STRB_ALL);           // different block count and size
    write_reg_strobe(32'h0C, 32'h0000_0000, 4'h3);               // different Transfer Mode (no launch: lanes 1:0 only)
    write_reg_strobe(REG_ARG1, 32'hA5A5_A5A5, STRB_ALL);         // not DAT-protected: must change
    read_reg(32'h04, g04);  read_reg(32'h0C, g0c);  read_reg(REG_ARG1, g08);
    check_val("DATINH_LOCK_BLK_SZ_CNT", "SPEC", g04, b04, MASK_BLK);
    check_val("DATINH_LOCK_TRANS_MODE", "SPEC", g0c, b0c, 32'h0000_FFFF);
    check_val("DATINH_ARG1_NOT_LOCKED", "SPEC", g08, 32'hA5A5_A5A5);

    // Let the transfer finish, then DAT inhibit must be released.
    poll_max_reads = 2000;
    poll_reg(REG_INT_STAT_WORD, 32'h2, 32'h2, tc_ok);
    clear_status();
    read_reg(REG_PRESENT_STATE, ps);
    check_val("DATINH_RELEASED", "SPEC", ps, 32'h0, 32'h2);
    `uvm_info("DMA_LOCK", $sformatf("=== dma_dat_inhibit_lockout_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask
endclass : dma_dat_inhibit_lockout_vseq
