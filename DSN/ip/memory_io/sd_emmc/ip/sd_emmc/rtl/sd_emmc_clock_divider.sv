module sd_clock_divider(
    input logic AXI_CLOCK,
    output logic sd_clk,
    input logic [7:0] DIVISOR,
    input logic AXI_RST,
    output logic Internal_clk_stable,
    output logic sd_clk90
    );

logic [7:0] clk_div;
logic SD_CLK_O;
logic [7:0] div;
logic SD_CLK_90;
assign sd_clk = SD_CLK_O;
assign sd_clk90 = SD_CLK_90;


always_ff @ (posedge AXI_CLOCK or posedge AXI_RST)
begin
 if (AXI_RST) begin
    clk_div <=8'b0000_0000;
    SD_CLK_O  <= 0;
    Internal_clk_stable <= 1'b0;
 end
 else if (clk_div == DIVISOR)begin
    clk_div  <= 0;
    SD_CLK_O <=  ~SD_CLK_O;
    Internal_clk_stable <= 1'b1;
 end 
 else begin
    clk_div  <= clk_div + 1;
    SD_CLK_O <=  SD_CLK_O;
    Internal_clk_stable <= 1'b1;
 end
end


always_ff @ (negedge AXI_CLOCK or posedge AXI_RST)
begin
 if (AXI_RST) begin
    div <=8'b0000_0000;
    SD_CLK_90  <= 0;
 end
 else if (div == DIVISOR)begin
    div  <= 0;
    SD_CLK_90 <=  ~SD_CLK_90;
 end 
 else begin
    div  <= div + 1;
    SD_CLK_90 <=  SD_CLK_90;
 end
end

endmodule