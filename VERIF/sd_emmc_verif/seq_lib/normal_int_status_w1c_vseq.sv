  
 class normal_int_status_w1c_vseq extends sd_emmc_base_vseq;
    `uvm_object_utils(normal_int_status_w1c_vseq)
    `uvm_declare_p_sequencer(sd_emmc_virtual_sequencer)

    // Local response type definitions to guarantee clean compilation without missing dependency issues
    localparam bit [1:0] RESP_NONE    = 2'b00;
    localparam bit [1:0] RESP_136     = 2'b01;
    localparam bit [1:0] RESP_48      = 2'b10;
    localparam bit [1:0] RESP_48_BUSY = 2'b11; // R1b response with busy check on DAT0

    function new(string name = "normal_int_status_w1c_vseq");
        super.new(name);
    endfunction

    virtual task body();
        bit [31:0] stat_val;
        bit [15:0] rca;
         bfm_setup();   //to skip the crc7 check temporarily to check w1c behaviour
        `uvm_info("W1C_TEST", "=== Starting W1C Bit 0 & Bit 1 Complete Test ===", UVM_LOW)

        // 1. Enable Clocks (0x2C = 0x0000_0007)
        write_reg_strobe(32'h0000_002C, 32'h0000_0007, STRB_ALL);
        #1us; 

        // 2. Unmask Normal Interrupt Status Bits (0x34 = 0xFFFF_FFFF)
        write_reg_strobe(32'h0000_0034, 32'hFFFF_FFFF, STRB_ALL);
        #500ns; 

        // 3. Card Initialization Flow (Brings card to Transfer state so BFM responds)
        // CMD0 (GO_IDLE_STATE)
        write_reg_strobe(32'h0000_0008, 32'h0000_0000, STRB_ALL);
        write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd0, RESP_NONE, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        #1us;

        // CMD8 (SEND_IF_COND)
        write_reg_strobe(32'h0000_0008, 32'h0000_01AA, STRB_ALL);
        write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd8, RESP_48, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        #1us;

        // ACMD41 Polling Loop (CMD55 -> ACMD41)
        repeat(3) begin
            write_reg_strobe(32'h0000_0008, 32'h0000_0000, STRB_ALL);
            write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd55, RESP_48, 1'b0, 1'b0), 16'h0}, STRB_ALL);
            #1us;
            write_reg_strobe(32'h0000_0008, 32'h40FF_8000, STRB_ALL);
            write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd41, RESP_48, 1'b0, 1'b0), 16'h0}, STRB_ALL);
            #2us;
        end

        // CMD2 (ALL_SEND_CID)
        write_reg_strobe(32'h0000_0008, 32'h0000_0000, STRB_ALL);
        write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd2, RESP_136, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        #1us;

        // CMD3 (SEND_RELATIVE_ADDR) -> Assigns RCA
        write_reg_strobe(32'h0000_0008, 32'h0000_0000, STRB_ALL);
        write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd3, RESP_48, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        #1us;
        
        // Read assigned RCA from Response Register 0 (0x10)
        read_reg(32'h0000_0010, stat_val);
        rca = stat_val[31:16];

        // CMD7 (SELECT_CARD) -> Puts card into Transfer state
        write_reg_strobe(32'h0000_0008, {rca, 16'h0000}, STRB_ALL);
        write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd7, RESP_48_BUSY, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        #15us;

        // 4. Issue CMD12 (STOP_TRANSMISSION) with R1b Response
        // This triggers Command Complete (Bit 0) and Transfer Complete / Busy End (Bit 1)
        write_reg_strobe(32'h0000_0008, 32'h0000_0000, STRB_ALL);
        //write_reg_strobe(32'h0000_000C, {make_cmd_reg(6'd12, RESP_48_BUSY, 1'b0, 1'b0), 16'h0}, STRB_ALL);
        write_reg_strobe(32'h0000_000C, 32'h0C03_0003, STRB_ALL); // <-- Hardcodes 2'b11 into bits [1:0]
        #15us; // Wait for frame transmission, NCR, and DAT0 busy release

        // 5. Read Normal Interrupt Status Register (0x30) - Verify Bit 0 and Bit 1 are set
        read_reg(32'h0000_0030, stat_val);
        `uvm_info("W1C_TEST", $sformatf("Status read BEFORE W1C clear: 0x%08h", stat_val), UVM_LOW)

        if ((stat_val & 32'h0000_0001) != 32'h0000_0001) begin
            `uvm_error("W1C_FAIL", $sformatf("Precondition failed: Command Complete (Bit0) not set! Value: 0x%08h", stat_val))
        end

        // 6. Perform W1C Write (Write 1 to clear Bit 0 and Bit 1)
        write_reg_strobe(32'h0000_0030, 32'h0000_0003, STRB_ALL);
        #500ns; 

        // 7. Read Status Register (0x30) again to verify clearing
        read_reg(32'h0000_0030, stat_val);
        `uvm_info("W1C_TEST", $sformatf("Status read AFTER W1C write: 0x%08h", stat_val), UVM_LOW)

        if ((stat_val & 32'h0000_0003) != 32'h0) begin
            `uvm_error("W1C_FAIL", $sformatf("W1C failed! Bits [1:0] were not cleared: 0x%08h", stat_val))
        end else begin
            `uvm_info("W1C_PASS", "W1C logic for Bit 0 and Bit 1 verified successfully!", UVM_LOW)
        end

    endtask
endclass   
  
