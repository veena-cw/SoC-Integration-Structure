module async_fifo_binary #(
    parameter DATA_WIDTH = 8,
    parameter ADDR_WIDTH = 4
)(
    input  logic                  wr_clk,
    input  logic                  wr_rst_n,
    input  logic                  wr_en,
    input  logic [DATA_WIDTH-1:0] wr_data,
    output logic                  full,

    input  logic                  rd_clk,
    input  logic                  rd_rst_n,
    input  logic                  rd_en,
    output logic [DATA_WIDTH-1:0] rd_data,
    output logic                  empty
);

    localparam DEPTH = 1 << ADDR_WIDTH+1;
   
  initial begin
    $display("depth=%0d",DEPTH);
  end

    // Memory
    logic [DATA_WIDTH-1:0] mem [0:DEPTH-1];

    // Binary pointers
    logic [ADDR_WIDTH:0] wr_ptr_bin, rd_ptr_bin;

    // Synchronized pointers
    logic [ADDR_WIDTH:0] rd_ptr_bin_sync1, rd_ptr_bin_sync2;
    logic [ADDR_WIDTH:0] wr_ptr_bin_sync1, wr_ptr_bin_sync2;

    // Registered read data
    logic [DATA_WIDTH-1:0] rd_data_reg;
    assign rd_data = rd_data_reg;

    // Write logic
    always_ff @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            wr_ptr_bin <= 0;
        end else if (wr_en && !full) begin
          mem[wr_ptr_bin[ADDR_WIDTH:0]] <= wr_data;
            wr_ptr_bin <= wr_ptr_bin + 1;
        end
    end

    // Read logic
    always_ff @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            rd_ptr_bin <= 0;
            rd_data_reg <= 0;
        end else if (rd_en && !empty) begin
          rd_data_reg <= mem[rd_ptr_bin[ADDR_WIDTH:0]];
            rd_ptr_bin <= rd_ptr_bin + 1;
        end
    end


    // Synchronize read pointer into write clock domain
    always_ff @(posedge wr_clk or negedge wr_rst_n) begin
        if (!wr_rst_n) begin
            rd_ptr_bin_sync1 <= 0;
            rd_ptr_bin_sync2 <= 0;
        end else begin
            rd_ptr_bin_sync1 <= rd_ptr_bin;
            rd_ptr_bin_sync2 <= rd_ptr_bin_sync1;
        end
    end

    // Synchronize write pointer into read clock domain
    always_ff @(posedge rd_clk or negedge rd_rst_n) begin
        if (!rd_rst_n) begin
            wr_ptr_bin_sync1 <= 0;
            wr_ptr_bin_sync2 <= 0;
        end else begin
            wr_ptr_bin_sync1 <= wr_ptr_bin;
            wr_ptr_bin_sync2 <= wr_ptr_bin_sync1;
        end
    end

    // Full: write pointer is one cycle behind read pointer (with MSB wrap)
  /*  assign full = (wr_ptr_bin[ADDR_WIDTH] != rd_ptr_bin_sync2[ADDR_WIDTH]) &&
                  (wr_ptr_bin[ADDR_WIDTH-1:0] == rd_ptr_bin_sync2[ADDR_WIDTH-1:0]);*/
  assign full = (wr_ptr_bin[ADDR_WIDTH:0]+1'h1  == rd_ptr_bin_sync2[ADDR_WIDTH:0]);

//    initial begin
//     $display("wr_ptr_bin=%0d",wr_ptr_bin);
//     $display("rd_ptr_bin_sync2=%0d",rd_ptr_bin_sync2);
     
//   end

    // Empty: pointers are equal
    assign empty = (rd_ptr_bin[ADDR_WIDTH:0] == wr_ptr_bin[ADDR_WIDTH:0]);

initial begin
$monitor(mem[1]);
end
endmodule