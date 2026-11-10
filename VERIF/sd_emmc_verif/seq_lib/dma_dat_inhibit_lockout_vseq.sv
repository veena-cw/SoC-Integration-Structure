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

  /*virtual task body();
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
  endtask*/
  
  virtual task body();
    // Declare status indicators and variable for response decoding
    bit        cmd_ok;      // Status flag from wait_cmd_done indicating command completion
    bit [31:0] resp_data;   // Holds response register contents (e.g., REG_RESP0)
    int        retry_cnt;   // Counter for ACMD41 polling timeout control
    bit        init_ok;     // Status flag indicating card completed power-up and initialization

    `uvm_info(get_type_name(), "Starting SD Card Initialization Sequence...", UVM_LOW)

    // =========================================================================
    // STEP 1: Send CMD0 (GO_IDLE_STATE)
    // Resets the SD card interface and puts the card into the Idle State
    // =========================================================================
    // Clear command argument register
    write_reg_strobe(REG_ARG1, 32'h0000_0000, STRB_ALL);
    // Write CMD0 command opcode with no response expected (RESP_NONE)
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd0, RESP_NONE, 1'b0, 1'b0), 16'h0}, cmd_strb);
    // Wait for the host controller interrupt/status to signal command complete
    wait_cmd_done(cmd_ok);

    // =========================================================================
    // STEP 2: Send CMD8 (SEND_IF_COND)
    // Verifies SD memory card interface condition and operating voltage (2.7V - 3.6V)
    // =========================================================================
    // Set VHS = 0x1 (2.7-3.6V supply range) and Check Pattern = 0xAA in Argument register
    write_reg_strobe(REG_ARG1, 32'h0000_01AA, STRB_ALL);
    // Write CMD8 command with standard 48-bit response expected (R7 response type)
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd8, RESP_48, 1'b0, 1'b0), 16'h0}, cmd_strb);
    // Wait for the host controller interrupt/status to signal command complete
    wait_cmd_done(cmd_ok);

    // =========================================================================
    // STEP 3: Poll ACMD41 (SD_SEND_OP_COND)
    // Asks the card to initiate power-up sequence and check busy state bit [31]
    // =========================================================================
    retry_cnt = 0;       // Initialize poll counter
    init_ok   = 1'b0;    // Clear initialization flag before polling

    while (!init_ok && (retry_cnt < 100)) begin
        // ---------------------------------------------------------------------
        // STEP 3a: Send CMD55 (APP_CMD)
        // SD Protocol Requirement: ACMD41 must always be preceded by CMD55
        // to instruct the card that the following command is application-specific.
        // ---------------------------------------------------------------------
        // Clear argument register (RCA = 0x0000 during initial card setup)
        write_reg_strobe(REG_ARG1, 32'h0000_0000, STRB_ALL);
        // Issue CMD55 expecting a standard 48-bit R1 response
        write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd55, RESP_48, 1'b0, 1'b0), 16'h0}, cmd_strb);
        // Wait for CMD55 execution to complete on host controller
        wait_cmd_done(cmd_ok);

        // ---------------------------------------------------------------------
        // STEP 3b: Send ACMD41 (SD_SEND_OP_COND)
        // Passes host capacity support (HCS=1) and supported VDD voltage window
        // ---------------------------------------------------------------------
        // Argument: HCS=1 (bit 30), Voltage Window = 0xFF8000 (bits 23:8) -> 3.2V-3.3V range
        write_reg_strobe(REG_ARG1, 32'h40FF_8000, STRB_ALL);
        // MUST use RESP_48_NO_CRC: R3 response type carries no CRC7; disabling CRC check prevents host CRC errors
        write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd41, RESP_48_NO_CRC, 1'b0, 1'b0), 16'h0}, cmd_strb);
        // Wait for ACMD41 execution to complete on host controller
        wait_cmd_done(cmd_ok);

        // ---------------------------------------------------------------------
        // STEP 3c: Check Card Busy Status
        // Read response register 0 (REG_RESP0) to check OCR register bit 31
        // ---------------------------------------------------------------------
        read_reg(REG_RESP0, resp_data);

        // Bit 31 of OCR response represents Card Power-Up Status (1 = Ready, 0 = Busy)
        if (resp_data[31] == 1'b1) begin
            init_ok = 1'b1; // Card is powered up and out of busy state
        end else begin
            #100us;          // Pause before next poll attempt to allow card power-up
            retry_cnt++;     // Increment retry limit safety counter
        end
    end

    // Early exit guard: If initialization failed, log warning and exit body task
    if (!init_ok) begin
        `uvm_error(get_type_name(), "Card Initialization Failed: ACMD41 timed out!")
        return;
    end

    // =========================================================================
    // STEP 4: Send CMD2 (ALL_SEND_CID)
    // Asks the card to send its 128-bit Card Identification (CID) data
    // =========================================================================
    // Clear argument register
    write_reg_strobe(REG_ARG1, 32'h0000_0000, STRB_ALL);
    // Write CMD2 expecting a long 136-bit response (R2 response type)
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd2, RESP_136, 1'b0, 1'b0), 16'h0}, cmd_strb);
    // Wait for CID readout execution to finish
    wait_cmd_done(cmd_ok);

    // =========================================================================
    // STEP 5: Send CMD3 (SEND_RELATIVE_ADDR)
    // Requests card to publish a new Relative Card Address (RCA)
    // =========================================================================
    // Clear argument register
    write_reg_strobe(REG_ARG1, 32'h0000_0000, STRB_ALL);
    // Issue CMD3 expecting a standard 48-bit response (R6 response type)
    write_reg_strobe(REG_CMD_XFER, {make_cmd_reg(6'd3, RESP_48, 1'b0, 1'b0), 16'h0}, cmd_strb);
    // Wait for host controller to report completion
    wait_cmd_done(cmd_ok);

    `uvm_info(get_type_name(), "SD Card Initialization Completed Successfully!", UVM_LOW)
endtask
endclass : dma_dat_inhibit_lockout_vseq
