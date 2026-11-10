// Feature ID: ADMA2 rows of the schedule (ID to be filled in once you send the rows).
// Goal: shared helpers for every DMA test: card init, ADMA2 descriptor build in AXI memory,
//       one data command with a DMA transfer, and a memory-to-memory compare.
// Flow: DMA vseq -> these helpers -> AXI-Lite register writes (existing read_reg/write_reg_strobe)
//       and mdrv.mem_ref (the AXI memory slave's storage, which the DUT's DMA master reads and writes).
class dma_base_vseq extends sd_emmc_base_vseq;
  `uvm_object_utils(dma_base_vseq)
  `uvm_declare_p_sequencer(sd_emmc_virtual_sequencer)

  // Register offsets (SD Host layout; 0x58 confirmed from slv_reg22 = adma_sys_addr).
  localparam bit [31:0] DMA_REG_BLK       = 32'h0000_0004;  // [11:0] block size, [31:16] block count
  localparam bit [31:0] DMA_REG_HOST      = 32'h0000_0028;  // [4:3] DMA select (10 = ADMA2)
  localparam bit [31:0] DMA_REG_ADMA_ADDR = 32'h0000_0058;  // slv_reg22 -> adma_sys_addr
  bit wide4 = 1'b1;
  // ADMA2 descriptor attributes (32-bit address format): Valid=bit0, End=bit1, Int=bit2, Act=[5:4]
  localparam bit [15:0] DESC_TRAN_END  = 16'h0023;  // transfer, end of table
  localparam bit [15:0] DESC_TRAN      = 16'h0021;  // transfer, more descriptors follow
  localparam bit [15:0] DESC_LINK      = 16'h0031;  // link to the next table

  // Set by the test before start(): the AXI memory slave driver that owns mem_ref.
  sd_emmc_controller_axi_mem_agent_driver mdrv;

  function new(string name = "dma_base_vseq");
    super.new(name);
  endfunction
  
  // Goal: bring the SD card BFM to Transfer state, and log every step so a failed init shows which command broke.
  // Flow: CMD0, CMD8, ACMD41 loop, CMD2, CMD3, CMD7. Each step prints last_ok, the raw 0x30 word and response word 0.
  task sd_step(string nm, inout bit ok);
    `uvm_info("DMA_INIT", $sformatf("%s: ok=%0b st=0x%08h resp0=0x%08h", nm, last_ok, last_st, last_resp[0]), UVM_LOW)
    if (!last_ok) ok = 1'b0;
  endtask

  // Goal: bring the SD card BFM to Transfer state so data commands are legal.
  // Flow: CMD0, CMD8, ACMD41 loop, CMD2, CMD3, CMD7; the caller skips the test if ok is 0.
  task sd_init(output bit ok);
  bit [31:0] ocr;
  int unsigned polls;
  bit [15:0] rca;
  bit [31:0] ps;
  ok = 1'b1;
  read_reg(REG_PRESENT_STATE, ps);
  `uvm_info("DMA_INIT", $sformatf("Present State before init = 0x%08h", ps), UVM_LOW)
  do_cmd(6'd0, 32'h0, RESP_NONE, 1'b0);          sd_step("CMD0", ok);
  do_cmd(6'd8, 32'h0000_01AA, RESP_48, 1'b0);    sd_step("CMD8", ok);
  acmd41_loop(32'h40FF_8000, 16'h0, ocr, polls); sd_step("ACMD41", ok);
  `uvm_info("DMA_INIT", $sformatf("ACMD41 ocr=0x%08h polls=%0d", ocr, polls), UVM_LOW)
  if (!ocr[31]) ok = 1'b0;
  do_cmd(6'd2, 32'h0, RESP_136, 1'b0);           sd_step("CMD2", ok);
  do_cmd(6'd3, 32'h0, RESP_48, 1'b0);            sd_step("CMD3", ok);
  rca = last_resp[0][31:16];
  do_cmd(6'd7, {rca, 16'h0}, RESP_48B, 1'b0);    sd_step("CMD7", ok);
  if (wide4) begin
  do_cmd(6'd55, {rca, 16'h0}, RESP_48, 1'b0);
  do_cmd(6'd6,  32'h0000_0002, RESP_48, 1'b0);   sd_step("ACMD6", ok);
 end
 
endtask

  // Goal: write a byte pattern into AXI memory (source data for a DMA read by the DUT).
  task mem_fill(bit [32:0] addr, int unsigned n, bit [7:0] seed);
    for (int unsigned i = 0; i < n; i++) mdrv.mem_ref[addr + i] = 8'(seed + i * 7);
  endtask

  // Goal: zero a memory region so a DMA write into it can be told apart from stale data.
  task mem_clear(bit [32:0] addr, int unsigned n);
    for (int unsigned i = 0; i < n; i++) mdrv.mem_ref[addr + i] = 8'h00;
  endtask

  // Goal: write one 8-byte ADMA2 descriptor at tbl + 8*idx: attr[15:0], length[31:16], address[63:32].
  // Flow: bytes go straight into mem_ref, so the DUT's descriptor fetch over AXI reads them back.
  task put_desc(bit [32:0] tbl, int unsigned idx, bit [15:0] attr, bit [15:0] len, bit [31:0] addr);
    bit [63:0] d = {addr, len, attr};
    for (int b = 0; b < 8; b++) mdrv.mem_ref[tbl + idx*8 + b] = d[b*8 +: 8];
  endtask

  // Goal: run one data command with ADMA2 and wait for Transfer Complete.
  // Flow: select ADMA2, point 0x58 at the descriptor table, set block size/count, write
  //       argument, then the full 0x0C word (transfer mode + command). Command Complete and
  //       Transfer Complete are polled before anything is cleared, because clear_status()
  //       would otherwise wipe a Transfer Complete that arrives later.
  /*task dma_cmd(bit [5:0] idx, bit [31:0] arg, bit [32:0] tbl, bit [11:0] bsize, bit [15:0] bcnt,
               bit rd, bit multi, output bit cmd_ok, output bit tc_ok);
    bit [15:0] xfer;
    write_reg_strobe(DMA_REG_HOST, wide4 ? 32'h0000_0012 : 32'h0000_0010, 4'h1);
    xfer = 16'h0001 | (rd ? 16'h0010 : 16'h0000) | (multi ? 16'h0022 : 16'h0000);
    write_reg_strobe(DMA_REG_HOST, 32'h0000_0010, 4'h1);
    // Goal: temporary diagnostic. Read 0x28 back right after writing it, so a bit that does not stick is visible
    // before any command can change it.
    begin bit [31:0] h; 
    read_reg(DMA_REG_HOST, h); 
    `uvm_info("DMA_DIAG", $sformatf("0x28 after write = 0x%08h", h), UVM_LOW) 
    end
    write_reg_strobe(DMA_REG_ADMA_ADDR, tbl[31:0], STRB_ALL);
    write_reg_strobe(DMA_REG_BLK, {bcnt, 4'h0, bsize}, STRB_ALL);
    write_reg_strobe(REG_ARG1, arg, STRB_ALL);
    //write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(idx, RESP_48, 1'b0, 1'b1), xfer}, STRB_ALL);
    // Goal: put Transfer Mode (DMA enable, direction, multi-block) in place first, then launch the
    // command with the same lane-3 write the other tests use.
    // Flow: the DMA starts only on Command Complete with data_present and DMA enable, so Transfer Mode
    // must already be set when the command launches.
    write_reg_strobe(REG_CMD_XFER, {16'h0, xfer}, 4'h3);
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(idx, RESP_48, 1'b0, 1'b1), 16'h0}, cmd_strb);
    wait_cmd_done(cmd_ok);
    // Goal: temporary diagnostic. Show whether the register writes stuck and what the status looked like
    // when the command was expected to finish.
    // Flow: runs once per data command, after Command Complete was awaited and before clear_status() wipes the flags.
    begin
    bit [31:0] r04, r28, r58, r24, r30;
    bit [31:0] r0c;
    read_reg(32'h0C, r0c);
    read_reg(32'h04, r04);  read_reg(32'h28, r28);  read_reg(32'h58, r58);
    read_reg(REG_PRESENT_STATE, r24);  read_reg(REG_INT_STAT_WORD, r30);
    `uvm_info("DMA_DIAG", $sformatf("idx=%0d cmd_ok=%0b last_st=0x%08h | 0x04=0x%08h 0x28=0x%08h 0x58=0x%08h | present=0x%08h int_stat=0x%08h",
             idx, cmd_ok, last_st, r04, r28, r58, r24, r30), UVM_LOW)
    end
    clear_status();
    poll_max_reads = 2000;
    poll_reg(REG_INT_STAT_WORD, 32'h2, 32'h2, tc_ok);   // 0x30 bit 1 = Transfer Complete
    clear_status();
  endtask*/
  // Goal: one ADMA2 data command, with only the writes the transfer needs.
  // Flow: dma_cmd is called by each DMA vseq after sd_init; the descriptor table and data are already in AXI memory.
  task dma_cmd(bit [5:0] idx, bit [31:0] arg, bit [32:0] tbl, bit [11:0] bsize, bit [15:0] bcnt,
             bit rd, bit multi, output bit cmd_ok, output bit tc_ok);
  bit [15:0] xfer;
  xfer = 16'h0001 | (rd ? 16'h0010 : 16'h0000) | (multi ? 16'h0022 : 16'h0000);

  // 0x28: select ADMA2 (bits 4:3 = 10). The DMA type is chosen here, so it must be set before the command.
  write_reg_strobe(DMA_REG_HOST, wide4 ? 32'h0000_0012 : 32'h0000_0010, 4'h1);
  // 0x58: start of the descriptor table. The ADMA fetches its first descriptor from this address.
  write_reg_strobe(DMA_REG_ADMA_ADDR, tbl[31:0], STRB_ALL);
  // 0x04: block size [11:0] and block count [31:16]. They define how much data the transfer moves.
  write_reg_strobe(DMA_REG_BLK, {bcnt, 4'h0, bsize}, STRB_ALL);
  // 0x08: command argument (block address for CMD17/CMD24).
  write_reg_strobe(REG_ARG1, arg, STRB_ALL);
  // 0x0C[15:0] Transfer Mode: DMA enable (bit 0), direction (bit 4), multi-block. The spec wants it in place
  // before the command, because the transfer is set up when the command is issued. Lanes 1:0 only, so no launch.
  write_reg_strobe(REG_CMD_XFER, {16'h0, xfer}, 4'h3);
  // 0x0C[31:16] Command: index and data-present. This write launches the command (lane 3, as cmd_strb).
  write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(idx, RESP_48, 1'b0, 1'b1), 16'h0}, cmd_strb);
   // 0x30 bit 0: Command Complete. Needed to know the command was accepted before the transfer is judged.
  wait_cmd_done(cmd_ok);
  // [DESIGN] clear 0x30: this DUT starts the ADMA on the falling edge of Command Complete
  // (sd_emmc_controller.sv:452, fall output), so the flag has to be cleared before the transfer can start.
  clear_status();
  // 0x30 bit 1: Transfer Complete. This is the end of the transfer, and the pass condition for the data movement.
  poll_max_reads = 2000;
  poll_reg(REG_INT_STAT_WORD, 32'h2, 32'h2, tc_ok);
  // Clear Transfer Complete so the next command in the same test starts from a clean status.
  clear_status();
endtask
  
  
  
  
  

  // Goal: count byte differences between two memory regions (a missing byte counts as a difference).
  function int unsigned mem_diff(bit [32:0] a, bit [32:0] b, int unsigned n);
    int unsigned bad = 0;
    for (int unsigned i = 0; i < n; i++)
      if (!mdrv.mem_ref.exists(a + i) || !mdrv.mem_ref.exists(b + i) ||
          mdrv.mem_ref[a + i] !== mdrv.mem_ref[b + i]) bad++;
    return bad;
  endfunction
endclass : dma_base_vseq
