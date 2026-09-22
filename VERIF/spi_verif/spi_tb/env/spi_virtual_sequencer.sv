class spi_virtual_sequencer extends uvm_sequencer;

    `uvm_component_utils(spi_virtual_sequencer)

    spi_master_sequencer master_seqr;
    spi_slave_sequencer  slave_seqr;

    function new(string name = "spi_virtual_sequencer",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction

  endclass
