//==================================================================================
//  Copyright (c) 2024 Chipweave Technologies Private Limited. All rights reserved.
//  THIS PROGRAM IS AN UNPUBLISHED WORK FULLY PROTECTED BY
//  COPYRIGHT LAWS AND IS CONSIDERED A TRADE SECRET BELONGING
//  TO THE CHIPWEAVE TECHNOLOGIES PRIVATE LIMITED.
//
//  Chipweave Technologies Confidential
//==================================================================================
//
//  Description:
//  USB Host UVM simulation file list
//
//==================================================================================
//-f /home/cw020_kamakshi/Documents/SoC-Integration-Structure/SoC-Integration-Structure/DSN/ip/memory_io/usb/dsn/rtl/axi4_usb_slave_top.f

//------------------------------------------------------------------------------
// UVM package
//------------------------------------------------------------------------------
../interface/usbh_host_pkg.sv


//------------------------------------------------------------------------------
// Interfaces
//------------------------------------------------------------------------------
../interface/usbh_host_axi4_if.sv
../interface/usbh_host_utmi_if.sv
//../interface/reset_if.sv


//------------------------------------------------------------------------------
// USB Device BFM
//------------------------------------------------------------------------------
//../device_bfm/usb_device_bfm_base.sv
//../device_bfm/usb_device_bfm_generated.sv
//../device_bfm/usb_device_bfm_generated_14_oct.sv
//../device_bfm/usb_device_bfm_main.sv
//../device_bfm/usb_device_bfm_main1.sv
../device_bfm/usb_device_bfm_main2.sv


//------------------------------------------------------------------------------
// USB Host RTL
//------------------------------------------------------------------------------
../../usb/ip/usb/rtl/usbh_host_defs.sv
../../usb/ip/usb/rtl/usbh_crc5.sv
../../usb/ip/usb/rtl/usbh_crc16.sv
../../usb/ip/usb/rtl/usbh_fifo.sv
../../usb/ip/usb/rtl/usbh_sie.sv
../../usb/ip/usb/rtl/usbh_host.sv
// RTL Top
../../usb/dsn/rtl/axi4_usb_slave.sv


//------------------------------------------------------------------------------
// AXI4 Slave RTL
//------------------------------------------------------------------------------
../../usb/ip/axi_slave/rtl/axi4_slave.sv


//------------------------------------------------------------------------------
// Asynchronous FIFO RTL
//------------------------------------------------------------------------------
../../usb/ip/async_fifo/rtl/fifo_mem.sv
../../usb/ip/async_fifo/rtl/wptr_handler.sv
../../usb/ip/async_fifo/rtl/rptr_handler.sv
../../usb/ip/async_fifo/rtl/synchronizer.sv
../../usb/ip/async_fifo/rtl/async.sv

//------------------------------------------------------------------------------
// Reset Synchronizer
//------------------------------------------------------------------------------
../../usb/ip/reset_synchronizer/rtl/reset_synchronizer.sv


//------------------------------------------------------------------------------
// Top-level AXI4 USB wrapper
//------------------------------------------------------------------------------



//------------------------------------------------------------------------------
// Reset Agent
//------------------------------------------------------------------------------
//../agent/reset_agent/reset_transaction.sv
//../agent/reset_agent/reset_sequencer.sv
//../agent/reset_agent/reset_driver.sv
//../agent/reset_agent/reset_monitor.sv
//../agent/reset_agent/reset_agent.sv


//------------------------------------------------------------------------------
// AXI4 Agent
//------------------------------------------------------------------------------
../agent/axi4_agent/usbh_host_axi4_agent_seq_item.sv
../agent/axi4_agent/usbh_host_axi4_agent_sequencer.sv
../agent/axi4_agent/usbh_host_axi4_agent_driver.sv
../agent/axi4_agent/usbh_host_axi4_agent_monitor.sv
//../agent/axi4_agent/usbh_host_axi4_agent_coverage.sv
../agent/axi4_agent/usbh_host_axi4_agent.sv


//------------------------------------------------------------------------------
// AXI4 Sequences
//------------------------------------------------------------------------------
../agent/axi4_agent/sequences/usbh_host_axi4_agent_base_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_in_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_reset_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_IN_seq_updated.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_in_H_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_IN_get_descriptor_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_IN_get_configuration_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_OUT_set_configuration_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_OUT_set_address_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_IN_synch_frame_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_OUT_clear_feature_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_OUT_set_interface_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_OUT_get_interface_seq.sv
../agent/axi4_agent/sequences/Descriptor_sequences/axi4_agent_control_GET_STATUS_device_seq.sv
../agent/axi4_agent/sequences/axi4_agent_out_transfer_seq.sv
../agent/axi4_agent/sequences/usbh_device_detect_irq_seq.sv
../agent/axi4_agent/sequences/rx_fifo_empty_read_seq.sv
../agent/axi4_agent/sequences/axi4_agent_out_of_range_addr_seq.sv

//------------------------------------------------------------------------------
// UTMI Agent
//------------------------------------------------------------------------------
../agent/utmi_agent/usbh_host_utmi_agent_seq_item.sv
../agent/utmi_agent/usbh_host_utmi_agent_sequencer.sv
../agent/utmi_agent/usbh_host_utmi_agent_driver.sv
../agent/utmi_agent/usbh_host_utmi_agent_monitor.sv
//../agent/utmi_agent/usbh_host_utmi_agent_coverage.sv
../agent/utmi_agent/usbh_host_utmi_agent.sv
../agent/utmi_agent/sequences/usbh_host_utmi_agent_base_seq.sv



//------------------------------------------------------------------------------
// Environment
//------------------------------------------------------------------------------
../env/usbh_host_scoreboard.sv
../env/usbh_host_env.sv


//------------------------------------------------------------------------------
// Tests
//------------------------------------------------------------------------------
../tests/base_test.sv
../tests/reset_test.sv
../tests/pid_data0_test.sv
../tests/IN_updated_test.sv
../tests/H_in_updated_test.sv
../tests/Descriptor_tests/control_IN_get_descriptor_test.sv
../tests/Descriptor_tests/control_IN_get_configuration_test.sv
../tests/Descriptor_tests/control_OUT_set_configuration_test.sv
../tests/Descriptor_tests/control_OUT_set_address_test.sv
../tests/Descriptor_tests/control_IN_synch_frame_test.sv
../tests/Descriptor_tests/control_OUT_clear_feature_test.sv
../tests/Descriptor_tests/control_OUT_set_interface_test.sv
../tests/Descriptor_tests/control_OUT_get_interface_test.sv
../tests/Descriptor_tests/control_GET_STATUS_of_device_test.sv
../tests/OUT_transfer_test.sv

../tests/rx_fifo_empty_read_test.sv
../tests/axi4_out_of_range_addr_test.sv



../tests/usbh_device_detect_irq_test.sv






// Simulation Top
../top/usbh_top_tb.sv

