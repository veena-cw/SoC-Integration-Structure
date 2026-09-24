module sd_mmc_cmd_serial_host (
           sd_clk,
           rst,
           setting_i,
           cmd_i,
           start_i,
           response_o,
           crc_ok_o,
           index_ok_o,
           finish_o,
           cmd_dat_i,
           cmd_out_o,
           cmd_oe_o,
           command_inhibit_cmd
       );

//---------------input logicports---------------
input logic sd_clk;                               // clock from clock divider
input logic rst;                                  // system reset
input logic [1:0] setting_i;                      // response settings big/small wait for response or not
input logic [39:0] cmd_i;                         // command taken from command master module
input logic start_i;                              // flag for start to send command to the SD card
input logic cmd_dat_i;                            // command which will come from SD card    
//---------------Output ports---------------
output logic [119:0] response_o;              // the output response which received from SD card
output logic finish_o;                        // The flag of finished to send the command
output logic crc_ok_o;                        // The CRC flag 
output logic index_ok_o;                      // The index check flag
output logic cmd_oe_o;                        // The command send enable
output logic cmd_out_o;                       // The command sending pot for the SD card
output logic command_inhibit_cmd;
//-------------Internal Constant-------------
parameter INIT_DELAY = 4;
parameter BITS_TO_SEND = 48;  // 40 CMD + 7 CRC + 1 STOP
parameter CMD_SIZE = 40;  
parameter RESP_SIZE = 128;

//---------------Internal variable-----------
logic cmd_dat_logic;
integer resp_len;
logic with_response;
logic [CMD_SIZE-1:0] cmd_buff;
logic [RESP_SIZE-1:0] resp_buff;
integer resp_idx;
//CRC
logic crc_rst;
logic [6:0]crc_in;
wire [6:0] crc_val;
logic crc_enable;
logic crc_bit;
logic crc_ok;
//-Internal Counterns
integer counter;
//-State Machine
parameter STATE_SIZE = 10;
parameter
    INIT = 7'h00,
    IDLE = 7'h01,
    SETUP_CRC = 7'h02,
    WRITE = 7'h04,
    READ_WAIT = 7'h08,
    READ = 7'h10,
    FINISH_WR = 7'h20,
    FINISH_WO = 7'h40;   
logic [STATE_SIZE-1:0] state;
logic [STATE_SIZE-1:0] next_state;
//Misc
`define cmd_idx  (CMD_SIZE-1-counter) 

// command_inhibit_cmd is a control signal indicating that the CMD transaction is in its final/completion stage.
assign command_inhibit_cmd = ((state == FINISH_WO) || (state == FINISH_WR));
 
//sd cmd input logicpad logicister
always_ff @(posedge sd_clk)
    cmd_dat_logic <= cmd_dat_i; // command comes from sd card 

//------------------------------------------
sd_crc_7 CRC_7(
             crc_bit,
             crc_enable,
             sd_clk,
             crc_rst,
             crc_val);

//------------------------------------------
always_comb
begin: FSM_COMBO
    case(state)
        INIT: begin // this just 4 sd clk cycle delay 
            if (counter >= INIT_DELAY) begin
                next_state = IDLE;
            end
            else begin
                next_state = INIT;
            end
        end
        IDLE: begin // 
            if (start_i) begin
                next_state = SETUP_CRC;
            end
            else begin
                next_state = IDLE;
            end
        end
        SETUP_CRC:
            next_state = WRITE;
        WRITE:
            if (counter >= BITS_TO_SEND && with_response) begin
                next_state = READ_WAIT;
            end
            else if (counter >= BITS_TO_SEND) begin
                next_state = FINISH_WO;
            end
            else begin
                next_state = WRITE;
            end
        READ_WAIT:
            if (!cmd_dat_logic) begin   //The CMD line has been observed LOW, so the command response from the card is starting.
                next_state = READ;
            end
            else begin
                next_state = READ_WAIT;
            end
        FINISH_WO:
            next_state = IDLE; //only command no response 
        READ:
            if (counter >= resp_len+8) begin // response + crc7 +1, so response +8 
                next_state = FINISH_WR;
            end
            else begin
                next_state = READ;
            end
        FINISH_WR:
            next_state = IDLE;
        default: 
            next_state = INIT;
    endcase
end

// This block determines response length 127bit or 39 bit.

always_ff @(posedge sd_clk or posedge rst)
begin: COMMAND_DECODER
    if (rst) begin
        resp_len <= 0;
        with_response <= 0;
        cmd_buff <= 0;
    end
    else begin
        if (start_i == 1) begin
            resp_len <= setting_i[1] ? 127 : 39;
            with_response <= setting_i[0];
            cmd_buff <= cmd_i;
        end
    end
end

//----------------Seq logic------------
always_ff @(posedge sd_clk or posedge rst)
begin: FSM_SEQ
    if (rst) begin
        state <= INIT;
    end
    else begin
        state <= next_state;
    end
end

//-------------OUTPUT_LOGIC-------
always_ff @(posedge sd_clk or posedge rst)
begin: FSM_OUT
    if (rst) begin
        crc_enable <= 0;
        resp_idx <= 0;
        cmd_oe_o <= 0;
        cmd_out_o <= 1'b1;
        resp_buff <= 0;
        finish_o <= 0;
        crc_rst <= 1;
        crc_bit <= 0;
        crc_in <= 0;
        response_o <= 0;
        index_ok_o <= 0;
        crc_ok_o <= 0;
        crc_ok <= 0;
        counter <= 0;
    end
    else begin
        case(state)
            INIT: begin
                counter <= counter+1;
                cmd_oe_o <= 0;
                cmd_out_o <= 1;  // during that command line stays high 
            end
            IDLE: begin
                cmd_oe_o <= 1;      //Put CMD to Z (so now card what to talk to host)
                counter <= 0;
                crc_rst <= 1;
                crc_enable <= 0;
                response_o <= 0;
                resp_idx <= 0;
                crc_ok_o <= 0;
                index_ok_o <= 0;
                finish_o <= 0;
            end
            SETUP_CRC: begin
                crc_rst <= 0;
                crc_enable <= 1; // enabling the CRC with the command 
                crc_bit <= cmd_buff[`cmd_idx];
            end
            WRITE: begin
                if (counter < BITS_TO_SEND-8) begin  // 1->40 CMD, (41 >= CNT && CNT <=47) CRC, 48 stop_bit
                    cmd_oe_o <= 0; // host is sending commad 
                    cmd_out_o <= cmd_buff[`cmd_idx]; //comd sent through this 
                    if (counter < BITS_TO_SEND-9) begin //1 step ahead sending bits to CRC calculation 
                        crc_bit <= cmd_buff[`cmd_idx-1];
                    end else begin
                        crc_enable <= 0;// once the 39 bits sent the CRC is disabled 
                    end
                end
                else if (counter < BITS_TO_SEND-1) begin //at 47 the CMD line should be released to Z
                    cmd_oe_o <= 0; 
                    crc_enable <= 0;
                    cmd_out_o <= crc_val[BITS_TO_SEND-counter-2];
                end
                else if (counter == BITS_TO_SEND-1) begin
                    cmd_oe_o <= 0;
                    cmd_out_o <= 1'b1;
                end
                else begin
                    cmd_oe_o <= 1;
                    cmd_out_o <= 1'b1;
                end
                counter <= counter+1;
            end
            READ_WAIT: begin
                crc_enable <= 0;
                crc_rst <= 1;
                counter <= 1;
                cmd_oe_o <= 1;
                resp_buff[RESP_SIZE-1] <= cmd_dat_logic;
            end
            FINISH_WO: begin
                finish_o <= 1;
                crc_enable <= 0;
                crc_rst <= 1;
                counter <= 0;
                cmd_oe_o <= 1;
            end
            READ: begin
                crc_rst <= 0;
                crc_enable <= (resp_len != RESP_SIZE-1 || counter > 7);
                cmd_oe_o <= 1;
                if (counter <= resp_len) begin
                    if (counter < 8) //1+1+6 (Start bit ,Transmission bit,CMD Index)
                        resp_buff[RESP_SIZE-1-counter] <= cmd_dat_logic;
                    else begin
                        resp_idx <= resp_idx + 1;
                        resp_buff[RESP_SIZE-9-resp_idx] <= cmd_dat_logic;
                    end
                    crc_bit <= cmd_dat_logic;
                end
                else if (counter-resp_len <= 7) begin
                    crc_in[(resp_len+7)-(counter)] <= cmd_dat_logic;
                    crc_enable <= 0;
                end
                else begin
                    crc_enable <= 0;
                    if (crc_in == crc_val) crc_ok <= 1;
                    else crc_ok <= 0;
                end
                counter <= counter + 1;
            end
            FINISH_WR: begin
                if (cmd_buff[37:32] == resp_buff[125:120])
                    index_ok_o <= 1;
                else
                    index_ok_o <= 0;
                crc_ok_o <= crc_ok;
                finish_o <= 1;
                crc_enable <= 0;
                crc_rst <= 1;
                counter <= 0;
                cmd_oe_o <= 1;
                response_o <= resp_buff[119:0];
            end
        endcase
    end
end

endmodule
