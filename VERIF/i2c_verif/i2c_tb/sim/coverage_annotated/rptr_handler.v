//      // verilator_coverage annotation
        module rptr_handler #(parameter PTR_WIDTH=9) (
~250712   input rclk, rrst_n, r_en,
-000001  point: type=toggle comment=rrst_n:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000001  point: type=toggle comment=rrst_n:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=rrst_n:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000000  point: type=toggle comment=rrst_n:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000001  point: type=toggle comment=r_en:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+000026  point: type=toggle comment=r_en:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000001  point: type=toggle comment=r_en:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+000026  point: type=toggle comment=r_en:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
+250712  point: type=toggle comment=rclk:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+125356  point: type=toggle comment=rclk:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
+250711  point: type=toggle comment=rclk:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+125355  point: type=toggle comment=rclk:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
%000007   input [PTR_WIDTH:0] g_wptr_sync,
-000000  point: type=toggle comment=g_wptr_sync[0]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000007  point: type=toggle comment=g_wptr_sync[0]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_wptr_sync[0]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=g_wptr_sync[0]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_wptr_sync[1]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_wptr_sync[1]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_wptr_sync[1]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_wptr_sync[1]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_wptr_sync[2]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_wptr_sync[2]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_wptr_sync[2]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_wptr_sync[2]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
~000013   output reg [PTR_WIDTH:0] b_rptr, g_rptr,
-000000  point: type=toggle comment=b_rptr[0]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+000013  point: type=toggle comment=b_rptr[0]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr[0]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+000012  point: type=toggle comment=b_rptr[0]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr[1]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=b_rptr[1]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr[1]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=b_rptr[1]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr[2]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=b_rptr[2]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr[2]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=b_rptr[2]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[0]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000007  point: type=toggle comment=g_rptr[0]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[0]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=g_rptr[0]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[1]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr[1]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[1]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr[1]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[2]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr[2]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr[2]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr[2]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
~000026   output reg empty
-000001  point: type=toggle comment=empty:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+000026  point: type=toggle comment=empty:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=empty:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+000025  point: type=toggle comment=empty:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
        );
        
~000014   wire [PTR_WIDTH:0] b_rptr_next;
-000001  point: type=toggle comment=b_rptr_next[0]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+000014  point: type=toggle comment=b_rptr_next[0]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000001  point: type=toggle comment=b_rptr_next[0]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+000013  point: type=toggle comment=b_rptr_next[0]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr_next[1]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=b_rptr_next[1]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr_next[1]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000006  point: type=toggle comment=b_rptr_next[1]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr_next[2]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=b_rptr_next[2]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=b_rptr_next[2]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=b_rptr_next[2]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
%000008   wire [PTR_WIDTH:0] g_rptr_next;
-000001  point: type=toggle comment=g_rptr_next[0]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000008  point: type=toggle comment=g_rptr_next[0]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000001  point: type=toggle comment=g_rptr_next[0]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000007  point: type=toggle comment=g_rptr_next[0]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr_next[1]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr_next[1]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr_next[1]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr_next[1]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr_next[2]:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr_next[2]:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=g_rptr_next[2]:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
-000003  point: type=toggle comment=g_rptr_next[2]:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
        
          assign b_rptr_next = b_rptr+(r_en & !empty);
          assign g_rptr_next = (b_rptr_next >>1)^b_rptr_next;
~000026   assign rempty = (g_wptr_sync == g_rptr_next);
-000001  point: type=toggle comment=rempty:0->1 hier=test_top.dut.fifo_inst_read.rptr_h
+000026  point: type=toggle comment=rempty:0->1 hier=test_top.dut.fifo_inst_write.rptr_h
-000000  point: type=toggle comment=rempty:1->0 hier=test_top.dut.fifo_inst_read.rptr_h
+000025  point: type=toggle comment=rempty:1->0 hier=test_top.dut.fifo_inst_write.rptr_h
          
 250712   always@(posedge rclk or negedge rrst_n) begin
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_read.rptr_h
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_write.rptr_h
~250708     if(!rrst_n) begin
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.rptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
-000004  point: type=expr comment=(rrst_n==0) => 1 hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=expr comment=(rrst_n==0) => 1 hier=test_top.dut.fifo_inst_write.rptr_h
+250708  point: type=expr comment=(rrst_n==1) => 0 hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=expr comment=(rrst_n==1) => 0 hier=test_top.dut.fifo_inst_write.rptr_h
%000004       b_rptr <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.rptr_h
%000004       g_rptr <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.rptr_h
            end
 250708     else begin
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
 250708       b_rptr <= b_rptr_next;
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
 250708       g_rptr <= g_rptr_next;
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
            end
          end
          
 250712   always@(posedge rclk or negedge rrst_n) begin
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_read.rptr_h
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_write.rptr_h
~250708     if(!rrst_n) empty <= 1;
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.rptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
-000004  point: type=expr comment=(rrst_n==0) => 1 hier=test_top.dut.fifo_inst_read.rptr_h
-000004  point: type=expr comment=(rrst_n==0) => 1 hier=test_top.dut.fifo_inst_write.rptr_h
+250708  point: type=expr comment=(rrst_n==1) => 0 hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=expr comment=(rrst_n==1) => 0 hier=test_top.dut.fifo_inst_write.rptr_h
 250708     else        empty <= rempty;
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.rptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.rptr_h
          end
        endmodule
