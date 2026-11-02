module posedge_detector(
input clk, // Input signal for clock
input rst_n,
input inp_signal,// Input signal for which positive edge has to be detected
output logic pulse // Output signal that gives a pulse when a positive edge occurs
);

logic tmp;

// This always block ensures that sig_dly is exactly 1 clock behind sig
always_ff @ (posedge clk or negedge rst_n)
begin 
 if(!rst_n)  tmp <= 1'b0;
 else 		 tmp <= (~inp_signal);	  
end

// Combinational logic where sig is AND with delayed
assign pulse = (tmp & inp_signal );

endmodule

module negedge_detector(
input clk, // Input signal for clock
input rst_n,
input inp_signal,// Input signal for which positive edge has to be detected
output logic pulse // Output signal that gives a pulse when a positive edge occurs
);

logic tmp;

// This always block ensures that sig_dly is exactly 1 clock behind sig
always_ff @ (posedge clk or negedge rst_n)
begin 
 if(!rst_n)  tmp <= 1'b0;
 else 		 tmp <= (inp_signal);	  
end

// Combinational logic where sig is AND with delayed
assign pulse = (tmp & !inp_signal );

endmodule