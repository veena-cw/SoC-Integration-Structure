//      // verilator_coverage annotation
        //
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2010 Cadence Design Systems, Inc. 
        //   Copyright 2010 Synopsys, Inc.
        //   Copyright 2010 Paradigm-works, Inc.
        //   All Rights Reserved Worldwide
        //
        //   Licensed under the Apache License, Version 2.0 (the
        //   "License"); you may not use this file except in
        //   compliance with the License.  You may obtain a copy of
        //   the License at
        //
        //       http://www.apache.org/licenses/LICENSE-2.0
        //
        //   Unless required by applicable law or agreed to in
        //   writing, software distributed under the License is
        //   distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
        //   CONDITIONS OF ANY KIND, either express or implied.  See
        //   the License for the specific language governing
        //   permissions and limitations under the License.
        //----------------------------------------------------------------------
        
        `ifndef UVM_NO_DEPRECATED
        
        //------------------------------------------------------------------------------
        // Title- Predefined Sequences
        //
        // This section defines several sequences that ship with the UVM library.
        //------------------------------------------------------------------------------
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_random_sequence
        //
        // This sequence randomly selects and executes a sequence from the sequencer's
        // sequence library, excluding uvm_random_sequence itself, and
        // uvm_exhaustive_sequence. 
        //
        // The uvm_random_sequence class is a built-in sequence that is preloaded into
        // every sequencer's sequence library with the name "uvm_random_sequence".
        //
        // The number of selections and executions is determined by the count property
        // of the sequencer (or virtual sequencer) on which uvm_random_sequence is
        // operating. See <uvm_sequencer_base> for more information.
        //
        //------------------------------------------------------------------------------
        
%000000 class uvm_random_sequence extends uvm_sequence #(uvm_sequence_item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        
%000000   rand protected int unsigned l_count=-1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
          local int unsigned l_exhaustive_seq_kind;
          local int unsigned max_kind;
          rand local int unsigned l_kind;
          protected bit m_success;
        
        // Function- get_count
        //
        // Returns the count of the number of sub-sequences which are randomly generated.
        // By default, count is equal to the value from the sequencer's count variable.
        // However, if the sequencer's count variable is -1, then a random value between
        // 0 and sequencer.max_random_count (exclusive) is chosen. The sequencer's
        // count variable is subsequently reset to the random value that was used. If
        // get_count() is call before the sequence has started, the return value will
        // be sequencer.count, which may be -1.
        
%000000 function int unsigned get_count();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if(l_count == -1)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     return m_sequencer.count;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   return l_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction
        
        // new
        // ---
        
%000000 function new(string name="uvm_random_sequence");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction
        
        
        // body
        // ----
        
%000000 task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   pick_sequence.constraint_mode(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if (m_sequencer.count == -1) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     if (!randomize(l_count) with { l_count > 0 &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
                                           l_count < m_sequencer.max_random_count; })
%000000       uvm_report_fatal("RANDSEQ", "Randomization for l_count failed in random sequence body", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     m_sequencer.count = l_count;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
          end
          else
%000000     l_count = m_sequencer.count;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   max_kind = m_sequencer.sequences.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   l_exhaustive_seq_kind = m_sequencer.get_seq_kind("uvm_exhaustive_sequence");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   repeat (l_count) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     if (!randomize(l_kind) with { l_kind > l_exhaustive_seq_kind && 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
              l_kind < max_kind; })
%000000       uvm_report_fatal("RANDSEQ", "Randomization for l_kind failed in random sequence body", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     do_sequence_kind(l_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
          end
%000000   m_sequencer.m_random_count++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   pick_sequence.constraint_mode(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endtask 
        
        
        //Implement data functions
%000000 function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   uvm_random_sequence seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if(rhs==null) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if(!$cast(seq, rhs)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   l_count = seq.l_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction
        
%000000 function bit do_compare (uvm_object rhs, uvm_comparer comparer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   uvm_random_sequence seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   do_compare = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if(rhs==null) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   if(!$cast(seq, rhs)) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   do_compare &= comparer.compare_field_int("l_count", l_count, seq.l_count, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction
        
%000000 function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   printer.print_int("l_count", l_count, $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction
        
%000000 function void do_record (uvm_recorder recorder);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000   recorder.record_field("l_count", l_count, $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        endfunction // void
        
%000000   function uvm_object create (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     uvm_random_sequence i; i=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000     return i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
          endfunction
        
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
%000000      return "uvm_random_sequence";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
          endfunction
        
          // Macro for factory creation
%000000   `uvm_object_registry(uvm_random_sequence, "uvm_random_sequence")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_random_sequence__Vclpkg
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_exhaustive_sequence
        //
        // This sequence randomly selects and executes each sequence from the
        // sequencer's sequence library once, excluding itself and uvm_random_sequence.
        //
        // The uvm_exhaustive_sequence class is a built-in sequence that is preloaded 
        // into every sequencer's sequence library with the name
        // "uvm_exaustive_sequence".
        //
        //------------------------------------------------------------------------------
        
%000000 class uvm_exhaustive_sequence extends uvm_sequence #(uvm_sequence_item);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        
          rand protected int unsigned l_count;
          local int unsigned l_exhaustive_seq_kind;
          local int unsigned max_kind;
          randc local bit[9:0] l_kind;
          protected bit m_success;
        
        // new
        // ---
        
%000000 function new(string name="uvm_exhaustive_sequence");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
        
        // body
        // ----
        
%000000 task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000     int i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
            
%000000   pick_sequence.constraint_mode(0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
            //$display("In exhaustive sequence body, num_sequences: %0d", m_sequencer.num_sequences());
        
        
            //for (i = 0; i < m_sequencer.num_sequences(); i++ ) begin
            //  $display("seq: %0d: %s", i, m_sequencer.sequences[i]);
            //  $display("get_seq_kind[%s]: %0d", m_sequencer.sequences[i], get_seq_kind(m_sequencer.sequences[i]));
            //end
            
            
%000000   l_count = m_sequencer.sequences.size() - 2;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   max_kind = m_sequencer.sequences.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   l_exhaustive_seq_kind = m_sequencer.get_seq_kind("uvm_exhaustive_sequence");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   repeat (l_count) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000     if (!randomize(l_kind) with { l_kind > l_exhaustive_seq_kind; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
              l_kind < max_kind; }) // l_kind is randc
%000000       uvm_report_fatal("RANDSEQ", "Randomization for l_kind failed in exhaustive sequence body", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        
            //$display ("Chosen l_kind: %0d", l_kind);
%000000     do_sequence_kind(l_kind);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
          end
%000000   m_sequencer.m_exhaustive_count++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   pick_sequence.constraint_mode(1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endtask 
        
        
        //Implement data functions
%000000 function void do_copy (uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   uvm_exhaustive_sequence seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   if(rhs==null) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   if(!$cast(seq, rhs)) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   l_count = seq.l_count;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
%000000 function bit do_compare (uvm_object rhs, uvm_comparer comparer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   uvm_exhaustive_sequence seq;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   do_compare = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   if(rhs==null) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   if(!$cast(seq, rhs)) return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   do_compare &= comparer.compare_field_int("l_count", l_count, seq.l_count, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000     $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
%000000 function void do_print (uvm_printer printer);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   printer.print_int("l_count", l_count, $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
%000000 function void do_record (uvm_recorder recorder);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   recorder.record_field("l_count", l_count, $bits(l_count));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction // void
        
%000000 function uvm_object create (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   uvm_exhaustive_sequence i; i=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000   return i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
%000000 virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
%000000    return "uvm_exhaustive_sequence";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        endfunction
        
        // Macro for factory creation
%000000 `uvm_object_registry(uvm_exhaustive_sequence, "uvm_exhaustive_sequence")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_exhaustive_sequence__Vclpkg
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_simple_sequence
        //
        // This sequence simply executes a single sequence item. 
        //
        // The item parameterization of the sequencer on which the uvm_simple_sequence
        // is executed defines the actual type of the item executed.
        //
        // The uvm_simple_sequence class is a built-in sequence that is preloaded into
        // every sequencer's sequence library with the name "uvm_simple_sequence". 
        //
        // See <uvm_sequencer #(REQ,RSP)> for more information on running sequences.
        //
        //------------------------------------------------------------------------------
        
        class uvm_simple_sequence extends uvm_sequence #(uvm_sequence_item);
        
          protected rand uvm_sequence_item item;
        
          // new
          // ---
%000000   function new (string name="uvm_simple_sequence");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     super.new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
            // Initialized to avoid potential warnings if this class instance 
            // is randomized without calling its body()
%000000     item = new;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
          endfunction
        
          // body
          // ----
%000000   task body();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     `uvm_do(item)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     m_sequencer.m_simple_count++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
          endtask
        
%000000   function uvm_object create (string name="");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     uvm_simple_sequence i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     i=new(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000     return i;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
          endfunction
        
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
%000000      return "uvm_simple_sequence";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
          endfunction
        
          // Macro for factory creation
%000000   `uvm_object_registry(uvm_simple_sequence, "uvm_simple_sequence")
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_simple_sequence__Vclpkg
        
        endclass
        
        `endif // UVM_NO_DEPRECATED
        
