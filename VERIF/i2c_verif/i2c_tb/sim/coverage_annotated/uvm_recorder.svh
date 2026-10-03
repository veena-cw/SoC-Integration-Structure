//      // verilator_coverage annotation
        //
        //-----------------------------------------------------------------------------
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
        //-----------------------------------------------------------------------------
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS: uvm_recorder
        //
        // The uvm_recorder class provides a policy object for recording <uvm_objects>.
        // The policies determine how recording should be done. 
        //
        // A default recorder instance, <uvm_default_recorder>, is used when the
        // <uvm_object::record> is called without specifying a recorder.
        //
        //------------------------------------------------------------------------------
        
        class uvm_recorder extends uvm_object;
        
%000001   `uvm_object_utils(uvm_recorder)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==0 && (what__ ==? UVM_SETSTR)==0 && (what__ ==? UVM_SETOBJ)==0) => 0 hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETINT)==1) => 1 hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETOBJ)==1) => 1 hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=expr comment=((what__ ==? UVM_SETSTR)==1) => 1 hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
        
          int recording_depth;
          UVM_FILE file;
%000001   string filename = "tr_db.log";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: tr_handle
          //
          // This is an integral handle to a transaction object. Its use is vendor
          // specific. 
          //
          // A handle of 0 indicates there is no active transaction object. 
        
%000001   integer tr_handle = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: default_radix
          //
          // This is the default radix setting if <record_field> is called without
          // a radix.
        
%000001   uvm_radix_enum default_radix = UVM_HEX;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: physical
          //
          // This bit provides a filtering mechanism for fields. 
          //
          // The <abstract> and physical settings allow an object to distinguish between
          // two different classes of fields. 
          //
          // It is up to you, in the <uvm_object::do_record> method, to test the
          // setting of this field if you want to use the physical trait as a filter.
        
%000001   bit physical = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: abstract
          //
          // This bit provides a filtering mechanism for fields. 
          //
          // The abstract and physical settings allow an object to distinguish between
          // two different classes of fields. 
          //
          // It is up to you, in the <uvm_object::do_record> method, to test the
          // setting of this field if you want to use the abstract trait as a filter.
        
%000001   bit abstract = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: identifier
          //
          // This bit is used to specify whether or not an object's reference should be
          // recorded when the object is recorded. 
        
%000001   bit identifier = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
          // Variable: recursion_policy
          //
          // Sets the recursion policy for recording objects. 
          //
          // The default policy is deep (which means to recurse an object).
        
%000001   uvm_recursion_policy_enum policy = UVM_DEFAULT_POLICY;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
%000001   function new(string name = "uvm_recorder");
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000001     super.new(name);
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
          // Function: get_type_name
          //
          // Returns type name of the recorder. Subtypes must override this method
          // to enable the <`uvm_record_field> macro.
          //
          //| virtual function string get_type_name()
        
        
        
          // Function: record_field
          //
          // Records an integral field (less than or equal to 4096 bits). ~name~ is the
          // name of the field. 
          //
          // ~value~ is the value of the field to record. ~size~ is the number of bits
          // of the field which apply. ~radix~ is the <uvm_radix_enum> to use.
        
%000000   virtual function void record_field (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                              uvm_bitstream_t value, 
                                              int size, 
                                              uvm_radix_enum  radix=UVM_NORADIX);
%000000     if(tr_handle==0) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
%000000     if(!radix)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       radix = default_radix;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
        
%000000     set_attribute(tr_handle, scope.get(), value, radix, size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
          endfunction
        
        
          // Function: record_field_real
          //
          // Records an real field. ~value~ is the value of the field to record. 
        
%000000   virtual function void record_field_real (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                                   real value);
%000000     bit[63:0] ival = $realtobits(value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     if(tr_handle==0) return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     set_attribute(tr_handle, scope.get(), ival, UVM_REAL, 64);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
          // Function: record_object
          //
          // Records an object field. ~name~ is the name of the recorded field. 
          //
          // This method uses the <recursion_policy> to determine whether or not to
          // recurse into the object.
        
%000000   virtual function void record_object (string name, uvm_object value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000      int v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     string str; 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
%000000     if(identifier) begin 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       if(value != null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         $swrite(str, "%0d", value.get_inst_id());
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         v = str.atoi(); 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
              end
%000000       scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       set_attribute(tr_handle, scope.get(), v, UVM_DEC, 32);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
            end
         
%000000     if(policy != UVM_REFERENCE) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       if(value!=null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         if(value.__m_uvm_status_container.cycle_check.exists(value)) return;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         value.__m_uvm_status_container.cycle_check[value] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         scope.down(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         value.record(this);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         scope.up();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         value.__m_uvm_status_container.cycle_check.delete(value);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
              end
            end
        
          endfunction
        
        
          // Function: record_string
          //
          // Records a string field. ~name~ is the name of the recorded field.
          
%000000   virtual function void record_string (string name, string value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     set_attribute(tr_handle, scope.get(), uvm_string_to_bits(value),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000                    UVM_STRING, 8*value.len());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
          // Function: record_time
          //
          // Records a time value. ~name~ is the name to record to the database.
          
          
%000000   virtual function void record_time (string name, time value); 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     set_attribute(tr_handle, scope.get(), value, UVM_TIME, 64);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
          // Function: record_generic
          //
          // Records the ~name~-~value~ pair, where ~value~ has been converted
          // to a string. For example:
          //
          //| recorder.record_generic("myvar",$sformatf("%0d",myvar));
          
%000000   virtual function void record_generic (string name, string value);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     scope.set_arg(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     set_attribute(tr_handle, scope.get(), uvm_string_to_bits(value),
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000                    UVM_STRING, 8*value.len());
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
%000001   uvm_scope_stack scope = new;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
        
        
        
          //------------------------------
          // Group- Vendor-Independent API
          //------------------------------
        
        
          // UVM provides only a text-based default implementation.
          // Vendors provide subtype implementations and overwrite the
          // <uvm_default_recorder> handle.
        
        
          // Function- open_file
          //
          // Opens the file in the <filename> property and assigns to the
          // file descriptor <file>.
          //
%000000   virtual function bit open_file();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     if (file == 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       file = $fopen(filename);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     return (file > 0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
        
          static bit m_handles[int];
          static int handle;
        
        
          // Function- create_stream
          //
          //
%000000   virtual function integer create_stream (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                                  string t,
                                                  string scope);
%000000     if (open_file()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       m_handles[++handle] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"  CREATE_STREAM @%0t {NAME:%s T:%s SCOPE:%s STREAM:%0d}",$time,name,t,scope,handle);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       return handle;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
            end
%000000     return 0;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
        
           
          // Function- m_set_attribute
          //
          //
%000000   virtual function void m_set_attribute (integer txh,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                         string nm,
                                         string value);
%000000     if (open_file())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"  SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%s}", $time,txh,nm,value);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          // Function- set_attribute
          //
          //
%000000   virtual function void set_attribute (integer txh,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                       string nm,
                                       logic [1023:0] value,
                                       uvm_radix_enum radix,
                                       integer numbits=1024);
%000000     if (open_file())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"  SET_ATTR @%0t {TXH:%0d NAME:%s VALUE:%0d   RADIX:%s BITS=%0d}",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000                  $time,txh, nm, (value & ((1<<numbits)-1)),radix.name(),numbits);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          // Function- check_handle_kind
          //
          //
%000000   virtual function integer check_handle_kind (string htype, integer handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     check_handle_kind = m_handles.exists(handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          // Function- begin_tr
          //
          //
%000000   virtual function integer begin_tr(string txtype,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                             integer stream,
                                             string nm,
                                             string label="",
                                             string desc="",
                                             time begin_time=0);
%000000     if (open_file()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       m_handles[++handle] = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"BEGIN @%0t {TXH:%0d STREAM:%0d NAME:%s TIME=%0t  TYPE=\"%0s\" LABEL:\"%0s\" DESC=\"%0s\"}",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         $time,handle,stream,nm,begin_time,txtype,label,desc);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       return handle;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
            end
%000000     return -1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          // Function- end_tr
          //
          //
%000000   virtual function void end_tr (integer handle, time end_time=0);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     if (open_file())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"END @%0t {TXH:%0d TIME=%0t}",$time,handle,end_time);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          // Function- link_tr
          //
          //
%000000   virtual function void link_tr(integer h1,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
                                         integer h2,
                                         string relation="");
%000000     if (open_file())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"  LINK @%0t {TXH1:%0d TXH2:%0d RELATION=%0s}", $time,h1,h2,relation);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
          endfunction
          
          
          
          // Function- free_tr
          //
          //
%000000   virtual function void free_tr(integer handle);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_recorder__Vclpkg
%000000     if (open_file()) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       $fdisplay(file,"FREE @%0t {TXH:%0d}", $time,handle);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
%000000       if (m_handles.exists(handle))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_recorder__Vclpkg
%000000         m_handles.delete(handle);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_recorder__Vclpkg
            end
          endfunction
          
        
        endclass
          
          
          
        
