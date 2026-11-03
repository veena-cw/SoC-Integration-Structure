# MIPI CSI-2 RX Verification Coverage

This package follows the existing repository hierarchy: all PPI sequences are
in `csi2_tb/agent/rx_agent/csi2_ppi_sequence.sv`, every UVM test has a separate
file in `csi2_tb/tests`, and every runnable test is included by
`csi2_tb/env/csi2_uvm_pkg.sv` and listed in `test_names/testcase`.

## Implemented design-facing scenarios

| Plan scenario | Runnable test | Notes |
|---|---|---|
| Smoke | `csi2_smoke_test` | Current compile-time pixel profile |
| Pixel formats | RAW6/7/8/10/12/14/16 and RGB555/666 tests | One RTL format macro must be enabled per build |
| Generic and standard short packets | `csi2_generic_short_packet_test` | Frame/line start/end plus generic DT 0x08 |
| Four-lane operation | `csi2_four_lane_operation_test` | Four active 16-bit PPI segments |
| VC0-VC3 | `csi2_vc0_test` through `csi2_vc3_test` | Header VC visibility and payload transport |
| Word-count boundaries | zero, wrong, minimum and aligned WC tests | Current RTL uses its existing N-1 count profile |
| Packet ordering | short B2B, long B2B and short/long mix tests | Separate sequence items, no artificial delay |
| Reset | RX reset, idle reset and reset-in-middle tests | Mid-packet reset is an intentional interruption |
| Payload valid gap | `csi2_payload_valid_gap_test` | Reproduces the known FIFO sensitivity |
| CRC | combined, good-packet and corrupt-CRC tests | Corrupts the transmitted payload CRC |
| Early EoT | `csi2_end_early_eot_test` | Stops before declared payload completion |
| Random stress | `csi2_random_stress_test` | Ten legal RAW6 packets with randomized size and VC |
| C-PHY PPI | SoT/EoT, sync type, fixed 64-bit and byte-order tests | Uses the existing four-segment BFM |
| Async FIFO ratio | `csi2_cphy_async_fifo_clock_ratio_test` | Makefile automatically uses unequal clocks |
| AXI4-Lite control path | `csi2_axi4_lite_test` | Active master; register read/write, WSTRB and SLVERR |
| AXI memory response | `csi2_axi_backpressure_test` | Active slave response agent controls ready/response delays |
| Error aggregation | `csi2_cphy_error_input_aggregation_test` | SoT, sync, escape, control and contention inputs |

## Intentionally not added as runnable tests

The following plan rows are outside the currently implemented RX RTL boundary
or require missing RTL functionality.  They are recorded here instead of being
added as tests that can never pass:

| Plan scenario | Reason |
|---|---|
| One-lane and two-lane operation | Current lane merger is a fixed four-segment path |
| TX packet-request handshake | TX-side behavior; this environment integrates RX RTL only |
| Header ECC single/double-bit correction | No complete header ECC correction path is exposed by the current RX RTL |
| Calibration preamble | Required end-to-end calibration behavior is incomplete |
| ALP mode | Incomplete controller path |
| LPDT and Escape trigger | Incomplete low-power data path |
| ULPS entry/exit | Incomplete state behavior and known polarity workaround |
| Turnaround/TAC | No complete bidirectional role-change implementation |
| Runtime C-PHY/D-PHY selection | Register exists, but data path is compile-time C-PHY |
| Invalid-code rejection | Input exists without complete packet rejection/status behavior |
| Runtime RX data-width switching | Width is compile-time in `ifdef.sv` |
| Physical preamble/sync/post conformance | Below the controller-facing PPI BFM boundary |
| Runtime format switching | Pixel/AXI widths and converter are compile-time macros |
| RAW20/24/28, remaining RGB and YUV formats | RTL has compile-time branches, but the current verification pixel packer/unpacker and AXI reference model do not yet cover these formats |

The stale repository file `csi2_raw20_test.sv` was removed from this package
because it declared a second `csi2_raw16_test` class and ran the RAW16 sequence;
it was not a RAW20 test.

## Running and collecting Jira logs

```sh
cd VERIF/mipi_csi2_verif/csi2_tb/sim
make run TESTNAME=csi2_raw6_test SEED=1
```

Each run stores files under:

```text
sim/log/<test-name>/seed_<seed>/build.log
sim/log/<test-name>/seed_<seed>/run.log
sim/log/<test-name>/seed_<seed>/csi2_wave.vcd
```

Run every listed test with `make regression`.  Pixel-format tests require the
matching single format macro in RTL `ifdef.sv` before building.

## RTL integration blocker observed at package creation

The updated RTL top includes both `csi2_reg.sv` and `axi_slave.sv`, while
`csi2_reg.sv` also contains a module named `axi_slave`.  This creates two RTL
definitions of the same module.  The verification package does not modify RTL;
the design owner should retain one `axi_slave` definition before running the
AXI4-Lite tests.
