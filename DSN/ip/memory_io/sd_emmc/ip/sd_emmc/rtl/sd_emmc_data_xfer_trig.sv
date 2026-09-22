module sd_data_xfer_trig (
    input  logic                    sd_clk,
    input  logic                    rst,
    input  logic                    cmd_with_data_start_i,
    input  logic                    r_w_i,
    input  logic [`INT_CMD_SIZE-1:0] cmd_int_status_i,
    output logic                    start_tx_o,
    output logic                    start_rx_o
);

    parameter int SIZE = 2;

    localparam logic [SIZE-1:0] IDLE             = 2'b00;
    localparam logic [SIZE-1:0] WAIT_FOR_CMD_INT = 2'b01;
    localparam logic [SIZE-1:0] TRIGGER_XFER     = 2'b10;

    logic r_w_reg;
    logic [SIZE-1:0] state;
    logic [SIZE-1:0] next_state;

    // FSM Combinational Logic
    always_comb begin : FSM_COMBO
        next_state = state;

        case (state)
            IDLE: begin
                if (cmd_with_data_start_i && r_w_i)
                    next_state = TRIGGER_XFER;
                else if (cmd_with_data_start_i)
                    next_state = WAIT_FOR_CMD_INT;
                else
                    next_state = IDLE;
            end

            WAIT_FOR_CMD_INT: begin
                if (cmd_int_status_i[`INT_CMD_CC])
                    next_state = TRIGGER_XFER;
                else if (cmd_int_status_i[`INT_CMD_EI])
                    next_state = IDLE;
                else
                    next_state = WAIT_FOR_CMD_INT;
            end

            TRIGGER_XFER: begin
                next_state = IDLE;
            end

            default: begin
                next_state = IDLE;
            end
        endcase
    end

    // FSM Sequential Logic
    always_ff @(posedge sd_clk or posedge rst) begin : FSM_SEQ
        if (rst)
            state <= IDLE;
        else
            state <= next_state;
    end

    // Output Logic
    always_ff @(posedge sd_clk or posedge rst) begin
        if (rst) begin
            start_tx_o <= 1'b0;
            start_rx_o <= 1'b0;
            r_w_reg    <= 1'b0;
        end
        else begin
            case (state)
                IDLE: begin
                    start_tx_o <= 1'b0;
                    start_rx_o <= 1'b0;
                    r_w_reg    <= r_w_i;
                end

                WAIT_FOR_CMD_INT: begin
                    start_tx_o <= 1'b0;
                    start_rx_o <= 1'b0;
                end

                TRIGGER_XFER: begin
                    start_tx_o <= ~r_w_reg;
                    start_rx_o <=  r_w_reg;
                end

                default: begin
                    start_tx_o <= 1'b0;
                    start_rx_o <= 1'b0;
                end
            endcase
        end
    end

endmodule