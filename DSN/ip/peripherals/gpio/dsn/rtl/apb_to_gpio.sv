// Reset synchronizer: async assert, sync release
module rst_sync (
    input  logic clk,
    input  logic arst_n,
    output logic srst_n
);
    (* ASYNC_REG = "TRUE" *) logic [1:0] r;
    always_ff @(posedge clk or negedge arst_n)
        if (!arst_n) r <= 2'b00;
        else         r <= {r[0], 1'b1};
    assign srst_n = r[1];
endmodule


//------------------------------------------------------------------------------
// APB -> GPIO top
//   GPIO window : 0x3003_0000 - 0x3003_FFFF (64 KB)
//   PSEL is forwarded to the GPIO slave only when PADDR is inside the window.
//   Accesses outside the window get PREADY=1, PSLVERR=1, PRDATA=0 (default responder).
//------------------------------------------------------------------------------
module apb_to_gpio #(
    parameter logic [31:0] BASE_ADDR = 32'h3003_0000,
    parameter logic [31:0] SIZE      = 32'h0001_0000      // 64 KB
)(
    input  logic        pclk,       // 100 MHz
    input  logic        gclk,       // 50 MHz
    input  logic        presetn,

    // APB slave port (full system address)
    input  logic [31:0] paddr,
    input  logic        pwrite,
    input  logic        psel,
    input  logic        penable,
    input  logic [31:0] pwdata,
    input  logic [3:0]  pstrb,
    output logic [31:0] prdata,
    output logic        pslverr,
    output logic        pready,

    // GPIO pads
    input  logic [31:0] in_pad_i,
    output logic [31:0] out_pad_o,
    output logic [31:0] oen_padoe_o,

    // Interrupts to the interrupt controller (pclk domain), one per bank
    output logic [3:0]  gpio_irq
);

// ---------------- Address decode ----------------
logic in_range, psel_gpio, sel_oor;
assign in_range  = (paddr >= BASE_ADDR) && (paddr <= BASE_ADDR + SIZE - 1);
assign psel_gpio = psel &  in_range;      // PSEL reaches the GPIO slave only when in range
assign sel_oor   = psel & ~in_range;      // out-of-range access -> default responder

// GPIO slave outputs
logic [31:0] prdata_g;
logic        pready_g, pslverr_g;

// Default responder for addresses outside the GPIO block
assign pready  = sel_oor ? 1'b1  : pready_g;
assign pslverr = sel_oor ? 1'b1  : pslverr_g;
assign prdata  = sel_oor ? 32'h0 : prdata_g;

// ---------------- Reset for the 50 MHz domain ----------------
logic grst_n;
rst_sync u_rst_g (.clk(gclk), .arst_n(presetn), .srst_n(grst_n));

// ---------------- APB slave <-> CDC ----------------
logic        req, we, done;
logic [31:0] adr, wdata, rdata;

apb_slave #(.DW(32), .AW(16)) u_apb (
    .pclk(pclk), .presetn(presetn),
    .i_paddr(paddr[15:0]), .i_pwrite(pwrite),
    .i_psel(psel_gpio), .i_penable(penable),
    .i_pwdata(pwdata), .i_pstrb(pstrb),
    .o_prdata(prdata_g), .o_pslverr(pslverr_g), .o_pready(pready_g),
    .o_req(req), .o_we(we), .o_adr(adr), .o_wdata(wdata),
    .i_done(done), .i_rdata(rdata)
);

// ---------------- CDC <-> GPIO ----------------
logic        gpio_we;
logic [31:0] gpio_adr, gpio_dat_i, gpio_dat_o;
logic [3:0]  irq_g;

apb_gpio_cdc u_cdc (
    .pclk(pclk), .presetn(presetn),
    .req_i(req), .we_i(we), .adr_i(adr), .wdat_i(wdata),
    .done_o(done), .rdata_o(rdata),
    .gclk(gclk), .grst_n(grst_n),
    .gpio_we(gpio_we), .gpio_adr(gpio_adr),
    .gpio_dat_i(gpio_dat_i), .gpio_dat_o(gpio_dat_o)
);

gpio_register_cdc #(.WIDTH(32)) u_gpio (
    .sys_clk(gclk),
    .sys_rst(~grst_n),              // gpio_register_cdc uses active-high reset
    .gpio_we(gpio_we),
    .gpio_adr(gpio_adr),
    .gpio_dat_i(gpio_dat_i),
    .gpio_dat_o(gpio_dat_o),
    .in_pad_i(in_pad_i),
    .out_pad_o(out_pad_o),
    .oen_padoe_o(oen_padoe_o),
    .gpio_irq(irq_g)
);

// ---------------- IRQ: gclk -> pclk (level signal, 2-flop sync) ----------------
(* ASYNC_REG = "TRUE" *) logic [3:0] irq_s1, irq_s2;
always_ff @(posedge pclk or negedge presetn) begin
    if (!presetn) begin irq_s1 <= '0; irq_s2 <= '0; end
    else          begin irq_s1 <= irq_g; irq_s2 <= irq_s1; end
end
assign gpio_irq = irq_s2;

endmodule
