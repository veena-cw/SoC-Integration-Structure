//=============================================================================
 // uart_apb_top.sv
 //
 // APB3/APB4 completer wrapper around uart_top.
 //   * PADDR[15:0] is the register offset inside the UART window.
 //   * Zero-wait-state APB response.
 //   * Register side effects require a preceding SETUP phase.
 //=============================================================================

module uart_apb_top(
  //---------------------------------------------------------------
  // APB slave port
  //---------------------------------------------------------------
  input  logic        PCLK,
  input  logic        PRESETn,
  input  logic        PSEL,
  input  logic        PENABLE,
  input  logic        PWRITE,
  input  logic [31:0] PADDR,
  input  logic [31:0] PWDATA,
  input  logic [3:0]  PSTRB,
  //input  logic [2:0]  PPROT,
  output logic [31:0] PRDATA,
  output logic        PREADY,
  output logic        PSLVERR,

  //---------------------------------------------------------------
  // Register control enables
  //---------------------------------------------------------------
  input  logic        divisor_load_i,
  input  logic        uart_irq_en,

  //---------------------------------------------------------------
  // Serial pads / interrupt
  //---------------------------------------------------------------
  input  logic        rx_i,
  output logic        tx_o,
  input  logic        cts_n_i,
  output logic        rts_n_o,
  output logic        uart_irq
);

  //=====================================================
  // Clock / reset / address aliases
  //=====================================================
  logic        clk;
  logic        rst_n;
  logic [31:0] addr;

  assign clk   = PCLK;
  assign rst_n = PRESETn;
  assign addr  = {16'h0, PADDR[15:0]};

  //=====================================================
  // APB SETUP tracking
  //=====================================================
  logic apb_setup_seen;
  logic apb_access_valid;

  // A valid ACCESS must be preceded by SETUP.
  // The flag is cleared after a completed transfer or when
  // the bus returns to IDLE.
  always_ff @(posedge PCLK or negedge PRESETn) begin
    if (!PRESETn)
      apb_setup_seen <= 1'b0;
    else if (!PSEL)
      apb_setup_seen <= 1'b0;
    else if (!PENABLE)
      apb_setup_seen <= 1'b1;
    else if (PREADY)
      apb_setup_seen <= 1'b0;
  end

  assign apb_access_valid =
      PSEL && PENABLE && apb_setup_seen;

  //=====================================================
  // Register Valid Bits
  //=====================================================
  logic thr_reg_vld;
  logic rhr_reg_vld;
  logic sr_reg_vld;
  logic cr_reg_vld;
  logic brdr_reg_vld;
  logic ier_reg_vld;
  logic isr_reg_vld;

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
  logic       tx_wr_en_i;
  logic       rx_rd_en_i;
  logic       parity_en_i;
  logic [1:0] parity_mode_i;
  logic       stop_2_i;
  logic [1:0] data_bits_i;
  logic [3:0] data_bits_w;
  logic       flow_en_i;
  logic [4:0] rts_thresh_i;

  //=====================================================
  // Interrupt Enable Signals
  //=====================================================
  logic tx_empty_irq_en_i;
  logic rx_irq_en_i;
  logic err_irq_en_i;
  logic rx_full_irq_en_i;

  //=====================================================
  // Signals from uart_top
  //=====================================================
  logic       data_valid_o;
  logic [8:0] rx_rd_data_o;

  logic tx_empty_o;
  logic tx_full_o;
  logic rx_empty_o;
  logic rx_full_o;

  logic parity_err_o;
  logic frame_err_o;
  logic overrun_o;
  logic break_o;

  logic do_push;

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

  //=====================================================
  // THR: Write-only transmit holding register
  //=====================================================
  assign do_push = tx_wr_en_i && (!rx_full_o);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {thr_reg_vld, thr_reg} <= 33'h0;
    else if (apb_access_valid && PWRITE &&
             (addr == ADDR_THR))
      {thr_reg_vld, thr_reg} <= {1'b1,23'h0, PWDATA[8:0]};
  end

  //=====================================================
  // RHR: Receive holding register
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {rhr_reg_vld, rhr_reg} <= 33'h0;
    else if ((!rx_empty_o) && (addr == ADDR_RHR))
      {rhr_reg_vld, rhr_reg} <= {1'b1, 23'h0, rx_rd_data_o};
    else
      {rhr_reg_vld, rhr_reg} <= 33'h0;
  end

  //=====================================================
  // SR: Read-only live status register
  //
  // bit0 : tx_empty_o
  // bit1 : tx_full_o
  // bit2 : rx_empty_o
  // bit3 : rx_full_o
  // bit4 : parity_err_o
  // bit5 : frame_err_o
  // bit6 : do_push
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) {sr_reg_vld, sr_reg} <= {1'b0, 32'h00000005};
	  else if (apb_access_valid && (~PWRITE) && (addr == ADDR_SR)) {sr_reg_vld, sr_reg} <=  {1'b0, 32'h00000005};
     else if (apb_access_valid && PWRITE && (addr == ADDR_SR)) {sr_reg_vld, sr_reg} <= {1'b1, {25'h0, do_push, frame_err_o, parity_err_o, rx_full_o, rx_empty_o, tx_full_o, tx_empty_o}};
  end

  //=====================================================
  // CR: Read/write control register
  //
  // bit0   : TX write enable
  // bit1   : RX read enable
  // bit2   : parity enable
  // bit4:3 : parity mode
  // bit5   : two stop bits
  // bit7:6 : data bits
  // bit8   : flow-control enable
  // bit13:9: RTS threshold
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {cr_reg_vld, cr_reg} <= 33'h0;
    else if (apb_access_valid && PWRITE &&
             (addr == ADDR_CR))
      {cr_reg_vld, cr_reg} <=
        {1'b1, {18'h0, PWDATA[13:0]}};
  end

  logic cr0_q, cr1_q;

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {cr1_q, cr0_q} <= 2'b00;
    else
      {cr1_q, cr0_q} <= cr_reg[1:0];
  end

  assign tx_wr_en_i = cr_reg[0] & ~cr0_q;
  assign rx_rd_en_i = cr_reg[1] & ~cr1_q;

  assign parity_en_i   = cr_reg[2];
  assign parity_mode_i = cr_reg[4:3];
  assign stop_2_i      = cr_reg[5];
  assign data_bits_i   = cr_reg[7:6];
  assign flow_en_i     = cr_reg[8];
  assign rts_thresh_i  = cr_reg[13:9];

  //=====================================================
  // BRDR: Baud Rate Divisor Register
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {brdr_reg_vld, brdr_reg} <= 33'h0;
    else if (apb_access_valid && PWRITE &&
             divisor_load_i && (addr == ADDR_BRDR))
      {brdr_reg_vld, brdr_reg} <=
        {1'b1, {16'h0, PWDATA[15:0]}};
  end

  //=====================================================
  // IER: Interrupt Enable Register
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {ier_reg_vld, ier_reg} <= 33'h0;
    else if (apb_access_valid && PWRITE &&
             uart_irq_en && (addr == ADDR_IER))
      {ier_reg_vld, ier_reg} <=
        {1'b1, {28'h0, PWDATA[3:0]}};
  end

  assign tx_empty_irq_en_i = ier_reg[0];
  assign rx_irq_en_i        = ier_reg[1];
  assign err_irq_en_i       = ier_reg[2];
  assign rx_full_irq_en_i   = ier_reg[3];

  //=====================================================
  // ISR: Read-only status register, cleared on valid CPU read
  //=====================================================
  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n)
      {isr_reg_vld, isr_reg} <= {1'b0, 32'h00000005};
    else if (apb_access_valid && !PWRITE &&
             (addr == ADDR_ISR))
      {isr_reg_vld, isr_reg} <= {1'b0, 32'h00000005};
    else
      {isr_reg_vld, isr_reg} <=
        {1'b1,
         {24'h0, break_o, overrun_o, frame_err_o,
          parity_err_o, rx_full_o, rx_empty_o,
          tx_full_o, tx_empty_o}};
  end

  //=====================================================
  // CR[7:6] -> uart_top data_bits_i (4 bits)
  // 00 = 7 bits, 01 = 8 bits, 10 = 9 bits, 11 = 8 bits
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
  // ISR read clears sticky error flags inside uart_top
  //=====================================================
  logic clear_errors;

  assign clear_errors =
      apb_access_valid && !PWRITE && (addr == ADDR_ISR);

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
    .flow_en_i         (flow_en_i),
    .rts_thresh_i      (rts_thresh_i),
    .tx_wr_en_i        (tx_wr_en_i),
    .tx_wr_data_i      (thr_reg[8:0]),
    .tx_full_o         (tx_full_o),
    .tx_empty_o        (tx_empty_o),
    .tx_level_o        (),

    .rx_rd_en_i        (rx_rd_en_i),
    .rx_rd_data_o      (rx_rd_data_o),
    .rx_full_o         (rx_full_o),
    .rx_empty_o        (rx_empty_o),
    .rx_data_valid_o   (data_valid_o),
    .rx_level_o        (),

    .frame_err_o       (frame_err_o),
    .parity_err_o      (parity_err_o),
    .overrun_o         (overrun_o),
    .break_o           (break_o),
    .clear_errors_i    (clear_errors),

    .rx_irq_en_i       (rx_irq_en_i),
    .rx_full_irq_en_i  (rx_full_irq_en_i),
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
  logic addr_hit;

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

      default: begin
        PRDATA   = 32'h0;
        addr_hit = 1'b0;
      end
    endcase
  end

  // Keep the existing zero-wait-state response behavior.
  assign PREADY  = PSEL & PENABLE;
  assign PSLVERR = PSEL & PENABLE & (!addr_hit);

endmodule
