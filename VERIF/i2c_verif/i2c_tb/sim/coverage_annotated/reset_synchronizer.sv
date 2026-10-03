//      // verilator_coverage annotation
        // Synchronizes the asynchronous system-level reset to the IP-level synchronous reset
        
        module reset_synchronizer (
 125356     input   clk,                  // Destination clock
+125356  point: type=toggle comment=clk:0->1 hier=test_top.dut.u_i2c_rst_sync
+125355  point: type=toggle comment=clk:1->0 hier=test_top.dut.u_i2c_rst_sync
%000001     input   async_reset_n,        // Asynchronous active-low reset
-000001  point: type=toggle comment=async_reset_n:0->1 hier=test_top.dut.u_i2c_rst_sync
-000000  point: type=toggle comment=async_reset_n:1->0 hier=test_top.dut.u_i2c_rst_sync
%000001     output wire sync_reset_n     // Synchronized active-low reset
-000001  point: type=toggle comment=sync_reset_n:0->1 hier=test_top.dut.u_i2c_rst_sync
-000000  point: type=toggle comment=sync_reset_n:1->0 hier=test_top.dut.u_i2c_rst_sync
        );
        
            // Two flip-flops used to synchronize reset deassertion
%000001     logic [1:0] reset_sync_ff;
-000001  point: type=toggle comment=reset_sync_ff[0]:0->1 hier=test_top.dut.u_i2c_rst_sync
-000000  point: type=toggle comment=reset_sync_ff[0]:1->0 hier=test_top.dut.u_i2c_rst_sync
-000001  point: type=toggle comment=reset_sync_ff[1]:0->1 hier=test_top.dut.u_i2c_rst_sync
-000000  point: type=toggle comment=reset_sync_ff[1]:1->0 hier=test_top.dut.u_i2c_rst_sync
        
            // Reset is asserted asynchronously and deasserted synchronously
 125356     always_ff @(posedge clk or negedge async_reset_n) begin
+125356  point: type=line comment=block hier=test_top.dut.u_i2c_rst_sync
~125354         if (!async_reset_n)
+125354  point: type=branch comment=else hier=test_top.dut.u_i2c_rst_sync
-000002  point: type=expr comment=(async_reset_n==0) => 1 hier=test_top.dut.u_i2c_rst_sync
+125354  point: type=expr comment=(async_reset_n==1) => 0 hier=test_top.dut.u_i2c_rst_sync
-000002  point: type=branch comment=if hier=test_top.dut.u_i2c_rst_sync
                    // Immediately assert reset
%000002             reset_sync_ff <= 2'b00;
-000002  point: type=branch comment=if hier=test_top.dut.u_i2c_rst_sync
                else
                    // Shift logic '1' through the two flip-flops
 125354             reset_sync_ff <= {reset_sync_ff[0], 1'b1};
+125354  point: type=branch comment=else hier=test_top.dut.u_i2c_rst_sync
            end
        
            // Second flip-flop provides the synchronized reset output
            assign sync_reset_n = reset_sync_ff[1];
        
        endmodule
