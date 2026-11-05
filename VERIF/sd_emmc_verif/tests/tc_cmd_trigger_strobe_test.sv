`ifndef TC_CMD_TRIGGER_STROBE_TEST_SV
`define TC_CMD_TRIGGER_STROBE_TEST_SV

class tc_cmd_trigger_strobe_test extends uvm_test;
    `uvm_component_utils(tc_cmd_trigger_strobe_test)

    // Environment and Virtual Sequencer Handles
    sd_emmc_env         env;
    //sd_emmc_env_config  env_cfg;

    // Sequence Handle
    cmd_trigger_strobe_vseq trigger_seq;

    //------------------------------------------------------------------
    // Constructor
    //------------------------------------------------------------------
    function new(string name = "tc_cmd_trigger_strobe_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    //------------------------------------------------------------------
    // Build Phase
    //------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        super.build_phase(phase);

        `uvm_info("TEST_BUILD", "Building tc_cmd_trigger_strobe Environment & Configurations...", UVM_LOW)

        // 1. Instantiate Top Environment
        env = sd_emmc_env::type_id::create("env", this);

        // 2. Set Test Timeout Guard (prevents hanging testbench)
        uvm_top.set_timeout(100us, 0);
    endfunction: build_phase

    //------------------------------------------------------------------
    // End of Elaboration Phase
    //------------------------------------------------------------------
    virtual function void end_of_elaboration_phase(uvm_phase phase);
        super.end_of_elaboration_phase(phase);
        `uvm_info("TEST_TOPOLOGY", $sformatf("UVM Testbench Topology for %s:\n%s", 
                  get_type_name(), this.sprint()), UVM_HIGH)
    endfunction: end_of_elaboration_phase

    //------------------------------------------------------------------
    // Run Phase
    //------------------------------------------------------------------
    virtual task run_phase(uvm_phase phase);
        phase.raise_objection(this, "Starting tc_cmd_trigger_strobe_test stimulus execution");

        `uvm_info("TEST_RUN", "=== Starting Test Case: tc_cmd_trigger_strobe_test ===", UVM_LOW)

        // Instantiate Sequence
        trigger_seq = cmd_trigger_strobe_vseq::type_id::create("trigger_seq");

        // Assign FIFO handle to the sequence handle defined in this class (trigger_seq)
        trigger_seq.sd_cmd_fifo = env.sd_cmd_fifo;   

        // Start Sequence on AXI-Lite Sequencer
        if (env.axi_lite_agt != null && env.axi_lite_agt.seqr != null) begin
            trigger_seq.start(env.axi_lite_agt.seqr);
        end else if (env.vseqr != null && env.vseqr.axi_lite_sqr != null) begin
            trigger_seq.start(env.vseqr.axi_lite_sqr);
        end else begin
            `uvm_fatal("TEST_RUN_ERR", "No valid AXI-Lite Sequencer handle found in Environment!")
        end

        #100ns; // Drain time for scoreboard checks

        `uvm_info("TEST_RUN", "=== Finished Test Case: tc_cmd_trigger_strobe Stimulus ===", UVM_LOW)

        phase.drop_objection(this, "Completed tc_cmd_trigger_strobe stimulus execution");
    endtask: run_phase

    //------------------------------------------------------------------
    // Report Phase (Pass / Fail Assessment)
    //------------------------------------------------------------------
    virtual function void report_phase(uvm_phase phase);
        uvm_report_server report_sys;
        int error_count;
        int fatal_count;

        super.report_phase(phase);
        report_sys  = uvm_report_server::get_server();
        error_count = report_sys.get_severity_count(UVM_ERROR);
        fatal_count = report_sys.get_severity_count(UVM_FATAL);

        `uvm_info("TEST_REPORT", "--------------------------------------------------------", UVM_NONE)
        `uvm_info("TEST_REPORT", $sformatf("  TEST NAME : %s", get_type_name()), UVM_NONE)
        if (error_count == 0 && fatal_count == 0) begin
            `uvm_info("TEST_REPORT", "  STATUS    : SIMULATION PASSED (0 UVM_ERROR / 0 UVM_FATAL)", UVM_NONE)
            `uvm_info("TEST_REPORT", "  SUMMARY   : Byte strobe trigger interlock successfully verified!", UVM_NONE)
        end else begin
            `uvm_error("TEST_REPORT", $sformatf("  STATUS    : SIMULATION FAILED (%0d ERRORS, %0d FATALS)", 
                        error_count, fatal_count))
        end
        `uvm_info("TEST_REPORT", "--------------------------------------------------------", UVM_NONE)
    endfunction: report_phase

endclass: tc_cmd_trigger_strobe_test

`endif // TC_CMD_TRIGGER_STROBE_TEST_SV
