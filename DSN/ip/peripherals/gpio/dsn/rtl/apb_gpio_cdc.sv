//------------------------------------------------------------------------------
// Toggle-based request/acknowledge CDC bridge
//   pclk (100 MHz) side : req_i pulse + held address/data  ->  done_o pulse + rdata_o
//   gclk (50 MHz)  side : one-cycle write strobe, address/data held stable
//------------------------------------------------------------------------------
module apb_gpio_cdc (
    // pclk (100 MHz) side
    input  logic        pclk,
    input  logic        presetn,
    input  logic        req_i,
    input  logic        we_i,
    input  logic [31:0] adr_i,
    input  logic [31:0] wdat_i,
    output logic        done_o,
    output logic [31:0] rdata_o,

    // gclk (50 MHz) side
    input  logic        gclk,
    input  logic        grst_n,
    output logic        gpio_we,
    output logic [31:0] gpio_adr,
    output logic [31:0] gpio_dat_i,
    input  logic [31:0] gpio_dat_o
);

// ---------------- pclk domain ----------------
logic        req_tgl, we_r, ack_prev, ack_tgl;
logic [31:0] adr_r, wdat_r, rdata_g;
(* ASYNC_REG = "TRUE" *) logic [1:0] ack_s;

always_ff @(posedge pclk or negedge presetn) begin
    if (!presetn) begin
        req_tgl <= 1'b0; we_r <= 1'b0; adr_r <= '0; wdat_r <= '0;
        ack_s <= 2'b00; ack_prev <= 1'b0;
        done_o <= 1'b0; rdata_o <= '0;
    end else begin
        done_o   <= 1'b0;
        ack_s    <= {ack_s[0], ack_tgl};
        ack_prev <= ack_s[1];

        if (req_i) begin                       // latch and send request
            adr_r   <= adr_i;
            wdat_r  <= wdat_i;
            we_r    <= we_i;
            req_tgl <= ~req_tgl;
        end

        if (ack_s[1] != ack_prev) begin        // acknowledge came back
            done_o  <= 1'b1;
            rdata_o <= rdata_g;
        end
    end
end

// ---------------- gclk domain ----------------
typedef enum logic [1:0] {IDLE, ACCESS, CAPTURE} state_t;
state_t state;
(* ASYNC_REG = "TRUE" *) logic [1:0] req_s;
logic req_prev;

always_ff @(posedge gclk or negedge grst_n) begin
    if (!grst_n) begin
        state <= IDLE; req_s <= 2'b00; req_prev <= 1'b0;
        ack_tgl <= 1'b0; rdata_g <= '0; gpio_we <= 1'b0;
    end else begin
        req_s   <= {req_s[0], req_tgl};
        gpio_we <= 1'b0;
        case (state)
            IDLE: if (req_s[1] != req_prev) begin
                req_prev <= req_s[1];
                gpio_we  <= we_r;              // one-cycle write strobe
                state    <= ACCESS;
            end
            ACCESS:  state <= CAPTURE;         // gpio_dat_o is registered
            CAPTURE: begin
                rdata_g <= gpio_dat_o;
                ack_tgl <= ~ack_tgl;
                state   <= IDLE;
            end
            default: state <= IDLE;
        endcase
    end
end

assign gpio_adr   = adr_r;
assign gpio_dat_i = wdat_r;

endmodule
