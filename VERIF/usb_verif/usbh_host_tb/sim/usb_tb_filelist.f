
# USB RTL 
-f $REPO_ROOT/DSN/ip/memory_io/usb/dsn/rtl/axi4_usb_slave_top.f

# USB TB


../interface/usbh_host_pkg.sv
../interface/usbh_host_axi4_if.sv
../interface/usbh_host_utmi_if.sv
# ../interface/reset_if.sv

#BFM 
# ../device_bfm/usb_device_bfm.sv
# ../device_bfm/usb_device_bfm_updated_13_10_26.sv
# ../device_bfm/usb_device_bfm_ep0_retry_invalid_bot_fixed.sv
../device_bfm/usb_device_bfm_dual_clock.sv
#../agent/reset_agent/reset_transaction.sv
#../agent/reset_agent/reset_sequencer.sv
#../agent/reset_agent/reset_driver.sv
#../agent/reset_agent/reset_monitor.sv
#../agent/reset_agent/reset_agent.sv
../agent/axi4_agent/usbh_host_axi4_agent_seq_item.sv
../agent/axi4_agent/usbh_host_axi4_agent_sequencer.sv
../agent/axi4_agent/usbh_host_axi4_agent_driver.sv
# ../agent/axi4_agent/usbh_host_axi4_agent_monitor.sv
../agent/axi4_agent/usbh_host_axi4_agent.sv
#../agent/axi4_agent/usbh_host_axi4_agent_coverage.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_base_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_in_seq.sv
../agent/axi4_agent/sequences/usbh_host_axi4_agent_cfg_IN_seq_updated.sv

../agent/axi4_agent/sequences/usbh_device_detect_irq_seq.sv

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
../tests/IN_updated_test.sv
../tests/usbh_device_detect_irq_test.sv


../top/usbh_top_tb.sv
 
