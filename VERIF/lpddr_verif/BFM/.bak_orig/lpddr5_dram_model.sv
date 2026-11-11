`timescale 1ns/1ps

module lpddr5_dram_model #(
    parameter int DATA_WIDTH   = 128,
    parameter int ADDR_WIDTH   = 32,
    parameter int MEM_DEPTH    = 65536,
    parameter int READ_LATENCY = 8
)(
    input  logic                         sys_clk,
    input  logic                         sys_rst_n,

    // ============================================================
    // DRAM command interface
    // ============================================================
    input  logic                         cmd_valid,
    output logic                         cmd_ready,
    input  logic [5:0]                   cmd,
    input  logic [ADDR_WIDTH-1:0]        dram_addr,

    // ============================================================
    // DRAM write data interface
    // ============================================================
    input  logic                         wrdata_valid,
    input  logic [DATA_WIDTH-1:0]        wrdata,
    input  logic [(DATA_WIDTH/8)-1:0]    wrdata_mask,

    // ============================================================
    // DRAM read data interface
    // ============================================================
    output logic [DATA_WIDTH-1:0]        rddata,
    output logic                         rddata_valid,

    // ============================================================
    // Initialization / Training
    // ============================================================
    output logic                         init_done,
    output logic                         training_done,

    // ============================================================
    // Low-power control signals
    // ============================================================
    input logic                         dram_pd_entry,
    input logic                         dram_pd_exit,

    input logic                         dram_sr_entry,
    input logic                         dram_sr_exit,

    input logic                         dram_ds_entry,
    input logic                         dram_ds_exit,

    // ============================================================
    // DRAM low-power state
    // ============================================================
    output logic [2:0]                   dram_lp_state,

    // ============================================================
    // Error indication
    // ============================================================
    output logic                         error
);

    // ============================================================
    // Command encoding
    // ============================================================
    localparam logic [5:0] CA_NOP  = 6'h00;
    localparam logic [5:0] CA_RD   = 6'h01;
    localparam logic [5:0] CA_WR   = 6'h02;
    localparam logic [5:0] CA_ACT  = 6'h03;
    localparam logic [5:0] CA_PRE  = 6'h04;
    localparam logic [5:0] CA_REFA = 6'h05;
    localparam logic [5:0] CA_MRW  = 6'h06;
    localparam logic [5:0] CA_MRR  = 6'h07;
    localparam logic [5:0] CA_SREF = 6'h08;
    localparam logic [5:0] CA_PD   = 6'h09;

    // ============================================================
    // Low-power states
    // ============================================================
    localparam logic [2:0] LP_NORMAL = 3'd0;
    localparam logic [2:0] LP_PD     = 3'd1;
    localparam logic [2:0] LP_SR     = 3'd2;
    localparam logic [2:0] LP_DS     = 3'd3;

    // ============================================================
    // Memory
    // ============================================================
    logic [DATA_WIDTH-1:0] memory [0:MEM_DEPTH-1];

    // ============================================================
    // Initialization
    // ============================================================
    integer init_counter;

    // ============================================================
    // Read pipeline
    // ============================================================
    logic                         read_pending;
    logic [ADDR_WIDTH-1:0]        read_addr_pending;
    integer                       read_count;

    // ============================================================
    // Write pipeline
    // ============================================================
    logic                         write_pending;
    logic [ADDR_WIDTH-1:0]        write_addr_pending;
    logic [DATA_WIDTH-1:0]        write_data_pending;
    logic [(DATA_WIDTH/8)-1:0]    write_mask_pending;

    // ============================================================
    // Memory index
    // ============================================================
    function automatic integer get_mem_index(
        input logic [ADDR_WIDTH-1:0] addr
    );
        integer index;
        begin
            // 128-bit memory word = 16 bytes
            index = (addr >> 4) % MEM_DEPTH;
            get_mem_index = index;
        end
    endfunction

    // ============================================================
    // Byte-masked memory write
    //
    // mask = 0 -> write byte
    // mask = 1 -> preserve byte
    // ============================================================
    task automatic write_memory_word(
        input logic [ADDR_WIDTH-1:0]     addr,
        input logic [DATA_WIDTH-1:0]     data,
        input logic [(DATA_WIDTH/8)-1:0] mask
    );

        integer idx;
        integer b;

        begin

            idx = get_mem_index(addr);

            for (b = 0; b < DATA_WIDTH/8; b = b + 1) begin

                if (!mask[b]) begin
                    memory[idx][(b*8) +: 8] = data[(b*8) +: 8];
                end

            end

            $display(
                "[%0t] DRAM_BFM WRITE: ADDR=%h DATA=%h MASK=%h MEM_INDEX=%0d",
                $time,
                addr,
                data,
                mask,
                idx
            );

        end

    endtask

    // ============================================================
    // Read memory
    // ============================================================
    function automatic logic [DATA_WIDTH-1:0] read_memory_word(
        input logic [ADDR_WIDTH-1:0] addr
    );

        integer idx;

        begin

            idx = get_mem_index(addr);

            read_memory_word = memory[idx];

        end

    endfunction

    // ============================================================
    // Command ready
    //
    // Keep ready HIGH so that the BFM does not deadlock the PHY.
    // Illegal commands during LP are detected using 'error'.
    // ============================================================
    always_comb begin
        cmd_ready = 1'b1;
    end

    // ============================================================
    // Low-power state machine
    //
    // These six signals are the source of truth for DRAM LP state.
    // ============================================================
    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        if (!sys_rst_n) begin

            dram_lp_state <= LP_NORMAL;

        end
        else begin

            // ----------------------------------------------------
            // Power Down
            // ----------------------------------------------------
            if (dram_pd_entry) begin

                dram_lp_state <= LP_PD;

                $display(
                    "[%0t] DRAM_BFM: POWER-DOWN ENTRY",
                    $time
                );

            end
            else if (dram_pd_exit) begin

                dram_lp_state <= LP_NORMAL;

                $display(
                    "[%0t] DRAM_BFM: POWER-DOWN EXIT",
                    $time
                );

            end

            // ----------------------------------------------------
            // Self Refresh
            // ----------------------------------------------------
            else if (dram_sr_entry) begin

                dram_lp_state <= LP_SR;

                $display(
                    "[%0t] DRAM_BFM: SELF-REFRESH ENTRY",
                    $time
                );

            end
            else if (dram_sr_exit) begin

                dram_lp_state <= LP_NORMAL;

                $display(
                    "[%0t] DRAM_BFM: SELF-REFRESH EXIT",
                    $time
                );

            end

            // ----------------------------------------------------
            // Deep Sleep
            // ----------------------------------------------------
            else if (dram_ds_entry) begin

                dram_lp_state <= LP_DS;

                $display(
                    "[%0t] DRAM_BFM: DEEP-SLEEP ENTRY",
                    $time
                );

            end
            else if (dram_ds_exit) begin

                dram_lp_state <= LP_NORMAL;

                $display(
                    "[%0t] DRAM_BFM: DEEP-SLEEP EXIT",
                    $time
                );

            end
        end

    end

    // ============================================================
    // Initialization / Training
    // ============================================================
    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        if (!sys_rst_n) begin

            init_counter  <= 0;
            init_done     <= 1'b0;
            training_done <= 1'b0;

        end
        else begin

            if (!init_done) begin

                init_counter <= init_counter + 1;

                if (init_counter >= 1) begin
                    init_done <= 1'b1;

                    $display(
                        "[%0t] DRAM_BFM: INITIALIZATION COMPLETE",
                        $time
                    );
                end
            end

            if (init_done && !training_done) begin

                training_done <= 1'b1;

                $display(
                    "[%0t] DRAM_BFM: TRAINING COMPLETE",
                    $time
                );

            end

        end

    end

    // ============================================================
    // Main DRAM model
    //
    // This block handles:
    //   - command processing
    //   - reads
    //   - writes
    //   - read latency
    //   - delayed write data
    //   - low-power command checking
    //   - error reporting
    // ============================================================
    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        if (!sys_rst_n) begin

            rddata              <= '0;
            rddata_valid        <= 1'b0;

            read_pending        <= 1'b0;
            read_addr_pending   <= '0;
            read_count          <= 0;

            write_pending       <= 1'b0;
            write_addr_pending <= '0;
            write_data_pending <= '0;
            write_mask_pending <= '0;

            error               <= 1'b0;

        end
        else begin

            // ----------------------------------------------------
            // Default outputs
            // ----------------------------------------------------
            rddata_valid <= 1'b0;

            // Keep error as a sticky indication.
            // Remove this behavior if you want pulse-style errors.
            error <= error;

            // ====================================================
            // Complete delayed WRITE
            // ====================================================
            if (write_pending) begin

                write_memory_word(
                    write_addr_pending,
                    write_data_pending,
                    write_mask_pending
                );

                write_pending <= 1'b0;

            end

            // ====================================================
            // READ pipeline
            // ====================================================
            if (read_pending) begin

                if (read_count > 0) begin

                    read_count <= read_count - 1;

                end
                else begin

                    rddata       <= read_memory_word(read_addr_pending);
                    rddata_valid <= 1'b1;
                    read_pending <= 1'b0;

                    $display(
                        "[%0t] DRAM_BFM READ RESPONSE: ADDR=%h DATA=%h",
                        $time,
                        read_addr_pending,
                        read_memory_word(read_addr_pending)
                    );

                end

            end

            // ====================================================
            // Write data without a command
            // ====================================================
            if (wrdata_valid && !write_pending) begin

                if (dram_lp_state == LP_NORMAL) begin

                    // If write command has already established
                    // write_addr_pending, this data is consumed.
                    //
                    // Otherwise flag unexpected write data.

                    error <= 1'b1;

                    $display(
                        "[%0t] DRAM_BFM ERROR: WRDATA received "
                        "without pending WRITE command",
                        $time
                    );

                end
                else begin

                    error <= 1'b1;

                    $display(
                        "[%0t] DRAM_BFM ERROR: WRDATA received "
                        "while in LP state=%0d",
                        $time,
                        dram_lp_state
                    );

                end

            end

            // ====================================================
            // Command processing
            // ====================================================
            if (cmd_valid && cmd_ready) begin

                // ------------------------------------------------
                // LOW-POWER STATE
                // ------------------------------------------------
                if (dram_lp_state != LP_NORMAL) begin

                    case (cmd)

                        CA_NOP: begin

                            $display(
                                "[%0t] DRAM_BFM: NOP during LP state=%0d",
                                $time,
                                dram_lp_state
                            );

                        end

                        default: begin

                            error <= 1'b1;

                            $display(
                                "[%0t] DRAM_BFM ERROR: COMMAND=%h "
                                "ADDR=%h NOT ALLOWED IN LP STATE=%0d",
                                $time,
                                cmd,
                                dram_addr,
                                dram_lp_state
                            );

                        end

                    endcase

                end

                // ------------------------------------------------
                // NORMAL STATE
                // ------------------------------------------------
                else begin

                    case (cmd)

                        // =========================================
                        // NOP
                        // =========================================
                        CA_NOP: begin

                            $display(
                                "[%0t] DRAM_BFM: NOP",
                                $time
                            );

                        end

                        // =========================================
                        // READ
                        // =========================================
                        CA_RD: begin

                            if (read_pending) begin

                                error <= 1'b1;

                                $display(
                                    "[%0t] DRAM_BFM ERROR: READ "
                                    "received while previous READ pending",
                                    $time
                                );

                            end
                            else begin

                                read_pending      <= 1'b1;
                                read_addr_pending <= dram_addr;
                                read_count        <= READ_LATENCY;

                                $display(
                                    "[%0t] DRAM_BFM: READ ACCEPTED "
                                    "ADDR=%h LATENCY=%0d",
                                    $time,
                                    dram_addr,
                                    READ_LATENCY
                                );

                            end

                        end

                        // =========================================
                        // WRITE
                        // =========================================
                        CA_WR: begin

                            if (write_pending) begin

                                error <= 1'b1;

                                $display(
                                    "[%0t] DRAM_BFM ERROR: WRITE "
                                    "received while previous WRITE pending",
                                    $time
                                );

                            end
                            else begin

                                write_addr_pending <= dram_addr;

                                // ------------------------------------------------
                                // If write data is already valid, perform write.
                                // Otherwise wait for wrdata_valid.
                                // ------------------------------------------------
                                if (wrdata_valid) begin

                                    write_memory_word(
                                        dram_addr,
                                        wrdata,
                                        wrdata_mask
                                    );

                                    write_pending <= 1'b0;

                                end
                                else begin

                                    write_pending <= 1'b1;

                                    write_data_pending <= '0;
                                    write_mask_pending <= '0;

                                    $display(
                                        "[%0t] DRAM_BFM: WRITE COMMAND "
                                        "ACCEPTED, WAITING FOR WRDATA "
                                        "ADDR=%h",
                                        $time,
                                        dram_addr
                                    );

                                end

                            end

                        end

                        // =========================================
                        // ACTIVATE
                        // =========================================
                        CA_ACT: begin

                            $display(
                                "[%0t] DRAM_BFM: ACTIVATE ADDR=%h",
                                $time,
                                dram_addr
                            );

                        end

                        // =========================================
                        // PRECHARGE
                        // =========================================
                        CA_PRE: begin

                            $display(
                                "[%0t] DRAM_BFM: PRECHARGE ADDR=%h",
                                $time,
                                dram_addr
                            );

                        end

                        // =========================================
                        // AUTO REFRESH
                        // =========================================
                        CA_REFA: begin

                            $display(
                                "[%0t] DRAM_BFM: AUTO REFRESH",
                                $time
                            );

                        end

                        // =========================================
                        // MODE REGISTER WRITE
                        // =========================================
                        CA_MRW: begin

                            $display(
                                "[%0t] DRAM_BFM: MRW ADDR=%h",
                                $time,
                                dram_addr
                            );

                        end

                        // =========================================
                        // MODE REGISTER READ
                        // =========================================
                        CA_MRR: begin

                            $display(
                                "[%0t] DRAM_BFM: MRR ADDR=%h",
                                $time,
                                dram_addr
                            );

                        end

                        // =========================================
                        // SELF REFRESH command
                        // =========================================
                        CA_SREF: begin

                            $display(
                                "[%0t] DRAM_BFM: SREF COMMAND",
                                $time
                            );

                        end

                        // =========================================
                        // POWER DOWN command
                        // =========================================
                        CA_PD: begin

                            $display(
                                "[%0t] DRAM_BFM: POWER-DOWN COMMAND",
                                $time
                            );

                        end

                        // =========================================
                        // Unknown
                        // =========================================
                        default: begin

                            error <= 1'b1;

                            $display(
                                "[%0t] DRAM_BFM ERROR: UNKNOWN "
                                "COMMAND=%h ADDR=%h",
                                $time,
                                cmd,
                                dram_addr
                            );

                        end

                    endcase

                end

            end

        end

    end

    // ============================================================
    // Capture delayed write data
    //
    // If the WRITE command arrives first and write data arrives
    // later, capture it here.
    // ============================================================
    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        if (!sys_rst_n) begin

            // Nothing required

        end
        else begin

            if (wrdata_valid &&
                write_pending &&
                (dram_lp_state == LP_NORMAL)) begin

                write_data_pending <= wrdata;
                write_mask_pending <= wrdata_mask;

                $display(
                    "[%0t] DRAM_BFM: WRDATA CAPTURED "
                    "DATA=%h MASK=%h",
                    $time,
                    wrdata,
                    wrdata_mask
                );

            end
        end

    end

    // ============================================================
    // Low-power consistency checker
    //
    // Entry/exit signals are the state-control interface.
    // ============================================================
    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        if (!sys_rst_n) begin

            // No error assignment here.
            // error has only one procedural driver.

        end
        else begin

            // -----------------------------------------------
            // Check conflicting entry requests
            // -----------------------------------------------
            if ((dram_pd_entry + dram_sr_entry + dram_ds_entry) > 1) begin

                $display(
                    "[%0t] DRAM_BFM ERROR: Multiple LP ENTRY "
                    "requests asserted simultaneously",
                    $time
                );

            end

            // -----------------------------------------------
            // Check conflicting exit requests
            // -----------------------------------------------
            if ((dram_pd_exit + dram_sr_exit + dram_ds_exit) > 1) begin

                $display(
                    "[%0t] DRAM_BFM ERROR: Multiple LP EXIT "
                    "requests asserted simultaneously",
                    $time
                );

            end

            // -----------------------------------------------
            // Illegal entry from another LP state
            // -----------------------------------------------
            if (dram_lp_state != LP_NORMAL) begin

                if (dram_pd_entry ||
                    dram_sr_entry ||
                    dram_ds_entry) begin

                    $display(
                        "[%0t] DRAM_BFM WARNING: LP ENTRY requested "
                        "while already in LP state=%0d",
                        $time,
                        dram_lp_state
                    );

                end

            end

        end

    end

endmodule
