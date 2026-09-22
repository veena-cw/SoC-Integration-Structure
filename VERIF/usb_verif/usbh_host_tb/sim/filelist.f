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
// filelist.f -- auto-generated. Adjust DUT path(s) as needed.
 // Universal filelist: plain file paths only (no +incdir) -- include dirs are
 // passed via Makefile VERILATOR_INCDIRS / XVLOG_FLAGS.

../interface/usbh_host_pkg.sv
../interface/usbh_host_axi4_if.sv
../interface/usbh_host_utmi_if.sv
//../interface/reset_if.sv
../top/usb_device_bfm.sv

// TODO: add your DUT source file(s) here, e.g.:
/home/cw020_kamakshi/Desktop/usb_host_controller_withUvmFrame/src_v/usbh_host.sv
../../src_v/usbh_sie.sv
../../src_v/usbh_crc5.sv
../../src_v/usbh_crc16.sv
../../src_v/usbh_fifo.sv
../../src_v/usbh_host_defs.sv

//../agent/reset_agent/reset_transaction.sv
//../agent/reset_agent/reset_sequencer.sv
//../agent/reset_agent/reset_driver.sv
//../agent/reset_agent/reset_monitor.sv
//../agent/reset_agent/reset_agent.sv
../agent/axi4_agent/usbh_host_axi4_agent_seq_item.sv
../agent/axi4_agent/usbh_host_axi4_agent_sequencer.sv
../agent/axi4_agent/usbh_host_axi4_agent_driver.sv
../agent/axi4_agent/usbh_host_axi4_agent_monitor.sv
../agent/axi4_agent/usbh_host_axi4_agent.sv
//../agent/axi4_agent/usbh_host_axi4_agent_coverage.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_base_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_in_seq.sv


//../agent/utmi_agent/usbh_host_utmi_agent_seq_item.sv
//../agent/utmi_agent/usbh_host_utmi_agent_sequencer.sv
//../agent/utmi_agent/usbh_host_utmi_agent_driver.sv
//../agent/utmi_agent/usbh_host_utmi_agent_monitor.sv
//../agent/utmi_agent/usbh_host_utmi_agent.sv
//../agent/utmi_agent/usbh_host_utmi_agent_coverage.sv
//../agent/utmi_agent/sequences/usbh_host_utmi_agent_base_seq.sv


//../env/usbh_host_scoreboard.sv
../env/usbh_host_env.sv
../tests/base_test.sv
../tests/pid_data0_test.sv




../top/usbh_top_tb.sv
 
