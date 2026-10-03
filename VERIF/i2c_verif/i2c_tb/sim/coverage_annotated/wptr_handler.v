//      // verilator_coverage annotation
        module wptr_handler #(parameter PTR_WIDTH=9) (
~250712   input wclk, wrst_n, w_en,
-000001  point: type=toggle comment=wrst_n:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000001  point: type=toggle comment=wrst_n:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=wrst_n:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=wrst_n:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=w_en:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
+000025  point: type=toggle comment=w_en:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=w_en:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
+000025  point: type=toggle comment=w_en:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
+125356  point: type=toggle comment=wclk:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
+250712  point: type=toggle comment=wclk:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
+125355  point: type=toggle comment=wclk:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
+250711  point: type=toggle comment=wclk:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
%000007   input [PTR_WIDTH:0] g_rptr_sync,
-000000  point: type=toggle comment=g_rptr_sync[0]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000007  point: type=toggle comment=g_rptr_sync[0]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_rptr_sync[0]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=g_rptr_sync[0]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_rptr_sync[1]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_rptr_sync[1]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_rptr_sync[1]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_rptr_sync[1]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_rptr_sync[2]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_rptr_sync[2]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_rptr_sync[2]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_rptr_sync[2]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
~000013   output reg [PTR_WIDTH:0] b_wptr, g_wptr,
-000000  point: type=toggle comment=b_wptr[0]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
+000013  point: type=toggle comment=b_wptr[0]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr[0]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
+000012  point: type=toggle comment=b_wptr[0]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr[1]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=b_wptr[1]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr[1]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=b_wptr[1]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr[2]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=b_wptr[2]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr[2]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=b_wptr[2]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[0]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000007  point: type=toggle comment=g_wptr[0]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[0]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=g_wptr[0]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[1]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr[1]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[1]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr[1]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[2]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr[2]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr[2]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr[2]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
%000000   output reg full
-000000  point: type=toggle comment=full:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=full:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=full:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=full:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
        );
        
~000013   wire [PTR_WIDTH:0] b_wptr_next;
-000000  point: type=toggle comment=b_wptr_next[0]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
+000013  point: type=toggle comment=b_wptr_next[0]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr_next[0]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
+000012  point: type=toggle comment=b_wptr_next[0]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr_next[1]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=b_wptr_next[1]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr_next[1]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=b_wptr_next[1]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr_next[2]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=b_wptr_next[2]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=b_wptr_next[2]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=b_wptr_next[2]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
%000007   wire [PTR_WIDTH:0] g_wptr_next;
-000000  point: type=toggle comment=g_wptr_next[0]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000007  point: type=toggle comment=g_wptr_next[0]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr_next[0]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000006  point: type=toggle comment=g_wptr_next[0]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr_next[1]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr_next[1]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr_next[1]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr_next[1]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr_next[2]:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr_next[2]:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=g_wptr_next[2]:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000003  point: type=toggle comment=g_wptr_next[2]:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
           
%000000   reg wrap_around;
-000000  point: type=toggle comment=wrap_around:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=wrap_around:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=wrap_around:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=wrap_around:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
%000000   wire wfull;
-000000  point: type=toggle comment=wfull:0->1 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=wfull:0->1 hier=test_top.dut.fifo_inst_write.wptr_h
-000000  point: type=toggle comment=wfull:1->0 hier=test_top.dut.fifo_inst_read.wptr_h
-000000  point: type=toggle comment=wfull:1->0 hier=test_top.dut.fifo_inst_write.wptr_h
          
          assign b_wptr_next = b_wptr+(w_en & !full);
          assign g_wptr_next = (b_wptr_next >>1)^b_wptr_next;
          
 250712   always@(posedge wclk or negedge wrst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_read.wptr_h
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_write.wptr_h
~250708     if(!wrst_n) begin
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.wptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
-000004  point: type=expr comment=(wrst_n==0) => 1 hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=expr comment=(wrst_n==0) => 1 hier=test_top.dut.fifo_inst_write.wptr_h
+125352  point: type=expr comment=(wrst_n==1) => 0 hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=expr comment=(wrst_n==1) => 0 hier=test_top.dut.fifo_inst_write.wptr_h
%000004       b_wptr <= 0; // set default value
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.wptr_h
%000004       g_wptr <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.wptr_h
            end
 250708     else begin
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
 250708       b_wptr <= b_wptr_next; // incr binary write pointer
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
 250708       g_wptr <= g_wptr_next; // incr gray write pointer
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
            end
          end
          
 250712   always@(posedge wclk or negedge wrst_n) begin
+125356  point: type=line comment=block hier=test_top.dut.fifo_inst_read.wptr_h
+250712  point: type=line comment=block hier=test_top.dut.fifo_inst_write.wptr_h
~250708     if(!wrst_n) full <= 0;
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=branch comment=if hier=test_top.dut.fifo_inst_write.wptr_h
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
-000004  point: type=expr comment=(wrst_n==0) => 1 hier=test_top.dut.fifo_inst_read.wptr_h
-000004  point: type=expr comment=(wrst_n==0) => 1 hier=test_top.dut.fifo_inst_write.wptr_h
+125352  point: type=expr comment=(wrst_n==1) => 0 hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=expr comment=(wrst_n==1) => 0 hier=test_top.dut.fifo_inst_write.wptr_h
 250708     else        full <= wfull;
+125352  point: type=branch comment=else hier=test_top.dut.fifo_inst_read.wptr_h
+250708  point: type=branch comment=else hier=test_top.dut.fifo_inst_write.wptr_h
          end
        
          //assign wrap_around = (g_wptr_next) ^ g_rptr_sync[PTR_WIDTH]; // To check MSB of write and read pointers are different
          //assign wfull = wrap_around & (g_wptr_next[PTR_WIDTH-1] ^ g_rptr_sync[PTR_WIDTH-1]) & (g_wptr_next[PTR_WIDTH-2:0] == g_rptr_sync[PTR_WIDTH-2:0]);
          assign wfull = (g_wptr_next == {~g_rptr_sync[PTR_WIDTH:PTR_WIDTH-1], g_rptr_sync[PTR_WIDTH-2:0]});
        
        endmodule
