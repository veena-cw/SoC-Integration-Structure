module apb_slave #(
   //==========================================================
   // Configurable Parameters
   //==========================================================
   parameter DW = 32,
   parameter AW = 32,

   // Derived Parameter
   localparam SW = int'($ceil(DW/8))
)
(
   //==========================================================
   // Clock and Reset
   //==========================================================
   input  logic pclk,
   input  logic presetn,

   //==========================================================
   // APB Interface
   //==========================================================
   input  logic [AW-1:0] i_paddr,
   input  logic          i_pwrite,
   input  logic          i_psel,
   input  logic          i_penable,
   input  logic [DW-1:0] i_pwdata,
   input  logic [SW-1:0] i_pstrb,
   output logic [DW-1:0] o_prdata,
   output logic          o_pslverr,
   output logic          o_pready,

   input logic i2c_busy,
   input logic i2c_done,
   output logic          fifo_wr_en,
   output logic [DW-1:0] fifo_wr_data,
   input  logic          fifo_full,

   input  logic [7:0]    i_rd_data,
   input logic i_rd_data_valid,
   input logic i2c_nack

);

   //==========================================================
   // State Machine
   //==========================================================

   typedef enum logic [1:0]
   {
      IDLE     = 2'b00,
      W_ACCESS = 2'b01,
      R_ACCESS = 2'b10,
      R_FINISH = 2'b11
   } state_t;

   state_t state_ff;

   //==========================================================
   // Address Configuration
   //==========================================================

   localparam ADDR_LSB = $clog2(DW/8);
   localparam N_REG    = 2**(AW-ADDR_LSB);

   localparam  CTRL_OFFSET   = 8'h10;
   localparam  STATUS_OFFSET = 8'h14;
   localparam  TXDATA_OFFSET = 8'h18;
   localparam  RXDATA_OFFSET = 8'h1C;
   logic [DW-1:0] ctrl_reg;
   logic [DW-1:0] txdata_reg;
   logic [DW-1:0] status_reg;
   logic [DW-1:0] rxdata_reg;

   logic [7:0] reg_addr;

   always_ff @(posedge pclk or negedge presetn)
   begin
      if(!presetn)
         reg_addr <= 8'b0;
      else
         reg_addr <= i_paddr[7:0];
   end

   assign status_reg =  {29'b0, i2c_nack, i2c_done, i2c_busy};

   // RX Register captures i_rd_data when I2C finishes
   always_ff @(posedge pclk or negedge presetn) begin
      if(!presetn) rxdata_reg <= 8'h00;
      else if(i2c_done) rxdata_reg <= i_rd_data;
   end

   //==========================================================
   // Pending-write blockers
   //   ctrl_valid/tx_valid stay high from the moment a write is
   //   accepted until i2c_done clears them. While that flag is
   //   still set for the register the master is currently
   //   addressing, o_pready must NOT go high for it - otherwise
   //   a new write silently clobbers a value I2C hasn't
   //   consumed yet.
   //==========================================================
   logic ctrl_valid;
   logic tx_valid;

   logic ctrl_write_blocked;
   logic tx_write_blocked;
   assign ctrl_write_blocked = (i_paddr[7:0] == CTRL_OFFSET)   && ctrl_valid;
   assign tx_write_blocked   = (i_paddr[7:0] == TXDATA_OFFSET) && tx_valid;

   //==========================================================
   // APB request decode
   //   req_wr / req_rd MUST be combinational. APB requires PSEL
   //   in SETUP (PENABLE=0) and PENABLE to assert in the very
   //   next cycle for ACCESS, with PREADY evaluated
   //   combinationally in that same ACCESS cycle. Registering
   //   req_wr/req_rd delays them by a cycle relative to
   //   i_penable, desyncing the FSM transition (and o_pready)
   //   from the actual APB phase - which is what let a new
   //   transfer start before the previous CTRL/TX write had
   //   been consumed.
   //==========================================================
   logic req_rd;
   logic req_wr;

   assign req_rd = i_psel && !i_pwrite ;
   assign req_wr = i_psel &&  i_pwrite ;

   //==========================================================
   // APB ready generation
   //   NOTE: slverr branch is now gated with i_psel && i_penable.
   //   Per the APB protocol, PREADY (and PSLVERR) may only be
   //   asserted during the ACCESS phase of a transfer
   //   (PSEL=1 && PENABLE=1). Previously "if(slverr) o_pready=1"
   //   had no such gating, so o_pready could spuriously assert
   //   while the bus was idle or still in SETUP - a protocol
   //   violation. Since slverr is only ever meant to be observed
   //   by the master during an active access anyway, this gating
   //   changes no real behavior.
   //
   //   FIX (read hang): CTRL/STATUS/TXDATA/RXDATA are plain
   //   registers that are valid on every cycle - they do not
   //   depend on i_rd_data_valid (that flag only marks a fresh
   //   I2C byte arriving into rxdata_reg, it is unrelated to the
   //   APB read handshake). Previously a read only left IDLE when
   //   i_rd_data_valid happened to be high, so a STATUS/CTRL/
   //   TXDATA/RXDATA read could stall forever waiting on an I2C
   //   event that may never come. Added a dedicated read branch
   //   in IDLE (mirrors the write branch) so any register read
   //   completes in the same cycle, same as a write.
   //==========================================================
   
   always_comb begin

    o_pready = 1'b0;

    case (state_ff)

        IDLE: begin

            // WRITE
            if (req_wr &&
                i_penable &&
                i_psel &&
                !fifo_full &&
                !i2c_busy &&
                !ctrl_write_blocked &&
                !tx_write_blocked) begin

                o_pready = 1'b1;
            end

            // READ - register reads (CTRL/STATUS/TXDATA/RXDATA)
            // complete in the same cycle, they don't wait on
            // i_rd_data_valid.
            if (req_rd &&
                i_penable &&
                i_psel) begin

                o_pready = 1'b1;
            end

            // I2C NACK error
            if (i2c_nack &&
                i_psel &&
                i_penable) begin

                o_pready = 1'b1;
            end

        end


        W_ACCESS: begin

            if (req_wr &&
                i_penable &&
                !fifo_full &&
                !i2c_busy &&
                !ctrl_write_blocked &&
                !tx_write_blocked) begin

                o_pready = 1'b1;
            end
            
             if (req_rd && i_penable) 
                o_pready = 1'b1;

        end


        R_ACCESS: begin

            // READ completes when data is valid
            if (req_rd &&
                i_penable &&
                i_rd_data_valid) begin

                o_pready = 1'b1;
            end

        end


        default: begin
            o_pready = 1'b0;
        end

    endcase

end
   /*always_comb begin

      o_pready = 1'b0;

     
case (state_ff)

    IDLE: begin
        if (req_wr && i_penable && i_psel && !fifo_full && !i2c_busy &&
            !ctrl_write_blocked && !tx_write_blocked) begin
            o_pready = 1'b1;
        end

        if (i2c_nack && i_psel && i_penable) begin
            o_pready = 1'b1;
        end
    end

    W_ACCESS: begin
        if (req_wr && i_penable && !fifo_full && !i2c_busy &&
            !ctrl_write_blocked && !tx_write_blocked) begin
            o_pready = 1'b1;
        end
    end
    

    R_FINISH: begin
        o_pready = 1'b1;
    end

    default: begin
        o_pready = 1'b0;
    end
i_pwdata
endcase
   end */

   // CTRL and TX Register Write Logic
   // Registers are only latched exactly when the APB transfer they
   // belong to actually completes (o_pready high) - this keeps the
   // write and the ready signal perfectly in sync, so a new CTRL/TX
   // value can never land before the previous one has been cleared
   // by i2c_done (o_pready is held low for that address until then).
   always_ff @(posedge pclk or negedge presetn) begin
      if(!presetn) begin
         ctrl_reg   <= 32'h0000_A000; // Default: slave addr 0x50 in [14:8]
         txdata_reg <= 8'h00;
         tx_valid   <= 1'b0;
         ctrl_valid <= 1'b0;
      end else begin

         if (o_pready && i_psel && i_pwrite && i_penable) begin
            case(reg_addr)
               CTRL_OFFSET: begin
                  ctrl_reg   <= {24'b0, i_pwdata[15:8]}; // [14:8]=slave_addr, [15]=r/w
                  ctrl_valid <= 1'b1;
               end
               TXDATA_OFFSET: begin
                  txdata_reg <= i_pwdata;
                  tx_valid   <= 1'b1;
               end
               default: ;
            endcase
         end

         // Clear old transaction once I2C consumes it
         if (i2c_done == 1) begin
            ctrl_valid <= 1'b0;
            tx_valid   <= 1'b0;
         end

      end
   end

   //==========================================================
   // Single-shot FIFO write pulse
   //   both_valid stays high (level) for many cycles once CTRL
   //   and TX are both latched, right up until i2c_done clears
   //   them. Edge-detecting that level against its own delayed
   //   copy produces exactly one pulse on the cycle both_valid
   //   first goes high, regardless of how long it stays high
   //   afterward - this is what prevents fifo_wr_en from firing
   //   repeatedly every cycle while ctrl_valid/tx_valid are set.
   //==========================================================
   logic both_valid, both_valid_d, fifo_wr_pulse;

   assign both_valid = (ctrl_valid == 1) && (tx_valid == 1);

   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn)
         both_valid_d <= 1'b0;
      else
         both_valid_d <= both_valid;
   end

   assign fifo_wr_pulse = both_valid & ~both_valid_d;

   assign fifo_wr_data = txdata_reg;
   assign fifo_wr_en   = fifo_wr_pulse & ~fifo_full;

   //==========================================================
   // PSLVERR generation
   //   Gated the same way as o_pready's slverr branch: PSLVERR
   //   is only a valid/meaningful signal during a completed
   //   ACCESS phase (PSEL && PENABLE && PREADY). Driving it
   //   whenever the slverr input happens to be high - regardless
   //   of bus phase - is a protocol violation even though most
   //   masters only sample PSLVERR at the end of a valid access.
   //==========================================================
   assign o_pslverr = (i2c_nack && i_psel && i_penable && o_pready) ? 1'b1 : 1'b0;

   always_ff @(posedge pclk or negedge presetn) begin
      if (!presetn) begin
         o_prdata <= '0;
      end
      else begin
         if ((state_ff == R_ACCESS) || (state_ff == R_FINISH)) begin
            o_prdata <= {24'b0, i_rd_data};
         end
      end
   end
   
   always_ff @(posedge pclk or negedge presetn) begin

      if (!presetn) begin
         state_ff <= IDLE;
      end
      else begin

         case (state_ff)

            IDLE: begin
               if (req_wr) begin
                  state_ff <= W_ACCESS;
               end
               else if (req_rd && i_rd_data_valid) begin
                  state_ff <= R_ACCESS;
               end
               else begin
                  state_ff <= IDLE;
               end
            end

            //--------------------------------------------------
            // WRITE ACCESS
            //--------------------------------------------------
            W_ACCESS: begin
               // Transition is driven directly by o_pready instead
               // of re-deriving the same fifo_full/i2c_busy/i2c_done
               // condition separately.
               if (o_pready) begin
                  state_ff <= IDLE;
               end             
               else if (req_rd && i_rd_data_valid) begin
                  state_ff <= R_ACCESS;
               end
               else
                  state_ff <= W_ACCESS;
          
            end

            R_ACCESS: begin
               if (req_rd) begin
                  state_ff <= R_FINISH;
               end
               else begin
                  state_ff <= R_ACCESS;
               end
            end

            R_FINISH: begin
               state_ff <= IDLE;
            end

            default: begin
               state_ff <= IDLE;
            end

         endcase

      end

   end

endmodule
