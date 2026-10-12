
module AXI_to_NoC_Packet_Encoder #(
    parameter int ADDR_WIDTH       = 32,
    parameter int AXI_DATA_WIDTH   = 128,
    parameter int ID_WIDTH         = 4,
    parameter int SOURCE_ROUTER_ID = 1
)(
    input logic clk,
    input logic rst_n,

    // AXI WRITE ADDRESS
    input logic [ID_WIDTH-1:0]         m_axi_awid,
    input logic [ADDR_WIDTH-1:0]       m_axi_awaddr,
    input logic [7:0]                  m_axi_awlen,
    input logic [2:0]                  m_axi_awsize,
    input logic [1:0]                  m_axi_awburst,
    input logic                        m_axi_awlock,
    input logic [3:0]                  m_axi_awcache,
    input logic [2:0]                  m_axi_awprot,
    input logic [3:0]                  m_axi_awqos,
    input logic                        m_axi_awvalid,
    output logic                       m_axi_awready,

    // AXI WRITE DATA
    input logic [AXI_DATA_WIDTH-1:0]   m_axi_wdata,
    input logic [AXI_DATA_WIDTH/8-1:0] m_axi_wstrb,
    input logic                        m_axi_wlast,
    input logic                        m_axi_wvalid,

    // AXI READ ADDRESS
    input logic [ID_WIDTH-1:0]         m_axi_arid,
    input logic [ADDR_WIDTH-1:0]       m_axi_araddr,
    input logic [7:0]                  m_axi_arlen,
    input logic [2:0]                  m_axi_arsize,
    input logic [1:0]                  m_axi_arburst,
    input logic                        m_axi_arlock,
    input logic [3:0]                  m_axi_arcache,
    input logic [2:0]                  m_axi_arprot,
    input logic [3:0]                  m_axi_arqos,
    input logic                        m_axi_arvalid,
    output logic                       m_axi_arready,

    // NoC packet
    output logic [255:0]               noc_packet,
    output logic                       noc_packet_valid,
    input logic                        noc_packet_ready
);

    logic [127:0] header_reg;
    logic [127:0] write_data [0:3];

    logic [1:0] write_count;
    logic [1:0] packet_count;

    logic write_complete;
    logic read_valid;
    logic busy;

    logic [3:0] dest_router_id;

    // Address decoder
    function automatic logic [3:0] decode_address(
        input logic [ADDR_WIDTH-1:0] address
    );
        begin
            case (address[31:28])
                4'h1: begin
                    case (address[27:24])
                        4'h0: decode_address = 4'd4;
                        4'h1: decode_address = 4'd6;
                        4'h2: decode_address = 4'd8;
                        4'h3: decode_address = 4'd11;
                        4'h4: decode_address = 4'd10;
                        4'h5: decode_address = 4'd9;
                        4'h6: decode_address = 4'd3;
                        4'h7: decode_address = 4'd5;
                        4'h8: decode_address = 4'd7;
                        default: decode_address = 4'd15;
                    endcase
                end
                default: decode_address = 4'd15;
            endcase
        end
    endfunction

    // Destination selection
    always_comb begin
        if (m_axi_awvalid)
            dest_router_id = decode_address(m_axi_awaddr);
        else if (m_axi_arvalid)
            dest_router_id = decode_address(m_axi_araddr);
        else
            dest_router_id = 4'd15;
    end

    // Address arbitration
    // When busy, both requests wait.
    // When idle, WRITE has priority over READ.
    always_comb begin
        m_axi_awready = 1'b0;
        m_axi_arready = 1'b0;

        if (!busy) begin
            if (m_axi_awvalid) begin
                m_axi_awready = 1'b1;
                m_axi_arready = 1'b0;
            end
            else if (m_axi_arvalid) begin
                m_axi_awready = 1'b0;
                m_axi_arready = 1'b1;
            end
        end
    end

    // Capture WRITE data
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            write_data[0] <= '0;
            write_data[1] <= '0;
            write_data[2] <= '0;
            write_data[3] <= '0;

            write_count    <= 2'd0;
            write_complete <= 1'b0;
        end
        else begin
            if (m_axi_wvalid && !write_complete && busy &&
                header_reg[115]) begin

                write_data[write_count] <= m_axi_wdata;

                if (write_count == 2'd3) begin
                    write_count    <= 2'd0;
                    write_complete <= 1'b1;
                end
                else begin
                    write_count <= write_count + 1'b1;
                end
            end

            if (write_complete && noc_packet_valid &&
                noc_packet_ready && packet_count == 2'd3) begin
                write_complete <= 1'b0;
            end
        end
    end

    // Capture header and control busy
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            header_reg <= '0;
            read_valid <= 1'b0;
            busy       <= 1'b0;
        end
        else begin

            // Accept WRITE address
            if (!busy && m_axi_awvalid && m_axi_awready) begin
                header_reg[127:124] <= SOURCE_ROUTER_ID;
                header_reg[123:120] <= decode_address(m_axi_awaddr);
                header_reg[119:118] <= decode_address(m_axi_awaddr) & 4'b0011;
                header_reg[117:116] <= decode_address(m_axi_awaddr) >> 2;

                header_reg[115]     <= 1'b1;
                header_reg[114:111] <= m_axi_awid;
                header_reg[110:79]  <= m_axi_awaddr;
                header_reg[78:71]   <= m_axi_awlen;
                header_reg[70:68]   <= m_axi_awsize;
                header_reg[67:66]   <= m_axi_awburst;
                header_reg[65]      <= m_axi_awlock;
                header_reg[64:61]   <= m_axi_awcache;
                header_reg[60:58]   <= m_axi_awprot;
                header_reg[57:54]   <= m_axi_awqos;
                header_reg[53:0]    <= '0;

                busy      <= 1'b1;
                read_valid <= 1'b0;
            end

            // Accept READ only when WRITE is not selected
            else if (!busy && m_axi_arvalid && m_axi_arready) begin
                header_reg[127:124] <= SOURCE_ROUTER_ID;
                header_reg[123:120] <= decode_address(m_axi_araddr);
                header_reg[119:118] <= decode_address(m_axi_araddr) & 4'b0011;
                header_reg[117:116] <= decode_address(m_axi_araddr) >> 2;

                header_reg[115]     <= 1'b0;
                header_reg[114:111] <= m_axi_arid;
                header_reg[110:79]  <= m_axi_araddr;
                header_reg[78:71]   <= m_axi_arlen;
                header_reg[70:68]   <= m_axi_arsize;
                header_reg[67:66]   <= m_axi_arburst;
                header_reg[65]      <= m_axi_arlock;
                header_reg[64:61]   <= m_axi_arcache;
                header_reg[60:58]   <= m_axi_arprot;
                header_reg[57:54]   <= m_axi_arqos;
                header_reg[53:0]    <= '0;

                read_valid <= 1'b1;
                busy       <= 1'b1;
            end

            // Release READ transaction after NoC accepts its packet
            if (read_valid && noc_packet_valid && noc_packet_ready) begin
                read_valid <= 1'b0;
                busy       <= 1'b0;
            end

            // Release WRITE transaction after all four packets
            if (write_complete && noc_packet_valid &&
                noc_packet_ready && packet_count == 2'd3) begin
                busy <= 1'b0;
            end
        end
    end

    // WRITE packet counter
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            packet_count <= 2'd0;
        end
        else begin
            if (write_complete && noc_packet_valid &&
                noc_packet_ready) begin
                if (packet_count == 2'd3)
                    packet_count <= 2'd0;
                else
                    packet_count <= packet_count + 1'b1;
            end
        end
    end

    // NoC packet generation
    always_comb begin
        noc_packet       = '0;
        noc_packet_valid = 1'b0;

        if (write_complete) begin
            noc_packet = {
                header_reg,
                write_data[packet_count]
            };
            noc_packet_valid = 1'b1;
        end
        else if (read_valid) begin
            noc_packet = {
                header_reg,
                128'b0
            };
            noc_packet_valid = 1'b1;
        end
    end

endmodule
