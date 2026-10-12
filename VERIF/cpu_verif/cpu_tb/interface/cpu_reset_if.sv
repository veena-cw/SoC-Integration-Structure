// Active-low CPU reset interface for the UVM reset agent (cpu_top reset_i:
// 0 = in reset, 1 = running).
interface cpu_reset_if;
  // Start asserted (0) so the DUT remains in reset until the UVM reset
  // sequence drives the configured pulse and releases it. Starting at 1
  // lets the cores run with uninitialized state from time 0.
  logic reset = 1'b0;
endinterface
