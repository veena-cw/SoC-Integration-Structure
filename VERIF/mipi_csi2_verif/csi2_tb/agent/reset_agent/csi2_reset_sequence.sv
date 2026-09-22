class csi2_reset_sequence extends uvm_sequence #(csi2_reset_sequence_item);
  `uvm_object_utils(csi2_reset_sequence)
  int unsigned delay_cycles = 0;
  int unsigned assertion_cycles = 5;
  function new(string name="csi2_reset_sequence"); super.new(name); endfunction
  task body();
    csi2_reset_sequence_item req = csi2_reset_sequence_item::type_id::create("req");
    start_item(req);
    req.delay_cycles = delay_cycles;
    req.assertion_cycles = assertion_cycles;
    finish_item(req);
  endtask
endclass
