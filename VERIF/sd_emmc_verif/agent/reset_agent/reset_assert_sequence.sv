// Goal: one hardware reset pulse. A test or vseq starts it on the reset sequencer,
// e.g. "reset in the middle of a transfer". cycles = how long rst_n stays low.
class rst_assert_seq extends uvm_sequence #(reset_transaction);
   `uvm_object_utils(rst_assert_seq)

   int unsigned cycles = 5;

   function new(string name = "rst_assert_seq");
      super.new(name);
   endfunction

   virtual task body();
      reset_transaction item = reset_transaction::type_id::create("item");
      start_item(item);
      item.duration_cycles = cycles;
      finish_item(item);
   endtask
endclass
