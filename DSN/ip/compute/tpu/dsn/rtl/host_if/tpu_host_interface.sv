`timescale 1ns/1ps
`default_nettype none

// AXI4-Lite slave -> simple register bus. One outstanding transaction per channel, OKAY responses only.
module tpu_host_interface #(
    parameter int ADDR_W = 8
)(
    input  logic clk,
    input  logic rst_n,

    // AXI4-Lite slave
    input  logic [ADDR_W-1:0] s_axil_awaddr,
    input  logic [2:0]        s_axil_awprot,
    input  logic              s_axil_awvalid,
    output logic              s_axil_awready,
    input  logic [31:0]       s_axil_wdata,
    input  logic [3:0]        s_axil_wstrb,
    input  logic              s_axil_wvalid,
    output logic              s_axil_wready,
    output logic [1:0]        s_axil_bresp,
    output logic              s_axil_bvalid,
    input  logic              s_axil_bready,
    input  logic [ADDR_W-1:0] s_axil_araddr,
    input  logic [2:0]        s_axil_arprot,
    input  logic              s_axil_arvalid,
    output logic              s_axil_arready,
    output logic [31:0]       s_axil_rdata,
    output logic [1:0]        s_axil_rresp,
    output logic              s_axil_rvalid,
    input  logic              s_axil_rready,

    // Register bus (single-cycle write strobe, combinational read)
    output logic              reg_wr_en,
    output logic [ADDR_W-1:0] reg_wr_addr,
    output logic [31:0]       reg_wr_data,
    output logic [3:0]        reg_wr_strb,
    output logic [ADDR_W-1:0] reg_rd_addr,
    input  logic [31:0]       reg_rd_data
);
    // Write: accept AW and W together, only when no response is pending.
    logic wr_accept;
    assign wr_accept      = s_axil_awvalid && s_axil_wvalid && !s_axil_bvalid;
    assign s_axil_awready = wr_accept;
    assign s_axil_wready  = wr_accept;
    assign reg_wr_en      = wr_accept;
    assign reg_wr_addr    = s_axil_awaddr;
    assign reg_wr_data    = s_axil_wdata;
    assign reg_wr_strb    = s_axil_wstrb;
    assign s_axil_bresp   = 2'b00;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axil_bvalid <= 1'b0;
        end else if (wr_accept) begin
            s_axil_bvalid <= 1'b1;
        end else if (s_axil_bready) begin
            s_axil_bvalid <= 1'b0;
        end
    end

    // Read: accept AR when no read data is pending, capture register value.
    logic rd_accept;
    assign rd_accept      = s_axil_arvalid && !s_axil_rvalid;
    assign s_axil_arready = rd_accept;
    assign reg_rd_addr    = s_axil_araddr;
    assign s_axil_rresp   = 2'b00;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            s_axil_rvalid <= 1'b0;
            s_axil_rdata  <= 32'h0;
        end else if (rd_accept) begin
            s_axil_rvalid <= 1'b1;
            s_axil_rdata  <= reg_rd_data;
        end else if (s_axil_rready) begin
            s_axil_rvalid <= 1'b0;
        end
    end

    // awprot/arprot unused
    logic unused;
    assign unused = &{1'b0, s_axil_awprot, s_axil_arprot};
endmodule
