/* ================================================================
   LPDDR5 PHY BFM

   Controller
       |
       | DFI
       v
   PHY BFM
       |
       | Internal PHY interface
       v
   DRAM Model

   PHY Training Handshake:

       PHY                          Controller
        |                               |
        |---- dfi_phymstr_req -------->|
        |                               |
        |<---- dfi_phymstr_ack --------|
        |                               |
   ================================================================ */

`timescale 1ns/1ps

module lpddr5_phy_bfm #(
    parameter int DATA_WIDTH = 128,
    parameter int ADDR_WIDTH = 32
)(
    input logic dfi_clk,
    input logic dfi_rst_n,

    // ============================================================
    // Controller -> PHY
    // ============================================================

    input logic                    dfi_cs_n,
    input logic                    dfi_cke,

    input logic [5:0]              dfi_ca,
    input logic                    dfi_ca_valid,

    input logic [ADDR_WIDTH-1:0]   dfi_cmd_addr,
    input logic                    dfi_cmd_addr_valid,

    input logic [DATA_WIDTH-1:0]   dfi_wrdata,
    input logic [DATA_WIDTH/8-1:0] dfi_wrdata_mask,
    input logic                    dfi_wrdata_en,

    // ============================================================
    // PHY -> Controller
    // ============================================================

    output logic [DATA_WIDTH-1:0]  dfi_rddata,
    output logic                   dfi_rddata_valid,

    // PHY initialization
    output logic                   dfi_init_complete,

    // PHY training
    // PHY sends request -> Controller
    output logic                   dfi_phymstr_req,

    // Controller sends acknowledge -> PHY
    input logic                    dfi_phymstr_ack,

    // ============================================================
    // DRAM side
    // ============================================================

    output logic                   dram_cmd_valid,
    input logic                    dram_cmd_ready,

    output logic [5:0]             dram_cmd,
    output logic [ADDR_WIDTH-1:0]  dram_cmd_addr,

    output logic                   dram_wrdata_valid,
    output logic [DATA_WIDTH-1:0]  dram_wrdata,
    output logic [DATA_WIDTH/8-1:0] dram_wrdata_mask,

    input logic [DATA_WIDTH-1:0]   dram_rddata,
    input logic                    dram_rddata_valid
);


    // ============================================================
    // PHY Initialization
    // ============================================================

    typedef enum logic [2:0] {
        PHY_RESET,
        PHY_INIT,
        PHY_READY
    } phy_state_t;

    phy_state_t phy_state;

    integer init_counter;


    // ============================================================
    // Training state
    // ============================================================

    typedef enum logic [1:0] {
        TRAIN_IDLE,
        TRAIN_REQUEST,
        TRAIN_WAIT_ACK,
        TRAIN_DONE
    } train_state_t;

    train_state_t train_state;


    // ============================================================
    // Initialization FSM
    // ============================================================

    always_ff @(posedge dfi_clk or negedge dfi_rst_n) begin

        if (!dfi_rst_n) begin

            phy_state         <= PHY_RESET;
            init_counter      <= 0;
            dfi_init_complete <= 1'b0;

        end
        else begin

            case (phy_state)

                // ------------------------------------------------
                // PHY RESET
                // ------------------------------------------------

                PHY_RESET: begin

                    init_counter      <= 0;
                    dfi_init_complete <= 1'b0;

                    phy_state         <= PHY_INIT;

                end


                // ------------------------------------------------
                // PHY INITIALIZATION
                // ------------------------------------------------

                PHY_INIT: begin

                    if (init_counter < 20) begin

                        init_counter <= init_counter + 1;

                    end
                    else begin

                        dfi_init_complete <= 1'b1;

                        phy_state <= PHY_READY;

                        $display(
                            "[PHY] Initialization complete at %0t",
                            $time
                        );

                    end

                end


                // ------------------------------------------------
                // PHY READY
                // ------------------------------------------------

                PHY_READY: begin

                    dfi_init_complete <= 1'b1;

                end


                default: begin

                    phy_state <= PHY_RESET;

                end

            endcase

        end

    end


    // ============================================================
    // PHY -> DRAM Command Bridge
    // ============================================================

    always_ff @(posedge dfi_clk or negedge dfi_rst_n) begin

        if (!dfi_rst_n) begin

            dram_cmd_valid <= 1'b0;
            dram_cmd       <= 6'h00;
            dram_cmd_addr  <= '0;

        end
        else begin

            // Default: command valid for one cycle only
            dram_cmd_valid <= 1'b0;

            if (phy_state == PHY_READY) begin

                if (dfi_ca_valid &&
                    !dfi_cs_n &&
                    dfi_cke &&
                    dram_cmd_ready) begin

                    dram_cmd_valid <= 1'b1;

                    dram_cmd <= dfi_ca;

                    if (dfi_cmd_addr_valid)
                        dram_cmd_addr <= dfi_cmd_addr;
                    else
                        dram_cmd_addr <= '0;


                    $display(
                        "[PHY] CMD=%0h ADDR=%0h time=%0t",
                        dfi_ca,
                        dfi_cmd_addr,
                        $time
                    );

                end

            end

        end

    end


    // ============================================================
    // Controller -> PHY -> DRAM Write Data Bridge
    // ============================================================

    always_ff @(posedge dfi_clk or negedge dfi_rst_n) begin

        if (!dfi_rst_n) begin

            dram_wrdata_valid <= 1'b0;
            dram_wrdata       <= '0;
            dram_wrdata_mask  <= '0;

        end
        else begin

            dram_wrdata_valid <= 1'b0;

            if (dfi_wrdata_en &&
                phy_state == PHY_READY) begin

                dram_wrdata_valid <= 1'b1;

                dram_wrdata      <= dfi_wrdata;
                dram_wrdata_mask <= dfi_wrdata_mask;


                $display(
                    "[PHY] WRDATA=%0h MASK=%0h time=%0t",
                    dfi_wrdata,
                    dfi_wrdata_mask,
                    $time
                );

            end

        end

    end


    // ============================================================
    // DRAM -> PHY -> Controller Read Data
    // ============================================================

    always_ff @(posedge dfi_clk or negedge dfi_rst_n) begin

        if (!dfi_rst_n) begin

            dfi_rddata       <= '0;
            dfi_rddata_valid <= 1'b0;

        end
        else begin

            dfi_rddata_valid <= 1'b0;

            if (dram_rddata_valid) begin

                dfi_rddata       <= dram_rddata;
                dfi_rddata_valid <= 1'b1;


                $display(
                    "[PHY] RDDATA=%0h time=%0t",
                    dram_rddata,
                    $time
                );

            end

        end

    end


    // ============================================================
    // PHY MASTER TRAINING HANDSHAKE
    //
    // PHY:
    //     dfi_phymstr_req = 1
    //
    // Controller:
    //     detects request
    //     dfi_phymstr_ack = 1
    //
    // PHY:
    //     detects ACK
    //     removes REQ
    //
    // ============================================================

    always_ff @(posedge dfi_clk or negedge dfi_rst_n) begin

        if (!dfi_rst_n) begin

            train_state     <= TRAIN_IDLE;
            dfi_phymstr_req <= 1'b0;

        end
        else begin

            case (train_state)

                // ------------------------------------------------
                // Wait until PHY initialization is complete
                // ------------------------------------------------

                TRAIN_IDLE: begin

                    dfi_phymstr_req <= 1'b0;

                    if (phy_state == PHY_READY) begin

                        train_state <= TRAIN_REQUEST;

                    end

                end


                // ------------------------------------------------
                // Send training request to Controller
                // ------------------------------------------------

                TRAIN_REQUEST: begin

                    dfi_phymstr_req <= 1'b1;

                    $display(
                        "[PHY] Training request sent at %0t",
                        $time
                    );

                    train_state <= TRAIN_WAIT_ACK;

                end


                // ------------------------------------------------
                // Wait for Controller ACK
                // ------------------------------------------------

                TRAIN_WAIT_ACK: begin

                    // Keep request asserted until ACK arrives
                    dfi_phymstr_req <= 1'b1;

                    if (dfi_phymstr_ack) begin

                        $display(
                            "[PHY] Training ACK received from Controller at %0t",
                            $time
                        );

                        // Remove request
                        dfi_phymstr_req <= 1'b0;

                        train_state <= TRAIN_DONE;

                    end

                end


                // ------------------------------------------------
                // Training complete
                // ------------------------------------------------

                TRAIN_DONE: begin

                    dfi_phymstr_req <= 1'b0;

                end


                default: begin

                    train_state     <= TRAIN_IDLE;
                    dfi_phymstr_req <= 1'b0;

                end

            endcase

        end

    end


endmodule
