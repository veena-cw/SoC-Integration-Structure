// Feature ID: ADMA2 single-block transfer (ID to be filled in from the schedule).
// Goal: minimal ADMA2 check in both directions, one Transfer descriptor with End.
//   1. CMD24: DUT fetches the descriptor, reads 512 bytes from SRC over AXI, sends them to the card.
//   2. CMD17: DUT fetches a new descriptor, receives 512 bytes and writes them to DST over AXI.
//   Pass: both commands complete, Transfer Complete is set each time, and DST equals SRC.
// Flow: bfm_setup -> enable_clocks -> sd_init -> write leg -> read leg -> compare.
class dma_adma2_single_blk_vseq extends dma_base_vseq;
  `uvm_object_utils(dma_adma2_single_blk_vseq)

  localparam bit [32:0] TBL = 33'h0000_1000;   // descriptor table
  localparam bit [32:0] SRC = 33'h0000_2000;   // data the DUT reads and sends to the card
  localparam bit [32:0] DST = 33'h0000_3000;   // where the DUT stores the data read back from the card
  localparam int unsigned BLK = 512;

  function new(string name = "dma_adma2_single_blk_vseq");
    super.new(name);
  endfunction

  virtual task body();
    bit init_ok, cmd_ok, tc_ok;
    `uvm_info("DMA_SB", "=== dma_adma2_single_blk_vseq start ===", UVM_LOW)
    bfm_setup();
    enable_clocks();
    wide4 = 1'b1;
    sd_init(init_ok);
    if (!init_ok) begin
      precond("card init did not reach Transfer state; DMA steps skipped");
      return;
    end

    // Write leg: memory -> card block 0
    mem_fill(SRC, BLK, 8'h5A);
    put_desc(TBL, 0, DESC_TRAN_END, 16'(BLK), 32'(SRC));
    dma_cmd(6'd24, 32'h0, TBL, 12'(BLK), 16'd1, 1'b0, 1'b0, cmd_ok, tc_ok);
    check_val("DMA_WR_CMD_COMPLETE", "SPEC", 32'(cmd_ok), 32'd1);
    check_val("DMA_WR_XFER_COMPLETE", "SPEC", 32'(tc_ok), 32'd1);

    // Read leg: card block 0 -> memory at DST
    mem_clear(DST, BLK);
    put_desc(TBL, 0, DESC_TRAN_END, 16'(BLK), 32'(DST));
    dma_cmd(6'd17, 32'h0, TBL, 12'(BLK), 16'd1, 1'b1, 1'b0, cmd_ok, tc_ok);
    check_val("DMA_RD_CMD_COMPLETE", "SPEC", 32'(cmd_ok), 32'd1);
    check_val("DMA_RD_XFER_COMPLETE", "SPEC", 32'(tc_ok), 32'd1);

    // Round trip: the 512 bytes must come back unchanged
    check_val("DMA_ROUNDTRIP_DIFF_BYTES", "SPEC", 32'(mem_diff(SRC, DST, BLK)), 32'd0);
    `uvm_info("DMA_SB", $sformatf("=== dma_adma2_single_blk_vseq done, failures=%0d ===", n_errors), UVM_LOW)
  endtask
endclass : dma_adma2_single_blk_vseq
