`include "sd_emmc_defines.h"

module sd_data_serial_host(
           input logic  sd_clk,
           input logic  sd_clk90,
           input logic  rst,
           //Tx Fifo
           input logic  [31:0] data_in,
           output logic rd,
           //Rx Fifo
           output logic  [31:0] data_out_o,
           output logic we,
           //tristate data
           output logic  DAT_oe_o,
           output logic [7:0] DAT_dat_o,
           input logic  [7:0] DAT_dat_i,
           //Controll signals
           input logic [`BLKSIZE_W-1:0] blksize,
           input logic  bus_4bit,
           input logic  bus_8bit,
           input logic  [`BLKCNT_W-1:0] blkcnt,
           input logic  [1:0] start,
           output logic sd_data_busy,
           output logic busy,
           output logic  crc_ok,
           output logic read_trans_active,
           output logic write_trans_active,
           input logic  start_write,
           output logic  write_next_block,
           input logic   [2:0] UHSMode
       );
       

logic [7:0] DAT_dat_logic;
logic [`BLKSIZE_W-1+3:0] data_cycles;
logic bus_4bit_logic;
logic bus_8bit_logic;
//CRC16
logic [15:0] crc_in;
logic crc_en;
logic crc_rst;
logic [15:0] crc_out [15:0];
logic [`BLKSIZE_W-1+4:0] transf_cnt;
parameter SIZE = 6;
logic [SIZE-1:0] state;
logic [SIZE-1:0] next_state;
parameter IDLE       = 6'b000001;
parameter WRITE_DAT  = 6'b000010;
parameter WRITE_WAIT  = 6'b000011;
parameter WRITE_CRC  = 6'b000100;
parameter WRITE_BUSY = 6'b001000;
parameter READ_WAIT  = 6'b010000;
parameter READ_DAT   = 6'b100000;
logic [3:0] crc_status;
logic busy_int;
logic [`BLKCNT_W-1:0] blkcnt_logic;
logic [`BLKSIZE_W-1:0] blksize_logic;
logic next_block;
logic start_bit;
logic [4:0] crc_c;
logic [7:0] last_din;
logic [3:0] crc_s;
logic [4:0] data_index;
logic [31:0] data_out;
logic [7:0] iddrQ1;
logic [7:0] iddrQ2;
logic DDR50;
logic [7:0] last_dinDDR;
logic [15:0] d1d2_logic;
logic [7:0] DAT_dat_logicn;

assign data_out_o [31:0] = {data_out[7:0], data_out[15:8], data_out[23:16], data_out[31:24]};
assign DDR50 = UHSMode == 3'b100 ? 1'b1: 1'b0;
assign data_cycles = (bus_8bit && DDR50) ? blksize >> 1 : (bus_8bit && !DDR50) ? blksize : bus_4bit ? blksize << 1 : blksize << 3;


//sd data input logic  pad logicister
always_ff @(posedge sd_clk)
    DAT_dat_logic <= iddrQ1;

//sd data input logic  pad logicister
always_ff @(negedge sd_clk)
    DAT_dat_logicn <= iddrQ2;
genvar i;
generate
    for(i=0; i<16; i=i+1) begin: CRC_16_gen
        sd_crc_16 CRC_16_i(
          crc_in[i],
          crc_en,
          sd_clk,
          crc_rst,
          crc_out[i]
          );
    end
endgenerate

IDDR_p IDDR_p_inst(
  .reset(rst),
  .clock(sd_clk),
  .in_ddr(DAT_dat_i),
  .iddr_Q1(iddrQ1),
  .iddr_Q2(iddrQ2)
);

ODDR_p ODDR_p_inst(
  .reset(rst),
  .clock(sd_clk90),
  .d1_wire(d1d2_logic[7:0]),
  .d2_wire(d1d2_logic[15:8]),
  .oq(DAT_dat_o)
);

assign busy = (state != IDLE);
assign start_bit = !DAT_dat_logic[0];
assign sd_data_busy = !DAT_dat_logic[0];
assign read_trans_active = ((state == READ_DAT) || (state == READ_WAIT));
assign write_trans_active = ((state == WRITE_DAT) || (state == WRITE_BUSY) || (state == WRITE_CRC) || (state == WRITE_WAIT));
assign write_next_block = ((state == WRITE_WAIT) && DAT_dat_logic[0] && next_block);

always_comb begin: FSM_COMBO
    case(state)
        IDLE: begin
            if (start == 2'b01)
                next_state <= WRITE_WAIT;
            else if  (start == 2'b10)
                next_state <= READ_WAIT;
            else
                next_state <= IDLE;
        end
        WRITE_WAIT: begin
            if (start_write && DAT_dat_logic[0])
                next_state <= WRITE_DAT;
            else
                next_state <= WRITE_WAIT;
        end
        WRITE_DAT: begin
            if (transf_cnt >= data_cycles+20 && start_bit)
                next_state <= WRITE_CRC;
            else
                next_state <= WRITE_DAT;
        end
        WRITE_CRC: begin
            if (crc_status == 3)
                next_state <= WRITE_BUSY;
            else
                next_state <= WRITE_CRC;
        end
        WRITE_BUSY: begin
            if (!busy_int && next_block && crc_ok)
                next_state <= WRITE_WAIT;
            else if (!busy_int)
                next_state <= IDLE;
            else
                next_state <= WRITE_BUSY;
        end
        READ_WAIT: begin
            if (start_bit)
                next_state <= READ_DAT;
            else
                next_state <= READ_WAIT;
        end
        READ_DAT: begin
            if (transf_cnt == data_cycles+17) begin
              if(next_block && crc_ok)
                next_state <= READ_WAIT;
              else
                next_state <= IDLE;
            end
            else
                next_state <= READ_DAT;
        end
        default: next_state <= IDLE;
    endcase
    //abort
    if (start == 2'b11)
        next_state <= IDLE;
end

always_ff @(posedge sd_clk or posedge rst)
begin: FSM_OUT
    if (rst) begin
        state <= IDLE;
        DAT_oe_o <= 1;
        crc_en <= 0;
        crc_rst <= 1;
        transf_cnt <= 0;
        rd <= 0;
        last_din <= 0;
        d1d2_logic <= 0;
        last_dinDDR <= 0;
        crc_c <= 0;
        crc_in <= 0;
        crc_status <= 0;
        crc_s <= 0;
        we <= 0;
        data_out <= 0;
        crc_ok <= 0;
        busy_int <= 0;
        data_index <= 0;
        next_block <= 0;
        blkcnt_logic <= 0;
        bus_4bit_logic <= 0;
        bus_8bit_logic <= 0;
    end
    else begin
        state <= next_state;
        case(state)
            IDLE: begin
                DAT_oe_o <= 1;
                crc_en <= 0;
                crc_rst <= 1;
                transf_cnt <= 0;
                crc_c <= 15;
                crc_status <= 0;
                crc_s <= 0;
                we <= 0;
                rd <= 0;
                data_index <= 0;
                next_block <= 0;
                blkcnt_logic <= blkcnt;
                blksize_logic <= blksize;
                bus_4bit_logic <= bus_4bit;
                bus_8bit_logic <= bus_8bit;
                d1d2_logic <= 16'hffff;
            end
            WRITE_WAIT: begin
                data_index <= 0;
                next_block <= 0;
            end
            WRITE_DAT: begin
                crc_ok <= 0;
                transf_cnt <= transf_cnt + 1;
                rd <= 0;
                if (transf_cnt == 0) begin
                  crc_rst <= 0;
                  crc_en <= 1;
                  DAT_oe_o <= 0;
                  d1d2_logic <= bus_8bit_logic ? 16'h0000 :(bus_4bit_logic ? 16'hF0F0 : 16'hFEFE);
                  data_index <= 5'h01;
                  if (bus_8bit_logic) begin
                    if (DDR50) begin
                      last_din <= data_in[31:24];
                      last_dinDDR <= data_in[23:16];
                      crc_in <= {data_in[23:16], data_in[31:24]};
                      rd <= 1'b1;
                    end
                    else begin
                      last_din <= data_in[31:24];
                      crc_in <= data_in[31:24];
                    end
                  end
                  else if (bus_4bit_logic) begin
                    if (DDR50) begin
                      last_din <= {4'hF,  data_in{31:28}};//data_in[31:24]};
                      last_dinDDR <= {4'hF, data_in[23:20]};// instead of 16 .
                      
                      crc_in <= {4'hF,  data_in{31:28}, 4'hF, data_in[23:20]}
                    end
                    else begin
                      last_din <= {4'hF,data_in[31:28]};
                      crc_in <= {4'hF,data_in[31:28]};
                    end
                  end
                  else begin
                    last_din <= {7'h7F, data_in[31]};
                    crc_in <= {7'h7F, data_in[31]};
                  end
                end
                else if ((transf_cnt >= 1) && (transf_cnt <= data_cycles)) begin
                    data_index <= data_index + 1;
                    if (bus_8bit_logic) begin
                      if(DDR50) begin
                        d1d2_logic <= {last_dinDDR, last_din};                      
                        last_din <= {
                            data_in[31-(data_index[0]<<4)], 
                            data_in[30-(data_index[0]<<4)], 
                            data_in[29-(data_index[0]<<4)], 
                            data_in[28-(data_index[0]<<4)],
                            data_in[27-(data_index[0]<<4)], 
                            data_in[26-(data_index[0]<<4)], 
                            data_in[25-(data_index[0]<<4)], 
                            data_in[24-(data_index[0]<<4)]
                            };
                        last_dinDDR <= {
                            data_in[23-(data_index[0]<<4)],
                            data_in[22-(data_index[0]<<4)],
                            data_in[21-(data_index[0]<<4)],
                            data_in[20-(data_index[0]<<4)],
                            data_in[19-(data_index[0]<<4)], 
                            data_in[18-(data_index[0]<<4)], 
                            data_in[17-(data_index[0]<<4)], 
                            data_in[16-(data_index[0]<<4)]
                            };
                        crc_in <= {
                            data_in[23-(data_index[0]<<4)], 
                            data_in[22-(data_index[0]<<4)], 
                            data_in[21-(data_index[0]<<4)], 
                            data_in[20-(data_index[0]<<4)],
                            data_in[19-(data_index[0]<<4)], 
                            data_in[18-(data_index[0]<<4)], 
                            data_in[17-(data_index[0]<<4)], 
                            data_in[16-(data_index[0]<<4)],

                            data_in[31-(data_index[0]<<4)], 
                            data_in[30-(data_index[0]<<4)], 
                            data_in[29-(data_index[0]<<4)], 
                            data_in[28-(data_index[0]<<4)],
                            data_in[27-(data_index[0]<<4)], 
                            data_in[26-(data_index[0]<<4)], 
                            data_in[25-(data_index[0]<<4)], 
                            data_in[24-(data_index[0]<<4)]
                            };
                        rd <= (data_index[0] == 1'b0/*not 3 - read delay !!!*/ && transf_cnt <= data_cycles-1);
                      end
                      else begin
                        d1d2_logic <= {2{last_din}};
                        last_din <= {
                            data_in[31-(data_index[1:0]<<3)], 
                            data_in[30-(data_index[1:0]<<3)], 
                            data_in[29-(data_index[1:0]<<3)], 
                            data_in[28-(data_index[1:0]<<3)],
                            data_in[27-(data_index[1:0]<<3)], 
                            data_in[26-(data_index[1:0]<<3)], 
                            data_in[25-(data_index[1:0]<<3)], 
                            data_in[24-(data_index[1:0]<<3)]
                            };
                        crc_in <= {
                            data_in[31-(data_index[1:0]<<3)], 
                            data_in[30-(data_index[1:0]<<3)], 
                            data_in[29-(data_index[1:0]<<3)], 
                            data_in[28-(data_index[1:0]<<3)],
                            data_in[27-(data_index[1:0]<<3)], 
                            data_in[26-(data_index[1:0]<<3)], 
                            data_in[25-(data_index[1:0]<<3)], 
                            data_in[24-(data_index[1:0]<<3)]
                            };
                        rd <= (data_index[1:0] == 2'h2/*not 3 - read delay !!!*/ && transf_cnt <= data_cycles-1);
//                            rd <= 1;
                      end
                    end
                    else if (bus_4bit_logic) begin
                        last_din <= {4'hF,
                            data_in[31-(data_index[2:0]<<2)], 
                            data_in[30-(data_index[2:0]<<2)], 
                            data_in[29-(data_index[2:0]<<2)], 
                            data_in[28-(data_index[2:0]<<2)]  
                            };
                        crc_in <= {4'hF,
                            data_in[31-(data_index[2:0]<<2)], 
                            data_in[30-(data_index[2:0]<<2)], 
                            data_in[29-(data_index[2:0]<<2)], 
                            data_in[28-(data_index[2:0]<<2)]
                            };
                        if (data_index[2:0] == 3'h6/*not 7 - read delay !!!*/ && transf_cnt <= data_cycles-1)
                            rd <= 1;
                    end
                    else begin
                        last_din <= {7'h7F, data_in[31-data_index]};
                        crc_in <= {7'h7F, data_in[31-data_index]};
                        if (data_index == 29/*not 31 - read delay !!!*/)
                            rd <= 1;
                    end
                    if (transf_cnt == data_cycles)
                        crc_en<=0;
                end
                else if (transf_cnt <= data_cycles +16) begin
                    crc_c <= crc_c - 1;
                    if (bus_8bit_logic)
                      if(DDR50)begin
                        d1d2_logic <= {
                          crc_out[15][crc_c],
                          crc_out[14][crc_c],
                          crc_out[13][crc_c],
                          crc_out[12][crc_c],
                          crc_out[11][crc_c],
                          crc_out[10][crc_c],
                          crc_out[9][crc_c],
                          crc_out[8][crc_c],
                          crc_out[7][crc_c],
                          crc_out[6][crc_c],
                          crc_out[5][crc_c],
                          crc_out[4][crc_c],
                          crc_out[3][crc_c],
                          crc_out[2][crc_c],
                          crc_out[1][crc_c],
                          crc_out[0][crc_c]
                          };
                      end
                      else begin
                        d1d2_logic <= {2{
                          crc_out[7][crc_c],
                          crc_out[6][crc_c],
                          crc_out[5][crc_c],
                          crc_out[4][crc_c],
                          crc_out[3][crc_c],
                          crc_out[2][crc_c],
                          crc_out[1][crc_c],
                          crc_out[0][crc_c]
                          }};
                      end
                    else if (bus_4bit_logic)
                        d1d2_logic <= {2{4'hF,
                          crc_out[3][crc_c],
                          crc_out[2][crc_c],
                          crc_out[1][crc_c],
                          crc_out[0][crc_c]
                          }};
                    else
                        d1d2_logic <= {2{7'h7F, crc_out[0][crc_c]}};
                end
                else if (transf_cnt == data_cycles+17) begin
//                    DAT_oe_o <= 0;
                    d1d2_logic <= 16'hFFFF;
                end
                else if (transf_cnt >= data_cycles+18) begin
                    DAT_oe_o <= 1;
                end
            end
            WRITE_CRC: begin
                DAT_oe_o <= 1;
                if (crc_status < 4)
                    crc_s[crc_status] <= DAT_dat_logic[0];
                crc_status <= crc_status + 4'h1;
                busy_int <= 1;
            end
            WRITE_BUSY: begin
                if (crc_s == 4'b1010)
                    crc_ok <= 1;
                else
                    crc_ok <= 0;
                busy_int <= !DAT_dat_logic[0];
                next_block <= ((blkcnt_logic - `BLKCNT_W'h1) != 0);
                if (next_state != WRITE_BUSY) begin
                    blkcnt_logic <= blkcnt_logic - `BLKCNT_W'h1;
                    crc_rst <= 1;
                    crc_c <= 15;
                    crc_status <= 0;
                end
                transf_cnt <= 0;
            end
            READ_WAIT: begin
                DAT_oe_o <= 1;
                crc_rst <= 0;
                crc_en <= 1;
                crc_in <= 0;
                crc_c <= 15;
                next_block <= 0;
                transf_cnt <= 0;
                data_index <= 0;
            end
            READ_DAT: begin
                if (transf_cnt < data_cycles) begin
                    if (bus_8bit_logic) begin
                      if (DDR50) begin
                        we <= (data_index[0] == 1'b1 || (transf_cnt == data_cycles-1 && !blkcnt_logic));
                        data_out[31-(data_index[0] << 4)] <= DAT_dat_logic[7];
                        data_out[30-(data_index[0] << 4)] <= DAT_dat_logic[6];
                        data_out[29-(data_index[0] << 4)] <= DAT_dat_logic[5];
                        data_out[28-(data_index[0] << 4)] <= DAT_dat_logic[4];
                        data_out[27-(data_index[0] << 4)] <= DAT_dat_logic[3];
                        data_out[26-(data_index[0] << 4)] <= DAT_dat_logic[2];
                        data_out[25-(data_index[0] << 4)] <= DAT_dat_logic[1];
                        data_out[24-(data_index[0] << 4)] <= DAT_dat_logic[0];

                        data_out[23-(data_index[0] << 4)] <= DAT_dat_logicn[7];
                        data_out[22-(data_index[0] << 4)] <= DAT_dat_logicn[6];
                        data_out[21-(data_index[0] << 4)] <= DAT_dat_logicn[5];
                        data_out[20-(data_index[0] << 4)] <= DAT_dat_logicn[4];
                        data_out[19-(data_index[0] << 4)] <= DAT_dat_logicn[3];
                        data_out[18-(data_index[0] << 4)] <= DAT_dat_logicn[2];
                        data_out[17-(data_index[0] << 4)] <= DAT_dat_logicn[1];
                        data_out[16-(data_index[0] << 4)] <= DAT_dat_logicn[0];
                      end
                      else begin
                        we <= (data_index[1:0] == 3 || (transf_cnt == data_cycles-1  && !blkcnt_logic));
                        data_out[31-(data_index[1:0]<<3)] <= DAT_dat_logic[7];
                        data_out[30-(data_index[1:0]<<3)] <= DAT_dat_logic[6];
                        data_out[29-(data_index[1:0]<<3)] <= DAT_dat_logic[5];
                        data_out[28-(data_index[1:0]<<3)] <= DAT_dat_logic[4];
                        data_out[27-(data_index[1:0]<<3)] <= DAT_dat_logic[3];
                        data_out[26-(data_index[1:0]<<3)] <= DAT_dat_logic[2];
                        data_out[25-(data_index[1:0]<<3)] <= DAT_dat_logic[1];
                        data_out[24-(data_index[1:0]<<3)] <= DAT_dat_logic[0];
                      end
                    end
                    else if (bus_4bit_logic) begin
                        we <= (data_index[2:0] == 7 || (transf_cnt == data_cycles-1  && !blkcnt_logic));
                        data_out[31-(data_index[2:0]<<2)] <= DAT_dat_logic[3];
                        data_out[30-(data_index[2:0]<<2)] <= DAT_dat_logic[2];
                        data_out[29-(data_index[2:0]<<2)] <= DAT_dat_logic[1];
                        data_out[28-(data_index[2:0]<<2)] <= DAT_dat_logic[0];
                    end
                    else begin
                        we <= (data_index == 31 || (transf_cnt == data_cycles-1  && !blkcnt_logic));
                        data_out[31-data_index] <= DAT_dat_logic[0];
                    end
                    data_index <= data_index + 5'h1;
                    if (DDR50)
                      crc_in <= {DAT_dat_logicn,DAT_dat_logic};
                    else
                      crc_in <= DAT_dat_logic;
                    crc_ok <= 1;
                    transf_cnt <= transf_cnt + 16'h1;
                end
                else if (transf_cnt <= data_cycles + 16) begin
                    transf_cnt <= transf_cnt + 16'h1;
                    crc_en <= 0;
                    last_din <= DAT_dat_logic;
                    if (DDR50)
                      last_dinDDR <= DAT_dat_logicn;
                    we<=0;
                    if (transf_cnt > data_cycles) begin
                        crc_c <= crc_c - 5'h1;
                        if  (crc_out[0][crc_c] != last_din[0])
                            crc_ok <= 0;
                        if  (crc_out[1][crc_c] != last_din[1] && (bus_4bit_logic || bus_8bit_logic))
                            crc_ok<=0;
                        if  (crc_out[2][crc_c] != last_din[2] && (bus_4bit_logic || bus_8bit_logic))
                            crc_ok <= 0;
                        if  (crc_out[3][crc_c] != last_din[3] && (bus_4bit_logic || bus_8bit_logic))
                            crc_ok <= 0;
                        if  (crc_out[4][crc_c] != last_din[4] && bus_8bit_logic)
                            crc_ok <= 0;
                        if  (crc_out[5][crc_c] != last_din[5] && bus_8bit_logic)
                            crc_ok <= 0;
                        if  (crc_out[6][crc_c] != last_din[6] && bus_8bit_logic)
                            crc_ok <= 0;
                        if  (crc_out[7][crc_c] != last_din[7] && bus_8bit_logic)
                            crc_ok <= 0;
                        if  (crc_out[8][crc_c] != last_dinDDR[0] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[9][crc_c] != last_dinDDR[1] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[10][crc_c] != last_dinDDR[2] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[11][crc_c] != last_dinDDR[3] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[12][crc_c] != last_dinDDR[4] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[13][crc_c] != last_dinDDR[5] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[14][crc_c] != last_dinDDR[6] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if  (crc_out[15][crc_c] != last_dinDDR[7] && bus_8bit_logic && DDR50)
                            crc_ok <= 0;
                        if (crc_c == 0) begin
                            next_block <= ((blkcnt_logic - `BLKCNT_W'h1) != 0);
                            blkcnt_logic <= blkcnt_logic - `BLKCNT_W'h1;
                            crc_rst <= 1;
                            last_dinDDR <= 0;
                        end
                    end
                end
            end
        endcase
    end
end

endmodule
