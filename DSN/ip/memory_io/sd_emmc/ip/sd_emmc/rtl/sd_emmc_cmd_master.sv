`include "sd_emmc_defines.h"
`define INT_CMD_SIZE 6

module sd_cmd_master(
           input logic sd_clk,
           input logic rst,
           input logic start_i,
           input logic int_status_rst_i,
           output [1:0] setting_o,
           output logic start_xfr_o,
           output logic go_idle_o,
           output logic  [39:0] cmd_o,
           input logic [119:0] response_i,
           input logic crc_ok_i,
           input logic index_ok_i,
           input logic finish_i,
           input logic busy_i, //direct signal from data sd data input logic (data[0])
           //input logic card_detect,
           input logic [31:0] argument_i,
           input logic [`CMD_REG_SIZE-1:0] command_i,
           output logic [`INT_CMD_SIZE-1:0] int_status_o,
           output logic [31:0] response_0_o,
           output logic [31:0] response_1_o,
           output logic [31:0] response_2_o,
           output logic [31:0] response_3_o
       );

//-----------Types--------------------------------------------------------
logic [`CMD_TIMEOUT_W-1:0] timeout_logic;
logic crc_check;
logic index_check;
logic busy_check;
logic expect_response;
logic long_response;
logic [`INT_CMD_SIZE-1:0] int_status_logic;
//logic card_present;
//logic [3:0]debounce;
logic [`CMD_TIMEOUT_W-1:0] watchdog;
parameter SIZE = 2;
logic [SIZE-1:0] state;
logic [SIZE-1:0] next_state;
parameter IDLE       = 2'b00;
parameter EXECUTE    = 2'b01;
parameter BUSY_CHECK = 2'b10;

assign setting_o[1:0] = {long_response, expect_response};
assign int_status_o = state == IDLE ? int_status_logic : 5'h0;

//---------------input logic ports---------------

// always_ff @ (posedge sd_clk or posedge rst   )
// begin
//     if (rst) begin
//         debounce<=0;
//         card_present<=0;
//     end
//     else begin
//         if (!card_detect) begin//Card present
//             if (debounce!=4'b1111)
//                 debounce<=debounce+1'b1;
//         end
//         else
//             debounce<=0;
// 
//         if (debounce==4'b1111)
//             card_present<=1'b1;
//         else
//             card_present<=1'b0;
//     end
// end

always_comb 
begin: FSM_COMBO
    case(state)
        IDLE: begin
            if (start_i)
                next_state = EXECUTE;
            else
                next_state = IDLE;
        end
        EXECUTE: begin
            if ((finish_i && !busy_check) || go_idle_o)
                next_state = IDLE;
            else if (finish_i && busy_check)
                next_state = BUSY_CHECK;
            else
                next_state = EXECUTE;
        end
        BUSY_CHECK: begin
            if (!busy_i)
                next_state = IDLE;
            else
                next_state = BUSY_CHECK;
        end
        default: next_state = IDLE;
    endcase
end

always_ff @(posedge sd_clk or posedge rst)
begin: FSM_SEQ
    if (rst) begin
        state <= IDLE;
    end
    else begin
        state <= next_state;
    end
end

always_ff @(posedge sd_clk or posedge rst)
begin
    if (rst) begin
        crc_check <= 0;
        response_0_o <= 0;
        response_1_o <= 0;
        response_2_o <= 0;
        response_3_o <= 0;
        int_status_logic <= 0;
        expect_response <= 0;
        long_response <= 0;
        cmd_o <= 0;
        start_xfr_o <= 0;
        index_check <= 0;
        busy_check <= 0;
        watchdog <= 0;
        timeout_logic <= 0;
        go_idle_o <= 0;
    end
    else begin
        case(state)
            IDLE: begin
                go_idle_o <= 0;
                index_check <= command_i[`CMD_IDX_CHECK];
                crc_check <= command_i[`CMD_CRC_CHECK];
                if (command_i[`CMD_RESPONSE_CHECK] == 2'b11) begin
                    busy_check <= 1'b1;
                end
                else begin
                    busy_check <= 1'b0;
                end
                if (command_i[`CMD_RESPONSE_CHECK]  == 2'b10 || command_i[`CMD_RESPONSE_CHECK] == 2'b11) begin
                    expect_response <=  1;
                    long_response <= 0;
                end
                else if (command_i[`CMD_RESPONSE_CHECK] == 2'b01) begin
                    expect_response <= 1;
                    long_response <= 1;
                end
                else begin
                    expect_response <= 0;
                    long_response <= 0;
                end
                cmd_o[39:38] <= 2'b01;  //start and transmission bit 
                cmd_o[37:32] <= command_i[`CMD_INDEX];  //CMD_INDEX  //7 bits
                cmd_o[31:0] <= argument_i; //CMD_Argument
                timeout_logic <= (command_i[`CMD_RESPONSE_CHECK] == 2'b10) ? 120 : ((command_i[`CMD_RESPONSE_CHECK] == 2'b01)? 250: 0);
                watchdog <= 0;
                if (start_i) begin
                    start_xfr_o <= 1;
                    int_status_logic <= 0;
                end
            end
            EXECUTE: begin
                start_xfr_o <= 0;
                watchdog <= watchdog + `CMD_TIMEOUT_W'd1;  // counts how long the command is sent 
                if (timeout_logic && watchdog >= timeout_logic) begin
                    int_status_logic[`INT_CMD_CTE] <= 1;
                    int_status_logic[`INT_CMD_EI] <= 1;
                    go_idle_o <= 1;
                end
                //Incoming New Status
                else begin //if ( req_in_int == 1) begin
                    if (finish_i) begin //Data avaible
                        if (crc_check & !crc_ok_i) begin
                            int_status_logic[`INT_CMD_CCRCE] <= 1;
                            int_status_logic[`INT_CMD_EI] <= 1;
                        end
                        if (index_check & !index_ok_i) begin
                            int_status_logic[`INT_CMD_CIE] <= 1;
                            int_status_logic[`INT_CMD_EI] <= 1;
                        end
                        if (next_state != BUSY_CHECK) begin
                            int_status_logic[`INT_CMD_CC] <= 1;
                        end
//                        if (expect_response != 0) begin
//                            response_0_o <= response_i[119:88];
//                            response_1_o <= response_i[87:56];
//                            response_2_o <= response_i[55:24];
//                            response_3_o <= {response_i[23:0], 8'h00};
//                        end
                        if (expect_response != 0 & (~long_response)) begin
                            response_0_o <= response_i[119:88];
                        end
                        else if (expect_response != 0 & long_response) begin
                            response_3_o <= {8'h00, response_i[119:96]};
                            response_2_o <= response_i[95:64];
                            response_1_o <= response_i[63:32];
                            response_0_o <= response_i[31:0];
                        end
                        // end
                    end ////Data avaible
                end //Status change
            end //EXECUTE state
            BUSY_CHECK: begin
                start_xfr_o <= 0;
                go_idle_o <= 0;
                if (next_state != BUSY_CHECK) begin
                    int_status_logic[`INT_CMD_CC] <= 1;
                    int_status_logic[`INT_CMD_DC] <= 1;
                end
            end
                   
        endcase
        if (int_status_rst_i)
            int_status_logic <= 0;
    end
end

endmodule
