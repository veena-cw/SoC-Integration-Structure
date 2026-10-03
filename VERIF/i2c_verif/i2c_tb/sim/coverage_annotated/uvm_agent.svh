//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
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
        //------------------------------------------------------------------------------
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_agent
        //
        // The uvm_agent virtual class should be used as the base class for the user-
        // defined agents. Deriving from uvm_agent will allow you to distinguish agents
        // from other component types also using its inheritance. Such agents will
        // automatically inherit features that may be added to uvm_agent in the future.
        // 
        // While an agent's build function, inherited from <uvm_component>, can be
        // implemented to define any agent topology, an agent typically contains three
        // subcomponents: a driver, sequencer, and monitor. If the agent is active,
        // subtypes should contain all three subcomponents. If the agent is passive,
        // subtypes should contain only the monitor.
        //------------------------------------------------------------------------------
        
        virtual class uvm_agent extends uvm_component;
%000003   uvm_active_passive_enum is_active = UVM_ACTIVE;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
        
          // Function: new
          //
          // Creates and initializes an instance of this class using the normal
          // constructor arguments for <uvm_component>: ~name~ is the name of the
          // instance, and ~parent~ is the handle to the hierarchical parent, if any.
          //
          // The int configuration parameter is_active is used to identify whether this
          // agent should be acting in active or passive mode. This parameter can
          // be set by doing:
          //
          //| set_config_int("<path_to_agent>", "is_active", UVM_ACTIVE);
        
%000003   function new (string name, uvm_component parent);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000003     super.new(name, parent);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
          endfunction
        
%000003   function void build_phase(uvm_phase phase);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000003     int active;
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000003     super.build_phase(phase);
-000003  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000003     if(get_config_int("is_active", active)) is_active = uvm_active_passive_enum'(active);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_agent__Vclpkg
-000003  point: type=branch comment=else hier=uvm_pkg::uvm_agent__Vclpkg
          endfunction
        
%000001   const static string type_name = "uvm_agent";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
        
%000000   virtual function string get_type_name ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000000     return type_name;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
          endfunction
        
          // Function: get_is_active
          //
          // Returns UVM_ACTIVE is the agent is acting as an active agent and 
          // UVM_PASSIVE if it is acting as a passive agent. The default implementation
          // is to just return the is_active flag, but the component developer may
          // override this behavior if a more complex algorithm is needed to determine
          // the active/passive nature of the agent.
        
%000000   virtual function uvm_active_passive_enum get_is_active();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
%000000     return is_active;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_agent__Vclpkg
          endfunction
        endclass
        
        
