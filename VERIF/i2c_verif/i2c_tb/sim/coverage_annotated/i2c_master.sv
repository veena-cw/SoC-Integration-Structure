//      // verilator_coverage annotation
         module i2c_master (
        
 125356     input  logic       clk,
+125356  point: type=toggle comment=clk:0->1 hier=test_top.dut.i2cm
+125355  point: type=toggle comment=clk:1->0 hier=test_top.dut.i2cm
        
%000001     input  logic       rst_n,      // ACTIVE LOW
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.i2cm
        
 000025     input  logic       start,
+000025  point: type=toggle comment=start:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=start:1->0 hier=test_top.dut.i2cm
        
%000000     input  logic       rw,
-000000  point: type=toggle comment=rw:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rw:1->0 hier=test_top.dut.i2cm
        
%000001     input  logic [6:0] addr,
-000001  point: type=toggle comment=addr[0]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[0]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[1]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[1]:1->0 hier=test_top.dut.i2cm
-000001  point: type=toggle comment=addr[2]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[2]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[3]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[3]:1->0 hier=test_top.dut.i2cm
-000001  point: type=toggle comment=addr[4]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[4]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[5]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[5]:1->0 hier=test_top.dut.i2cm
-000001  point: type=toggle comment=addr[6]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=addr[6]:1->0 hier=test_top.dut.i2cm
        
%000008     input  logic [7:0] data_in,
-000007  point: type=toggle comment=data_in[0]:0->1 hier=test_top.dut.i2cm
-000006  point: type=toggle comment=data_in[0]:1->0 hier=test_top.dut.i2cm
-000005  point: type=toggle comment=data_in[1]:0->1 hier=test_top.dut.i2cm
-000004  point: type=toggle comment=data_in[1]:1->0 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[2]:0->1 hier=test_top.dut.i2cm
-000006  point: type=toggle comment=data_in[2]:1->0 hier=test_top.dut.i2cm
-000008  point: type=toggle comment=data_in[3]:0->1 hier=test_top.dut.i2cm
-000008  point: type=toggle comment=data_in[3]:1->0 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[4]:0->1 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[4]:1->0 hier=test_top.dut.i2cm
-000008  point: type=toggle comment=data_in[5]:0->1 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[5]:1->0 hier=test_top.dut.i2cm
-000005  point: type=toggle comment=data_in[6]:0->1 hier=test_top.dut.i2cm
-000004  point: type=toggle comment=data_in[6]:1->0 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[7]:0->1 hier=test_top.dut.i2cm
-000007  point: type=toggle comment=data_in[7]:1->0 hier=test_top.dut.i2cm
        
%000000     output logic [7:0] data_out,
-000000  point: type=toggle comment=data_out[0]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[0]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[1]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[1]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[2]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[2]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[3]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[3]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[4]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[4]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[5]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[5]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[6]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[6]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[7]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=data_out[7]:1->0 hier=test_top.dut.i2cm
        
 000476     output logic       i2c_scl,
+000476  point: type=toggle comment=i2c_scl:0->1 hier=test_top.dut.i2cm
+000475  point: type=toggle comment=i2c_scl:1->0 hier=test_top.dut.i2cm
        
 000217     inout  logic       i2c_sda,
+000217  point: type=toggle comment=i2c_sda:0->1 hier=test_top.dut.i2cm
+000216  point: type=toggle comment=i2c_sda:1->0 hier=test_top.dut.i2cm
        
 000026     output logic       ready,
+000026  point: type=toggle comment=ready:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=ready:1->0 hier=test_top.dut.i2cm
        
%000000     output logic       ack_error,
-000000  point: type=toggle comment=ack_error:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=ack_error:1->0 hier=test_top.dut.i2cm
        
 000026     output logic       i2c_irq,    // interrupt signal
+000026  point: type=toggle comment=i2c_irq:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=i2c_irq:1->0 hier=test_top.dut.i2cm
        
            //==========================================================
        
            // I2C BUSY STATUS
        
            //
        
            // 1 = transaction in progress
        
            // 0 = I2C master idle
        
            //==========================================================
        
 000025     output logic       busy,
+000025  point: type=toggle comment=busy:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=busy:1->0 hier=test_top.dut.i2cm
        
 000025     output logic       done,
+000025  point: type=toggle comment=done:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=done:1->0 hier=test_top.dut.i2cm
        
%000000     output logic       fifo_wr_en,
-000000  point: type=toggle comment=fifo_wr_en:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_en:1->0 hier=test_top.dut.i2cm
        
%000000     output logic [7:0] fifo_wr_data,
-000000  point: type=toggle comment=fifo_wr_data[0]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[0]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[1]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[1]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[2]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[2]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[3]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[3]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[4]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[4]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[5]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[5]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[6]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[6]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[7]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_wr_data[7]:1->0 hier=test_top.dut.i2cm
        
%000000     input  logic       fifo_full
-000000  point: type=toggle comment=fifo_full:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=fifo_full:1->0 hier=test_top.dut.i2cm
        
        );
        
        
            //==========================================================
        
            // INTERRUPT
        
            //==========================================================
        
 125356     always_ff @(posedge clk or negedge rst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.i2cm
        
~125352         if (!rst_n)
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.i2cm
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.i2cm
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             i2c_irq <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
                else
        
~125352             i2c_irq <= (ready || ack_error || done) ? 1'b1 : 1'b0;
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
-000000  point: type=expr comment=(ack_error==1) => 1 hier=test_top.dut.i2cm
+000025  point: type=expr comment=(done==1) => 1 hier=test_top.dut.i2cm
+001975  point: type=expr comment=(ready==0 && ack_error==0 && done==0) => 0 hier=test_top.dut.i2cm
+123377  point: type=expr comment=(ready==1) => 1 hier=test_top.dut.i2cm
+123377  point: type=branch comment=cond_then hier=test_top.dut.i2cm
+001975  point: type=branch comment=cond_else hier=test_top.dut.i2cm
        
            end
        
        
            //==========================================================
        
            // FSM STATES
        
            //==========================================================
        
            localparam IDLE       = 3'd0;
        
            localparam START      = 3'd1;
        
            localparam ADDR       = 3'd2;
        
            localparam ACK1       = 3'd3;
        
            localparam WRITE_DATA = 3'd4;
        
            localparam READ_DATA  = 3'd5;
        
            localparam MASTER_ACK = 3'd6;
        
            localparam STOP       = 3'd7;
        
        
 000075     logic [2:0] state;
+000075  point: type=toggle comment=state[0]:0->1 hier=test_top.dut.i2cm
+000075  point: type=toggle comment=state[0]:1->0 hier=test_top.dut.i2cm
+000050  point: type=toggle comment=state[1]:0->1 hier=test_top.dut.i2cm
+000050  point: type=toggle comment=state[1]:1->0 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=state[2]:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=state[2]:1->0 hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // BIT COUNTER
        
            //
        
            // 7 -> 6 -> ... -> 0
        
            //
        
            // Reused inside STOP as a 3-phase sequencer (0,1,2) - see
        
            // that state for details. It is guaranteed to already be
        
            // 4'd0 on entry to STOP (WRITE_DATA/READ_DATA both drive it
        
            // to 0 on their last bit before MASTER_ACK), but MASTER_ACK
        
            // also forces it to 0 explicitly on the STOP transition for
        
            // robustness against future changes.
        
            //==========================================================
        
 000225     logic [3:0] bit_cnt;
+000225  point: type=toggle comment=bit_cnt[0]:0->1 hier=test_top.dut.i2cm
+000225  point: type=toggle comment=bit_cnt[0]:1->0 hier=test_top.dut.i2cm
+000101  point: type=toggle comment=bit_cnt[1]:0->1 hier=test_top.dut.i2cm
+000100  point: type=toggle comment=bit_cnt[1]:1->0 hier=test_top.dut.i2cm
+000050  point: type=toggle comment=bit_cnt[2]:0->1 hier=test_top.dut.i2cm
+000050  point: type=toggle comment=bit_cnt[2]:1->0 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=bit_cnt[3]:0->1 hier=test_top.dut.i2cm
+000025  point: type=toggle comment=bit_cnt[3]:1->0 hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // SHIFT REGISTER
        
            //
        
            // [7:1] = 7-bit slave address
        
            // [0]   = R/W
        
            //
        
            // Later reused for WRITE data.
        
            //==========================================================
        
 000013     logic [7:0] shift_reg;
+000012  point: type=toggle comment=shift_reg[0]:0->1 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[0]:1->0 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[1]:0->1 hier=test_top.dut.i2cm
+000010  point: type=toggle comment=shift_reg[1]:1->0 hier=test_top.dut.i2cm
+000013  point: type=toggle comment=shift_reg[2]:0->1 hier=test_top.dut.i2cm
+000012  point: type=toggle comment=shift_reg[2]:1->0 hier=test_top.dut.i2cm
+000010  point: type=toggle comment=shift_reg[3]:0->1 hier=test_top.dut.i2cm
+000010  point: type=toggle comment=shift_reg[3]:1->0 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[4]:0->1 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[4]:1->0 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[5]:0->1 hier=test_top.dut.i2cm
+000010  point: type=toggle comment=shift_reg[5]:1->0 hier=test_top.dut.i2cm
+000011  point: type=toggle comment=shift_reg[6]:0->1 hier=test_top.dut.i2cm
+000010  point: type=toggle comment=shift_reg[6]:1->0 hier=test_top.dut.i2cm
+000013  point: type=toggle comment=shift_reg[7]:0->1 hier=test_top.dut.i2cm
+000013  point: type=toggle comment=shift_reg[7]:1->0 hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // RECEIVE BUFFER
        
            //==========================================================
        
%000000     logic [7:0] rx_buffer;
-000000  point: type=toggle comment=rx_buffer[0]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[0]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[1]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[1]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[2]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[2]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[3]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[3]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[4]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[4]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[5]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[5]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[6]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[6]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[7]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rx_buffer[7]:1->0 hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // REGISTERED R/W
        
            //==========================================================
        
%000000     logic rw_reg;
-000000  point: type=toggle comment=rw_reg:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=rw_reg:1->0 hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // SDA OPEN-DRAIN CONTROL
        
            //
        
            // 1 -> drive SDA LOW
        
            // 0 -> release SDA
        
            //
        
            // External pull-up makes released SDA HIGH.
        
            //==========================================================
        
 000204     logic sda_drive_low;
+000204  point: type=toggle comment=sda_drive_low:0->1 hier=test_top.dut.i2cm
+000204  point: type=toggle comment=sda_drive_low:1->0 hier=test_top.dut.i2cm
        
            assign i2c_sda =
        
 124423             sda_drive_low ? 1'b0 : 1'bz;
+124423  point: type=expr comment=(sda_drive_low==0) => 0 hier=test_top.dut.i2cm
+000934  point: type=expr comment=(sda_drive_low==1) => 1 hier=test_top.dut.i2cm
+000934  point: type=branch comment=cond_then hier=test_top.dut.i2cm
+124423  point: type=branch comment=cond_else hier=test_top.dut.i2cm
        
        
            //==========================================================
        
            // I2C CLOCK DIVIDER
        
            //
        
            // INPUT CLOCK = clk
        
            //
        
            // i2c_tick is used to advance the I2C FSM.
        
            //==========================================================
        
~062676     logic [7:0] clk_div;
+062676  point: type=toggle comment=clk_div[0]:0->1 hier=test_top.dut.i2cm
+062676  point: type=toggle comment=clk_div[0]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[1]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[1]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[2]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[2]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[3]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[3]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[4]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[4]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[5]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[5]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[6]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[6]:1->0 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[7]:0->1 hier=test_top.dut.i2cm
-000000  point: type=toggle comment=clk_div[7]:1->0 hier=test_top.dut.i2cm
        
 062676     logic       i2c_tick;
+062676  point: type=toggle comment=i2c_tick:0->1 hier=test_top.dut.i2cm
+062676  point: type=toggle comment=i2c_tick:1->0 hier=test_top.dut.i2cm
        
            assign i2c_tick =
        
                    (clk_div == 8'd1);
        
        
            //==========================================================
        
            // RX FIFO WRITE PULSE
        
            //
        
            // Single-cycle pulse on the same edge where busy/done/ready
        
            // are updated at the end of a READ transaction.
        
            //==========================================================
        
 125356     always_ff @(posedge clk or negedge rst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.i2cm
        
~125352         if (!rst_n) begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.i2cm
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.i2cm
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             fifo_wr_en   <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             fifo_wr_data <= 8'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
                end
        
 125352         else begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
 125352             fifo_wr_en <= 1'b0; // default: single-cycle pulse
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
~125352             if ((state == STOP) && i2c_tick && !i2c_scl &&
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
~125352                 (rw_reg == 1'b1) && !ack_error) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+125352  point: type=expr comment=((rw_reg == 1'h1)==0) => 0 hier=test_top.dut.i2cm
+125202  point: type=expr comment=((state == STOP)==0) => 0 hier=test_top.dut.i2cm
-000000  point: type=expr comment=((state == STOP)==1 && i2c_tick==1 && i2c_scl==0 && (rw_reg == 1'h1)==1 && ack_error==0) => 1 hier=test_top.dut.i2cm
-000000  point: type=expr comment=(ack_error==1) => 0 hier=test_top.dut.i2cm
+124402  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
+062676  point: type=expr comment=(i2c_tick==0) => 0 hier=test_top.dut.i2cm
        
%000000                 fifo_wr_en   <= !fifo_full;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=expr comment=(fifo_full==0) => 1 hier=test_top.dut.i2cm
-000000  point: type=expr comment=(fifo_full==1) => 0 hier=test_top.dut.i2cm
        
%000000                 fifo_wr_data <= data_out;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                    end
        
                end
        
            end
        
        
            //==========================================================
        
            // CLOCK DIVIDER
        
            //==========================================================
        
 125356     always_ff @(posedge clk or negedge rst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.i2cm
        
~125352         if (!rst_n) begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.i2cm
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.i2cm
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             clk_div <= 8'd0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
                end
        
 125352         else begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
 062676             if (i2c_tick)
+062676  point: type=branch comment=if hier=test_top.dut.i2cm
+062676  point: type=branch comment=else hier=test_top.dut.i2cm
        
 062676                 clk_div <= 8'd0;
+062676  point: type=branch comment=if hier=test_top.dut.i2cm
        
                    else
        
 062676                 clk_div <= clk_div + 1'b1;
+062676  point: type=branch comment=else hier=test_top.dut.i2cm
        
                end
        
            end
        
        
            //==========================================================
        
            // MAIN I2C FSM
        
            //==========================================================
        
 125356     always_ff @(posedge clk or negedge rst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.i2cm
        
~125352         if (!rst_n) begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.i2cm
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.i2cm
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             state         <= IDLE;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             sda_drive_low <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             i2c_scl       <= 1'b1;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             ready         <= 1'b1;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             ack_error     <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             busy          <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             done          <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             bit_cnt       <= 4'd0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             data_out      <= 8'h00;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             shift_reg     <= 8'h00;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             rx_buffer     <= 8'h00;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000004             rw_reg        <= 1'b0;
-000004  point: type=branch comment=if hier=test_top.dut.i2cm
        
                end
        
 125352         else begin
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
 125352             case (state)
+125352  point: type=branch comment=else hier=test_top.dut.i2cm
        
        
                        //==================================================
        
                        // IDLE
        
                        //==================================================
        
 123377                 IDLE: begin
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
                            // I2C bus idle
        
 123377                     i2c_scl       <= 1'b1;
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
 123377                     sda_drive_low <= 1'b0;
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
 123377                     ready <= 1'b1;
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
 123377                     busy  <= 1'b0;
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
 123377                     done  <= 1'b0;
+123377  point: type=line comment=case hier=test_top.dut.i2cm
        
 123352                     if (start) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+123352  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // Store address + R/W
        
                                //------------------------------------------
        
 000025                         shift_reg <= {addr, rw};
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // Start new transaction
        
                                //------------------------------------------
        
 000025                         state <= START;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         ready <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         busy  <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         done  <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         ack_error <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // START
        
                        //
        
                        // START condition:
        
                        //
        
                        // SCL = HIGH
        
                        // SDA = HIGH -> LOW
        
                        //==================================================
        
 000025                 START: begin
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                     rw_reg <= rw;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
~000025                     if (i2c_tick) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000025                         i2c_scl <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         busy    <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         done    <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                // Generate START
        
 000025                         sda_drive_low <= 1'b1;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                // Start transmitting from bit 7
        
 000025                         bit_cnt <= 4'd7;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                         state <= ADDR;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // ADDRESS + R/W
        
                        //==================================================
        
 000800                 ADDR: begin
+000800  point: type=line comment=case hier=test_top.dut.i2cm
        
 000400                     if (i2c_tick) begin
+000400  point: type=branch comment=if hier=test_top.dut.i2cm
+000400  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                // Toggle SCL
        
 000400                         i2c_scl <= ~i2c_scl;
+000400  point: type=branch comment=if hier=test_top.dut.i2cm
+000200  point: type=expr comment=(i2c_scl==0) => 1 hier=test_top.dut.i2cm
+000200  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // SCL was HIGH before toggle
        
                                //
        
                                // SCL becomes LOW.
        
                                // Put data bit on SDA.
        
                                //------------------------------------------
        
 000200                         if (i2c_scl) begin
+000200  point: type=branch comment=if hier=test_top.dut.i2cm
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    // Data 0 -> drive LOW
        
                                    // Data 1 -> release SDA
        
 000200                             sda_drive_low <=
+000200  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000200                                 ~shift_reg[bit_cnt];
+000200  point: type=branch comment=if hier=test_top.dut.i2cm
+000100  point: type=expr comment=(shift_reg[bit_cnt[2:0]+:1]==0) => 1 hier=test_top.dut.i2cm
+000100  point: type=expr comment=(shift_reg[bit_cnt[2:0]+:1]==1) => 0 hier=test_top.dut.i2cm
        
                                end
        
                                //------------------------------------------
        
                                // SCL was LOW before toggle
        
                                //
        
                                // SCL becomes HIGH.
        
                                // One bit has completed.
        
                                //------------------------------------------
        
 000200                         else begin
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000175                             if (bit_cnt == 0) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+000175  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        // All 8 bits transmitted
        
 000025                                 state <= ACK1;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                    end
        
 000175                             else begin
+000175  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000175                                 bit_cnt <= bit_cnt - 1'b1;
+000175  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    end
        
                                end
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // ADDRESS ACK
        
                        //
        
                        // Slave response:
        
                        //
        
                        // ACK  = SDA LOW
        
                        // NACK = SDA HIGH
        
                        //==================================================
        
 000100                 ACK1: begin
+000100  point: type=line comment=case hier=test_top.dut.i2cm
        
 000050                     if (i2c_tick) begin
+000050  point: type=branch comment=if hier=test_top.dut.i2cm
+000050  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000050                         i2c_scl <= ~i2c_scl;
+000050  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=expr comment=(i2c_scl==0) => 1 hier=test_top.dut.i2cm
+000025  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // SCL LOW -> HIGH
        
                                //------------------------------------------
        
 000025                         if (i2c_scl) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    // Release SDA.
        
                                    // Slave controls SDA.
        
 000025                             sda_drive_low <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                end
        
                                //------------------------------------------
        
                                // SCL HIGH -> LOW
        
                                //------------------------------------------
        
 000025                         else begin
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    //--------------------------------------
        
                                    // Check slave ACK
        
                                    //--------------------------------------
        
~000025                             if (i2c_sda !== 1'b0) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        // NACK received
        
%000000                                 ack_error <= 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                        // Transaction failed.
        
                                        // Go to STOP instead of continuing
        
                                        // to WRITE_DATA / READ_DATA.
        
%000000                                 state <= STOP;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                 bit_cnt <= 4'd0;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                 busy <= 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                 done <= 1'b0;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                    end
        
 000025                             else begin
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
        
~000025                                 if (rw_reg == 1'b1) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
%000000                                     bit_cnt <= 4'd7;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                     state <= READ_DATA;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                        end
        
                                        //----------------------------------
        
                                        // WRITE
        
                                        //----------------------------------
        
 000025                                 else begin
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000025                                     bit_cnt <= 4'd8;
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000025                                     shift_reg <= data_in;
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000025                                     state <= WRITE_DATA;
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        end
        
                                    end
        
                                end
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // WRITE DATA
        
                        //==================================================
        
 000850                 WRITE_DATA: begin
+000850  point: type=line comment=case hier=test_top.dut.i2cm
        
 000425                     if (i2c_tick) begin
+000425  point: type=branch comment=if hier=test_top.dut.i2cm
+000425  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // SCL LOW -> HIGH
        
                                //------------------------------------------
        
 000225                         if (!i2c_scl) begin
+000200  point: type=branch comment=if hier=test_top.dut.i2cm
+000225  point: type=branch comment=else hier=test_top.dut.i2cm
+000200  point: type=expr comment=(i2c_scl==0) => 1 hier=test_top.dut.i2cm
+000225  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
        
 000200                             i2c_scl <= 1'b1;
+000200  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                end
        
                                //------------------------------------------
        
                                // SCL HIGH -> LOW
        
                                //------------------------------------------
        
 000225                         else begin
+000225  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000225                             i2c_scl <= 1'b0;
+000225  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000200                             if (bit_cnt == 0) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        //----------------------------------
        
                                        // All 8 data bits transmitted
        
                                        //
        
                                        // Release SDA for slave ACK.
        
                                        //----------------------------------
        
 000025                                 sda_drive_low <= 1'b0;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                                 state <= MASTER_ACK;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                    end
        
 000200                             else begin
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000200                                 bit_cnt <= bit_cnt - 1'b1;
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        //----------------------------------
        
                                        // Put next bit on SDA while SCL LOW
        
                                        //----------------------------------
        
 000200                                 sda_drive_low <=
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000200                                     ~shift_reg[bit_cnt - 1'b1];
+000200  point: type=branch comment=else hier=test_top.dut.i2cm
+000096  point: type=expr comment=(shift_reg[(bit_cnt - 1'h1)[2:0]+:1]==0) => 1 hier=test_top.dut.i2cm
+000104  point: type=expr comment=(shift_reg[(bit_cnt - 1'h1)[2:0]+:1]==1) => 0 hier=test_top.dut.i2cm
        
                                    end
        
                                end
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // READ DATA
        
                        //
        
                        // Master releases SDA.
        
                        // Slave drives SDA.
        
                        // Master samples SDA.
        
                        //==================================================
        
%000000                 READ_DATA: begin
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     if (i2c_tick) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
%000000                         i2c_scl <= ~i2c_scl;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=expr comment=(i2c_scl==0) => 1 hier=test_top.dut.i2cm
-000000  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // SCL LOW -> HIGH
        
                                //------------------------------------------
        
%000000                         if (i2c_scl) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    // Release SDA.
        
                                    // Slave drives data.
        
%000000                             sda_drive_low <= 1'b0;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                end
        
                                //------------------------------------------
        
                                // SCL HIGH -> LOW
        
                                //------------------------------------------
        
%000000                         else begin
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    //--------------------------------------
        
                                    // Sample SDA
        
                                    //
        
                                    // bit_cnt now enters this state at 7
        
                                    // (loaded in ACK1), so rx_buffer[bit_cnt]
        
                                    // samples bit_cnt = 7,6,...,0 - exactly
        
                                    // 8 real bit-times into rx_buffer[7:0],
        
                                    // matching WRITE_DATA's 8 bit-times. No
        
                                    // out-of-range index, no wasted sample.
        
                                    //--------------------------------------
        
%000000                             rx_buffer[bit_cnt] <= i2c_sda;
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
%000000                             if (bit_cnt == 0) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                        //----------------------------------
        
                                        // Last bit
        
                                        //----------------------------------
        
%000000                                 data_out <= {
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                     rx_buffer[7:1],
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
%000000                                     i2c_sda
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                        };
        
%000000                                 state <= MASTER_ACK;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                    end
        
%000000                             else begin
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
%000000                                 bit_cnt <= bit_cnt - 1'b1;
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    end
        
                                end
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // MASTER ACK / NACK
        
                        //
        
                        // WRITE:
        
                        //     Slave sends ACK/NACK
        
                        //
        
                        // READ:
        
                        //     Master sends NACK after one byte
        
                        //
        
                        // For a single-byte read, master releases SDA,
        
                        // therefore SDA becomes HIGH = NACK.
        
                        //==================================================
        
 000050                 MASTER_ACK: begin
+000050  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                     if (i2c_tick) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
~000025                         i2c_scl <= ~i2c_scl;
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=expr comment=(i2c_scl==0) => 1 hier=test_top.dut.i2cm
-000000  point: type=expr comment=(i2c_scl==1) => 0 hier=test_top.dut.i2cm
        
                                //------------------------------------------
        
                                // SCL LOW -> HIGH
        
                                //------------------------------------------
        
~000025                         if (i2c_scl) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    //--------------------------------------
        
                                    // Release SDA
        
                                    //--------------------------------------
        
%000000                             sda_drive_low <= 1'b0;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                end
        
                                //------------------------------------------
        
                                // SCL HIGH -> LOW
        
                                //------------------------------------------
        
 000025                         else begin
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                    //--------------------------------------
        
                                    // WRITE operation
        
                                    //
        
                                    // Check slave ACK.
        
                                    //--------------------------------------
        
~000025                             if (rw_reg == 1'b0) begin
+000025  point: type=branch comment=if hier=test_top.dut.i2cm
-000000  point: type=branch comment=else hier=test_top.dut.i2cm
        
~000025                                 if (i2c_sda !== 1'b0) begin
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                            // Slave NACKed data
        
%000000                                     ack_error <= 1'b1;
-000000  point: type=branch comment=if hier=test_top.dut.i2cm
        
                                        end
        
                                    end
        
                                    //--------------------------------------
        
                                    // READ operation
        
                                    //
        
                                    // SDA was released.
        
                                    // Therefore master sends NACK.
        
                                    //--------------------------------------
        
 000025                             state   <= STOP;
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000025                             bit_cnt <= 4'd0; // reset STOP phase sequencer
+000025  point: type=branch comment=else hier=test_top.dut.i2cm
        
                                end
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // STOP
        
                        //
        
                        // STOP condition:
        
                        //
        
                        // SDA rises to HIGH strictly AFTER SCL is already
        
                        // stable HIGH (setup time tSU:STO). SCL and SDA
        
                        // must NOT change on the same clock edge, or a
        
                        // BFM/monitor cannot tell the two edges apart and
        
                        // will not recognize a valid STOP.
        
                        //
        
                        // This uses bit_cnt as an explicit 3-phase
        
                        // sequencer (instead of the toggle-every-tick
        
                        // pattern used elsewhere) so there is a full,
        
                        // untouched tick where SCL is already HIGH before
        
                        // SDA is allowed to move:
        
                        //
        
                        //   phase 0: SCL=0, SDA=0   (known starting point)
        
                        //   phase 1: SCL=1, SDA=0   (SCL now stable HIGH)
        
                        //   phase 2: SCL unchanged, SDA released -> STOP
        
                        //==================================================
        
 000150                 STOP: begin
+000150  point: type=line comment=case hier=test_top.dut.i2cm
        
 000075                     if (i2c_tick) begin
+000075  point: type=branch comment=if hier=test_top.dut.i2cm
+000075  point: type=branch comment=else hier=test_top.dut.i2cm
        
 000075                         case (bit_cnt)
+000075  point: type=branch comment=if hier=test_top.dut.i2cm
        
 000025                             4'd0: begin
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                        // Phase 0: force a known, safe
        
                                        // starting point - bus low.
        
 000025                                 i2c_scl       <= 1'b0;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 sda_drive_low <= 1'b1;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 bit_cnt <= 4'd1;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                    end
        
 000025                             4'd1: begin
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                        // Phase 1: raise SCL. SDA stays LOW
        
                                        // and is not touched here, so SCL
        
                                        // is stable HIGH for a full tick
        
                                        // before SDA is allowed to change.
        
 000025                                 i2c_scl <= 1'b1;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 bit_cnt <= 4'd2;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                    end
        
 000025                             4'd2: begin
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                        // Phase 2: release SDA (rises via
        
                                        // pull-up) WITHOUT touching i2c_scl
        
                                        // this cycle - SCL stays HIGH and
        
                                        // stable while SDA rises. This is
        
                                        // the actual, cleanly detectable
        
                                        // STOP edge.
        
 000025                                 sda_drive_low <= 1'b0;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 state <= IDLE;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 busy  <= 1'b0;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 ready <= 1'b1;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
 000025                                 done  <= 1'b1;
+000025  point: type=line comment=case hier=test_top.dut.i2cm
        
                                    end
        
%000000                             default: begin
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                                 state <= IDLE;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
                                    end
        
                                endcase
        
                            end
        
                        end
        
        
                        //==================================================
        
                        // DEFAULT
        
                        //==================================================
        
%000000                 default: begin
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     state         <= IDLE;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     i2c_scl       <= 1'b1;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     sda_drive_low <= 1'b0;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     ready <= 1'b1;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     busy  <= 1'b0;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
%000000                     done  <= 1'b0;
-000000  point: type=line comment=case hier=test_top.dut.i2cm
        
                        end
        
        
                    endcase
        
                end
        
            end
        
        endmodule
        
         
        
