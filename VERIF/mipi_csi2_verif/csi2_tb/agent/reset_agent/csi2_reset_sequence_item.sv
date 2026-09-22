class csi2_reset_sequence_item extends uvm_sequence_item;
  `uvm_object_utils(csi2_reset_sequence_item)
  rand int unsigned delay_cycles;
  rand int unsigned assertion_cycles;
  constraint reset_c { delay_cycles inside {[0:100]}; assertion_cycles inside {[3:10]}; }
  function new(string name="csi2_reset_sequence_item"); super.new(name); endfunction
endclass
