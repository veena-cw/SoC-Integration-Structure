
interface lp_if (input logic clk, input logic rst_n);
  // Inputs to DUT
  logic lp_req_pd;
  logic wakeup_req;
  // Outputs from DUT
  logic lp_ack;
  logic wakeup_ack;
  // Alias used by lpddr5c_lp_agent_driver/monitor (vif.sys_rst_n) -- added 2026-10-22
  wire  sys_rst_n = rst_n;

  clocking drv_cb @(posedge clk);
    default input #1step output #1;
    output lp_req_pd, wakeup_req;
    input  lp_ack, wakeup_ack;
  endclocking

  clocking mon_cb @(posedge clk);
    default input #1step;
    input lp_req_pd, wakeup_req, lp_ack, wakeup_ack;
  endclocking

  modport DRV (clocking drv_cb, input clk, rst_n);
  modport MON (clocking mon_cb, input clk, rst_n);

  // Simple protocol checks (adjust to your spec)
  a_pd_ack_needs_req: assert property (@(posedge clk) disable iff (!rst_n)
                        $rose(lp_ack) |-> lp_req_pd)
    else $error("lp_ack rose without lp_req_pd");
  a_wk_ack_needs_req: assert property (@(posedge clk) disable iff (!rst_n)
                        $rose(wakeup_ack) |-> wakeup_req)
    else $error("wakeup_ack rose without wakeup_req");
endinterface
