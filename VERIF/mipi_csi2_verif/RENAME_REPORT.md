# MIPI CSI-2 Verification Naming Refactor

## Scope

This refactor applies the `csi2_` prefix to verification-owned filenames and
SystemVerilog classes, interfaces, packages, and the testbench top module. It
does not change verification behavior, DUT port names, DUT module names,
protocol signals, UVM standard types, or existing UVM instance paths.

## TX agent

| Original file / type | Renamed file / type |
|---|---|
| `seq_item.sv` / `seq_item` | `csi2_packet_item.sv` / `csi2_packet_item` |
| `pixel_packer.sv` / `pixel_packer` | `csi2_pixel_packer.sv` / `csi2_pixel_packer` |
| `tx_seq.sv` / `tx_seq` | `csi2_tx_sequence.sv` / `csi2_tx_sequence` |
| `tx_short_seq.sv` / `tx_short_seq` | `csi2_tx_short_sequence.sv` / `csi2_tx_short_sequence` |
| `tx_sqr.sv` / `tx_sqr` | `csi2_tx_sequencer.sv` / `csi2_tx_sequencer` |
| `tx_drv.sv` / `tx_drv` | `csi2_tx_driver.sv` / `csi2_tx_driver` |
| `tx_mon.sv` / `tx_mon` | `csi2_tx_monitor.sv` / `csi2_tx_monitor` |
| `tx_agent.sv` / `tx_agent` | `csi2_tx_agent.sv` / `csi2_tx_agent` |
| `tx_agent_top.sv` / `tx_agent_top` | `csi2_tx_agent_top.sv` / `csi2_tx_agent_top` |
| `tx_config.sv` / `tx_config` | `csi2_tx_config.sv` / `csi2_tx_config` |

## RX agent

| Original file / type | Renamed file / type |
|---|---|
| `rx_lane_item.sv` / `rx_lane_item` | `csi2_rx_lane_item.sv` / `csi2_rx_lane_item` |
| `pixel_unpacker.sv` / `pixel_unpacker` | `csi2_pixel_unpacker.sv` / `csi2_pixel_unpacker` |
| `rx_seq.sv` / `rx_seq` | `csi2_rx_sequence.sv` / `csi2_rx_sequence` |
| `rx_sqr.sv` / `rx_sqr` | `csi2_rx_sequencer.sv` / `csi2_rx_sequencer` |
| `rx_drv.sv` / `rx_drv` | `csi2_rx_driver.sv` / `csi2_rx_driver` |
| `rx_mon.sv` / `rx_mon` | `csi2_rx_monitor.sv` / `csi2_rx_monitor` |
| `rx_agent.sv` / `rx_agent` | `csi2_rx_agent.sv` / `csi2_rx_agent` |
| `rx_agent_top.sv` / `rx_agent_top` | `csi2_rx_agent_top.sv` / `csi2_rx_agent_top` |
| `rx_config.sv` / `rx_config` | `csi2_rx_config.sv` / `csi2_rx_config` |

## Reset agent

| Original file / type | Renamed file / type |
|---|---|
| `reset_seq_item.sv` / `rst_seq_item` | `csi2_reset_sequence_item.sv` / `csi2_reset_sequence_item` |
| `reset_seq.sv` / `reset_seq` | `csi2_reset_sequence.sv` / `csi2_reset_sequence` |
| `reset_sqr.sv` / `reset_sqr` | `csi2_reset_sequencer.sv` / `csi2_reset_sequencer` |
| `reset_drv.sv` / `reset_drv` | `csi2_reset_driver.sv` / `csi2_reset_driver` |
| `reset_mon.sv` / `reset_mon` | `csi2_reset_monitor.sv` / `csi2_reset_monitor` |
| `reset_agt.sv` / `reset_agent` | `csi2_reset_agent.sv` / `csi2_reset_agent` |
| `reset_config.sv` / `reset_config` | `csi2_reset_config.sv` / `csi2_reset_config` |

## Environment, interfaces, test, and top

| Original file / type | Renamed file / type |
|---|---|
| `env_config.sv` / `env_config` | `csi2_env_config.sv` / `csi2_env_config` |
| `scoreboard.sv` / `scoreboard` | `csi2_scoreboard.sv` / `csi2_scoreboard` |
| `env.sv` / `env` | `csi2_env.sv` / `csi2_env` |
| `package.sv` / `pkg` | `csi2_uvm_pkg.sv` / `csi2_uvm_pkg` |
| `csi_interface.sv` / `csi_if` | `csi2_if.sv` / `csi2_if` |
| `reset_vif.sv` / `reset_if` | `csi2_reset_if.sv` / `csi2_reset_if` |
| `test.sv` / `test` | `csi2_test.sv` / `csi2_test` |
| `top.sv` / `top` | `csi2_tb_top.sv` / `csi2_tb_top` |

## Dependent updates

- Updated all UVM factory registration macros and factory creation references.
- Updated driver, monitor, sequencer, sequence, item, config, FIFO, and
  `uvm_config_db` type parameters.
- Updated package include filenames and the package import in the top module.
- Updated the verification file list to contain the renamed files.
- Updated the Makefile top module, executable name, include paths, default test
  name, Vivado elaboration top, and waveform handling.
- Separated the unavailable official design RTL through the `RTL_FILELIST`
  Make variable. The Makefile intentionally stops with a clear message until
  that official file list is supplied.

## Intentionally preserved

- DUT names such as `csi2_tx_top` and `csi2_rx_top`.
- DUT ports and CSI-2 protocol signal names.
- UVM instance paths such as `en.tx_agt_tp.tx_ag[0]`, because changing those
  paths could alter `uvm_config_db` matching and test behavior.
- Assertion module names, which already used the `csi2_` prefix.
- Directory names required by the company verification structure.

## Validation limitation

The uploaded archive does not contain the official RTL or its file list.
Therefore, this delivery is validated structurally and statically, but a full
Verilator/Vivado compile must be performed after setting `RTL_FILELIST` to the
design-team file list.
