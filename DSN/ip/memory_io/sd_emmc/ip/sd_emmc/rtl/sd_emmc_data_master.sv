`include "sd_emmc_defines.h"

module sd_data_master (
           input logic sd_clk,
           input logic rst,
           input logic start_tx_i,
           input logic start_rx_i,
           input logic [`DATA_TIMEOUT_W-1:0] timeout_i,
           //output logic  to SD-Host logic
           output logic  d_write_o,
           output logic  d_read_o,
           //To fifo filler
           input logic rx_fifo_full_i,
           //TODO: should be dependent on rx_fifo_empty_i signal (wishbone read all data case)
           //SD-DATA_Host
           input logic xfr_complete_i,
           input logic crc_ok_i,
           //status output logic 
           output logic [`INT_DATA_SIZE-1:0] int_status_o,
           input logic int_status_rst_i,
           input logic start_write
       );

logic [`DATA_TIMEOUT_W-1:0] timeout_logic;
logic [`DATA_TIMEOUT_W-1:0] watchdog;
logic tx_cycle;
parameter SIZE = 3;
logic [SIZE-1:0] state;
logic [SIZE-1:0] next_state;
parameter IDLE          = 3'b000;
parameter START_TX_FIFO = 3'b001;
parameter START_RX_FIFO = 3'b010;
parameter DATA_TRANSFER = 3'b100;

logic trans_done;

always_comb
begin: FSM_COMBO
    case(state)
        IDLE: begin
            if (start_tx_i == 1) begin
                next_state <= START_TX_FIFO;
            end
            else if (start_rx_i == 1) begin
                next_state <= START_RX_FIFO;
            end
            else begin
                next_state <= IDLE;
            end
        end
        START_TX_FIFO: begin
            if (start_write == 1) // start signal to came
                next_state <= DATA_TRANSFER;
            else
                next_state <= START_TX_FIFO;
        end
        START_RX_FIFO: begin
            if (xfr_complete_i == 0)
                next_state <= DATA_TRANSFER;
            else
                next_state <= START_RX_FIFO;
        end
        DATA_TRANSFER: begin
            if (trans_done)
                next_state <= IDLE;
            else
                next_state <= DATA_TRANSFER;
        end
        default: next_state <= IDLE;
    endcase
end

//----------------Seq logic------------
always_ff @(posedge sd_clk or posedge rst)
begin: FSM_SEQ
    if (rst) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

//output logic  logic-----------------
always_ff @(posedge sd_clk or posedge rst)
begin
    if (rst) begin
        d_write_o <= 0;
        d_read_o <= 0;
        trans_done <= 0;
        tx_cycle <= 0;
        int_status_o <= 0;
        timeout_logic <= 0;
        watchdog <= 0;
    end
    else begin
        case(state)
            IDLE: begin
                d_write_o <= 0;
                d_read_o <= 0;
                trans_done <= 0;
                tx_cycle <= 0;
                timeout_logic <= timeout_i;
                watchdog <= 0;
            end
            START_RX_FIFO: begin
                tx_cycle <= 0;
                d_read_o <= 1;
            end
            START_TX_FIFO:  begin
                tx_cycle <= 1;
                d_write_o <= 1;
            end
            DATA_TRANSFER: begin
                d_read_o <= 0;
                d_write_o <= 0;
                watchdog <= watchdog + `DATA_TIMEOUT_W'd1;
                    if (rx_fifo_full_i) begin
                        if (!trans_done) begin
                            int_status_o[`INT_DATA_CFE] <= 1;
                            int_status_o[`INT_DATA_EI] <= 1;
                        end
                        trans_done <= 1;
                        //stop sd_data_serial_host
                        d_write_o <= 1;
                        d_read_o <= 1;
                    end
//                end
                if (timeout_logic && watchdog >= timeout_logic) begin
                    int_status_o[`INT_DATA_CTE] <= 1;
                    int_status_o[`INT_DATA_EI] <= 1;
                    trans_done <= 1;
                    //stop sd_data_serial_host
                    d_write_o <= 1;
                    d_read_o <= 1;
                end
                else if (xfr_complete_i) begin //Transfer complete
                    d_write_o <= 0;
                    d_read_o <= 0;
                    trans_done <= 1;
                    if (!crc_ok_i)  begin //Wrong CRC and Data line free.
                        if (!trans_done) begin
                            int_status_o[`INT_DATA_CCRCE] <= 1;
                            int_status_o[`INT_DATA_EI] <= 1;
                        end
                    end
                    else if (crc_ok_i) begin //Data Line free
                        if (!trans_done)
                            int_status_o[`INT_DATA_CC] <= 1;
                    end
                end
            end
        endcase
        if (int_status_rst_i)
            int_status_o<=0;
    end
end

endmodule