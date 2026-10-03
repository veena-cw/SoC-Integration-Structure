//      // verilator_coverage annotation
~250712 module synchronizer #(parameter WIDTH=3) (input clk, rst_n, [WIDTH:0] d_in, output reg [WIDTH:0] d_out);
+250712  point: type=toggle comment=clk:0->1 hier=test_top.dut.ff1
+250712  point: type=toggle comment=clk:0->1 hier=test_top.dut.ff2
+250712  point: type=toggle comment=clk:0->1 hier=test_top.dut.ff3
+250711  point: type=toggle comment=clk:1->0 hier=test_top.dut.ff1
+250711  point: type=toggle comment=clk:1->0 hier=test_top.dut.ff2
+250711  point: type=toggle comment=clk:1->0 hier=test_top.dut.ff3
+125356  point: type=toggle comment=clk:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
+250712  point: type=toggle comment=clk:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
+250712  point: type=toggle comment=clk:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
+125356  point: type=toggle comment=clk:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
+125355  point: type=toggle comment=clk:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
+250711  point: type=toggle comment=clk:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
+250711  point: type=toggle comment=clk:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
+125355  point: type=toggle comment=clk:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.ff1
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.ff2
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.ff3
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.ff1
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.ff3
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000001  point: type=toggle comment=rst_n:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000000  point: type=toggle comment=rst_n:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
+000025  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.ff1
+000025  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.ff3
+000025  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.ff1
+000025  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.ff1
-000000  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.ff1
-000000  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000007  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000007  point: type=toggle comment=d_in[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000006  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000006  point: type=toggle comment=d_in[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_in[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_in[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_in[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_in[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_in[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_in[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_in[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_in[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_in[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
+000025  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.ff1
+000025  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.ff3
+000025  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.ff1
+000025  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.ff1
-000000  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.ff1
-000000  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000007  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000007  point: type=toggle comment=d_out[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000006  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000006  point: type=toggle comment=d_out[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_out[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_out[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_out[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_out[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_out[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=d_out[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=d_out[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=d_out[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=d_out[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
~000025   reg [WIDTH:0] q1;
+000025  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.ff1
+000025  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.ff3
+000025  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.ff1
+000025  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.ff1
-000000  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.ff2
-000000  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.ff3
-000000  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.ff1
-000000  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.ff2
-000000  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.ff3
-000000  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000007  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000007  point: type=toggle comment=q1[0]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000006  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000006  point: type=toggle comment=q1[0]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=q1[1]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=q1[1]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=q1[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[2]:0->1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=q1[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=q1[2]:0->1 hier=test_top.dut.fifo_inst_write.sync_wptr
-000000  point: type=toggle comment=q1[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_rptr
-000000  point: type=toggle comment=q1[2]:1->0 hier=test_top.dut.fifo_inst_read.sync_wptr
-000003  point: type=toggle comment=q1[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_rptr
-000003  point: type=toggle comment=q1[2]:1->0 hier=test_top.dut.fifo_inst_write.sync_wptr
 250712   always@(posedge clk or negedge rst_n) begin
+250712  point: type=line comment=block hier=test_top.dut.ff1
+250712  point: type=line comment=block hier=test_top.dut.ff2
+250712  point: type=line comment=block hier=test_top.dut.ff3
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_read.sync_rptr
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_read.sync_wptr
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_write.sync_rptr
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_write.sync_wptr
~250708     if(!rst_n) begin
-000004  point: type=branch comment=if hier=test_top.dut.ff1
-000004  point: type=branch comment=if hier=test_top.dut.ff2
-000004  point: type=branch comment=if hier=test_top.dut.ff3
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_wptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_wptr
+250708  point: type=branch comment=else hier=test_top.dut.ff1
+250708  point: type=branch comment=else hier=test_top.dut.ff2
+250708  point: type=branch comment=else hier=test_top.dut.ff3
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_rptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_wptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_rptr
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_wptr
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.ff1
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.ff2
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.ff3
+250708  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.ff1
+250708  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.ff2
+250708  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.ff3
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.fifo_inst_read.sync_rptr
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.fifo_inst_read.sync_wptr
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.fifo_inst_write.sync_rptr
-000004  point: type=expr comment=(rst_n==0) => 1 hier=test_top.dut.fifo_inst_write.sync_wptr
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.fifo_inst_read.sync_rptr
+250708  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.fifo_inst_read.sync_wptr
+250708  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.fifo_inst_write.sync_rptr
+125352  point: type=expr comment=(rst_n==1) => 0 hier=test_top.dut.fifo_inst_write.sync_wptr
%000004       q1 <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.ff1
-000004  point: type=branch comment=if hier=test_top.dut.ff2
-000004  point: type=branch comment=if hier=test_top.dut.ff3
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_wptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_wptr
%000004       d_out <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.ff1
-000004  point: type=branch comment=if hier=test_top.dut.ff2
-000004  point: type=branch comment=if hier=test_top.dut.ff3
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.sync_wptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_rptr
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.sync_wptr
            end
 250708     else begin
+250708  point: type=branch comment=else hier=test_top.dut.ff1
+250708  point: type=branch comment=else hier=test_top.dut.ff2
+250708  point: type=branch comment=else hier=test_top.dut.ff3
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_rptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_wptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_rptr
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_wptr
 250708       q1 <= d_in;
+250708  point: type=branch comment=else hier=test_top.dut.ff1
+250708  point: type=branch comment=else hier=test_top.dut.ff2
+250708  point: type=branch comment=else hier=test_top.dut.ff3
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_rptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_wptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_rptr
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_wptr
 250708       d_out <= q1;
+250708  point: type=branch comment=else hier=test_top.dut.ff1
+250708  point: type=branch comment=else hier=test_top.dut.ff2
+250708  point: type=branch comment=else hier=test_top.dut.ff3
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_rptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.sync_wptr
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_rptr
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.sync_wptr
            end
          end
        endmodule
