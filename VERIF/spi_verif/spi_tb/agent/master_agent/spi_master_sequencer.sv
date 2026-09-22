class spi_master_sequencer extends uvm_sequencer #(spi_master_item);
    `uvm_component_utils(spi_master_sequencer)

    function new(string name = "spi_master_sequencer",
                 uvm_component parent = null);
      super.new(name, parent);
    endfunction
endclass
