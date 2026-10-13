
# USB RTL 
-f $REPO_ROOT/DSN/ip/memory_io/usb/dsn/rtl/axi4_usb_slave_top.f

# USB TB


../interface/usbh_host_pkg.sv
../interface/usbh_host_axi4_if.sv
../interface/usbh_host_utmi_if.sv
# ../interface/reset_if.sv

#BFM 
../top/usb_device_bfm.sv



#../agent/reset_agent/reset_transaction.sv
#../agent/reset_agent/reset_sequencer.sv
#../agent/reset_agent/reset_driver.sv
#../agent/reset_agent/reset_monitor.sv
#../agent/reset_agent/reset_agent.sv
../agent/axi4_agent/usbh_host_axi4_agent_seq_item.sv
../agent/axi4_agent/usbh_host_axi4_agent_sequencer.sv
../agent/axi4_agent/usbh_host_axi4_agent_driver.sv
../agent/axi4_agent/usbh_host_axi4_agent_monitor.sv
../agent/axi4_agent/usbh_host_axi4_agent.sv
#../agent/axi4_agent/usbh_host_axi4_agent_coverage.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_base_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_in_seq.sv


#../agent/utmi_agent/usbh_host_utmi_agent_seq_item.sv
#../agent/utmi_agent/usbh_host_utmi_agent_sequencer.sv
#../agent/utmi_agent/usbh_host_utmi_agent_driver.sv
#../agent/utmi_agent/usbh_host_utmi_agent_monitor.sv
#../agent/utmi_agent/usbh_host_utmi_agent.sv
#../agent/utmi_agent/usbh_host_utmi_agent_coverage.sv
#../agent/utmi_agent/sequences/usbh_host_utmi_agent_base_seq.sv


#../env/usbh_host_scoreboard.sv
../env/usbh_host_env.sv
../tests/base_test.sv
../tests/pid_data0_test.sv




../top/usbh_top_tb.sv
 
