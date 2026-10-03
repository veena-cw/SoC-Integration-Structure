//      // verilator_coverage annotation
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2010 Cadence Design Systems, Inc. 
        //   Copyright 2010 Synopsys, Inc.
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
        
        
        class uvm_sequencer_analysis_fifo #(type RSP = uvm_sequence_item) extends uvm_tlm_fifo #(RSP);
        
          uvm_analysis_imp #(RSP, uvm_sequencer_analysis_fifo #(RSP)) analysis_export;
          uvm_sequencer_base sequencer_ptr;
        
%000001   function new (string name, uvm_component parent = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
%000001     super.new(name, parent, 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
%000001     analysis_export = new ("analysis_export", this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
          endfunction
        
%000000   function void write(input RSP t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
%000000     if (sequencer_ptr == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
%000000       uvm_report_fatal ("SEQRNULL", "The sequencer pointer is null when attempting a write", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
%000000     sequencer_ptr.analysis_write(t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo___Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi66__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi67__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_sequencer_analysis_fifo__pi70__Vclpkg
          endfunction // void
        endclass
        
