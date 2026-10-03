//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2007-2011 Mentor Graphics Corporation
        //   Copyright 2007-2011 Cadence Design Systems, Inc.
        //   Copyright 2010 Synopsys, Inc.
        //   All Rights Reserved Worldwide
        //
        //   Licensed under the Apache License, Version 2.0 (the "License"); you may not
        //   use this file except in compliance with the License.  You may obtain a copy
        //   of the License at
        //
        //       http://www.apache.org/licenses/LICENSE-2.0
        //
        //   Unless required by applicable law or agreed to in writing, software
        //   distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
        //   WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
        //   License for the specific language governing permissions and limitations
        //   under the License.
        //------------------------------------------------------------------------------
        
%000001 const int UVM_UNBOUNDED_CONNECTIONS = -1;
-000001  point: type=line comment=block hier=uvm_pkg
%000001 const string s_connection_error_id = "Connection Error";
-000001  point: type=line comment=block hier=uvm_pkg
%000001 const string s_connection_warning_id = "Connection Warning";
-000001  point: type=line comment=block hier=uvm_pkg
%000001 const string s_spaces = "                       ";
-000001  point: type=line comment=block hier=uvm_pkg
        
        typedef class uvm_port_component_base;
        typedef uvm_port_component_base uvm_port_list[string];
        
        
        // TITLE: Port Base Classes
        //
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_port_component_base
        //
        //------------------------------------------------------------------------------
        // This class defines an interface for obtaining a port's connectivity lists
        // after or during the end_of_elaboration phase.  The sub-class,
        // <uvm_port_component #(PORT)>, implements this interface.
        //
        // The connectivity lists are returned in the form of handles to objects of this
        // type. This allowing traversal of any port's fan-out and fan-in network
        // through recursive calls to <get_connected_to> and <get_provided_to>. Each
        // port's full name and type name can be retrieved using get_full_name and
        // get_type_name methods inherited from <uvm_component>.
        //------------------------------------------------------------------------------
        
        virtual class uvm_port_component_base extends uvm_component;
           
 000036   function new (string name, uvm_component parent);
+000036  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
 000036     super.new(name,parent);
+000036  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
          endfunction
        
          // Function: get_connected_to
          //
          // For a port or export type, this function fills ~list~ with all
          // of the ports, exports and implementations that this port is
          // connected to.
        
%000000   pure virtual function void get_connected_to(ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
        
          // Function: get_provided_to
          //
          // For an implementation or export type, this function fills ~list~ with all
          // of the ports, exports and implementations that this port is
          // provides its implementation to.
        
%000000   pure virtual function void get_provided_to(ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
        
          // Function: is_port
          //
%000000   pure virtual function bit is_port();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
        
          // Function: is_export
          //
%000000   pure virtual function bit is_export();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
        
          // Function: is_imp
          //
          // These function determine the type of port. The functions are
          // mutually exclusive; one will return 1 and the other two will
          // return 0.
        
%000000   pure virtual function bit is_imp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
        
          // Turn off auto config by not calling build_phase()
 000036   virtual function void build_phase(uvm_phase phase);
+000036  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
 000036     build(); //for backward compat
+000036  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
 000036     return;
+000036  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
          endfunction
        
%000000   virtual task do_task_phase (uvm_phase phase);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component_base__Vclpkg
          endtask
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_port_component #(PORT)
        //
        //------------------------------------------------------------------------------
        // See description of <uvm_port_component_base> for information about this class
        //------------------------------------------------------------------------------
        
        
        class uvm_port_component #(type PORT=uvm_object) extends uvm_port_component_base;
          
          PORT m_port;
        
~000015   function new (string name, uvm_component parent, PORT port);
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
~000015     super.new(name,parent);
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
~000015     if (port == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
+000015  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000       uvm_report_fatal("Bad usage", "Null handle to port", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
~000015     m_port = port;
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
~000015   virtual function string get_type_name();
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     if(m_port == null) return "uvm_port_component";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
~000015     return m_port.get_type_name();
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
            
~000015   virtual function void resolve_bindings();
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
~000015     m_port.resolve_bindings();
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
          
          // Function: get_port
          //
          // Retrieve the actual port object that this proxy refers to.
        
%000000   function PORT get_port();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     return m_port;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
%000000   virtual function void get_connected_to(ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     m_port.get_connected_to(list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
%000000   virtual function void get_provided_to(ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     m_port.get_provided_to(list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
%000000   function bit is_port ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     return m_port.is_port();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
%000000   function bit is_export ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     return m_port.is_export();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
%000000   function bit is_imp ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
%000000     return m_port.is_imp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz127__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz128__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz146__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz154__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz156__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz158__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz159__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz164__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz169__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_component__Tz192__Vclpkg
          endfunction
        
        endclass
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_port_base #(IF)
        //
        //------------------------------------------------------------------------------
        //
        // Transaction-level communication between components is handled via its ports,
        // exports, and imps, all of which derive from this class.
        //
        // The uvm_port_base extends IF, which is the type of the interface implemented
        // by derived port, export, or implementation. IF is also a type parameter to
        // uvm_port_base.
        //
        //   IF  - The interface type implemented by the subtype to this base port
        //
        // The UVM provides a complete set of ports, exports, and imps for the OSCI-
        // standard TLM interfaces. They can be found in the ../src/tlm/ directory.
        // For the TLM interfaces, the IF parameter is always <uvm_tlm_if_base #(T1,T2)>.
        //
        // Just before <uvm_component::end_of_elaboration>, an internal
        // <uvm_component::resolve_bindings> process occurs, after which each port and
        // export holds a list of all imps connected to it via hierarchical connections
        // to other ports and exports. In effect, we are collapsing the port's fanout,
        // which can span several levels up and down the component hierarchy, into a
        // single array held local to the port. Once the list is determined, the port's
        // min and max connection settings can be checked and enforced.
        //
        // uvm_port_base possesses the properties of components in that they have a
        // hierarchical instance path and parent. Because SystemVerilog does not support
        // multiple inheritance, uvm_port_base can not extend both the interface it
        // implements and <uvm_component>. Thus, uvm_port_base contains a local instance
        // of uvm_component, to which it delegates such commands as get_name,
        // get_full_name, and get_parent.
        //
        //------------------------------------------------------------------------------
        
        virtual class uvm_port_base #(type IF=uvm_void) extends IF;
           
        
          typedef uvm_port_base #(IF) this_type;
          
          // local, protected, and non-user properties
          protected int unsigned  m_if_mask;
          protected this_type     m_if;    // REMOVE
          protected int unsigned  m_def_index;
          uvm_port_component #(this_type) m_comp;
          local this_type m_provided_by[string];
          local this_type m_provided_to[string];
          local uvm_port_type_e   m_port_type;
          local int               m_min_size;
          local int               m_max_size;
          local bit               m_resolved;
          local this_type         m_imp_list[string];
        
          // Function: new
          //
          // The first two arguments are the normal <uvm_component> constructor
          // arguments.
          //
          // The ~port_type~ can be one of <UVM_PORT>, <UVM_EXPORT>, or
          // <UVM_IMPLEMENTATION>.
          //
          // The ~min_size~ and ~max_size~ specify the minimum and maximum number of
          // implementation (imp) ports that must be connected to this port base by the
          // end of elaboration. Setting ~max_size~ to ~UVM_UNBOUNDED_CONNECTIONS~ sets no
          // maximum, i.e., an unlimited number of connections are allowed.
          //
          // By default, the parent/child relationship of any port being connected to
          // this port is not checked. This can be overridden by configuring the
          // port's ~check_connection_relationships~ bit via <set_config_int>. See
          // <connect> for more information.
        
~000015   function new (string name,
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
                        uvm_component parent,
                        uvm_port_type_e port_type,
                        int min_size=0,
                        int max_size=1);
~000015     uvm_component comp;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     int tmp;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     m_port_type = port_type;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     m_min_size  = min_size;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     m_max_size  = max_size;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     m_comp = new(name, parent, this);
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
        
~000015     if (!m_comp.get_config_int("check_connection_relationships",tmp))
+000012  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015       m_comp.set_report_id_action(s_connection_warning_id, UVM_NO_ACTION);
+000012  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
        
          endfunction
        
        
          // Function: get_name
          //
          // Returns the leaf name of this port. 
        
%000000   function string get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     return m_comp.get_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: get_full_name
          //
          // Returns the full hierarchical name of this port. 
        
~000024   virtual function string get_full_name();
-000009  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000024  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000024     return m_comp.get_full_name();
-000009  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000024  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: get_parent
          //
          // Returns the handle to this port's parent, or null if it has no parent.
        
%000002   virtual function uvm_component get_parent();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000002     return m_comp.get_parent();
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: get_comp
          //
          // Returns a handle to the internal proxy component representing this port.
          //
          // Ports are considered components. However, they do not inherit
          // <uvm_component>. Instead, they contain an instance of
          // <uvm_port_component #(PORT)> that serves as a proxy to this port.
        
%000000   virtual function uvm_port_component_base get_comp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     return m_comp;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: get_type_name
          //
          // Returns the type name to this port. Derived port classes must implement
          // this method to return the concrete type. Otherwise, only a generic
          // "uvm_port", "uvm_export" or "uvm_implementation" is returned.
        
%000000   virtual function string get_type_name();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     case( m_port_type )
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       UVM_PORT : return "port";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       UVM_EXPORT : return "export";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       UVM_IMPLEMENTATION : return "implementation";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=case hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            endcase
          endfunction
        
        
          // Function: min_size
          //
          // Returns the mininum number of implementation ports that must
          // be connected to this port by the end_of_elaboration phase.
        
~000092   function int max_size ();
+000062  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
+000016  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
+000016  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000092  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000018  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000092     return m_max_size;
+000062  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
+000016  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
+000016  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000092  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000018  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: max_size
          //
          // Returns the maximum number of implementation ports that must
          // be connected to this port by the end_of_elaboration phase.
        
~000015   function int min_size ();
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     return m_min_size;
+000012  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: is_unbounded
          //
          // Returns 1 if this port has no maximum on the number of implementation
          // ports this port can connect to. A port is unbounded when the ~max_size~
          // argument in the constructor is specified as ~UVM_UNBOUNDED_CONNECTIONS~.
        
%000000   function bit is_unbounded ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     return (m_max_size ==  UVM_UNBOUNDED_CONNECTIONS);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: is_port
        
%000003   function bit is_port ();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000003     return m_port_type == UVM_PORT;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
          // Function: is_export
        
%000006   function bit is_export ();
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000006     return m_port_type == UVM_EXPORT;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
          // Function: is_imp
          //
          // Returns 1 if this port is of the type given by the method name,
          // 0 otherwise.
        
~000020   function bit is_imp ();
+000014  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000020  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000020     return m_port_type == UVM_IMPLEMENTATION;
+000014  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000020  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: size
          //
          // Gets the number of implementation ports connected to this port. The value
          // is not valid before the end_of_elaboration phase, as port connections have
          // not yet been resolved.
        
~005283   function int size ();
+000081  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
+000253  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+005283  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000177  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~005283     return m_imp_list.num();
+000081  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
+000026  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000005  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
+000253  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+005283  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000177  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
~000010   function void set_if (int index=0);
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000010     m_if = get_if(index);
-000006  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000010     if (m_if != null)
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000010       m_def_index = index;
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
%000000   function int m_get_if_mask();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     return m_if_mask;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: set_default_index
          // 
          // Sets the default implementation port to use when calling an interface
          // method. This method should only be called on UVM_EXPORT types. The value
          // must not be set before the end_of_elaboration phase, when port connections
          // have not yet been resolved.
        
%000000   function void set_default_index (int index);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     m_def_index = index;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // Function: connect
          //
          // Connects this port to the given ~provider~ port. The ports must be 
          // compatible in the following ways
          //
          // - Their type parameters must match
          //
          // - The ~provider~'s interface type (blocking, non-blocking, analysis, etc.)
          //   must be compatible. Each port has an interface mask that encodes the
          //   interface(s) it supports. If the bitwise AND of these masks is equal to
          //   the this port's mask, the requirement is met and the ports are
          //   compatible. For example, an uvm_blocking_put_port #(T) is compatible with
          //   an uvm_put_export #(T) and uvm_blocking_put_imp #(T) because the export
          //   and imp provide the interface required by the uvm_blocking_put_port.
          // 
          // - Ports of type <UVM_EXPORT> can only connect to other exports or imps.
          //
          // - Ports of type <UVM_IMPLEMENTATION> can not be connected, as they are
          //   bound to the component that implements the interface at time of
          //   construction.
          //
          // In addition to type-compatibility checks, the relationship between this
          // port and the ~provider~ port will also be checked if the port's
          // ~check_connection_relationships~ configuration has been set. (See <new>
          // for more information.)
          //
          // Relationships, when enabled, are checked are as follows:
          //
          // - If this port is an UVM_PORT type, the ~provider~ can be a parent port,
          //   or a sibling export or implementation port.
          //
          // - If this port is an <UVM_EXPORT> type, the provider can be a child
          //   export or implementation port.
          //
          // If any relationship check is violated, a warning is issued.
          //
          // Note- the <uvm_component::connect> method is related to but not the same
          // as this method. The component's connect method is a phase callback where
          // port's connect method calls are made.
        
%000004   virtual function void connect (this_type provider);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     uvm_root top = uvm_root::get();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     if (end_of_elaboration_ph.get_state() == UVM_PHASE_EXECUTING || // TBD tidy
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         end_of_elaboration_ph.get_state() == UVM_PHASE_DONE ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000        m_comp.uvm_report_warning("Late Connection", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000          {"Attempt to connect ",this.get_full_name()," (of type ",this.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000           ") at or after end_of_elaboration phase.  Ignoring."});
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000        return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
             end
        
%000004     if (provider == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                        "Cannot connect to null port handle", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
            
%000004     if (provider == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                        "Cannot connect a port instance to itself", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
%000004     if (provider == this) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                        "Cannot connect a port instance to itself", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
%000004     if ((provider.m_if_mask & m_if_mask) != m_if_mask) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id, 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         {provider.get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000          " (of type ",provider.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000          ") does not provide the complete interface required of this port (type ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000          get_type_name(),")"}, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
            // IMP.connect(anything) is illegal
%000004     if (is_imp()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         $sformatf(
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000 "Cannot call an imp port's connect method. An imp is connected only to the component passed in its constructor. (You attempted to bind this imp to %s)", provider.get_full_name()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          
            // EXPORT.connect(PORT) are illegal
%000004     if (is_export() && provider.is_port()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id,
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         $sformatf(
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000 "Cannot connect exports to ports Try calling port.connect(export) instead. (You attempted to bind this export to %s).", provider.get_full_name()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          
%000004     void'(m_check_relationship(provider));
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000004     m_provided_by[provider.get_full_name()] = provider;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     provider.m_provided_to[get_full_name()] = this;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            
          endfunction
        
        
          // Function: debug_connected_to
          //
          // The debug_connected_to method outputs a visual text display of the
          // port/export/imp network to which this port connects (i.e., the port's
          // fanout).
          //
          // This method must not be called before the end_of_elaboration phase, as port
          // connections are not resolved until then.
        
%000000   function void debug_connected_to (int level=0, int max_level=-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     int sz, num, curr_num;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     string s_sz;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     static string indent, save;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     this_type port;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     if (level <  0) level = 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     if (level == 0) begin save = ""; indent="  "; end
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     if (max_level != -1 && level >= max_level)
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((level >= max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level >= max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     num = m_provided_by.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     if (m_provided_by.num() != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       foreach (m_provided_by[nm]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         curr_num++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         port = m_provided_by[nm];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save, indent, "  | \n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save, indent, "  |_",nm," (",port.get_type_name(),")\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         indent = (num > 1 && curr_num != num) ?  {indent,"  | "}:{indent, "    "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         port.debug_connected_to(level+1, max_level);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         indent = indent.substr(0,indent.len()-4-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
              end
            end
          
%000000     if (level == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       if (save != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {"This port's fanout network:\n\n  ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                get_full_name()," (",get_type_name(),")\n",save,"\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       if (m_imp_list.num() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         uvm_root top = uvm_root::get();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         if (end_of_elaboration_ph.get_state() == UVM_PHASE_EXECUTING ||
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
                    end_of_elaboration_ph.get_state() == UVM_PHASE_DONE )  // TBD tidy
%000000            save = {save,"  Connected implementations: none\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
                else
%000000            save = {save,
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                  "  Connected implementations: not resolved until end-of-elab\n"};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save,"  Resolved implementation list:\n"};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         foreach (m_imp_list[nm]) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000           port = m_imp_list[nm];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000           s_sz.itoa(sz);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000           save = {save, indent, s_sz, ": ",nm," (",port.get_type_name(),")\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000           sz++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
                end
              end
%000000       m_comp.uvm_report_info("debug_connected_to", save);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          endfunction
          
        
          // Function: debug_provided_to
          //
          // The debug_provided_to method outputs a visual display of the port/export
          // network that ultimately connect to this port (i.e., the port's fanin).
          //
          // This method must not be called before the end_of_elaboration phase, as port
          // connections are not resolved until then.
        
%000000   function void debug_provided_to  (int level=0, int max_level=-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     string nm;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     int num,curr_num;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     this_type port;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     static string indent, save;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     if (level <  0) level = 0; 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     if (level == 0) begin save = ""; indent = "  "; end
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
        
%000000     if (max_level != -1 && level > max_level)
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((level > max_level)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((max_level != (- 32'sh1))==1 && (level > max_level)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     num = m_provided_to.num();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000000     if (num != 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       foreach (m_provided_to[nm]) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         curr_num++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         port = m_provided_to[nm];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save, indent, "  | \n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save, indent, "  |_",nm," (",port.get_type_name(),")\n"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         indent = (num > 1 && curr_num != num) ?  {indent,"  | "}:{indent, "    "};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((curr_num != num)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((num > 32'sh1)==1 && (curr_num != num)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         port.debug_provided_to(level+1, max_level);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         indent = indent.substr(0,indent.len()-4-1);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
              end
            end
        
%000000     if (level == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       if (save != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {"This port's fanin network:\n\n  ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000                get_full_name()," (",get_type_name(),")\n",save,"\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       if (m_provided_to.num() == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         save = {save,indent,"This port has not been bound\n"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_info("debug_provided_to", save);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          
          endfunction
        
        
          // get_connected_to
          // ----------------
        
%000000   function void get_connected_to (ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     this_type port;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     list.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     foreach (m_provided_by[name]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       port = m_provided_by[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       list[name] = port.get_comp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          endfunction
        
        
          // get_provided_to
          // ---------------
        
%000000   function void get_provided_to (ref uvm_port_list list);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     this_type port;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     list.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000     foreach (m_provided_to[name]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       port = m_provided_to[name];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       list[name] = port.get_comp();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          endfunction
        
        
          // m_check_relationship
          // --------------------
        
%000004   local function bit  m_check_relationship (this_type provider);  
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     string s;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     this_type from;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     uvm_component from_parent;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     uvm_component to_parent;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     uvm_component from_gparent;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     uvm_component to_gparent;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
            // Checks that the connection is between ports that are hierarchically
            // adjacent (up or down one level max, or are siblings),
            // and check for legal direction, requirer.connect(provider).
        
            // if we're an analysis port, allow connection to anywhere
%000001     if (get_type_name() == "uvm_analysis_port")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            
%000004     from         = this;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     from_parent  = get_parent();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     to_parent    = provider.get_parent();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
            // skip check if we have a parentless port
%000001     if (from_parent == null || to_parent == null)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
%000004     from_gparent = from_parent.get_parent();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     to_gparent   = to_parent.get_parent();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
            // Connecting port-to-port: CHILD.port.connect(PARENT.port)
            //
%000000     if (from.is_port() && provider.is_port() && from_gparent != to_parent) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       s = {provider.get_full_name(),
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            " (of type ",provider.get_type_name(),
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            ") is not up one level of hierarchy from this port. ",
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "A port-to-port connection takes the form ",
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "child_component.child_port.connect(parent_port)"};
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_warning(s_connection_warning_id, s, UVM_NONE);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return 0;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end    
              
            // Connecting port-to-export: SIBLING.port.connect(SIBLING.export)
            // Connecting port-to-imp:    SIBLING.port.connect(SIBLING.imp)
            //
%000000     else if (from.is_port() && (provider.is_export() || provider.is_imp()) &&
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000              from_gparent != to_gparent) begin
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         s = {provider.get_full_name(),
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            " (of type ",provider.get_type_name(),
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            ") is not at the same level of hierarchy as this port. ",
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "A port-to-export connection takes the form ",
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "component1.port.connect(component2.export)"};
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_warning(s_connection_warning_id, s, UVM_NONE);
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return 0;
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=elsif hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          
            // Connecting export-to-export: PARENT.export.connect(CHILD.export)
            // Connecting export-to-imp:    PARENT.export.connect(CHILD.imp)
            //
%000001     else if (from.is_export() && (provider.is_export() || provider.is_imp()) &&
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000              from_parent != to_gparent) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       s = {provider.get_full_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            " (of type ",provider.get_type_name(),
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            ") is not down one level of hierarchy from this export. ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "An export-to-export or export-to-imp connection takes the form ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000            "parent_export.connect(child_component.child_export)"};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_warning(s_connection_warning_id, s, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
%000004     return 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          endfunction
        
        
          // m_add_list
          //
          // Internal method.
        
%000004   local function void m_add_list           (this_type provider);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     string sz;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004     this_type imp;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
        
%000004     for (int i = 0; i < provider.size(); i++) begin
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004       imp = provider.get_if(i);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004       if (!m_imp_list.exists(imp.get_full_name()))
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004         m_imp_list[imp.get_full_name()] = imp;
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
          endfunction
        
        
          // Function: resolve_bindings
          //
          // This callback is called just before entering the end_of_elaboration phase.
          // It recurses through each port's fanout to determine all the imp destina-
          // tions. It then checks against the required min and max connections.
          // After resolution, <size> returns a valid value and <get_if>
          // can be used to access a particular imp.
          //
          // This method is automatically called just before the start of the
          // end_of_elaboration phase. Users should not need to call it directly.
        
~000019   virtual function void resolve_bindings();
+000013  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000019  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000015     if (m_resolved) // don't repeat ourselves
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000      return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
        
%000008     if (is_imp()) begin
-000005  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000008       m_imp_list[get_full_name()] = this;
-000005  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000008  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
%000007     else begin
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000007       foreach (m_provided_by[nm]) begin
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004         this_type port;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004         port = m_provided_by[nm];
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004         port.resolve_bindings();
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000004         m_add_list(port);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
              end
            end
          
~000019     m_resolved = 1;
+000013  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000019  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000004  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
~000015     if (size() < min_size() ) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id, 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         $sformatf("connection count of %0d does not meet required minimum of %0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         size(), min_size()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          
~000015     if (max_size() != UVM_UNBOUNDED_CONNECTIONS && size() > max_size() ) begin
-000007  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000006  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000003  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000007  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000012  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((max_size() != UVM_UNBOUNDED_CONNECTIONS)==1 && (size() > max_size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000002  point: type=expr comment=((size() > max_size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
+000012  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000015  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_error(s_connection_error_id, 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         $sformatf("connection count of %0d exceeds maximum of %0d",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         size(), max_size()), UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
        
~000010     if (size())
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000006  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000005  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000001  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000010       set_if(0);
-000006  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000010  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000002  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
          
          endfunction
          
        
          // Function: get_if
          //
          // Returns the implementation (imp) port at the given index from the array of
          // imps this port is connected to. Use <size> to get the valid range for index.
          // This method can only be called at the end_of_elaboration phase or after, as
          // port connections are not resolved before then.
        
~000914   function uvm_port_base #(IF) get_if(int index=0);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000914     string s;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000914     if (size()==0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_warning("get_if",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         "Port size is zero; cannot get interface at any index", UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
~000914     if (index < 0 || index >= size()) begin
-000007  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=expr comment=((index < 32'sh0)==0 && (index >= size())==0) => 0 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((index < 32'sh0)==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=expr comment=((index >= size())==1) => 1 hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000007  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       $sformat(s, "Index %0d out of range [0,%0d]", index, size()-1);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       m_comp.uvm_report_warning(s_connection_error_id, s, UVM_NONE);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000       return null;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
~000914     foreach (m_imp_list[nm]) begin
-000007  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000003  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000914  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
+000028  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000900  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000900       if (index == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000900  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
%000000         return m_imp_list[nm];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
~000900       index--;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz118__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz145__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz147__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz148__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz152__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz160__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz166__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz191__Vclpkg
+000900  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz84__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_port_base__Tz85__Vclpkg
            end
          endfunction
        
        endclass
        
        
