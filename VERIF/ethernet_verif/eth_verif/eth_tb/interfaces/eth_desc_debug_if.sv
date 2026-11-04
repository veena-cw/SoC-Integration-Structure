`timescale 1ns/1ps

interface eth_desc_debug_if(input logic clk);

    // MAC RX FIFO source-clock-domain diagnostic signals.
    // Passive RX FIFO core AXI-Stream observations.
    logic rx_fifo_s_valid;
    logic rx_fifo_s_ready;
    logic rx_fifo_s_last;

    logic rx_fifo_m_valid;
    logic rx_fifo_m_ready;
    logic rx_fifo_m_last;

    logic rx_fifo_m_clk;

    logic rx_fifo_src_clk;
    logic rx_fifo_drop_active;
    logic rx_fifo_in_frame;

    logic [12:0] rx_fifo_depth;
    logic [12:0] rx_fifo_depth_commit;
    logic rx_fifo_full;
    logic rx_fifo_full_wr;




    logic force_rd_not_ready;
    logic force_wr_not_ready;

    logic cfg_valid;
    logic cfg_ready;

    logic rd_valid;
    logic rd_ready;

    logic wr_valid;
    logic wr_ready;


    // Passive DMA descriptor completion observation
    logic       rd_sts_valid;
    logic [3:0] rd_sts_error;
    logic       wr_sts_valid;
    logic [3:0] wr_sts_error;

    logic rx_error_bad_frame;
    logic rx_pkt_fragment;
    logic rx_error_preamble;
    logic rx_error_oversize;
    logic rx_error_bad_fcs;

    // Passive MAC RX FIFO status observation.
    logic rx_fifo_overflow;
    logic rx_fifo_bad_frame;
    logic rx_fifo_good_frame;



    logic [31:0] rx_fifo_wr_ptr;
    logic [31:0] rx_fifo_wr_ptr_commit;
    localparam int RX_FIFO_RAM_MON_W = 64;
    logic [RX_FIFO_RAM_MON_W-1:0] rx_fifo_ram_word;
    logic rx_fifo_ram_full;
    logic rx_fifo_ram_write_decision;
    logic rx_fifo_ram_write_handshake;



endinterface
