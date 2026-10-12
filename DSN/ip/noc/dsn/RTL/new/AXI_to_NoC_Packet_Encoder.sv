`timescale 1ns/1ps

module AXI_to_NoC_Packet #(
    parameter ADDR_WIDTH     = 32,
    parameter AXI_DATA_WIDTH = 128,
    parameter ID_WIDTH       = 4
)(
    input  logic clk,
    input  logic rst_n,

    // AXI WRITE ADDRESS
    input  logic [ID_WIDTH-1:0]   m_axi_awid,
    input  logic [ADDR_WIDTH-1:0] m_axi_awaddr,
    input  logic                  m_axi_awvalid,
    output logic                  m_axi_awready,

    // AXI WRITE DATA
    input  logic [AXI_DATA_WIDTH-1:0] m_axi_wdata,
    input  logic                      m_axi_wvalid,
    output logic                      m_axi_wready,

    // AXI READ ADDRESS
    input  logic [ID_WIDTH-1:0]   m_axi_arid,
    input  logic [ADDR_WIDTH-1:0] m_axi_araddr,
    input  logic                  m_axi_arvalid,
    output logic                  m_axi_arready,

    // NoC WRITE
    output logic [255:0] noc_write_packet,
    output logic         noc_write_valid,
    input  logic         noc_write_ready,

    // NoC READ
    output logic [255:0] noc_read_packet,
    output logic         noc_read_valid,
    input  logic         noc_read_ready
);

    localparam logic [3:0] SOURCE_ROUTER_ID = 4'd1;

    // Transaction control
    logic busy;
    logic is_write;

    // Headers
    logic [127:0] write_header;
    logic [127:0] read_header;

    // Four 128-bit WRITE data beats
    logic [127:0] write_data [0:3];

    // Number of AXI WRITE data beats received
    logic [2:0] write_data_count;

    // Number of NoC WRITE packets transmitted
    logic [2:0] write_packet_count;

    // Indicates that at least one WRITE data beat
    // is available for NoC transmission
    logic write_data_valid;


    // Address decoding

    function automatic [3:0] decode_address(
        input logic [ADDR_WIDTH-1:0] address
    );
        begin
            case (address[31:20])

                12'h100: decode_address = 4;   // NPU
                12'h101: decode_address = 6;   // PCIe
                12'h102: decode_address = 8;   // UCIe
                12'h103: decode_address = 11;  // Ethernet
                12'h104: decode_address = 10;  // USB
                12'h105: decode_address = 9;   // NVMe
                12'h106: decode_address = 3;   // PLIC
                12'h107: decode_address = 5;   // SRAM
                12'h108: decode_address = 7;   // LPDDR

                default: decode_address = 15;

            endcase
        end
    endfunction


    // AXI arbitration
    //
    // WRITE has priority when both AWVALID and ARVALID
    // are present.
    //
    // When busy, no new transaction is accepted.

    always_comb begin

        m_axi_awready = 1'b0;
        m_axi_arready = 1'b0;

        if (!busy) begin

            if (m_axi_awvalid) begin

                // WRITE gets priority
                m_axi_awready = 1'b1;

            end
            else if (m_axi_arvalid) begin

                // READ
                m_axi_arready = 1'b1;

            end

        end
        else begin

            // Transaction already in progress.
            // New transaction waits.

            m_axi_awready = 1'b0;
            m_axi_arready = 1'b0;

        end

    end


    // AXI WRITE data ready
    //
    // Accept four 128-bit WDATA beats.

    always_comb begin

        m_axi_wready = 1'b0;

        if (busy && is_write) begin

            if (write_data_count < 3'd4) begin
                m_axi_wready = 1'b1;
            end

        end

    end


    // WRITE packet valid
    //
    // A packet can be sent when the corresponding
    // WRITE data beat has been received.

    assign noc_write_valid =
        busy &&
        is_write &&
        write_data_valid;


    // READ packet valid

    assign noc_read_valid =
        busy &&
        !is_write;


    // Current WRITE packet
    //
    // Upper 128 bits = WRITE header
    // Lower 128 bits = current WRITE data beat

    assign noc_write_packet = {
        write_header,
        write_data[write_packet_count]
    };


    // READ packet
    //
    // Upper 128 bits = READ header
    // Lower 128 bits = zero

    assign noc_read_packet = {
        read_header,
        128'd0
    };


    // Main sequential logic

    always_ff @(posedge clk or negedge rst_n) begin

        if (!rst_n) begin

            busy               <= 1'b0;
            is_write           <= 1'b0;

            write_header       <= 128'd0;
            read_header        <= 128'd0;

            write_data[0]      <= 128'd0;
            write_data[1]      <= 128'd0;
            write_data[2]      <= 128'd0;
            write_data[3]      <= 128'd0;

            write_data_count   <= 3'd0;
            write_packet_count <= 3'd0;

            write_data_valid   <= 1'b0;

        end

        else begin

            // No transaction is currently active

            if (!busy) begin

                // WRITE gets priority

                if (m_axi_awvalid && m_axi_awready) begin

                    busy     <= 1'b1;
                    is_write <= 1'b1;

                    write_data_count   <= 3'd0;
                    write_packet_count <= 3'd0;
                    write_data_valid   <= 1'b0;

                    write_header <= {
                        SOURCE_ROUTER_ID,
                        decode_address(m_axi_awaddr),
                        2'd0,
                        2'd0,
                        1'b1,
                        m_axi_awid,
                        m_axi_awaddr,
                        8'd0,
                        3'd0,
                        2'd0,
                        1'b0,
                        4'd0,
                        3'd0,
                        4'd0,
                        54'd0
                    };

                end

                // READ is accepted only when WRITE is not present

                else if (m_axi_arvalid && m_axi_arready) begin

                    busy     <= 1'b1;
                    is_write <= 1'b0;

                    read_header <= {
                        SOURCE_ROUTER_ID,
                        decode_address(m_axi_araddr),
                        2'd0,
                        2'd0,
                        1'b0,
                        m_axi_arid,
                        m_axi_araddr,
                        8'd0,
                        3'd0,
                        2'd0,
                        1'b0,
                        4'd0,
                        3'd0,
                        4'd0,
                        54'd0
                    };

                end

            end


            // WRITE transaction is active

            else if (is_write) begin

                // Receive AXI WRITE DATA

                if (m_axi_wvalid && m_axi_wready) begin

                    case (write_data_count)

                        3'd0: write_data[0] <= m_axi_wdata;
                        3'd1: write_data[1] <= m_axi_wdata;
                        3'd2: write_data[2] <= m_axi_wdata;
                        3'd3: write_data[3] <= m_axi_wdata;

                    endcase


                    if (write_data_count < 3'd4) begin
                        write_data_count <= write_data_count + 1'b1;
                    end

                    write_data_valid <= 1'b1;

                end


                // Send WRITE packet to NoC

                if (noc_write_valid && noc_write_ready) begin

                    write_data_valid <= 1'b0;

                    if (write_packet_count == 3'd3) begin

                        // Fourth packet transmitted.
                        // WRITE transaction is complete.

                        busy               <= 1'b0;
                        write_packet_count <= 3'd0;
                        write_data_count   <= 3'd0;

                    end

                    else begin

                        // Move to next packet

                        write_packet_count <=
                            write_packet_count + 1'b1;

                    end

                end

            end


            // READ transaction is active

            else begin

                if (noc_read_valid && noc_read_ready) begin

                    busy <= 1'b0;

                end

            end

        end

    end

endmodule