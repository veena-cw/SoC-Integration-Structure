//      // verilator_coverage annotation
        //==================================================================================
        //  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
        //  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
        //  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
        //  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
        //
        //  Chipweave Technologies Confidential
        //==================================================================================
        //  Project           				: 
        //  Module            				: 
        //  Primary Unit Owner                         	: 
        //  Secondary Contact                           : 
        //  Source [SystemVerilog|Verilog|VHDL|Other]   : 
        //=================================================================================
        //  Description: xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx
        //=================================================================================
        
        // Generated APB Driver for APB_to_I2C_Controller - reset-aware, resource_db only, no modports
        // IDLE -> SETUP -> ACCESS -> wait PREADY -> IDLE - reset handled inline inside drive(), no concurrent thread
        `include "uvm_macros.svh"
        import uvm_pkg::*;
        import apb_i2c_i2c_item_pkg::*;
        class apb_i2c_apb_bfm extends uvm_driver#(apb_i2c_i2c_item);
        
%000001  `uvm_component_utils(apb_i2c_apb_bfm)
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
         virtual apb_i2c_i2c_if vif;
        
%000001 bit tick =0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000001 int count=0; 
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        bit start_detected;
        bit [7:0] mem [7:0]; 
%000001 bit [7:0] slave_addr = 7'h55;//configure 
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        bit [7:0] slv_addr_rcv; 
        bit [7:0] slv_data_rcv;
        bit [7:0] slv_data_send;
        
%000001 bit slv_detected =1'b0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000001 bit stop_detected = 1'b0;
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        bit scl_pos_edge;
        bit scl_neg_edge;
        
        logic sda_drive_low;
        
         
%000001   function new(string name,uvm_component parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000001    super.new(name,parent);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
          endfunction
        
%000001   function void build_phase(uvm_phase phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000001    super.build_phase(phase);
-000001  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000001    if(!uvm_resource_db#(virtual apb_i2c_i2c_if)::read_by_name(get_full_name(), "vif", vif))
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000001  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000001  point: type=expr comment=(read_by_name(string'(get_full_name())%22vif%22vifnull)==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     `uvm_fatal("apb_i2c_i2c_if","interface missing")
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
          endfunction
        
        
%000000   task run_phase(uvm_phase phase);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    stop_detected = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    vif.done = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    vif.sda_drive_low=1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    forever begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025   wait_for_start();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025   receive_address();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025   send_ack_nack();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000025   if (slv_detected ==1'b0)
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
                
~000025    if(slv_addr_rcv[0]==1'b0) 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    receive_data();
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025   send_ack();
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
           end
           else 
%000000    begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    send_data();
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    receive_ack();
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
           end
 000025    wait_for_stop();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
           
         
          
           end
        
          endtask
        
        
 000025 task wait_for_start();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 bit scl_last,sda_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 $display("-------waiting for slave---------------");
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025 start_detected = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 stop_detected = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    vif.done = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 123406 while(!start_detected)
+123406  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+123381  point: type=expr comment=(start_detected==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(start_detected==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 123406 begin
+123406  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 123406  @(vif.driver_cb);
+123406  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~123381    if( ( vif.i2c_scl == 1&scl_last ==1'b1) & (vif.i2c_sda ==0 & sda_last ==1)) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((scl_last == 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((sda_last == 32'sh1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=((vif.i2c_scl == 32'sh1)==1 && (scl_last == 1'h1)==1 && (vif.i2c_sda == 32'sh0)==1 && (sda_last == 32'sh1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+123381  point: type=expr comment=((vif.i2c_sda == 32'sh0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+123381  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025           start_detected = 1'b1;  
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025           $display("-------start detected---------------");
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
                  
                  end
            else
 123381     begin 
+123381  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 123381       scl_last = vif.i2c_scl;
+123381  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 123381       sda_last = vif.i2c_sda;
+123381  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
            end 
            
        end
        endtask
        
 000025 task receive_address();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  bit scl_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  int i=7;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  scl_last = 1'b1;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200  repeat(8) begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        
        
 000200 bit scl_pos_edge = 1'b0;
+000200  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000800 while(!scl_pos_edge)
+000800  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000600  point: type=expr comment=(scl_pos_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=expr comment=(scl_pos_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000800 begin
+000800  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000800  @(vif.driver_cb);
+000800  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000600    if((vif.i2c_scl == 1) & scl_last==1'b0)
+000400  point: type=expr comment=((scl_last == 1'h0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000400  point: type=expr comment=((vif.i2c_scl == 32'sh1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh1)==1 && (scl_last == 1'h0)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000600  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    begin 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    scl_pos_edge = 1'b1; 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    slv_addr_rcv[i] = vif.i2c_sda;
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200        $display("[%0t] Bit %0d = %b",
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              $time,
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              i,
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              vif.i2c_sda);
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200       i--; 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
              
           end  
           
 000800       scl_last = vif.i2c_scl;
+000800  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
              
            
        end
        
         end
 000025   vif.slave_address = slv_addr_rcv;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        endtask
        
        
        
 000025 task send_ack_nack();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     bit scl_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    int i=0;	
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000025  if(slv_addr_rcv[7:1] == slave_addr)
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 	slv_detected =1;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
        	
 000025     vif.write = slv_addr_rcv[0];
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  scl_last = vif.i2c_scl;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  repeat(1) begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        
        
 000025 scl_neg_edge = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 scl_pos_edge = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050 while(!scl_neg_edge)
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050 begin
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050  @(vif.driver_cb);
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000025    if((vif.i2c_scl == 0) & scl_last==1'b1)
+000025  point: type=expr comment=((scl_last == 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=((vif.i2c_scl == 32'sh0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh0)==1 && (scl_last == 1'h1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    begin 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    scl_neg_edge = 1'b1; 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
         
~000025     if(slv_detected==1'b1 ) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     	vif.sda_drive_low=1;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
            	
            	end
            else 
%000000        begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     vif.sda_drive_low=0;	
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
           
            end
           end  
 000050       scl_last = vif.i2c_scl;  
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
 000025 scl_neg_edge = 1'b0; 
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000100 while(!scl_neg_edge)
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=expr comment=(scl_neg_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100 begin
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100  @(vif.driver_cb);
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000075    if((vif.i2c_scl == 0) & scl_last==1'b1)
+000050  point: type=expr comment=((scl_last == 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000050  point: type=expr comment=((vif.i2c_scl == 32'sh0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh0)==1 && (scl_last == 1'h1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    begin 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    scl_neg_edge = 1'b1; 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000025     if(slv_detected==1'b1)	
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     	vif.sda_drive_low=1;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
            else 
%000000     vif.sda_drive_low=0;
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
          
           end  
 000100       scl_last = vif.i2c_scl;  
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
 000025  vif.sda_drive_low=0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
        
~000025 if(slv_detected==1'b1 ) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     	$display("---------ACK sent to MASTER----");
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
            	
            	end
            else 
%000000        begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    $display("---------NACK sent to MASTER----");
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
           
            end
         endtask
         
         	
 000025 task receive_data();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  bit scl_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  int i=7;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  scl_last = vif.i2c_scl ;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  vif.sda_drive_low=0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200  repeat(8) begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        
        
 000200 bit scl_pos_edge = 1'b0;
+000200  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000750 while(!scl_pos_edge)
+000750  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000550  point: type=expr comment=(scl_pos_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=expr comment=(scl_pos_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000750 begin
+000750  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000750  @(vif.driver_cb);
+000750  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000550    if((vif.i2c_scl == 1) & scl_last==1'b0)
+000375  point: type=expr comment=((scl_last == 1'h0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000375  point: type=expr comment=((vif.i2c_scl == 32'sh1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh1)==1 && (scl_last == 1'h0)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000550  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    begin 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    scl_pos_edge = 1'b1; 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200    slv_data_rcv[i] = vif.i2c_sda;
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200 $display("slv_data_rcv [%0t] Bit %0d = %b",
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              $time,
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              i,
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200                              vif.i2c_sda);      
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000200       i--; 
+000200  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
              
           end  
 000750      scl_last = vif.i2c_scl;
+000750  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
              
            
        end
        
 000200    $display("---------------------0x%0h--------------------",slv_data_rcv);
+000200  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
             
         end
 000025 vif.pointer_reg =slv_data_rcv;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        endtask
        
%000000 task send_data();
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     int i;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     bit [7:0] data_to_send;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     data_to_send = $random;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     vif.temp_reg = data_to_send;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     $display("================================================");
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("[%0t] SLAVE SEND DATA START", $time);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("[%0t] Data = 0x%02h  Binary = %08b",
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000              $time, data_to_send, data_to_send);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("================================================");
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
            // Make sure SDA is initially released
%000000     vif.sda_drive_low = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
            // -------------------------------------------------
            // IMPORTANT:
            // After address ACK, SCL should be LOW.
            // Drive the FIRST bit immediately.
            // Do NOT blindly wait for another negedge.
            // -------------------------------------------------
        
%000000     if (vif.i2c_scl === 1'b0) begin
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
                // Drive MSB immediately
%000000         vif.sda_drive_low = ~data_to_send[7];
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[7]==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[7]==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000         $display("[%0t] SEND bit[7] = %b | drive_low=%b | SDA=%b | SCL=%b",
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  $time,
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  data_to_send[7],
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.sda_drive_low,
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_sda,
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_scl);
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
            end
%000000     else begin
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
                // If SCL is HIGH, wait until it goes LOW
%000000         @(negedge vif.i2c_scl);
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000         vif.sda_drive_low = ~data_to_send[7];
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[7]==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[7]==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000         $display("[%0t] SEND bit[7] = %b | drive_low=%b | SDA=%b | SCL=%b",
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  $time,
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  data_to_send[7],
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.sda_drive_low,
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_sda,
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_scl);
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
            end
        
        
            // -------------------------------------------------
            // Send remaining bits: 6 -> 0
            // -------------------------------------------------
        
%000000     for (i = 6; i >= 0; i--) begin
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
                // Wait until current bit has been sampled
                // and SCL goes LOW for the next bit.
%000000         @(negedge vif.i2c_scl);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
                // I2C:
                // data = 0 -> pull SDA LOW
                // data = 1 -> release SDA
%000000         vif.sda_drive_low = ~data_to_send[i];
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[i[2:0]+:1]==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(data_to_send[i[2:0]+:1]==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000         $display("[%0t] SEND bit[%0d] = %b | drive_low=%b | SDA=%b | SCL=%b",
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  $time,
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  i,
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  data_to_send[i],
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.sda_drive_low,
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_sda,
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000                  vif.i2c_scl);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
            end
        
        
            // -------------------------------------------------
            // bit[0] is now on SDA.
            //
            // Master will sample it at the next rising edge.
            // Therefore DON'T release SDA immediately.
            // -------------------------------------------------
        
%000000     @(posedge vif.i2c_scl);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     $display("[%0t] bit[0] sampled by MASTER | SDA=%b",
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000              $time, vif.i2c_sda);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        
            // Now SCL goes LOW and slave can release SDA
%000000     @(negedge vif.i2c_scl);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     vif.sda_drive_low = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     $display("[%0t] SLAVE RELEASED SDA after DATA",
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000              $time);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
%000000     $display("================================================");
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("[%0t] SLAVE SEND DATA END", $time);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("================================================");
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        endtask
        
 000025 task send_ack();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     bit scl_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    int i=0;	
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
         
        
 000025  scl_last = vif.i2c_scl;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025  repeat(1) begin
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
        
        
 000025 scl_neg_edge = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025 scl_pos_edge = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050 while(!scl_neg_edge)
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050 begin
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000050  @(vif.driver_cb);
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000025    if((vif.i2c_scl == 0) & scl_last==1'b1)
+000025  point: type=expr comment=((scl_last == 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=((vif.i2c_scl == 32'sh0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh0)==1 && (scl_last == 1'h1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    begin 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    scl_neg_edge = 1'b1; 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     	vif.sda_drive_low=1;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
           end  
 000050       scl_last = vif.i2c_scl;  
+000050  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
 000025 scl_neg_edge = 1'b0; 
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000100 while(!scl_neg_edge)
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=expr comment=(scl_neg_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(scl_neg_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100 begin
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100  @(vif.driver_cb);
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000075    if((vif.i2c_scl == 0) & scl_last==1'b1)
+000050  point: type=expr comment=((scl_last == 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000050  point: type=expr comment=((vif.i2c_scl == 32'sh0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh0)==1 && (scl_last == 1'h1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    begin 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025    scl_neg_edge = 1'b1; 
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025     	vif.sda_drive_low=0;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
           end  
 000100       scl_last = vif.i2c_scl;  
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
 000025 scl_neg_edge = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
 000025 $display("---------------[%0t]---ACK sent----------",$time);
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
         endtask
        
%000000  task receive_ack();
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     bit scl_last ;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
         //int i=0;
         
%000000  bit scl_pos_edge = 1'b0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000  bit m_data_recvd =0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000  vif.sda_drive_low = 0;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000  repeat(1) begin
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000  scl_last = vif.i2c_scl;
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000 while(!scl_pos_edge)
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(scl_pos_edge==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=(scl_pos_edge==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000 begin
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000  @(vif.driver_cb);
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    if((vif.i2c_scl == 1) & scl_last==1'b0)
-000000  point: type=expr comment=((scl_last == 1'h0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl == 32'sh1)==1 && (scl_last == 1'h0)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000    begin 
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000      scl_pos_edge = 1'b1; 
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     if(vif.i2c_sda == 1'b0) 
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000        m_data_recvd  = 1;
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
               else
%000000     m_data_recvd  = 0;
-000000  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
%000000     $display("---------------  master read the data ----------");   
-000000  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
           end  
           
%000000       scl_last = vif.i2c_scl; 
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        end
        
         end 
%000000 $display("---------------NACK Received --------");
-000000  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
         endtask
         /*
        task  wait_for_stop();
         bit scl_last,sda_last;
         
        
        stop_detected = 1'b0;
         scl_last = vif.i2c_scl;
         sda_last = vif.i2c_sda;
         $display("[%0t]-------wating for stop---------------",$time);
          vif.done = 1'b1; 
        while(!stop_detected)
        begin
         @(vif.driver_cb);
           if(vif.i2c_scl == 1 & (vif.i2c_sda ==1 & sda_last ==0)) begin
                  stop_detected = 1'b1; 
                  vif.done = 1'b0; 
                  $display("[%0t]-------stop  detected---------------",$time);
                  
                  end
            else
            begin 
              scl_last = vif.i2c_scl;
              sda_last = vif.i2c_sda;
            end 
            
        end
         
        
        
        endtask
        */
 000025 task wait_for_stop();
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025   bit sda_last;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025   stop_detected = 1'b0;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025   sda_last = vif.i2c_sda;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025   $display("[%0t] WAITING FOR STOP: initial SCL=%b SDA=%b",
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025            $time, vif.i2c_scl, vif.i2c_sda);
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025   vif.done = 1'b1;
+000025  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000100   while (!stop_detected) begin
+000075  point: type=expr comment=(stop_detected==0) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=(stop_detected==1) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000100     @(vif.driver_cb);
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000100     $display("[%0t] STOP CHECK: SCL=%b SDA=%b SDA_LAST=%b",
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100              $time,
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100              vif.i2c_scl,
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100              vif.i2c_sda,
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000100              sda_last);
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000075     if ((vif.i2c_scl === 1'b1) &&
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=branch comment=else hier=$unit::apb_i2c_apb_bfm__Vclpkg
~000075         (sda_last === 1'b0) &&
+000025  point: type=expr comment=((sda_last === 1'h0)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000025  point: type=expr comment=((vif.i2c_scl === 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
-000000  point: type=expr comment=((vif.i2c_scl === 1'h1)==1 && (sda_last === 1'h0)==1 && (vif.i2c_sda === 1'h1)==1) => 1 hier=$unit::apb_i2c_apb_bfm__Vclpkg
+000075  point: type=expr comment=((vif.i2c_sda === 1'h1)==0) => 0 hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025         (vif.i2c_sda === 1'b1)) begin
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025       stop_detected = 1'b1;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025       vif.done = 1'b0;
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
 000025       $display("[%0t] ******** STOP DETECTED ********",
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
 000025                $time);
+000025  point: type=branch comment=if hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
            end
        
 000100     sda_last = vif.i2c_sda;
+000100  point: type=line comment=block hier=$unit::apb_i2c_apb_bfm__Vclpkg
        
          end
        
        endtask
        
        endclass
        
        
        
