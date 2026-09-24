//=============================================================================
// uart_apb_top.sv
//
// APB3/APB4 completer wrapper around uart_top.
//   * Connects directly to the uart_psel / shared P* bus that
//     axi4_to_apb_bridge_cdc drives (PADDR[15:0] = register offset inside
//     the UART's 64 KB window).
//   * Register logic (THR/RHR/SR/CR/BRDR/IER/ISR) is the user's, unchanged.
//   * Zero-wait-state: PREADY is always 1.
//=============================================================================

module uart_apb_top(
  //---------------------------------------------------------------
  // APB slave port  (connect to axi4_to_apb_bridge_cdc)
  //---------------------------------------------------------------
  input  logic                         PCLK,
  input  logic                         PRESETn,
  input  logic                         PSEL,      // <- uart_psel
  input  logic                         PENABLE,
  input  logic                         PWRITE,
  input  logic [31:0]                  PADDR,
  input  logic [31:0]                  PWDATA,
  input  logic [3:0]                   PSTRB,     // unused (word-only regs)
  input  logic [2:0]                   PPROT,     // unused
  output logic [31:0]                 PRDATA,
  output logic                        PREADY,
  output logic                        PSLVERR,

  //---------------------------------------------------------------
  // Enables that the register logic is gated by (see notes)
  //---------------------------------------------------------------
  input  logic                         divisor_load_i,  // gates BRDR write + goes to baud generator
  input  logic                         uart_irq_en,     // gates IER write

  //---------------------------------------------------------------
  // Serial pads / interrupt
  //---------------------------------------------------------------
  input   logic                      rx_i,
  output logic                        tx_o,
  input    logic                       cts_n_i,
  output logic                        rts_n_o,
  output logic                        uart_irq
);

  //=====================================================
  // Clock / reset / address aliases used by the register logic
  //=====================================================
  logic        clk;
  logic        rst_n;
  logic [31:0] addr;

  assign clk   = PCLK;
  assign rst_n = PRESETn;
  assign addr  = {16'h0, PADDR[15:0]};   // offset inside the UART window

  //=====================================================
  // Register Valid Bits
  //=====================================================
  logic        thr_reg_vld;
  logic        rhr_reg_vld;
  logic        sr_reg_vld;
  logic        cr_reg_vld;
  logic        brdr_reg_vld;
  logic        ier_reg_vld;
  logic        isr_reg_vld;

  //=====================================================
  // Register Storage
  //=====================================================
  logic [31:0] thr_reg;
  logic [31:0] rhr_reg;
  logic [31:0] sr_reg;
  logic [31:0] cr_reg;
  logic [31:0] brdr_reg;
  logic [31:0] ier_reg;
  logic [31:0] isr_reg;

  //=====================================================
  // Control Signals
  //=====================================================
  logic         tx_wr_en_i;
  logic         rx_rd_en_i;
  logic         parity_en_i;
  logic [1:0]   parity_mode_i;
  logic         stop_2_i;
  logic [1:0]   data_bits_i;        // 2-bit CR field
  logic [3:0]   data_bits_w;        // 4-bit value uart_top expects (5..9)

  //=====================================================
  // Interrupt Enable Signals
  //=====================================================
  logic         tx_empty_irq_en_i;
  logic         rx_irq_en_i;
  logic         err_irq_en_i;

  //=====================================================
  // Signals from uart_top
  //=====================================================
  logic         data_valid_o;
  logic [8:0]   rx_rd_data_o;

  logic         tx_empty_o;
  logic         tx_full_o;
  logic         rx_empty_o;
  logic         rx_full_o;

  logic         parity_err_o;
  logic         frame_err_o;
  logic         overrun_o;
  logic         break_o;

  logic         do_push;
  
  
  //=====================================================
  // Register offsets
  //=====================================================
  localparam ADDR_THR  = 32'h00;
  localparam ADDR_RHR  = 32'h04;
  localparam ADDR_SR   = 32'h08;
  localparam ADDR_CR   = 32'h0C;
  localparam ADDR_BRDR = 32'h10;
  localparam ADDR_IER  = 32'h14;
  localparam ADDR_ISR  = 32'h18;

  //=====================================================================
  //                  USER REGISTER LOGIC (unchanged)
  //=====================================================================
  assign do_push = tx_wr_en_i && (!rx_full_o);
  // Read write Register
  always_ff @(posedge clk or negedge rst_n) 
    if (!rst_n)  {thr_reg_vld,thr_reg}  <= 33'h0;
    else if (PSEL & PENABLE & PWRITE & (addr == ADDR_THR))  {thr_reg_vld,thr_reg} <= {1'b1,PWDATA[31:0]} ; 
      //assign thr_data = thr_reg;
  // Read only register
  always_ff @(posedge clk or negedge rst_n)
      if (!rst_n) {rhr_reg_vld, rhr_reg} <= 33'h0;
      //else if ((!rx_empty_o) & (addr == ADDR_RHR)) {rhr_reg_vld, rhr_reg} <= {1'b1, rx_rd_data_o};   // from rx fsm from stop state data_valid_pulse_q is assigned to data_valid_o which signal say that i ahve received all data 
      else if (data_valid_o & (addr == ADDR_RHR)) {rhr_reg_vld, rhr_reg} <= {1'b1, rx_rd_data_o};
     
/* SR (0x08) - read-only, live status
// bit0 : tx_empty_o   - 1 = TX FIFO empty
// bit1 : tx_full_o    - 1 = TX FIFO full
// bit2 : rx_empty_o   - 1 = RX FIFO empty
// bit3 : rx_full_o    - 1 = RX FIFO full
// bit4 : parity_err_o - 1 = parity error (sticky until cleared)
// bit5 : frame_err_o  - 1 = framing error (sticky until cleared)
// bit6 : do_push      - 1 = byte just pushed into RX FIFO (one-clock pulse)
// bit31:7 : reserved, read as 0 */
  always_ff @(posedge clk or negedge rst_n)
          if (!rst_n) {sr_reg_vld, sr_reg} <= 33'h0;
          else {sr_reg_vld, sr_reg} <= {1'b1, {25'h0,do_push ,frame_err_o, parity_err_o, rx_full_o, rx_empty_o, tx_full_o, tx_empty_o}}; //chcek the conditionalong with tx_empty //rx_fifo_overflow 

 
/*CR (0x0C) - read/write control register
// bit0   : tx_wr_en_i    - 1 = push THR into TX FIFO (level: pushes every clock while set)
// bit1   : rx_rd_en_i    - 1 = pop RX FIFO (level: pops every clock while set)
// bit2   : parity_en_i   - 1 = parity bit enabled
// bit4:3 : parity_mode_i - 00 = even, 01 = odd, 10 = mark (always 1), 11 = space (always 0)
// bit5   : stop_2_i      - 0 = 1 stop bit, 1 = 2 stop bits
// bit7:6 : data_bits_i   - 00 = 7 bits, 01 = 8 bits, 10 = 9 bits, 11 = 8 bits
// bit31:8 : reserved, read as 0 */
      //------------------------------------------------------------------
      always_ff @(posedge clk or negedge rst_n)
          if (!rst_n) {cr_reg_vld, cr_reg} <= 33'h0;
          else if (PSEL & PENABLE & PWRITE & (addr == ADDR_CR)) {cr_reg_vld, cr_reg} <= {1'b1,{24'h0, PWDATA[7:0]}};

      assign tx_wr_en_i          = cr_reg[0];
      assign rx_rd_en_i          = cr_reg[1];
      assign parity_en_i         = cr_reg[2];        // bit2
      assign parity_mode_i       = cr_reg[4:3];       
      assign stop_2_i            = cr_reg[5];       // 0 = 1 stop bit, 1 = 2 stop bits
      assign data_bits_i         = cr_reg[7:6];	 
      //------------------------------------------------------------------
      // BRDR : read/write register - Baud Rate Divisor Register
      //------------------------------------------------------------------
      always_ff @(posedge clk or negedge rst_n)
          if (!rst_n) {brdr_reg_vld, brdr_reg} <= 33'h0;
          else if (PSEL & PENABLE & PWRITE & divisor_load_i & (addr == ADDR_BRDR)) {brdr_reg_vld, brdr_reg} <= {1'b1,{16'h0,PWDATA[15:0]}}; //16 bits only take remaining rsvd

      //------------------------------------------------------------------
      // IER : read/write register - captured only on a CPU write to ADDR_IER
      //------------------------------------------------------------------
      always_ff @(posedge clk or negedge rst_n)
          if (!rst_n) {ier_reg_vld, ier_reg} <= 33'h0;
          else if (PSEL & PENABLE & PWRITE & (uart_irq_en) & (addr == ADDR_IER)) {ier_reg_vld, ier_reg} <= {1'b1, {29'h0,PWDATA[2:0]}};
 
      assign tx_empty_irq_en_i = ier_reg[0];
      assign rx_irq_en_i       = ier_reg[1];
      assign err_irq_en_i      = ier_reg[2];

  //------------------------------------------------------------------
  // ISR : read-only status register, cleared on CPU read
  //------------------------------------------------------------------
  always_ff @(posedge clk or negedge rst_n)
      if (!rst_n) {isr_reg_vld, isr_reg} <= 33'h0;
     else if (PSEL & PENABLE & (!PWRITE) & (addr == ADDR_ISR)) {isr_reg_vld, isr_reg} <= 33'h0;   // CPU read clears ISR
      else        {isr_reg_vld, isr_reg} <= {1'b1, {24'h0, break_o, overrun_o,frame_err_o, parity_err_o, rx_full_o, rx_empty_o,
                                              tx_full_o, tx_empty_o}};
 
  //=====================================================
  // CR[7:6] (2 bits) -> uart_top data_bits_i (4 bits)
  // Mapping taken from your commented-out code: 7 / 8 / 9 / 8
  //=====================================================
  always_comb begin
    unique case (data_bits_i)
      2'b00:   data_bits_w = 4'd7;
      2'b01:   data_bits_w = 4'd8;
      2'b10:   data_bits_w = 4'd9;
      default: data_bits_w = 4'd8;
    endcase
  end

  //=====================================================
  // ISR read also clears sticky error flags inside uart_top
  //=====================================================
  logic clear_errors;
  assign clear_errors = PSEL & PENABLE & ~PWRITE & (addr == ADDR_ISR);

  //=====================================================
  // uart_top instance
  //=====================================================
   uart_top u_uart_top (
    .clk_i             (PCLK),
    .rst_ni            (PRESETn),
    .divisor_i         (brdr_reg[15:0]),
    .divisor_load_i    (divisor_load_i),
    .data_bits_i       (data_bits_w),
    .parity_en_i       (parity_en_i),
    .parity_mode_i     (parity_mode_i),
    .stop_2_i          (stop_2_i),
    .flow_en_i         (1'b0),                 // CTS flow control not exposed in CR
    .rts_thresh_i      (5'h0E),                // RTS de-asserts when RX level > 14
    .tx_wr_en_i        (tx_wr_en_i),
    .tx_wr_data_i      (thr_reg[8:0]),
    .tx_full_o         (tx_full_o),
    .tx_empty_o        (tx_empty_o),
    .tx_level_o        (),

    .rx_rd_en_i        (rx_rd_en_i),
    .rx_rd_data_o      (rx_rd_data_o),
    .rx_full_o         (rx_full_o),
    .rx_empty_o        (rx_empty_o),
   // .rx_data_valid_o   (data_valid_o),         // added port (see patched uart_top.sv)
    .rx_level_o        (),

    .frame_err_o       (frame_err_o),
    .parity_err_o      (parity_err_o),
    .overrun_o         (overrun_o),
    .break_o           (break_o),
    .clear_errors_i    (clear_errors),

    .rx_irq_en_i       (rx_irq_en_i),
    .rx_full_irq_en_i  (1'b0),                 // no IER bit for it
    .tx_empty_irq_en_i (tx_empty_irq_en_i),
    .err_irq_en_i      (err_irq_en_i),
    .uart_irq          (uart_irq),

    .rx_i              (rx_i),
    .tx_o              (tx_o),
    .cts_n_i           (cts_n_i),
    .rts_n_o           (rts_n_o)
  );

  //=====================================================
  // APB read mux / response
  //=====================================================
  logic addr_hit; //addr_hit is a flag that says whether the address the CPU is accessing is one of your 7 registers.
  always_comb begin
    addr_hit = 1'b1;
    unique case (addr)
      ADDR_THR : PRDATA = thr_reg;
      ADDR_RHR : PRDATA = rhr_reg;
      ADDR_SR  : PRDATA = sr_reg;
      ADDR_CR  : PRDATA = cr_reg;
      ADDR_BRDR: PRDATA = brdr_reg;
      ADDR_IER : PRDATA = ier_reg;
      ADDR_ISR : PRDATA = isr_reg;
      default  : begin PRDATA = 32'h0; addr_hit = 1'b0; end
    endcase
  end

  assign PREADY  = PSEL & PENABLE;                                     // zero wait states
  assign PSLVERR = (PSEL & PENABLE & (!addr_hit));             // unmapped offset -> error


endmodule
