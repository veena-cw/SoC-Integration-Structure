//==================================================================================
// SPI clock-divider timing assertion
//
// Specification rule:
//   SCK half-period = (CLK_DIV + 1) * PCLK period
//   SCK frequency   = PCLK frequency / (2 * (CLK_DIV + 1))
//==================================================================================

`timescale 1ns/1ps

module apb_spi_clk_div_assertions #(
  parameter real PCLK_FREQ_MHZ = 100.0
) (
  input logic        pclk,
  input logic        presetn,
  input logic [15:0] clk_div,
  input logic        sck_o,
  input logic [3:0]  cs_n_o
);

  logic              previous_sck;
  logic              previous_cs_active;
  logic [15:0]       active_clk_div;
  longint unsigned   pclk_count;
  longint unsigned   previous_sck_count;
  longint unsigned   measured_half_cycles;
  bit                previous_edge_valid;
  bit                frequency_reported;
  wire               cs_active = (cs_n_o != 4'hF);

  // SCK is generated synchronously from PCLK. Sampling on every PCLK edge
  // therefore gives an exact integer cycle count between consecutive SCK edges.
  always @(posedge pclk) begin
    if (!presetn) begin
      previous_sck         <= sck_o;
      previous_cs_active   <= 1'b0;
      active_clk_div       <= '0;
      pclk_count           <= 0;
      previous_sck_count   <= 0;
      measured_half_cycles <= 0;
      previous_edge_valid  <= 1'b0;
      frequency_reported   <= 1'b0;
    end else begin
      pclk_count <= pclk_count + 1;

      // Latch the divider at the beginning of each SPI transfer.
      if (!previous_cs_active && cs_active) begin
        active_clk_div      <= clk_div;
        previous_edge_valid <= 1'b0;
        frequency_reported  <= 1'b0;
      end else if (previous_cs_active && !cs_active) begin
        previous_edge_valid <= 1'b0;
      end else if (cs_active && (sck_o != previous_sck)) begin
        if (previous_edge_valid) begin
          measured_half_cycles = pclk_count - previous_sck_count;

          a_sck_half_period: assert (
            measured_half_cycles == (active_clk_div + 1)
          )
          else $error(
            "CLK_DIV_ASSERT: CLK_DIV=%0d measured half-period=%0d PCLK expected=%0d PCLK",
            active_clk_div,
            measured_half_cycles,
            active_clk_div + 1
          );

          // Report one measured result per transfer. The assertion above still
          // checks every remaining SCK half-period in the transfer.
          if (!frequency_reported) begin
            $display(
              "CLK_DIV_FREQ: CLK_DIV=%0d measured_half=%0d PCLK measured_SCK=%0.4f MHz expected_SCK=%0.4f MHz",
              active_clk_div,
              measured_half_cycles,
              PCLK_FREQ_MHZ / (2.0 * measured_half_cycles),
              PCLK_FREQ_MHZ / (2.0 * (active_clk_div + 1))
            );
            frequency_reported <= 1'b1;
          end
        end

        previous_sck_count  <= pclk_count;
        previous_edge_valid <= 1'b1;
      end

      previous_sck       <= sck_o;
      previous_cs_active <= cs_active;
    end
  end

endmodule
