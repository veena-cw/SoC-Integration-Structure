`timescale 1ns/1ps

module tb_lpddr5c_phy_dram;

    parameter DATA_WIDTH = 64;
    parameter ADDR_WIDTH = 32;

    // ============================================================
    // Clock / Reset
    // ============================================================

    logic clk;
    logic rst_n;

    initial begin
        clk = 1'b0;
        forever #5 clk = ~clk;
    end

    initial begin

        rst_n = 1'b0;

        repeat (10)
            @(posedge clk);

        rst_n = 1'b1;

    end

    // ============================================================
    // DFI signals
    // ============================================================

    logic                   dfi_cs_n;
    logic                   dfi_cke;

    logic [5:0]             dfi_ca;
    logic                   dfi_ca_valid;

    logic [ADDR_WIDTH-1:0]  dfi_cmd_addr;
    logic                   dfi_cmd_addr_valid;

    logic [DATA_WIDTH-1:0]  dfi_wrdata;
    logic [DATA_WIDTH/8-1:0] dfi_wrdata_mask;
    logic                   dfi_wrdata_en;

    logic [DATA_WIDTH-1:0]  dfi_rddata;
    logic                   dfi_rddata_valid;

    logic                   dfi_init_complete;

    logic                   dfi_phymstr_req;
    logic                   dfi_phymstr_ack;

    // ============================================================
    // PHY -> DRAM
    // ============================================================

    logic                   dram_cmd_valid;
    logic [5:0]             dram_cmd;
    logic [ADDR_WIDTH-1:0]  dram_cmd_addr;

    logic                   dram_wrdata_valid;
    logic [DATA_WIDTH-1:0]  dram_wrdata;
    logic [DATA_WIDTH/8-1:0] dram_wrdata_mask;

    logic [DATA_WIDTH-1:0]   dram_rddata;
    logic                    dram_rddata_valid;

    logic                    dram_init_done;
    logic                    dram_training_done;
    logic                    dram_error;

    // ============================================================
    // DUT
    // ============================================================

    lpddr5c_top #(
        .ADDR_WIDTH(ADDR_WIDTH),
        .DATA_WIDTH(128)
    ) dut (

        .clk(clk),
        .rst_n(rst_n)

        // Connect your actual AXI/APB/DFI ports here.
        // The exact port names should match your current
        // lpddr5c_top.sv.
    );

    // ============================================================
    // PHY BFM
    // ============================================================

    lpddr5_phy_bfm #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) phy_bfm (

        .clk(clk),
        .rst_n(rst_n),

        .dfi_cs_n(dfi_cs_n),
        .dfi_cke(dfi_cke),

        .dfi_ca(dfi_ca),
        .dfi_ca_valid(dfi_ca_valid),

        .dfi_cmd_addr(dfi_cmd_addr),
        .dfi_cmd_addr_valid(dfi_cmd_addr_valid),

        .dfi_wrdata(dfi_wrdata),
        .dfi_wrdata_mask(dfi_wrdata_mask),
        .dfi_wrdata_en(dfi_wrdata_en),

        .dfi_rddata(dfi_rddata),
        .dfi_rddata_valid(dfi_rddata_valid),

        .dfi_init_complete(dfi_init_complete),

        .dfi_phymstr_req(dfi_phymstr_req),
        .dfi_phymstr_ack(dfi_phymstr_ack),

        .dram_cmd_valid(dram_cmd_valid),
        .dram_cmd(dram_cmd),
        .dram_cmd_addr(dram_cmd_addr),

        .dram_wrdata_valid(dram_wrdata_valid),
        .dram_wrdata(dram_wrdata),
        .dram_wrdata_mask(dram_wrdata_mask),

        .dram_rddata(dram_rddata),
        .dram_rddata_valid(dram_rddata_valid)

    );

    // ============================================================
    // DRAM MODEL
    // ============================================================

    lpddr5_dram_model #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH)
    ) dram (

        .clk(clk),
        .rst_n(rst_n),

        .cmd_valid(dram_cmd_valid),
        .cmd(dram_cmd),
        .cmd_addr(dram_cmd_addr),

        .wrdata_valid(dram_wrdata_valid),
        .wrdata(dram_wrdata),
        .wrdata_mask(dram_wrdata_mask),

        .rddata_valid(dram_rddata_valid),
        .rddata(dram_rddata),

        .init_done(dram_init_done),
        .training_done(dram_training_done),
        .error(dram_error)

    );

    // ============================================================
    // Test
    // ============================================================

    initial begin

        dfi_cs_n = 1'b1;
        dfi_cke  = 1'b0;

        dfi_ca = 6'h00;
        dfi_ca_valid = 1'b0;

        dfi_cmd_addr = '0;
        dfi_cmd_addr_valid = 1'b0;

        dfi_wrdata = '0;
        dfi_wrdata_mask = '0;
        dfi_wrdata_en = 1'b0;

        dfi_phymstr_req = 1'b0;

        wait (rst_n == 1'b1);

        wait (dfi_init_complete == 1'b1);

        $display(
            "=============================================="
        );

        $display(
            "LPDDR5 PHY initialization complete"
        );

        $display(
            "=============================================="
        );

        // --------------------------------------------------------
        // ACTIVATE
        // --------------------------------------------------------

        send_command(
            6'h03,
            32'h0000_1000
        );

        // --------------------------------------------------------
        // WRITE
        // --------------------------------------------------------

        send_write(
            32'h0000_1000,
            64'h1122_3344_5566_7788
        );

        // --------------------------------------------------------
        // READ
        // --------------------------------------------------------

        send_command(
            6'h01,
            32'h0000_1000
        );

        wait (dfi_rddata_valid);

        $display(
            "[TB] READ DATA = %h",
            dfi_rddata
        );

        if (dfi_rddata ==
            64'h1122_3344_5566_7788) begin

            $display(
                "[TB][PASS] READ DATA MATCH"
            );

        end
        else begin

            $display(
                "[TB][FAIL] READ DATA MISMATCH"
            );

        end

        #100;

        $finish;

    end

    // ============================================================
    // Send command task
    // ============================================================

    task automatic send_command(
        input logic [5:0] cmd,
        input logic [ADDR_WIDTH-1:0] addr
    );

        @(posedge clk);

        dfi_cs_n = 1'b0;
        dfi_cke  = 1'b1;

        dfi_ca = cmd;

        dfi_ca_valid = 1'b1;

        dfi_cmd_addr = addr;
        dfi_cmd_addr_valid = 1'b1;

        @(posedge clk);

        dfi_ca_valid = 1'b0;
        dfi_cmd_addr_valid = 1'b0;

    endtask

    // ============================================================
    // Write task
    // ============================================================

    task automatic send_write(
        input logic [ADDR_WIDTH-1:0] addr,
        input logic [DATA_WIDTH-1:0] data
    );

        @(posedge clk);

        dfi_ca = 6'h02;
        dfi_ca_valid = 1'b1;

        dfi_cmd_addr = addr;
        dfi_cmd_addr_valid = 1'b1;

        dfi_wrdata = data;
        dfi_wrdata_mask = '0;
        dfi_wrdata_en = 1'b1;

        dfi_cs_n = 1'b0;
        dfi_cke = 1'b1;

        @(posedge clk);

        dfi_ca_valid = 1'b0;
        dfi_cmd_addr_valid = 1'b0;

        dfi_wrdata_en = 1'b0;

    endtask

endmodule
