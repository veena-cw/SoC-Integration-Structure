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

 `uvm_component_utils(apb_i2c_apb_bfm)

 virtual apb_i2c_i2c_if vif;

bit tick =0;
int count=0; 
bit start_detected;
bit [7:0] mem [7:0]; 
bit [7:0] slave_addr = 7'h50;//configure 
bit [7:0] slv_addr_rcv; 
bit [7:0] slv_data_rcv;
bit [7:0] slv_data_send;

bit slv_detected =1'b0;
bit stop_detected = 1'b0;
bit scl_pos_edge;
bit scl_neg_edge;

logic sda_drive_low;

 
  function new(string name,uvm_component parent);
   super.new(name,parent);
  endfunction

  function void build_phase(uvm_phase phase);

   super.build_phase(phase);

   if(!uvm_resource_db#(virtual apb_i2c_i2c_if)::read_by_name(get_full_name(), "vif", vif))
    `uvm_fatal("apb_i2c_i2c_if","interface missing")

  endfunction


  task run_phase(uvm_phase phase);

 
   vif.sda_drive_low=1'b0;
   forever begin
  wait_for_start();
  receive_address();
  send_ack_nack();
  if (slv_detected ==1'b0)
        continue;
        
   if(slv_addr_rcv[0]==1'b0) 
   begin
   receive_data();
  send_ack();
   end
   else 
   begin
   send_data();
   receive_ack();
   end
   wait_for_stop();
   
 
  
   end

  endtask


task wait_for_start();
bit scl_last,sda_last;
$display("-------waiting for slave---------------");

start_detected = 1'b0;
while(!start_detected)
begin
 @(vif.driver_cb);
   if( ( vif.i2c_scl == 1&scl_last ==1'b1) & (vif.i2c_sda ==0 & sda_last ==1)) begin
          start_detected = 1'b1;  
          $display("-------start detected---------------");
          
          end
    else
    begin 
      scl_last = vif.i2c_scl;
      sda_last = vif.i2c_sda;
    end 
    
end
endtask
/*
task wait_for_start();

    start_detected = 1'b0;

    $display("[%0t] ------- Waiting for START -------", $time);

    forever begin

        @(negedge vif.i2c_sda);

        if (vif.i2c_scl === 1'b1) begin

            start_detected = 1'b1;

            $display("[%0t] ------- START detected -------",
                     $time);

            return;

        end

    end

endtask
*//*
task wait_for_start();

    forever begin

        @(negedge vif.i2c_sda);

        // Give bus resolution/update a delta cycle
        #0;

        if (vif.i2c_scl === 1'b1) begin

            $display("[%0t] =======================", $time);
            $display("[%0t] START DETECTED", $time);
            $display("[%0t] SCL = %b", $time, vif.i2c_scl);
            $display("[%0t] SDA = %b", $time, vif.i2c_sda);
            $display("[%0t] =======================", $time);

            return;

        end
        else begin

            $display("[%0t] SDA falling, but SCL LOW -> NOT START",
                     $time);
        end

    end

endtask

*/
task receive_address();
 bit scl_last;
 int i=7;
 scl_last = 1'b1;
 repeat(8) begin



bit scl_pos_edge = 1'b0;
while(!scl_pos_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 1) & scl_last==1'b0)
   begin 
   scl_pos_edge = 1'b1; 
   slv_addr_rcv[i] = vif.i2c_sda;
       $display("[%0t] Bit %0d = %b",
                             $time,
                             i,
                             vif.i2c_sda);
      i--; 
      
   end  
   
      scl_last = vif.i2c_scl;
      
    
end

 end

endtask



task send_ack_nack();
    bit scl_last;
   int i=0;	
 if(slv_addr_rcv[7:1] == slave_addr)
	slv_detected =1;

 scl_last = vif.i2c_scl;
 repeat(1) begin



scl_neg_edge = 1'b0;
scl_pos_edge = 1'b0;
while(!scl_neg_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 0) & scl_last==1'b1)
   begin 
   scl_neg_edge = 1'b1; 
 
    if(slv_detected==1'b1 ) begin
    	vif.sda_drive_low=1;
    	
    	end
    else 
       begin
    vif.sda_drive_low=0;	
   
    end
   end  
      scl_last = vif.i2c_scl;  
end

scl_neg_edge = 1'b0; 

while(!scl_neg_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 0) & scl_last==1'b1)
   begin 
   scl_neg_edge = 1'b1; 
    if(slv_detected==1'b1)	
    	vif.sda_drive_low=1;
    else 
    vif.sda_drive_low=0;
  
   end  
      scl_last = vif.i2c_scl;  
end
 vif.sda_drive_low=0;
end


if(slv_detected==1'b1 ) begin
    	$display("---------ACK sent to MASTER----");
    	
    	end
    else 
       begin
   $display("---------NACK sent to MASTER----");
   
    end
 endtask
 
 	
task receive_data();
 bit scl_last;
 int i=0;
 scl_last = vif.i2c_scl ;
 vif.sda_drive_low=0;
 repeat(8) begin



bit scl_pos_edge = 1'b0;
while(!scl_pos_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 1) & scl_last==1'b0)
   begin 
   scl_pos_edge = 1'b1; 
   slv_data_rcv[i] = vif.i2c_sda;
$display("slv_data_rcv [%0t] Bit %0d = %b",
                             $time,
                             i,
                             vif.i2c_sda);      
      i++; 
      
   end  
     scl_last = vif.i2c_scl;
      
    
end

   $display("---------------------0x%0h--------------------",slv_data_rcv);
     
 end

endtask

task send_data();

    bit scl_last;
   int i=7;	

 scl_last = vif.i2c_scl;
 repeat(8) begin



scl_neg_edge = 1'b0;
scl_pos_edge = 1'b0;
while(!scl_neg_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 0) & scl_last==1'b1)
   begin 
   scl_neg_edge = 1'b1; 

       $display("sending  [%0t] Bit %0d = %b",
                             $time,
                             i,
                             vif.i2c_sda);
      	
    	vif.sda_drive_low = ~slv_data_rcv[i];

  i--; 
   end  
      scl_last = vif.i2c_scl;  
end

scl_neg_edge = 1'b0; 

 end
endtask

task send_ack();
    bit scl_last;
   int i=0;	
 

 scl_last = vif.i2c_scl;
 repeat(1) begin



scl_neg_edge = 1'b0;
scl_pos_edge = 1'b0;
while(!scl_neg_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 0) & scl_last==1'b1)
   begin 
   scl_neg_edge = 1'b1; 
    	vif.sda_drive_low=1;
   end  
      scl_last = vif.i2c_scl;  
end

scl_neg_edge = 1'b0; 

while(!scl_neg_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 0) & scl_last==1'b1)
   begin 
   scl_neg_edge = 1'b1; 
    	vif.sda_drive_low=0;
   end  
      scl_last = vif.i2c_scl;  
end

scl_neg_edge = 1'b0;
end

$display("---------------[%0t]---ACK sent----------",$time);
 endtask

 task receive_ack();
    bit scl_last ;
 //int i=0;
 
 bit scl_pos_edge = 1'b0;
 bit m_data_recvd =0;
 repeat(1) begin
 scl_last = vif.i2c_scl;
while(!scl_pos_edge)
begin
 @(vif.driver_cb);
   if((vif.i2c_scl == 1) & scl_last==1'b0)
   begin 
     scl_pos_edge = 1'b1; 
    if(vif.i2c_sda == 1'b0) 
       m_data_recvd  = 1;
       else
    m_data_recvd  = 0;
    $display("---------------  master read the data ----------");   
   end  
   
      scl_last = vif.i2c_scl; 
end

 end 
$display("---------------NACK Received --------");
 endtask
 
task  wait_for_stop();
 bit scl_last,sda_last;


stop_detected = 1'b0;
 scl_last = vif.i2c_scl;
 //sda_last = vif.i2c_sda;
 $display("[%0t]-------wating for stop---------------",$time);
 
while(!stop_detected)
begin
 @(vif.driver_cb);
   if(vif.i2c_scl == 1 & (vif.i2c_sda ==1 & sda_last ==0)) begin
          stop_detected = 1'b1;  
          $display("[%0t]-------stop  detected---------------",$time);
          
          end
    else
    begin 
      scl_last = vif.i2c_scl;
      sda_last = vif.i2c_sda;
    end 
    
end
 


endtask


endclass
