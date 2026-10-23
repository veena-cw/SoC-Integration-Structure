`timescale 1ns/1ps
`default_nettype none

// AXI4-Lite front end (clk_axil domain) built around the standalone axi4lite_slave module
// (kept outside this project; add axi4lite_slave.sv to the compile list).
//
// axi4lite_slave owns the register file: RW registers are stored in it and read back from it, RO registers
// read rd_payload_i in the cycle the AR is accepted. This wrapper adds what the TPU needs on top:
//   * Writes: wr_event_o marks a write that hit a mapped register (RW or RO). One cycle later the stored word
//     is read back from reg_storage_o and pushed, with the byte strobes seen on the W channel, into the
//     write FIFO toward clk_tpu (tpu_reg_cdc). Writes to RO registers are forwarded too so the register
//     bank can flag a bad access. Writes are posted: B comes from the slave, not from the TPU side.
//     AW and W are held off while the FIFO is full, so a forwarded write always finds room.
//   * Reads: STATUS and ERROR_CODE live in clk_tpu. A snapshot {applied_cnt, err, status} arrives through
//     the snapshot FIFO and is kept in shadow_q, which feeds rd_payload_i. To keep read-after-write order,
//     AR is held off until the snapshot's applied_cnt equals the number of writes issued here, i.e. every
//     earlier write has taken effect and its status has come back.
// Unmapped or misaligned addresses are answered DECERR by axi4lite_slave and are not forwarded.
module tpu_host_interface #(
    parameter int ADDR_W = 8
)(
    input  logic clk,
    input  logic rst_n,                 // active low; axi4lite_slave resets synchronously

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

    // toward tpu_reg_cdc (clk_axil side)
    output logic              wq_push,
    output logic [ADDR_W-1:0] wq_addr,
    output logic [31:0]       wq_data,
    output logic [3:0]        wq_strb,
    input  logic              wq_full,
    input  logic              snap_valid,
    input  logic [47:0]       snap_data,     // {applied_cnt[7:0], err[7:0], status[31:0]}
    output logic              snap_pop
);
    localparam int NUM_REGS = 16;

    // Register indices (byte offset / 4), see tpu_register_bank.sv
    localparam int I_STATUS = 1, I_ERR = 3, I_VER = 15, I_TMO = 14;

    // 2 bits per register, register 0 in the LSBs: 00 RW, 01 RO. STATUS, ERROR_CODE, VERSION are RO.
    localparam logic [2*NUM_REGS-1:0] REG_ATTR =
        (32'd1 << (2*I_STATUS)) | (32'd1 << (2*I_ERR)) | (32'd1 << (2*I_VER));
    // TIMEOUT resets to 0x10000, everything else to 0.
    localparam logic [NUM_REGS*32-1:0] REG_RESET = (512'd65536 << (I_TMO*32));

    // ---------------- flow control in front of the slave ----------------
    logic        s_awready_i, s_wready_i, s_arready_i;
    logic        wgate, rgate;
    logic [7:0]  issued_cnt;
    logic [47:0] shadow_q;

    assign wgate = !wq_full;
    assign rgate = (shadow_q[47:40] == issued_cnt);

    assign s_axil_awready = s_awready_i && wgate;
    assign s_axil_wready  = s_wready_i  && wgate;
    assign s_axil_arready = s_arready_i && rgate;

    // ---------------- slave ----------------
    logic [NUM_REGS*32-1:0] rd_payload, reg_storage;
    logic                   wr_event, rd_event;
    logic [ADDR_W-1:0]      wr_event_addr, rd_event_addr;

    always_comb begin
        rd_payload                          = '0;
        rd_payload[I_STATUS*32 +: 32]       = shadow_q[31:0];
        rd_payload[I_ERR*32 +: 32]          = {24'h0, shadow_q[39:32]};
        rd_payload[I_VER*32 +: 32]          = 32'h5450_0001;
    end

    axi4lite_slave #(
        .ADDR_WIDTH(ADDR_W),
        .DATA_WIDTH(32),
        .NUM_REGS  (NUM_REGS),
        .REG_ATTR  (REG_ATTR),
        .REG_RESET (REG_RESET)
    ) u_slave (
        .s_axi_aclk   (clk),
        .s_axi_aresetn(rst_n),
        .s_axi_awaddr (s_axil_awaddr), .s_axi_awprot(s_axil_awprot),
        .s_axi_awvalid(s_axil_awvalid && wgate), .s_axi_awready(s_awready_i),
        .s_axi_wdata  (s_axil_wdata),  .s_axi_wstrb (s_axil_wstrb),
        .s_axi_wvalid (s_axil_wvalid && wgate),  .s_axi_wready (s_wready_i),
        .s_axi_bresp  (s_axil_bresp),  .s_axi_bvalid(s_axil_bvalid), .s_axi_bready(s_axil_bready),
        .s_axi_araddr (s_axil_araddr), .s_axi_arprot(s_axil_arprot),
        .s_axi_arvalid(s_axil_arvalid && rgate), .s_axi_arready(s_arready_i),
        .s_axi_rdata  (s_axil_rdata),  .s_axi_rresp (s_axil_rresp),
        .s_axi_rvalid (s_axil_rvalid), .s_axi_rready(s_axil_rready),
        .rd_payload_i (rd_payload),
        .slv_err_i    (1'b0),
        .reg_storage_o(reg_storage),
        .wr_event_o   (wr_event),   .wr_event_addr_o(wr_event_addr),
        .rd_event_o   (rd_event),   .rd_event_addr_o(rd_event_addr)
    );

    // ---------------- write forwarding ----------------
    logic              ev_q;
    logic [ADDR_W-1:0] ev_addr_q;
    logic [3:0]        wstrb_cap;

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            ev_q       <= 1'b0;
            ev_addr_q  <= '0;
            wstrb_cap  <= 4'h0;
            issued_cnt <= 8'h00;
        end else begin
            if (s_axil_wvalid && s_axil_wready) wstrb_cap <= s_axil_wstrb;   // same handshake the slave sees
            ev_q <= wr_event;
            if (wr_event) begin
                ev_addr_q  <= wr_event_addr;
                issued_cnt <= issued_cnt + 8'd1;
            end
        end
    end

    // one cycle after the event the register file holds the merged word
    assign wq_push = ev_q;
    assign wq_addr = ev_addr_q;
    assign wq_data = reg_storage[{ev_addr_q[5:2], 5'b00000} +: 32];
    assign wq_strb = wstrb_cap;

    // ---------------- status shadow ----------------
    localparam logic [47:0] SHADOW_RST = {8'h00, 8'h00, 32'h0000_0008};   // reset state: queue empty
    assign snap_pop = snap_valid;
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n)          shadow_q <= SHADOW_RST;
        else if (snap_valid) shadow_q <= snap_data;
    end

    logic unused;
    assign unused = &{1'b0, rd_event, rd_event_addr};
endmodule
`default_nettype wire
