/*===============================================================
 *
 * LPDDR5 DRAM Memory Model
 *
 * Receives commands from PHY BFM and performs:
 *
 *   ACTIVATE
 *   PRECHARGE
 *   READ
 *   WRITE
 *   REFRESH
 *   MRW
 *   MRR
 *   SELF REFRESH
 *   POWER DOWN
 *
 * Also provides:
 *
 *   Memory storage
 *   Read latency
 *   Write masking
 *
 *===============================================================*/

`timescale 1ns/1ps

module lpddr5_dram_model #(
    parameter int DATA_WIDTH   = 128,
    parameter int ADDR_WIDTH   = 32,
    parameter int ROW_WIDTH    = 16,
    parameter int COL_WIDTH    = 10,
    parameter int BANK_WIDTH   = 3,
    parameter int MEM_DEPTH    = 65536,
    parameter int READ_LATENCY = 8
)(
    input  logic                    sys_clk,
    input  logic                    sys_rst_n,

    //============================================================
    // Command interface from PHY BFM
    //============================================================

    input  logic                    cmd_valid,
    input  logic [5:0]              cmd,
    input  logic [ADDR_WIDTH-1:0]   cmd_addr,

    //============================================================
    // Write data
    //============================================================

    input  logic                    wrdata_valid,
    input  logic [DATA_WIDTH-1:0]   wrdata,
    input  logic [DATA_WIDTH/8-1:0] wrdata_mask,

    //============================================================
    // Read response
    //============================================================

    output logic                    rddata_valid,
    output logic [DATA_WIDTH-1:0]   rddata,

    //============================================================
    // Status
    //============================================================

    output logic                    init_done,
    output logic                    training_done,
    output logic                    error
);

    //============================================================
    // LPDDR COMMAND ENCODINGS
    //============================================================

    localparam logic [5:0] CA_NOP  = 6'h00;
    localparam logic [5:0] CA_RD   = 6'h01;
    localparam logic [5:0] CA_WR   = 6'h02;
    localparam logic [5:0] CA_ACT  = 6'h03;
    localparam logic [5:0] CA_PRE  = 6'h04;
    localparam logic [5:0] CA_PREA = 6'h05;
    localparam logic [5:0] CA_REF  = 6'h06;
    localparam logic [5:0] CA_MRW  = 6'h07;
    localparam logic [5:0] CA_MRR  = 6'h08;
    localparam logic [5:0] CA_SRE  = 6'h09;
    localparam logic [5:0] CA_SRX  = 6'h0A;
    localparam logic [5:0] CA_PDE  = 6'h0B;
    localparam logic [5:0] CA_PDX  = 6'h0C;

    //============================================================
    // MEMORY
    //============================================================

    logic [DATA_WIDTH-1:0] memory [0:MEM_DEPTH-1];

    //============================================================
    // BANK STATE
    //============================================================

    localparam int NUM_BANKS = (1 << BANK_WIDTH);

    logic                  bank_open [0:NUM_BANKS-1];
    logic [ROW_WIDTH-1:0]  open_row  [0:NUM_BANKS-1];

    //============================================================
    // MODE REGISTERS
    //============================================================

    logic [7:0] mode_regs [0:255];

    //============================================================
    // POWER STATE
    //============================================================

    logic self_refresh;
    logic power_down;

    //============================================================
    // READ PIPELINE
    //
    // IMPORTANT:
    // read_pending is driven ONLY from the always_ff block.
    // Do NOT initialize it from an initial block.
    //============================================================

    typedef struct packed {
        logic                  valid;
        logic [DATA_WIDTH-1:0] data;
        integer                delay;
    } read_pending_t;

    read_pending_t read_pending;

    //============================================================
    // ADDRESS DECODING
    //============================================================

    function automatic integer get_mem_index(
        input logic [ADDR_WIDTH-1:0] addr
    );

        logic [ROW_WIDTH-1:0]  row;
        logic [COL_WIDTH-1:0]  col;
        logic [BANK_WIDTH-1:0] bank;

        begin

            col = addr[COL_WIDTH-1:0];

            bank = addr[
                COL_WIDTH + BANK_WIDTH - 1 :
                COL_WIDTH
            ];

            row = addr[
                COL_WIDTH + BANK_WIDTH + ROW_WIDTH - 1 :
                COL_WIDTH + BANK_WIDTH
            ];

            get_mem_index =
                ((row * NUM_BANKS) + bank) * 1024 + col;

            get_mem_index =
                get_mem_index % MEM_DEPTH;

        end

    endfunction

    //============================================================
    // INITIAL MEMORY / BANK / MR INITIALIZATION
    //
    // IMPORTANT:
    // read_pending is NOT initialized here.
    // It is initialized by reset in always_ff.
    //============================================================

    integer i;

    initial begin

        //---------------------------------------------------------
        // Initialize memory
        //---------------------------------------------------------

        for (i = 0; i < MEM_DEPTH; i = i + 1)
            memory[i] = '0;

        //---------------------------------------------------------
        // Initialize bank state
        //---------------------------------------------------------

        for (i = 0; i < NUM_BANKS; i = i + 1) begin

            bank_open[i] = 1'b0;
            open_row[i]  = '0;

        end

        //---------------------------------------------------------
        // Initialize mode registers
        //---------------------------------------------------------

        for (i = 0; i < 256; i = i + 1)
            mode_regs[i] = 8'h00;

        //---------------------------------------------------------
        // Status
        //---------------------------------------------------------

        init_done     = 1'b1;
        training_done = 1'b0;

    end

    //============================================================
    // TEMPORARY VARIABLES
    //============================================================

    integer mem_index;
    integer bank_index;
    integer b;

    logic [ROW_WIDTH-1:0] row_addr;

    //============================================================
    // MAIN DRAM MODEL
    //============================================================

    always_ff @(posedge sys_clk or negedge sys_rst_n) begin

        //========================================================
        // RESET
        //========================================================

        if (!sys_rst_n) begin

            //-----------------------------------------------------
            // Read response
            //-----------------------------------------------------

            rddata       <= '0;
            rddata_valid <= 1'b0;

            //-----------------------------------------------------
            // Power state
            //-----------------------------------------------------

            self_refresh <= 1'b0;
            power_down   <= 1'b0;

            //-----------------------------------------------------
            // Error
            //-----------------------------------------------------

            error <= 1'b0;

            //-----------------------------------------------------
            // Read pipeline
            //
            // IMPORTANT:
            // Entire structure is reset from this one process.
            //-----------------------------------------------------

            read_pending <= '0;

        end

        //========================================================
        // NORMAL OPERATION
        //========================================================

        else begin

            //-----------------------------------------------------
            // Default read valid to zero.
            //
            // It becomes one only for the cycle where read data
            // is returned.
            //-----------------------------------------------------

            rddata_valid <= 1'b0;

            //====================================================
            // READ RESPONSE PIPELINE
            //====================================================

            if (read_pending.valid) begin

                //-------------------------------------------------
                // Still waiting for read latency
                //-------------------------------------------------

                if (read_pending.delay > 0) begin

                    read_pending.delay <=
                        read_pending.delay - 1;

                end

                //-------------------------------------------------
                // Read latency complete
                //-------------------------------------------------

                else begin

                    rddata <= read_pending.data;

                    rddata_valid <= 1'b1;

                    read_pending.valid <= 1'b0;

                    $display(
                        "[DRAM] READ DATA RETURNED data=%0h time=%0t",
                        read_pending.data,
                        $time
                    );

                end

            end

            //====================================================
            // COMMAND PROCESSING
            //====================================================

            if (cmd_valid) begin

                case (cmd)

                    //================================================
                    // NOP
                    //================================================

                    CA_NOP: begin

                        // Nothing to do

                    end


                    //================================================
                    // ACTIVATE
                    //================================================

                    CA_ACT: begin

                        bank_index =
                            cmd_addr[
                                COL_WIDTH + BANK_WIDTH - 1 :
                                COL_WIDTH
                            ];

                        row_addr =
                            cmd_addr[
                                COL_WIDTH + BANK_WIDTH + ROW_WIDTH - 1 :
                                COL_WIDTH + BANK_WIDTH
                            ];

                        if (bank_index < NUM_BANKS) begin

                            bank_open[bank_index] = 1'b1;

                            open_row[bank_index] = row_addr;

                            $display(
                                "[DRAM] ACT bank=%0d row=%0h time=%0t",
                                bank_index,
                                row_addr,
                                $time
                            );

                        end
                        else begin

                            error <= 1'b1;

                            $display(
                                "[DRAM][ERROR] Invalid ACT bank=%0d time=%0t",
                                bank_index,
                                $time
                            );

                        end

                    end


                    //================================================
                    // PRECHARGE
                    //================================================

                    CA_PRE: begin

                        bank_index =
                            cmd_addr[
                                COL_WIDTH + BANK_WIDTH - 1 :
                                COL_WIDTH
                            ];

                        if (bank_index < NUM_BANKS) begin

                            bank_open[bank_index] = 1'b0;

                            $display(
                                "[DRAM] PRE bank=%0d time=%0t",
                                bank_index,
                                $time
                            );

                        end
                        else begin

                            error <= 1'b1;

                            $display(
                                "[DRAM][ERROR] Invalid PRE bank=%0d time=%0t",
                                bank_index,
                                $time
                            );

                        end

                    end


                    //================================================
                    // PRECHARGE ALL
                    //================================================

                    CA_PREA: begin

                        for (
                            bank_index = 0;
                            bank_index < NUM_BANKS;
                            bank_index = bank_index + 1
                        ) begin

                            bank_open[bank_index] = 1'b0;

                        end

                        $display(
                            "[DRAM] PRECHARGE ALL time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // WRITE
                    //================================================

                    CA_WR: begin

                        if (wrdata_valid) begin

                            mem_index =
                                get_mem_index(cmd_addr);

                            if (mem_index < MEM_DEPTH) begin

                                for (
                                    b = 0;
                                    b < DATA_WIDTH/8;
                                    b = b + 1
                                ) begin

                                    //------------------------------------------------
                                    // mask = 0 -> write byte
                                    // mask = 1 -> preserve existing byte
                                    //------------------------------------------------

                                    if (!wrdata_mask[b]) begin

                                        memory[mem_index]
                                            [b*8 +: 8] =
                                            wrdata[b*8 +: 8];

                                    end

                                end

                                $display(
                                    "[DRAM] WRITE addr=%0h data=%0h index=%0d time=%0t",
                                    cmd_addr,
                                    wrdata,
                                    mem_index,
                                    $time
                                );

                            end
                            else begin

                                error <= 1'b1;

                                $display(
                                    "[DRAM][ERROR] Invalid WRITE memory index=%0d time=%0t",
                                    mem_index,
                                    $time
                                );

                            end

                        end
                        else begin

                            $display(
                                "[DRAM][WARNING] WRITE without valid data time=%0t",
                                $time
                            );

                        end

                    end


                    //================================================
                    // READ
                    //================================================

                    CA_RD: begin

                        //------------------------------------------------
                        // Prevent overwriting an existing pending read
                        //------------------------------------------------

                        if (read_pending.valid) begin

                            error <= 1'b1;

                            $display(
                                "[DRAM][ERROR] READ requested while previous READ pending time=%0t",
                                $time
                            );

                        end
                        else begin

                            mem_index =
                                get_mem_index(cmd_addr);

                            if (mem_index < MEM_DEPTH) begin

                                //------------------------------------------------
                                // Capture memory data
                                //------------------------------------------------

                                read_pending.data <=
                                    memory[mem_index];

                                //------------------------------------------------
                                // Start latency counter
                                //------------------------------------------------

                                read_pending.delay <=
                                    READ_LATENCY;

                                //------------------------------------------------
                                // Mark read as pending
                                //------------------------------------------------

                                read_pending.valid <=
                                    1'b1;

                                $display(
                                    "[DRAM] READ accepted addr=%0h data=%0h index=%0d latency=%0d time=%0t",
                                    cmd_addr,
                                    memory[mem_index],
                                    mem_index,
                                    READ_LATENCY,
                                    $time
                                );

                            end
                            else begin

                                error <= 1'b1;

                                $display(
                                    "[DRAM][ERROR] Invalid READ memory index=%0d time=%0t",
                                    mem_index,
                                    $time
                                );

                            end

                        end

                    end


                    //================================================
                    // REFRESH
                    //================================================

                    CA_REF: begin

                        $display(
                            "[DRAM] REFRESH time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // MODE REGISTER WRITE
                    //================================================

                    CA_MRW: begin

                        mode_regs[cmd_addr[7:0]] <=
                            wrdata[7:0];

                        $display(
                            "[DRAM] MRW MR=%0h DATA=%0h time=%0t",
                            cmd_addr[7:0],
                            wrdata[7:0],
                            $time
                        );

                    end


                    //================================================
                    // MODE REGISTER READ
                    //================================================

                    CA_MRR: begin

                        if (read_pending.valid) begin

                            error <= 1'b1;

                            $display(
                                "[DRAM][ERROR] MRR requested while READ pending time=%0t",
                                $time
                            );

                        end
                        else begin

                            read_pending.data <= {
                                {(DATA_WIDTH-8){1'b0}},
                                mode_regs[cmd_addr[7:0]]
                            };

                            read_pending.delay <=
                                READ_LATENCY;

                            read_pending.valid <=
                                1'b1;

                            $display(
                                "[DRAM] MRR MR=%0h DATA=%0h latency=%0d time=%0t",
                                cmd_addr[7:0],
                                mode_regs[cmd_addr[7:0]],
                                READ_LATENCY,
                                $time
                            );

                        end

                    end


                    //================================================
                    // SELF REFRESH ENTRY
                    //================================================

                    CA_SRE: begin

                        self_refresh <= 1'b1;

                        $display(
                            "[DRAM] SELF REFRESH ENTER time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // SELF REFRESH EXIT
                    //================================================

                    CA_SRX: begin

                        self_refresh <= 1'b0;

                        $display(
                            "[DRAM] SELF REFRESH EXIT time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // POWER DOWN ENTRY
                    //================================================

                    CA_PDE: begin

                        power_down <= 1'b1;

                        $display(
                            "[DRAM] POWER DOWN ENTER time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // POWER DOWN EXIT
                    //================================================

                    CA_PDX: begin

                        power_down <= 1'b0;

                        $display(
                            "[DRAM] POWER DOWN EXIT time=%0t",
                            $time
                        );

                    end


                    //================================================
                    // UNKNOWN COMMAND
                    //================================================

                    default: begin

                        error <= 1'b1;

                        $display(
                            "[DRAM][ERROR] Unknown command %0h time=%0t",
                            cmd,
                            $time
                        );

                    end

                endcase

            end

        end

    end

endmodule
