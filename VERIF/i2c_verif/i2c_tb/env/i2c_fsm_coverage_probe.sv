// Testbench-only FSM coverage probe for the I2C master.
// No change to i2c_master.sv is required.
// The state input must be connected hierarchically from test_top:
//   .state(dut.i2cm.state)
//
// The probe samples ONLY when the state changes, so transition bins do not
// get hidden by repeated samples while the DUT remains in a state.
module i2c_fsm_coverage_probe (
    input logic [2:0] state
);

    covergroup i2c_fsm_cg with function sample(input logic [2:0] sampled_state);
        option.per_instance = 1;

        cp_state: coverpoint sampled_state {
            bins IDLE       = {3'd0};
            bins START      = {3'd1};
            bins ADDR       = {3'd2};
            bins ACK1       = {3'd3};
            bins WRITE_DATA = {3'd4};
            bins READ_DATA  = {3'd5};
            bins MASTER_ACK = {3'd6};
            bins STOP       = {3'd7};
        }

        cp_transition: coverpoint sampled_state {
            bins IDLE_to_START       = (3'd0 => 3'd1);
            bins START_to_ADDR       = (3'd1 => 3'd2);
            bins ADDR_to_ACK1         = (3'd2 => 3'd3);
            bins ACK1_to_WRITE_DATA  = (3'd3 => 3'd4);
            bins ACK1_to_READ_DATA   = (3'd3 => 3'd5);
            bins ACK1_to_STOP_NACK   = (3'd3 => 3'd7);
            bins WRITE_DATA_to_MASTER_ACK = (3'd4 => 3'd6);
            bins READ_to_MASTER_ACK  = (3'd5 => 3'd6);
            bins MASTER_ACK_to_STOP  = (3'd6 => 3'd7);
            bins STOP_to_IDLE        = (3'd7 => 3'd0);
        }
    endgroup

    i2c_fsm_cg fsm_cov = new();

    initial begin
        // Reset initializes the DUT state to IDLE. Take this as the first
        // sample, then sample each subsequent state transition exactly once.
        wait (state === 3'd0);
        fsm_cov.sample(state);
        forever begin
            @(state);
            fsm_cov.sample(state);
        end
    end

endmodule
