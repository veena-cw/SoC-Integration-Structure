`timescale 1ns/1ps

module lpddr5c_dram_bfm #(
    parameter int DATA_WIDTH    = 64,
    parameter int ADDR_WIDTH    = 32,
    parameter int ROW_WIDTH     = 16,
    parameter int COL_WIDTH     = 10,
    parameter int BANK_WIDTH    = 3,
    parameter int CMD_ID_WIDTH  = 8,
    parameter int MEM_DEPTH     = 65536,
    parameter int READ_LATENCY  = 8,

    // ------------------------------------------------------------
    // Number of bank groups.
    // IMPORTANT:
    // Change this to match the bank-group mapping in your RTL.
    // ------------------------------------------------------------
    parameter int BANK_GROUPS = 2,

    // ------------------------------------------------------------
    // Command encodings
    //
    // IMPORTANT:
    // These MUST match your LPDDR5C command scheduler.
    // ------------------------------------------------------------
    parameter logic [3:0] CMD_ACT      = 4'h0,
    parameter logic [3:0] CMD_PRE      = 4'h1,
    parameter logic [3:0] CMD_PREA     = 4'h2,
    parameter logic [3:0] CMD_RD       = 4'h3,
    parameter logic [3:0] CMD_WR       = 4'h4,
    parameter logic [3:0] CMD_REF      = 4'h5,
    parameter logic [3:0] CMD_MRW      = 4'h6,
    parameter logic [3:0] CMD_MRR      = 4'h7,
    parameter logic [3:0] CMD_SREF_ENT = 4'h8,
    parameter logic [3:0] CMD_SREF_EXIT= 4'h9,
    parameter logic [3:0] CMD_PD_ENT   = 4'hA,
    parameter logic [3:0] CMD_PD_EXIT  = 4'hB
)(
    input  wire                         clk,
    input  wire                         rst_n,

    // ------------------------------------------------------------
    // Command interface
    // ------------------------------------------------------------
    input  wire [ADDR_WIDTH-1:0]        cmd_addr,
    input  wire [3:0]                   cmd_type,
    input  wire                         cmd_valid,
    output wire                         cmd_ready,
    input  wire [CMD_ID_WIDTH-1:0]      cmd_id,

    // ------------------------------------------------------------
    // Write data interface
    // ------------------------------------------------------------
    input  wire [DATA_WIDTH-1:0]        wrdata,
    input  wire [(DATA_WIDTH/8)-1:0]    wrdata_mask,
    input  wire                         wrdata_valid,
    output reg                          wrdata_ready,

    // ------------------------------------------------------------
    // Read data interface
    // ------------------------------------------------------------
    output reg [DATA_WIDTH-1:0]         rddata,
    output reg                          rddata_valid,
    output reg [CMD_ID_WIDTH-1:0]       rddata_id,

    // ------------------------------------------------------------
    // Timing configuration
    //
    // timing_params:
    //
    // [7:0]   tRCD
    // [15:8]  tRP
    // [23:16] tRAS
    // [31:24] tRC
    // ------------------------------------------------------------
    input wire [31:0]                   timing_params,

    // ------------------------------------------------------------
    // Optional status
    // ------------------------------------------------------------
    output reg                          busy,
    output reg                          error
);

    // ============================================================
    // Basic constants
    // ============================================================

    localparam int NUM_BANKS =
                    (1 << BANK_WIDTH);

    localparam int BANKS_PER_GROUP =
                    NUM_BANKS / BANK_GROUPS;

    localparam int BYTES_PER_WORD =
                    DATA_WIDTH / 8;


    // ============================================================
    // Timing parameters
    // All values are CLOCK CYCLES
    // ============================================================

    wire [7:0] tRCD;
    wire [7:0] tRP;
    wire [7:0] tRAS;
    wire [7:0] tRC;

    wire [7:0] tRRD_L;
    wire [7:0] tRRD_S;

    wire [7:0] tCCD_L;
    wire [7:0] tCCD_S;

    wire [7:0] tWTR_L;
    wire [7:0] tWTR_S;

    wire [7:0] tRTRS;

    wire [7:0] tFAW;

    wire [7:0] tRTP;

    wire [7:0] tWR;
    wire [7:0] tWRS;

    wire [7:0] tXSR;
    wire [7:0] tXP;


    assign tRCD = timing_params[7:0];

    assign tRP  = timing_params[15:8];

    assign tRAS = timing_params[23:16];

    assign tRC  = timing_params[31:24];


    // ------------------------------------------------------------
    // Defaults from your scheduler
    // ------------------------------------------------------------

    assign tRRD_L = 8'd4;
    assign tRRD_S = 8'd2;

    assign tCCD_L = 8'd4;
    assign tCCD_S = 8'd2;

    assign tWTR_L = 8'd10;
    assign tWTR_S = 8'd4;

    assign tRTRS  = 8'd0;

    assign tFAW   = 8'd16;

    assign tRTP   = 8'd8;

    assign tWR    = 8'd16;

    assign tWRS   = 8'd16;

    assign tXSR   = 8'd100;

    assign tXP    = 8'd8;


    // ============================================================
    // Memory
    // ============================================================

    logic [DATA_WIDTH-1:0] memory [0:MEM_DEPTH-1];


    // ============================================================
    // Bank state
    // ============================================================

    logic bank_open [0:NUM_BANKS-1];

    logic [ROW_WIDTH-1:0]
        open_row [0:NUM_BANKS-1];


    // ============================================================
    // Cycle counter
    // ============================================================

    longint unsigned cycle_count;


    always @(posedge clk or negedge rst_n) begin

        if (!rst_n)
            cycle_count <= 0;

        else
            cycle_count <= cycle_count + 1;

    end


    // ============================================================
    // Timing history
    // ============================================================

    // ------------------------------------------------------------
    // ACT history per bank
    // ------------------------------------------------------------

    longint unsigned last_act_cycle
        [0:NUM_BANKS-1];

    logic act_valid
        [0:NUM_BANKS-1];


    // ------------------------------------------------------------
    // PRE history per bank
    // ------------------------------------------------------------

    longint unsigned last_pre_cycle
        [0:NUM_BANKS-1];

    logic pre_valid
        [0:NUM_BANKS-1];


    // ------------------------------------------------------------
    // Last column command
    // ------------------------------------------------------------

    longint unsigned last_col_cycle;

    integer last_col_bank;

    logic last_col_valid;


    // ------------------------------------------------------------
    // Last READ
    // ------------------------------------------------------------

    longint unsigned last_read_cycle;

    integer last_read_bank;

    logic last_read_valid;


    // ------------------------------------------------------------
    // Last WRITE
    // ------------------------------------------------------------

    longint unsigned last_write_cycle;

    integer last_write_bank;

    logic last_write_valid;


    // ------------------------------------------------------------
    // Last WRITE per bank
    // ------------------------------------------------------------

    longint unsigned last_write_bank_cycle
        [0:NUM_BANKS-1];

    logic write_bank_valid
        [0:NUM_BANKS-1];


    // ------------------------------------------------------------
    // Last READ per bank
    // ------------------------------------------------------------

    longint unsigned last_read_bank_cycle
        [0:NUM_BANKS-1];

    logic read_bank_valid
        [0:NUM_BANKS-1];


    // ------------------------------------------------------------
    // Self-refresh exit history
    // ------------------------------------------------------------

    longint unsigned self_refresh_exit_cycle;

    logic self_refresh_exit_valid;


    // ------------------------------------------------------------
    // Power-down exit history
    // ------------------------------------------------------------

    longint unsigned power_down_exit_cycle;

    logic power_down_exit_valid;


    // ------------------------------------------------------------
    // Four Activate Window history
    // ------------------------------------------------------------

    longint unsigned act_history [0:3];

    logic act_history_valid [0:3];


    // ============================================================
    // Operating state
    // ============================================================

    logic self_refresh_active;

    logic power_down_active;


    // ============================================================
    // Read pipeline
    // ============================================================

    typedef struct {

        logic                       valid;

        logic [DATA_WIDTH-1:0]      data;

        logic [CMD_ID_WIDTH-1:0]    id;

        integer                     delay;

    } read_pending_t;


    read_pending_t read_pending;


    // ============================================================
    // Command ready
    // ============================================================

    assign cmd_ready =
            rst_n &&
            !self_refresh_active &&
            !power_down_active;


    // ============================================================
    // Address decoding
    // ============================================================

    function automatic integer get_bank(
        input logic [ADDR_WIDTH-1:0] addr
    );

        begin

            get_bank =
                addr[
                    COL_WIDTH + BANK_WIDTH - 1 :
                    COL_WIDTH
                ];

        end

    endfunction


    function automatic integer get_bank_group(
        input integer bank
    );

        begin

            get_bank_group =
                bank / BANKS_PER_GROUP;

        end

    endfunction


    function automatic logic [ROW_WIDTH-1:0] get_row(
        input logic [ADDR_WIDTH-1:0] addr
    );

        begin

            get_row =
                addr[
                    COL_WIDTH +
                    BANK_WIDTH +
                    ROW_WIDTH - 1 :

                    COL_WIDTH +
                    BANK_WIDTH
                ];

        end

    endfunction


    function automatic integer get_col(
        input logic [ADDR_WIDTH-1:0] addr
    );

        begin

            get_col =
                addr[COL_WIDTH-1:0];

        end

    endfunction


    // ============================================================
    // Memory index
    //
    // Simplified memory mapping:
    //
    //       ROW -> BANK -> COLUMN
    //
    // Since MEM_DEPTH is only 65536, modulo is used.
    // ============================================================

    function automatic integer get_mem_index(
        input logic [ADDR_WIDTH-1:0] addr
    );

        logic [ROW_WIDTH-1:0] row;
        logic [COL_WIDTH-1:0] col;
        logic [BANK_WIDTH-1:0] bank;

        integer index;

        begin

            col  = addr[COL_WIDTH-1:0];

            bank =
                addr[
                    COL_WIDTH + BANK_WIDTH - 1 :
                    COL_WIDTH
                ];

            row =
                addr[
                    COL_WIDTH +
                    BANK_WIDTH +
                    ROW_WIDTH - 1 :

                    COL_WIDTH +
                    BANK_WIDTH
                ];

            index =
                ((row * NUM_BANKS) + bank) *
                1024 +
                col;

            index =
                index % MEM_DEPTH;

            get_mem_index = index;

        end

    endfunction


    // ============================================================
    // Generic timing check
    // ============================================================

    task automatic check_timing(
        input string timing_name,
        input longint unsigned last_cycle,
        input integer required_cycles
    );

        longint unsigned elapsed_cycles;

        begin

            elapsed_cycles =
                cycle_count - last_cycle;

            if (elapsed_cycles < required_cycles) begin

                $error(
                    "[DRAM][TIMING] %s violation: ",
                    timing_name
                );

                $error(
                    "elapsed=%0d cycles required=%0d cycles current=%0d",
                    elapsed_cycles,
                    required_cycles,
                    cycle_count
                );

                error <= 1'b1;

            end

        end

    endtask


    // ============================================================
    // Check ACT -> RD/WR
    // tRCD
    // ============================================================

    task automatic check_tRCD(
        input integer bank
    );

        begin

            if (act_valid[bank]) begin

                check_timing(
                    "tRCD ACT->RD/WR",
                    last_act_cycle[bank],
                    tRCD
                );

            end

        end

    endtask


    // ============================================================
    // Check ACT -> PRE
    // tRAS
    // ============================================================

    task automatic check_tRAS(
        input integer bank
    );

        begin

            if (act_valid[bank]) begin

                check_timing(
                    "tRAS ACT->PRE",
                    last_act_cycle[bank],
                    tRAS
                );

            end

        end

    endtask


    // ============================================================
    // Check PRE -> ACT
    // tRP
    // ============================================================

    task automatic check_tRP(
        input integer bank
    );

        begin

            if (pre_valid[bank]) begin

                check_timing(
                    "tRP PRE->ACT",
                    last_pre_cycle[bank],
                    tRP
                );

            end

        end

    endtask


    // ============================================================
    // Check ACT -> ACT same bank
    // tRC
    // ============================================================

    task automatic check_tRC(
        input integer bank
    );

        begin

            if (act_valid[bank]) begin

                check_timing(
                    "tRC ACT->ACT same bank",
                    last_act_cycle[bank],
                    tRC
                );

            end

        end

    endtask


    // ============================================================
    // Check ACT -> ACT bank group
    //
    // same BG     -> tRRD_L
    // different BG -> tRRD_S
    // ============================================================

    task automatic check_tRRD(
        input integer bank
    );

        integer i;
        integer current_bg;
        integer previous_bg;

        begin

            current_bg =
                get_bank_group(bank);

            for (i = 0; i < NUM_BANKS; i = i + 1) begin

                if (act_valid[i] && i != bank) begin

                    previous_bg =
                        get_bank_group(i);

                    if (current_bg == previous_bg) begin

                        check_timing(
                            "tRRD_L ACT->ACT same BG",
                            last_act_cycle[i],
                            tRRD_L
                        );

                    end

                    else begin

                        check_timing(
                            "tRRD_S ACT->ACT different BG",
                            last_act_cycle[i],
                            tRRD_S
                        );

                    end

                end

            end

        end

    endtask


    // ============================================================
    // Check column -> column
    //
    // same BG     -> tCCD_L
    // different BG -> tCCD_S
    // ============================================================

    task automatic check_tCCD(
        input integer bank
    );

        integer current_bg;
        integer previous_bg;

        begin

            if (last_col_valid) begin

                current_bg =
                    get_bank_group(bank);

                previous_bg =
                    get_bank_group(last_col_bank);

                if (current_bg == previous_bg) begin

                    check_timing(
                        "tCCD_L column->column same BG",
                        last_col_cycle,
                        tCCD_L
                    );

                end

                else begin

                    check_timing(
                        "tCCD_S column->column different BG",
                        last_col_cycle,
                        tCCD_S
                    );

                end

            end

        end

    endtask


    // ============================================================
    // Check WRITE -> READ
    //
    // same BG     -> tWTR_L
    // different BG -> tWTR_S
    // ============================================================

    task automatic check_tWTR(
        input integer read_bank
    );

        integer read_bg;
        integer write_bg;

        begin

            if (last_write_valid) begin

                read_bg =
                    get_bank_group(read_bank);

                write_bg =
                    get_bank_group(last_write_bank);

                if (read_bg == write_bg) begin

                    check_timing(
                        "tWTR_L WRITE->READ same BG",
                        last_write_cycle,
                        tWTR_L
                    );

                end

                else begin

                    check_timing(
                        "tWTR_S WRITE->READ different BG",
                        last_write_cycle,
                        tWTR_S
                    );

                end

            end

        end

    endtask


    // ============================================================
    // Check READ -> READ
    //
    // tRTRS is included for completeness.
    // This simplified BFM has one rank.
    // ============================================================

    task automatic check_tRTRS;

        begin

            if (last_read_valid) begin

                check_timing(
                    "tRTRS READ->READ",
                    last_read_cycle,
                    tRTRS
                );

            end

        end

    endtask


    // ============================================================
    // Check READ -> PRE
    //
    // tRTP
    // ============================================================

    task automatic check_tRTP(
        input integer bank
    );

        begin

            if (read_bank_valid[bank]) begin

                check_timing(
                    "tRTP READ->PRE",
                    last_read_bank_cycle[bank],
                    tRTP
                );

            end

        end

    endtask


    // ============================================================
    // Check WRITE -> PRE
    //
    // tWR
    // ============================================================

    task automatic check_tWR(
        input integer bank
    );

        begin

            if (write_bank_valid[bank]) begin

                check_timing(
                    "tWR WRITE->PRE",
                    last_write_bank_cycle[bank],
                    tWR
                );

            end

        end

    endtask


    // ============================================================
    // Check tWRS
    //
    // Write recovery for same bank.
    // ============================================================

    task automatic check_tWRS(
        input integer bank
    );

        begin

            if (write_bank_valid[bank]) begin

                check_timing(
                    "tWRS WRITE recovery same bank",
                    last_write_bank_cycle[bank],
                    tWRS
                );

            end

        end

    endtask


    // ============================================================
    // Check Four Activate Window
    //
    // No more than four ACTIVATEs within tFAW cycles.
    // ============================================================

    task automatic check_tFAW;

        integer i;
        integer count;

        begin

            count = 0;

            for (i = 0; i < 4; i = i + 1) begin

                if (act_history_valid[i]) begin

                    if ((cycle_count - act_history[i]) < tFAW)
                        count = count + 1;

                end

            end

            if (count >= 4) begin

                $error(
                    "[DRAM][TIMING] tFAW violation: "
                    "4 ACT commands occurred within %0d cycles",
                    tFAW
                );

                error <= 1'b1;

            end

        end

    endtask


    // ============================================================
    // Record ACT
    // ============================================================

    task automatic record_act(
        input integer bank
    );

        integer i;

        begin

            last_act_cycle[bank] =
                cycle_count;

            act_valid[bank] =
                1'b1;

            // Shift ACT history

            for (i = 3; i > 0; i = i - 1) begin

                act_history[i] =
                    act_history[i-1];

                act_history_valid[i] =
                    act_history_valid[i-1];

            end

            act_history[0] =
                cycle_count;

            act_history_valid[0] =
                1'b1;

        end

    endtask


    // ============================================================
    // Record PRE
    // ============================================================

    task automatic record_pre(
        input integer bank
    );

        begin

            last_pre_cycle[bank] =
                cycle_count;

            pre_valid[bank] =
                1'b1;

        end

    endtask


    // ============================================================
    // ACTIVATE
    // ============================================================

    task automatic do_activate;

        integer bank;

        logic [ROW_WIDTH-1:0] row;

        begin

            bank =
                get_bank(cmd_addr);

            row =
                get_row(cmd_addr);

            // -----------------------------------------------
            // Timing checks
            // -----------------------------------------------

            check_tRP(bank);

            check_tRC(bank);

            check_tRRD(bank);

            check_tFAW();

            // -----------------------------------------------
            // Functional operation
            // -----------------------------------------------

            bank_open[bank] =
                1'b1;

            open_row[bank] =
                row;

            record_act(bank);

            $display(
                "[DRAM] ACT bank=%0d row=%0h cycle=%0d",
                bank,
                row,
                cycle_count
            );

        end

    endtask


    // ============================================================
    // PRECHARGE
    // ============================================================

    task automatic do_precharge;

        integer bank;

        begin

            bank =
                get_bank(cmd_addr);

            // -----------------------------------------------
            // Timing checks
            // -----------------------------------------------

            if (bank_open[bank]) begin

                check_tRAS(bank);

            end

            check_tRTP(bank);

            check_tWR(bank);

            check_tWRS(bank);

            // -----------------------------------------------
            // Functional operation
            // -----------------------------------------------

            bank_open[bank] =
                1'b0;

            record_pre(bank);

            $display(
                "[DRAM] PRE bank=%0d cycle=%0d",
                bank,
                cycle_count
            );

        end

    endtask


    // ============================================================
    // PRECHARGE ALL
    // ============================================================

    task automatic do_precharge_all;

        integer b;

        begin

            for (b = 0; b < NUM_BANKS; b = b + 1) begin

                if (bank_open[b]) begin

                    check_tRAS(b);

                end

                bank_open[b] =
                    1'b0;

                record_pre(b);

            end

            $display(
                "[DRAM] PRECHARGE ALL cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // WRITE
    // ============================================================

    task automatic do_write;

        integer bank;
        integer mem_index;
        integer b;

        begin

            bank =
                get_bank(cmd_addr);

            // -----------------------------------------------
            // Timing checks
            // -----------------------------------------------

            check_tRCD(bank);

            check_tCCD(bank);

            // -----------------------------------------------
            // Check bank state
            // -----------------------------------------------

            if (!bank_open[bank]) begin

                $warning(
                    "[DRAM] WRITE to closed bank=%0d cycle=%0d",
                    bank,
                    cycle_count
                );

            end

            // -----------------------------------------------
            // Write data
            // -----------------------------------------------

            if (wrdata_valid) begin

                mem_index =
                    get_mem_index(cmd_addr);

                if (mem_index < MEM_DEPTH) begin

                    for (b = 0;
                         b < BYTES_PER_WORD;
                         b = b + 1) begin

                        // mask = 0 -> write byte
                        // mask = 1 -> preserve byte

                        if (!wrdata_mask[b]) begin

                            memory[mem_index]
                                [b*8 +: 8] =
                                wrdata
                                [b*8 +: 8];

                        end

                    end

                    $display(
                        "[DRAM] WRITE "
                        "addr=%0h "
                        "bank=%0d "
                        "index=%0d "
                        "data=%0h "
                        "mask=%0h "
                        "cycle=%0d",

                        cmd_addr,
                        bank,
                        mem_index,
                        wrdata,
                        wrdata_mask,
                        cycle_count
                    );

                end

            end

            else begin

                $warning(
                    "[DRAM] WRITE without valid data "
                    "cycle=%0d",
                    cycle_count
                );

            end

            // -----------------------------------------------
            // Record write timing
            // -----------------------------------------------

            last_write_cycle =
                cycle_count;

            last_write_bank =
                bank;

            last_write_valid =
                1'b1;

            last_write_bank_cycle[bank] =
                cycle_count;

            write_bank_valid[bank] =
                1'b1;

            last_col_cycle =
                cycle_count;

            last_col_bank =
                bank;

            last_col_valid =
                1'b1;

        end

    endtask


    // ============================================================
    // READ
    // ============================================================

    task automatic do_read;

        integer bank;
        integer mem_index;

        begin

            bank =
                get_bank(cmd_addr);

            // -----------------------------------------------
            // Timing checks
            // -----------------------------------------------

            check_tRCD(bank);

            check_tCCD(bank);

            check_tWTR(bank);

            check_tRTRS();

            // -----------------------------------------------
            // Check bank state
            // -----------------------------------------------

            if (!bank_open[bank]) begin

                $warning(
                    "[DRAM] READ to closed bank=%0d cycle=%0d",
                    bank,
                    cycle_count
                );

            end

            // -----------------------------------------------
            // Get memory location
            // -----------------------------------------------

            mem_index =
                get_mem_index(cmd_addr);

            if (mem_index < MEM_DEPTH) begin

                read_pending.valid =
                    1'b1;

                read_pending.data =
                    memory[mem_index];

                read_pending.id =
                    cmd_id;

                read_pending.delay =
                    READ_LATENCY;

                $display(
                    "[DRAM] READ "
                    "addr=%0h "
                    "bank=%0d "
                    "index=%0d "
                    "data=%0h "
                    "id=%0d "
                    "cycle=%0d",

                    cmd_addr,
                    bank,
                    mem_index,
                    memory[mem_index],
                    cmd_id,
                    cycle_count
                );

            end

            // -----------------------------------------------
            // Record read timing
            // -----------------------------------------------

            last_read_cycle =
                cycle_count;

            last_read_bank =
                bank;

            last_read_valid =
                1'b1;

            last_read_bank_cycle[bank] =
                cycle_count;

            read_bank_valid[bank] =
                1'b1;

            last_col_cycle =
                cycle_count;

            last_col_bank =
                bank;

            last_col_valid =
                1'b1;

        end

    endtask


    // ============================================================
    // REFRESH
    // ============================================================

    task automatic do_refresh;

        integer b;

        begin

            // Simplified DRAM behavior:
            // refresh closes all banks.

            for (b = 0;
                 b < NUM_BANKS;
                 b = b + 1) begin

                bank_open[b] =
                    1'b0;

            end

            $display(
                "[DRAM] REFRESH cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // MODE REGISTER WRITE
    // ============================================================

    task automatic do_mrw;

        begin

            $display(
                "[DRAM] MRW addr=%0h data=%0h cycle=%0d",
                cmd_addr,
                wrdata,
                cycle_count
            );

        end

    endtask


    // ============================================================
    // MODE REGISTER READ
    // ============================================================

    task automatic do_mrr;

        begin

            // Simplified model.
            // Return zero unless you add MR storage.

            read_pending.valid =
                1'b1;

            read_pending.data =
                '0;

            read_pending.id =
                cmd_id;

            read_pending.delay =
                READ_LATENCY;

            $display(
                "[DRAM] MRR addr=%0h cycle=%0d",
                cmd_addr,
                cycle_count
            );

        end

    endtask


    // ============================================================
    // SELF REFRESH ENTRY
    // ============================================================

    task automatic do_self_refresh_entry;

        begin

            self_refresh_active =
                1'b1;

            $display(
                "[DRAM] SELF-REFRESH ENTRY cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // SELF REFRESH EXIT
    // ============================================================

    task automatic do_self_refresh_exit;

        begin

            self_refresh_active =
                1'b0;

            self_refresh_exit_cycle =
                cycle_count;

            self_refresh_exit_valid =
                1'b1;

            $display(
                "[DRAM] SELF-REFRESH EXIT cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // POWER DOWN ENTRY
    // ============================================================

    task automatic do_power_down_entry;

        begin

            power_down_active =
                1'b1;

            $display(
                "[DRAM] POWER-DOWN ENTRY cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // POWER DOWN EXIT
    // ============================================================

    task automatic do_power_down_exit;

        begin

            power_down_active =
                1'b0;

            power_down_exit_cycle =
                cycle_count;

            power_down_exit_valid =
                1'b1;

            $display(
                "[DRAM] POWER-DOWN EXIT cycle=%0d",
                cycle_count
            );

        end

    endtask


    // ============================================================
    // Check exit timing
    //
    // tXSR / tXP
    // ============================================================

    task automatic check_exit_timing;

        begin

            if (self_refresh_exit_valid) begin

                check_timing(
                    "tXSR Self-refresh exit->command",
                    self_refresh_exit_cycle,
                    tXSR
                );

            end

            if (power_down_exit_valid) begin

                check_timing(
                    "tXP Power-down exit->command",
                    power_down_exit_cycle,
                    tXP
                );

            end

        end

    endtask


    // ============================================================
    // Command processing
    // ============================================================

    always @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin

            busy <= 1'b0;

            error <= 1'b0;

            rddata <= '0;

            rddata_valid <= 1'b0;

            rddata_id <= '0;

            wrdata_ready <= 1'b1;

            read_pending.valid <= 1'b0;

            read_pending.data <= '0;

            read_pending.id <= '0;

            read_pending.delay <= 0;

            self_refresh_active <= 1'b0;

            power_down_active <= 1'b0;

            self_refresh_exit_cycle <= 0;

            self_refresh_exit_valid <= 1'b0;

            power_down_exit_cycle <= 0;

            power_down_exit_valid <= 1'b0;

        end

        else begin

            // ------------------------------------------------
            // Default outputs
            // ------------------------------------------------

            rddata_valid <= 1'b0;

            wrdata_ready <= 1'b1;


            // ------------------------------------------------
            // Read latency pipeline
            // ------------------------------------------------

            if (read_pending.valid) begin

                if (read_pending.delay > 0) begin

                    read_pending.delay <=
                        read_pending.delay - 1;

                end

                else begin

                    rddata <=
                        read_pending.data;

                    rddata_id <=
                        read_pending.id;

                    rddata_valid <=
                        1'b1;

                    read_pending.valid <=
                        1'b0;

                    $display(
                        "[DRAM] READ DATA "
                        "data=%0h "
                        "id=%0d "
                        "cycle=%0d",

                        read_pending.data,
                        read_pending.id,
                        cycle_count
                    );

                end

            end


            // ------------------------------------------------
            // Command acceptance
            // ------------------------------------------------

            if (cmd_valid && cmd_ready) begin

                busy <= 1'b1;

                // Check self-refresh / power-down exit timing
                check_exit_timing();


                case (cmd_type)

                    // ========================================
                    // ACTIVATE
                    // ========================================

                    CMD_ACT: begin

                        do_activate();

                    end


                    // ========================================
                    // PRECHARGE
                    // ========================================

                    CMD_PRE: begin

                        do_precharge();

                    end


                    // ========================================
                    // PRECHARGE ALL
                    // ========================================

                    CMD_PREA: begin

                        do_precharge_all();

                    end


                    // ========================================
                    // READ
                    // ========================================

                    CMD_RD: begin

                        do_read();

                    end


                    // ========================================
                    // WRITE
                    // ========================================

                    CMD_WR: begin

                        do_write();

                    end


                    // ========================================
                    // REFRESH
                    // ========================================

                    CMD_REF: begin

                        do_refresh();

                    end


                    // ========================================
                    // MODE REGISTER WRITE
                    // ========================================

                    CMD_MRW: begin

                        do_mrw();

                    end


                    // ========================================
                    // MODE REGISTER READ
                    // ========================================

                    CMD_MRR: begin

                        do_mrr();

                    end


                    // ========================================
                    // SELF REFRESH ENTRY
                    // ========================================

                    CMD_SREF_ENT: begin

                        do_self_refresh_entry();

                    end


                    // ========================================
                    // SELF REFRESH EXIT
                    // ========================================

                    CMD_SREF_EXIT: begin

                        do_self_refresh_exit();

                    end


                    // ========================================
                    // POWER DOWN ENTRY
                    // ========================================

                    CMD_PD_ENT: begin

                        do_power_down_entry();

                    end


                    // ========================================
                    // POWER DOWN EXIT
                    // ========================================

                    CMD_PD_EXIT: begin

                        do_power_down_exit();

                    end


                    // ========================================
                    // UNKNOWN COMMAND
                    // ========================================

                    default: begin

                        $error(
                            "[DRAM] Unknown command "
                            "cmd_type=%0h cycle=%0d",

                            cmd_type,
                            cycle_count
                        );

                        error <= 1'b1;

                    end

                endcase

                busy <= 1'b0;

            end

        end

    end


    // ============================================================
    // Memory initialization
    // ============================================================

    integer mem_i;

    initial begin

        for (mem_i = 0;
             mem_i < MEM_DEPTH;
             mem_i = mem_i + 1) begin

            memory[mem_i] =
                '0;

        end

    end


    // ============================================================
    // Initial state
    // ============================================================

    integer init_bank;

    initial begin

        for (init_bank = 0;
             init_bank < NUM_BANKS;
             init_bank = init_bank + 1) begin

            bank_open[init_bank] =
                1'b0;

            open_row[init_bank] =
                '0;

            last_act_cycle[init_bank] =
                0;

            act_valid[init_bank] =
                1'b0;

            last_pre_cycle[init_bank] =
                0;

            pre_valid[init_bank] =
                1'b0;

            last_write_bank_cycle[init_bank] =
                0;

            write_bank_valid[init_bank] =
                1'b0;

            last_read_bank_cycle[init_bank] =
                0;

            read_bank_valid[init_bank] =
                1'b0;

        end


        last_col_cycle =
            0;

        last_col_bank =
            0;

        last_col_valid =
            1'b0;


        last_read_cycle =
            0;

        last_read_bank =
            0;

        last_read_valid =
            1'b0;


        last_write_cycle =
            0;

        last_write_bank =
            0;

        last_write_valid =
            1'b0;


        for (init_bank = 0;
             init_bank < 4;
             init_bank = init_bank + 1) begin

            act_history[init_bank] =
                0;

            act_history_valid[init_bank] =
                1'b0;

        end

    end

endmodule
