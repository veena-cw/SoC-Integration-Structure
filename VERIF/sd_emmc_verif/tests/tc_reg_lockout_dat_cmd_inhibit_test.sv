//----------------------------------------------------------------------
// File Name   : tc_reg_lockout_dat_cmd_inhibit.sv
// Description : UVM Test Class for Register Write Lockout under
//               Command Inhibit (DAT) and Command Inhibit (CMD) active
//----------------------------------------------------------------------

`ifndef TC_REG_LOCKOUT_DAT_CMD_INHIBIT_TEST_SV
`define TC_REG_LOCKOUT_DAT_CMD_INHIBIT_TEST_SV

class tc_reg_lockout_dat_cmd_inhibit_test extends base_test;
    `uvm_component_utils(tc_reg_lockout_dat_cmd_inhibit_test)

    // Handles
    reg_lockout_dat_cmd_inhibit_vseq lockout_vseq;
    uvm_tlm_analysis_fifo #(sd_emmc_controller_sd_emmc_agent_seq_item) sd_cmd_fifo;

    //------------------------------------------------------------------
    // Constructor
    //------------------------------------------------------------------
    function new(string name = "tc_reg_lockout_dat_cmd_inhibit_test", uvm_component parent = null);
        super.new(name, parent);
    endfunction

    //------------------------------------------------------------------
    // Build Phase
    //------------------------------------------------------------------
    virtual function void build_phase(uvm_phase phase);
        // 1. Set global timeout guard FIRST (50 ms = 50_000_000_000 ns)
        uvm_top.set_timeout(50_000_000_000, 1);

        // 2. Call super.build_phase to configure agents and create 'env' from base_test
        super.build_phase(phase);

        `uvm_info("TEST_BUILD", "Building tc_reg_lockout_dat_cmd_inhibit_test components...", UVM_LOW)
        
        // 3. Create analysis FIFO for command monitoring
        sd_cmd_fifo = new("sd_cmd_fifo", this); 
    endfunction: build_phase

    //------------------------------------------------------------------
    // Connect Phase
    //------------------------------------------------------------------
    virtual function void connect_phase(uvm_phase phase);
        super.connect_phase(phase);

        if (env != null && env.sb != null) begin
            env.sb.mask_status_reads = 1'b1;
        end

        // Connect SD/eMMC monitor analysis port to local FIFO
        if (env != null && env.sd_emmc_agent != null && env.sd_emmc_agent.monitor != null) begin
            env.sd_emmc_agent.monitor.ap.connect(sd_cmd_fifo.analysis_export);
        end else begin
            `uvm_warning("TEST_CONNECT", "SD/eMMC agent monitor AP not connected to sd_cmd_fifo")
        end
    endfunction: connect_phase

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
        phase.raise_objection(this, "Starting tc_reg_lockout_dat_cmd_inhibit_test");
        `uvm_info("TEST_RUN", "=== Starting Test Case: tc_reg_lockout_dat_cmd_inhibit_test ===", UVM_LOW)

        lockout_vseq = reg_lockout_dat_cmd_inhibit_vseq::type_id::create("lockout_vseq");
        lockout_vseq.sd_cmd_fifo = this.sd_cmd_fifo;

        // Retrieve VIF for the sequence cleanly using uvm_resource_db
        if (!uvm_resource_db#(virtual sd_emmc_controller_sd_emmc_if)::read_by_name(
                "*", "sd_emmc_vif", lockout_vseq.vif, this)) begin
            if (!uvm_resource_db#(virtual sd_emmc_controller_sd_emmc_if)::read_by_name(
                    "*", "vif", lockout_vseq.vif, this)) begin
                `uvm_fatal("NOVIF", "Could not get virtual interface handle for lockout_vseq")
            end
        end

        // Start sequence on virtual sequencer
        if (env != null && env.vseqr != null) begin
            lockout_vseq.start(env.vseqr);
        end else begin
            `uvm_fatal("TEST_RUN_ERR", "Virtual Sequencer (env.vseqr) handle is null!")
        end

        #100ns;
        phase.drop_objection(this, "Completed tc_reg_lockout_dat_cmd_inhibit_test");
    endtask: run_phase

    //------------------------------------------------------------------
    // Report Phase
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
            `uvm_info("TEST_REPORT", "  SUMMARY   : Register write lockout under DAT/CMD Inhibit successfully verified!", UVM_NONE)
        end else begin
            `uvm_error("TEST_REPORT", $sformatf("  STATUS    : SIMULATION FAILED (%0d ERRORS, %0d FATALS)",
                        error_count, fatal_count))
        end
        `uvm_info("TEST_REPORT", "--------------------------------------------------------", UVM_NONE)
    endfunction: report_phase

endclass: tc_reg_lockout_dat_cmd_inhibit_test

`endif // TC_REG_LOCKOUT_DAT_CMD_INHIBIT_TEST_SV
