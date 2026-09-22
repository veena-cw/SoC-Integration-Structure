`include "uvm_macros.svh"
`timescale 1ns/1ps
module csi2_tb_top;
  import uvm_pkg::*;
  import csi2_uvm_pkg::*;
  parameter int NUM_LANES = 4;
  logic clk = 1'b0;
  always #5 clk = ~clk;
  csi2_if #(.NUM_LANES(NUM_LANES)) csi_vif(.clk(clk));
  csi2_reset_if rst_vif(.clk(clk));
  assign csi_vif.rst_n = rst_vif.rst_n;
  assign csi_vif.px_ready_i = 1'b1;

  csi2_tx_top #(.NUM_LANES(NUM_LANES)) tx_dut (
    .clk                    (clk),
    .rst_n                  (rst_vif.rst_n),
    .pkt_valid_i            (csi_vif.pkt_valid_i),
    .pkt_ready_o            (csi_vif.pkt_ready_o),
    .pkt_vc_i               (csi_vif.pkt_vc_i),
    .pkt_dt_i               (csi_vif.pkt_dt_i),
    .pkt_len_i              (csi_vif.pkt_len_i),
    .px_data_i              (csi_vif.px_data_i),
    .px_valid_i             (csi_vif.px_valid_i),
    .px_ready_o             (csi_vif.px_ready_o),
    .lane_data_o            (csi_vif.lane_data_link),
    .lane_valid_o           (csi_vif.lane_valid_link),
    .hs_active_o            (csi_vif.hs_active_link),
    .hs_start_o             (csi_vif.hs_start_link),
    .hs_last_o              (csi_vif.hs_last_link)
  );

  csi2_rx_top #(.NUM_LANES(NUM_LANES)) rx_dut (
    .clk                    (clk),
    .rst_n                  (rst_vif.rst_n),
    .lane_data_i            (csi_vif.rx_lane_data),
    .lane_valid_i           (csi_vif.rx_lane_valid),
    .hs_start_i             (csi_vif.rx_hs_start),
    .hs_last_i              (csi_vif.rx_hs_last),
    .px_data_o              (csi_vif.px_data_o),
    .px_valid_o             (csi_vif.px_valid_o),
    .px_ready_i             (csi_vif.px_ready_i),
    .px_last_o              (csi_vif.px_last_o),
    .px_vc_o                (csi_vif.px_vc_o),
    .px_dt_o                (csi_vif.px_dt_o),
    .frame_start_o          (csi_vif.frame_start_o),
    .frame_end_o            (csi_vif.frame_end_o),
    .line_start_o           (csi_vif.line_start_o),
    .line_end_o             (csi_vif.line_end_o),
    .generic_sp_valid_o     (csi_vif.generic_sp_valid_o),
    .generic_sp_dt_o        (csi_vif.generic_sp_dt_o),
    .generic_sp_data_o      (csi_vif.generic_sp_data_o),
    .hdr_ecc_1bit_o         (csi_vif.hdr_ecc_1bit_o),
    .hdr_ecc_2bit_o         (csi_vif.hdr_ecc_2bit_o),
    .payload_crc_err_o      (csi_vif.payload_crc_err_o),
    .packet_format_err_o    (csi_vif.packet_format_err_o)
  );

  // Reset checks sample on the positive edge after assertion at a negative edge.
  bit reset_sampled = 1'b0;
  always @(posedge clk)
  begin
    reset_sampled <= (rst_vif.rst_n === 1'b0);
    if(reset_sampled && rst_vif.rst_n === 1'b0) begin
      if(csi_vif.lane_valid_link !== '0 || csi_vif.px_valid_o !== 1'b0 ||
         csi_vif.frame_start_o !== 1'b0 || csi_vif.frame_end_o !== 1'b0 ||
         csi_vif.line_start_o !== 1'b0 || csi_vif.line_end_o !== 1'b0 ||
         csi_vif.generic_sp_valid_o !== 1'b0 ||
         csi_vif.hdr_ecc_1bit_o !== 1'b0 || csi_vif.hdr_ecc_2bit_o !== 1'b0 ||
         csi_vif.payload_crc_err_o !== 1'b0 || csi_vif.packet_format_err_o !== 1'b0)
        `uvm_error("RESET_OUTPUT", "DUT valid/event output active during reset")
    end
  end

  initial begin
    if(NUM_LANES != 4) $fatal(1,"Current UVM configuration supports NUM_LANES=4");
    uvm_config_db#(virtual csi2_if)::set(null,"*","vif",csi_vif);
    uvm_config_db#(virtual csi2_reset_if)::set(null,"*","rst_vif",rst_vif);
    run_test();
  end

 /* initial
  begin
  $monitor("RESET_TRACE time=%0t csi2_reset_if=%b csi2_if=%b",
           $time, rst_vif.rst_n, csi_vif.rst_n);
end*/

  initial
  begin : waveform_dump

    if($test$plusargs("WAVES"))
      begin
      $display("WAVE_INFO: waveform dumping enabled");
      $dumpfile("ignore/csi2_wave.fst");
      $dumpvars(0, csi2_tb_top);
   end

  end

endmodule : csi2_tb_top
