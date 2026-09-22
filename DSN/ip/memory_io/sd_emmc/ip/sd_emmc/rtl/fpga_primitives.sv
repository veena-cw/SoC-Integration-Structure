/*// fpga_primitives.v - Behavioral models for Xilinx FPGA primitives
// For simulation purposes only

// IDDR - Input Double Data Rate
module IDDR #(
    parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
    parameter INIT_Q1 = 1'b0,
    parameter INIT_Q2 = 1'b0,
    parameter SRTYPE = "SYNC"
) (
    output Q1,
    output Q2,
    input C,
    input CE,
    input D,
    input R,
    input S
);
    reg q1, q2;
    assign Q1 = q1;
    assign Q2 = q2;
    
    always @(posedge C or posedge R) begin
        if (R) begin
            q1 <= INIT_Q1;
            q2 <= INIT_Q2;
        end else if (CE) begin
            q1 <= D;
            q2 <= D;
        end
    end
endmodule

// ODDR - Output Double Data Rate
module ODDR #(
    parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
    parameter INIT = 1'b0,
    parameter SRTYPE = "SYNC"
) (
    output Q,
    input C,
    input CE,
    input D1,
    input D2,
    input R,
    input S
);
    reg q;
    assign Q = q;
    
    always @(posedge C or posedge R) begin
        if (R) begin
            q <= INIT;
        end else if (CE) begin
            q <= D1;
        end
    end
endmodule

// FIFO18E1 - 18K FIFO Element (Complete with all ports)
module FIFO18E1 #(
    parameter ALMOST_EMPTY_OFFSET = 13'h0080,
    parameter ALMOST_FULL_OFFSET = 13'h0080,
    parameter DATA_WIDTH = 36,
    parameter DO_REG = 1,
    parameter EN_SYN = "FALSE",
    parameter FIFO_MODE = "FIFO18",
    parameter FIRST_WORD_FALL_THROUGH = "FALSE",
    parameter INIT = 72'h0,
    parameter SRVAL = 36'h000000000,
    parameter SIM_DEVICE = "7SERIES"
) (
    output [31:0] DO,
    output [3:0] DOP,
    output EMPTY,
    output ALMOSTEMPTY,
    output FULL,
    output ALMOSTFULL,
    output WRERR,
    output RDERR,
    output [12:0] RDCOUNT,
    output [12:0] WRCOUNT,
    input [31:0] DI,
    input [3:0] DIP,
    input RDCLK,
    input RDEN,
    input WRCLK,
    input WREN,
    input RST,
    input REGCE,
    input RSTREG
);
    parameter DEPTH = 512;
    
    reg [35:0] fifo_mem [0:DEPTH-1];
    reg [8:0] wr_ptr, rd_ptr;
    reg [9:0] count;
    reg [31:0] do_reg;
    reg [3:0] dop_reg;
    
    assign EMPTY = (count == 0);
    assign ALMOSTEMPTY = (count < ALMOST_EMPTY_OFFSET);
    assign FULL = (count == DEPTH);
    assign ALMOSTFULL = (count > (DEPTH - ALMOST_FULL_OFFSET));
    assign WRERR = WREN & FULL;
    assign RDERR = RDEN & EMPTY;
    assign RDCOUNT = count[12:0];
    assign WRCOUNT = count[12:0];
    assign DO = do_reg;
    assign DOP = dop_reg;
    
    // Write logic
    always @(posedge WRCLK or posedge RST) begin
        if (RST) begin
            wr_ptr <= 0;
            count <= 0;
        end else if (WREN && !FULL) begin
            fifo_mem[wr_ptr] <= {DIP, DI};
            wr_ptr <= wr_ptr + 1;
            count <= count + 1;
        end
    end
    
    // Read logic
    always @(posedge RDCLK or posedge RST) begin
        if (RST) begin
            rd_ptr <= 0;
            do_reg <= 0;
            dop_reg <= 0;
        end else begin
            if (RSTREG) begin
                do_reg <= SRVAL[31:0];
                dop_reg <= SRVAL[35:32];
            end else if (REGCE && RDEN && !EMPTY) begin
                rd_ptr <= rd_ptr + 1;
                count <= count - 1;
                do_reg <= fifo_mem[rd_ptr][31:0];
                dop_reg <= fifo_mem[rd_ptr][35:32];
            end
        end
    end
endmodule*/


// fpga_primitives.sv - Behavioral models for Xilinx FPGA primitives
// For simulation purposes only

// IDDR - Input Double Data Rate
/*module IDDR #(
    parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
    parameter INIT_Q1 = 1'b0,
    parameter INIT_Q2 = 1'b0,
    parameter SRTYPE = "SYNC"
) (
    output Q1,
    output Q2,
    input C,
    input CE,
    input D,
    input R,
    input S
);
    reg q1, q2;
    assign Q1 = q1;
    assign Q2 = q2;
    
    always @(posedge C or posedge R) begin
        if (R) begin
            q1 <= INIT_Q1;
            q2 <= INIT_Q2;
        end else if (CE) begin
            q1 <= D;
            q2 <= D;
        end
    end
endmodule

// ODDR - Output Double Data Rate
module ODDR #(
    parameter DDR_CLK_EDGE = "OPPOSITE_EDGE",
    parameter INIT = 1'b0,
    parameter SRTYPE = "SYNC"
) (
    output Q,
    input C,
    input CE,
    input D1,
    input D2,
    input R,
    input S
);
    reg q;
    assign Q = q;
    
    always @(posedge C or posedge R) begin
        if (R) begin
            q <= INIT;
        end else if (CE) begin
            q <= D1;
        end
    end
endmodule*/

// FIFO18E1 - 18K FIFO Element (Dual-Clock Compatible)
/* module FIFO18E1 #(
    parameter ALMOST_EMPTY_OFFSET = 13'h0080,
    parameter ALMOST_FULL_OFFSET  = 13'h0080,
    parameter DATA_WIDTH          = 36,
    parameter DO_REG              = 1,
    parameter EN_SYN              = "FALSE",
    parameter FIFO_MODE           = "FIFO18",
    parameter FIRST_WORD_FALL_THROUGH = "FALSE",
    parameter INIT                = 72'h0,
    parameter SRVAL               = 36'h000000000,
    parameter SIM_DEVICE          = "7SERIES"
) (
    output [31:0] DO,
    output [3:0] DOP,
    output EMPTY,
    output ALMOSTEMPTY,
    output FULL,
    output ALMOSTFULL,
    output WRERR,
    output RDERR,
    output [12:0] RDCOUNT,
    output [12:0] WRCOUNT,
    input [31:0] DI,
    input [3:0] DIP,
    input RDCLK,
    input RDEN,
    input WRCLK,
    input WREN,
    input RST,
    input REGCE,
    input RSTREG
);
    localparam DEPTH = 512;
    
    reg [35:0] fifo_mem [0:DEPTH-1];
    
    // 10-bit pointers (9 bits for address + 1 bit for wrap detection)
    reg [9:0] wr_ptr;
    reg [9:0] rd_ptr;
    
    // Cross-domain synchronization registers
    reg [9:0] wr_ptr_sync_rd;
    reg [9:0] rd_ptr_sync_wr;
    
    reg [31:0] do_reg;
    reg [3:0] dop_reg;

    // Synchronize pointers across clock domains to evaluate flags without multi-driven count
    always @(posedge RDCLK or posedge RST) begin
        if (RST)
            wr_ptr_sync_rd <= 10'd0;
        else
            wr_ptr_sync_rd <= wr_ptr;
    end

    always @(posedge WRCLK or posedge RST) begin
        if (RST)
            rd_ptr_sync_wr <= 10'd0;
        else
            rd_ptr_sync_wr <= rd_ptr;
    end

    // Flag logic based purely on single-domain pointer evaluation
    assign EMPTY = (rd_ptr == wr_ptr_sync_rd);
    assign FULL  = (wr_ptr[8:0] == rd_ptr_sync_wr[8:0]) && (wr_ptr[9] != rd_ptr_sync_wr[9]);
    
    assign ALMOSTEMPTY = 1'b0;
    assign ALMOSTFULL  = 1'b0;
    
    assign WRERR = WREN & FULL;
    assign RDERR = RDEN & EMPTY;
    
    assign RDCOUNT = {3'b000, rd_ptr[8:0]};
    assign WRCOUNT = {3'b000, wr_ptr[8:0]};
    
    assign DO  = do_reg;
    assign DOP = dop_reg;

    // Write Logic (WRCLK Domain)
    always @(posedge WRCLK or posedge RST) begin
        if (RST) begin
            wr_ptr <= 10'd0;
        end else if (WREN && !FULL) begin
            fifo_mem[wr_ptr[8:0]] <= {DIP, DI};
            wr_ptr <= wr_ptr + 1'b1;
        end
    end

    // Read Logic (RDCLK Domain)
    always @(posedge RDCLK or posedge RST) begin
        if (RST) begin
            rd_ptr  <= 10'd0;
            do_reg  <= SRVAL[31:0];
            dop_reg <= SRVAL[35:32];
        end else begin
            if (RSTREG) begin
                do_reg  <= SRVAL[31:0];
                dop_reg <= SRVAL[35:32];
            end else if (REGCE && RDEN && !EMPTY) begin
                do_reg  <= fifo_mem[rd_ptr[8:0]][31:0];
                dop_reg <= fifo_mem[rd_ptr[8:0]][35:32];
                rd_ptr  <= rd_ptr + 1'b1;
            end
        end
    end

endmodule*/
