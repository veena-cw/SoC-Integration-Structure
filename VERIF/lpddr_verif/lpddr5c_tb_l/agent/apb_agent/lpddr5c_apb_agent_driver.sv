//----------------------------------------------------------------------
// APB Driver for LPDDR5C
//----------------------------------------------------------------------

class lpddr5c_apb_agent_driver extends uvm_driver #(lpddr5c_apb_agent_seq_item);

  `uvm_component_utils(lpddr5c_apb_agent_driver)

  virtual lpddr5c_APB_if vif;

  function new(string name = "lpddr5c_apb_agent_driver",
               uvm_component parent = null);
    super.new(name, parent);
  endfunction


  //====================================================================
  // BUILD PHASE
  //====================================================================

  function void build_phase(uvm_phase phase);

    super.build_phase(phase);

    if (!uvm_resource_db#(virtual lpddr5c_APB_if)::read_by_name(
            get_full_name(), "vif", vif, this))

      `uvm_fatal("NOVIF",
        $sformatf("[%s] Virtual interface not found in resource_db",
                  get_full_name()))

  endfunction


  //====================================================================
  // RESET TASK
  //====================================================================

  task reset();

    `uvm_info("APB_DRV", "APB RESET STARTED", UVM_MEDIUM)

    // ---------------------------------------------------------------
    // Assert reset
    // ---------------------------------------------------------------

    vif.drv_cb.preset_n <= 1'b0;

    // Put APB signals into IDLE during reset
    vif.drv_cb.psel    <= 1'b0;
    vif.drv_cb.penable <= 1'b0;
    vif.drv_cb.pwrite  <= 1'b0;
    vif.drv_cb.paddr   <= '0;
    vif.drv_cb.pwdata  <= '0;

    // Hold reset for 5 APB clock cycles
    repeat (5)
      @(vif.drv_cb);

    // ---------------------------------------------------------------
    // Deassert reset
    // ---------------------------------------------------------------

    vif.drv_cb.preset_n <= 1'b1;

    // Wait one clock after reset release
    @(vif.drv_cb);

    `uvm_info("APB_DRV", "APB RESET COMPLETED", UVM_MEDIUM)

  endtask


  //====================================================================
  // RUN PHASE
  //====================================================================

  task run_phase(uvm_phase phase);

    // ---------------------------------------------------------------
    // Apply reset once at the beginning
    // ---------------------------------------------------------------

    reset();

    // ---------------------------------------------------------------
    // Wait for APB transactions
    // ---------------------------------------------------------------

    forever begin

      seq_item_port.get_next_item(req);

      drive_item(req);

      seq_item_port.item_done();

    end

  endtask


  //====================================================================
  // APB TRANSACTION
  //
  // RESET
  //   |
  //   v
  // IDLE
  //   |
  //   v
  // SETUP
  //   |
  //   v
  // ACCESS
  //   |
  //   v
  // WAIT PREADY
  //   |
  //   v
  // IDLE
  //====================================================================

  task drive_item(lpddr5c_apb_agent_seq_item req);

    // ===============================================================
    // APB SETUP PHASE
    //
    // PSEL    = 1
    // PENABLE = 0
    // ===============================================================

    @(vif.drv_cb);

    vif.drv_cb.psel    <= 1'b1;
    vif.drv_cb.penable <= 1'b0;

    vif.drv_cb.pwrite  <= req.pwrite;
    vif.drv_cb.paddr   <= req.paddr;
    vif.drv_cb.pwdata  <= req.pwdata;


    `uvm_info("APB_DRV",
      $sformatf("APB SETUP : PADDR=0x%08h PWDATA=0x%08h PWRITE=%0b",
                req.paddr,
                req.pwdata,
                req.pwrite),
      UVM_MEDIUM)


    // ===============================================================
    // Wait one APB clock
    // ===============================================================

    @(vif.drv_cb);


    // ===============================================================
    // APB ACCESS PHASE
    //
    // PSEL    = 1
    // PENABLE = 1
    // ===============================================================

    vif.drv_cb.psel    <= 1'b1;
    vif.drv_cb.penable <= 1'b1;


    `uvm_info("APB_DRV",
      "APB ACCESS phase started",
      UVM_MEDIUM)


    // ===============================================================
    // WAIT FOR PREADY
    // ===============================================================

    do begin

      @(vif.drv_cb);

    end
    while (vif.drv_cb.pready !== 1'b1);


    // ===============================================================
    // CHECK PSLVERR
    // ===============================================================

    if (vif.drv_cb.pslverr) begin

      `uvm_error("APB_DRV",
        $sformatf("APB ERROR: PADDR=0x%08h PWDATA=0x%08h",
                  req.paddr,
                  req.pwdata))

    end
    else begin

      `uvm_info("APB_DRV",
        $sformatf("APB TRANSFER SUCCESS: ADDR=0x%08h DATA=0x%08h WRITE=%0b",
                  req.paddr,
                  req.pwdata,
                  req.pwrite),
        UVM_MEDIUM)

    end


    // ===============================================================
    // APB IDLE
    // ===============================================================

    vif.drv_cb.psel    <= 1'b0;
    vif.drv_cb.penable <= 1'b0;

    vif.drv_cb.pwrite  <= 1'b0;
    vif.drv_cb.paddr   <= '0;
    vif.drv_cb.pwdata  <= '0;


    @(vif.drv_cb);

  endtask

endclass : lpddr5c_apb_agent_driver
