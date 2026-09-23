// Active-high BlackParrot processor reset interface for the UVM reset agent.
interface cpu_reset_if;
  // Start asserted so the DUT remains in reset until the UVM reset sequence
  // drives the configured pulse and releases it.
  logic reset = 1'b1;
endinterface
