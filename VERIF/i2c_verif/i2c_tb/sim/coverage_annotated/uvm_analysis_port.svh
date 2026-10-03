//      // verilator_coverage annotation
        //
        //----------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc. 
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
        
        
        //------------------------------------------------------------------------------
        // Title: Analysis Ports
        //------------------------------------------------------------------------------
        //
        // This section defines the port, export, and imp classes used for transaction
        // analysis.
        //
        //------------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_analysis_port
        //
        // Broadcasts a value to all subscribers implementing a <uvm_analysis_imp>.
        // 
        //| class mon extends uvm_component;
        //|   uvm_analysis_port#(trans) ap;
        //|
        //|   function new(string name = "sb", uvm_component parent = null);
        //|      super.new(name, parent);
        //|      ap = new("ap", this);
        //|   endfunction
        //|
        //|   task run_phase(uvm_phase phase);
        //|       trans t;
        //|       ...
        //|       ap.write(t);
        //|       ...
        //|   endfunction
        //| endclass
        //------------------------------------------------------------------------------
        
        class uvm_analysis_port # (type T = int)
          extends uvm_port_base # (uvm_tlm_if_base #(T,T));
        
%000006   function new (string name, uvm_component parent);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
%000006     super.new (name, parent, UVM_PORT, 0, UVM_UNBOUNDED_CONNECTIONS);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
%000006     m_if_mask = `UVM_TLM_ANALYSIS_MASK;  
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
          endfunction
        
%000003   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
%000003     return "uvm_analysis_port";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
          endfunction
        
          // Method: write
          // Send specified value to all connected interface
~000650   function void write (input T t);
+000250  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000650  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
~000650     uvm_tlm_if_base # (T, T) tif;
+000250  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000650  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
~000900     for (int i = 0; i < this.size(); i++) begin
+000250  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000650  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000900  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
~000900       tif = this.get_if (i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000900  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
~000900       if ( tif == null )
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000900  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
%000000         uvm_report_fatal ("NTCONN", {"No uvm_tlm interface is connected to ", get_full_name(), " for executing write()"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
~000900       tif.write (t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz31__Vclpkg
+000900  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz45__Vclpkg
+000025  point: type=line comment=block hier=uvm_pkg::uvm_analysis_port__Tz54__Vclpkg
            end 
          endfunction
        
        endclass
        
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_analysis_imp
        //
        // Receives all transactions broadcasted by a <uvm_analysis_port>. It serves as
        // the termination point of an analysis port/export/imp connection. The component
        // attached to the ~imp~ class--called a ~subscriber~-- implements the analysis
        // interface.
        //
        // Will invoke the ~write(T)~ method in the parent component.
        // The implementation of the ~write(T)~ method must not modify
        // the value passed to it.
        //
        //| class sb extends uvm_component;
        //|   uvm_analysis_imp#(trans, sb) ap;
        //|
        //|   function new(string name = "sb", uvm_component parent = null);
        //|      super.new(name, parent);
        //|      ap = new("ap", this);
        //|   endfunction
        //|
        //|   function void write(trans t);
        //|       ...
        //|   endfunction
        //| endclass
        //------------------------------------------------------------------------------
        
        class uvm_analysis_imp #(type T=int, type IMP=int)
          extends uvm_port_base #(uvm_tlm_if_base #(T,T));
%000001   `UVM_IMP_COMMON(`UVM_TLM_ANALYSIS_MASK,"uvm_analysis_imp",IMP)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz130_TBz163__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz19_TBz165__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz31_TBz155__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz129__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz157__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz61__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz130_TBz163__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz19_TBz165__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz31_TBz155__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz129__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz157__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz61__Vclpkg
~000300   function void write (input T t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz130_TBz163__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz19_TBz165__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz31_TBz155__Vclpkg
+000300  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz129__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz157__Vclpkg
+000300  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz61__Vclpkg
~000300     m_imp.write (t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz130_TBz163__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz19_TBz165__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz31_TBz155__Vclpkg
+000300  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz129__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz157__Vclpkg
+000300  point: type=line comment=block hier=uvm_pkg::uvm_analysis_imp__Tz45_TBz61__Vclpkg
          endfunction
        endclass
        
        
        
        //------------------------------------------------------------------------------
        // Class: uvm_analysis_export
        //
        // Exports a lower-level <uvm_analysis_imp> to its parent.
        //------------------------------------------------------------------------------
        
        class uvm_analysis_export #(type T=int)
          extends uvm_port_base #(uvm_tlm_if_base #(T,T));
        
          // Function: new
          // Instantiate the export.
%000001   function new (string name, uvm_component parent = null);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000001     super.new (name, parent, UVM_EXPORT, 1, UVM_UNBOUNDED_CONNECTIONS);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000001     m_if_mask = `UVM_TLM_ANALYSIS_MASK;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
          endfunction
        
%000001   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000001     return "uvm_analysis_export";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
          endfunction
          
          // analysis port differs from other ports in that it broadcasts
          // to all connected interfaces. Ports only send to the interface
          // at the index specified in a call to set_if (0 by default).
%000000   function void write (input T t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000     uvm_tlm_if_base #(T, T) tif;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000     for (int i = 0; i < this.size(); i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000       tif = this.get_if (i);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000       if (tif == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000          uvm_report_fatal ("NTCONN", {"No uvm_tlm interface is connected to ", get_full_name(), " for executing write()"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
%000000       tif.write (t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz130__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz19__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz31__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_analysis_export__Tz45__Vclpkg
            end 
          endfunction
        
        endclass
        
        
        
