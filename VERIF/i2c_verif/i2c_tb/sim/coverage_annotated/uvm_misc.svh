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
        // Topic: uvm_void
        //
        // The ~uvm_void~ class is the base class for all UVM classes. It is an abstract
        // class with no data members or functions. It allows for generic containers of
        // objects to be created, similar to a void pointer in the C programming
        // language. User classes derived directly from ~uvm_void~ inherit none of the
        // UVM functionality, but such classes may be placed in ~uvm_void~-typed
        // containers along with other UVM objects.
        //
        //------------------------------------------------------------------------------
        
 007312 virtual class uvm_void;
+007312  point: type=line comment=block hier=uvm_pkg::uvm_void__Vclpkg
        endclass
        
        // Append/prepend symbolic values for order-dependent APIs
        typedef enum {UVM_APPEND, UVM_PREPEND} uvm_apprepend;
        
        // Forward declaration since scope stack uses uvm_objects now
        typedef class uvm_object;
        
        //----------------------------------------------------------------------------
        //
        // CLASS- uvm_scope_stack
        //
        //----------------------------------------------------------------------------
        
%000008 class uvm_scope_stack;
-000008  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          local string m_arg;
          local string m_stack[$];
        
          // depth
          // -----
          
%000000   function int depth();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     return m_stack.size();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // scope
          // -----
          
%000000   function string get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     string v;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     if(m_stack.size() == 0) return m_arg;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     get = m_stack[0];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     for(int i=1; i<m_stack.size(); ++i) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       v = m_stack[i];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       if(v != "" && (v[0] == "[" || v[0] == "(" || v[0] == "{"))
-000000  point: type=expr comment=(((v.getc(32'sh0)) == 8'h5b)==0 && ((v.getc(32'sh0)) == 8'h28)==0 && ((v.getc(32'sh0)) == 8'h7b)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((v != %22%22)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((v != %22%22)==1 && ((v.getc(32'sh0)) == 8'h28)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((v != %22%22)==1 && ((v.getc(32'sh0)) == 8'h5b)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((v != %22%22)==1 && ((v.getc(32'sh0)) == 8'h7b)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000         get = {get,v};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
              else
%000000         get = {get,".",v};
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
            end
%000000     if(m_arg != "") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       if(get != "")
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000         get = {get, ".", m_arg};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
              else
%000000         get = m_arg;
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
            end
          endfunction
          
          
          // scope_arg
          // ---------
          
%000000   function string get_arg();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     return m_arg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // set_scope
          // ---------
          
%000000   function void set (string s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_stack.delete();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
            
%000000     m_stack.push_back(s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_arg = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // down
          // ----
          
%000000   function void down (string s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_stack.push_back(s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_arg = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // down_element
          // ------------
          
%000000   function void down_element (int element);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_stack.push_back($sformatf("[%0d]",element));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_arg = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
        
          // up_element
          // ------------
          
%000000   function void up_element ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     if(!m_stack.size())
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     s = m_stack.pop_back();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     if(s != "" && s[0] != "[")
-000000  point: type=expr comment=(((s.getc(32'sh0)) != 8'h5b)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s != %22%22)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s != %22%22)==1 && ((s.getc(32'sh0)) != 8'h5b)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       m_stack.push_back(s);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          // up
          // --
          
%000000   function void up (byte separator =".");
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     bit found;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     string s;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     while(m_stack.size() && !found ) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       s = m_stack.pop_back();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       if(separator == ".") begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000         if (s == "" || (s[0] != "[" && s[0] != "(" && s[0] != "{"))
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=(((s.getc(32'sh0)) != 8'h5b)==1 && ((s.getc(32'sh0)) != 8'h28)==1 && ((s.getc(32'sh0)) != 8'h7b)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s == %22%22)==0 && ((s.getc(32'sh0)) != 8'h28)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s == %22%22)==0 && ((s.getc(32'sh0)) != 8'h5b)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s == %22%22)==0 && ((s.getc(32'sh0)) != 8'h7b)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s == %22%22)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000           found = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
              end
%000000       else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000         if(s != "" && s[0] == separator)
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=(((s.getc(32'sh0)) == separator)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s != %22%22)==0) => 0 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=expr comment=((s != %22%22)==1 && ((s.getc(32'sh0)) == separator)==1) => 1 hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000           found = 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
              end
            end
%000000     m_arg = "";
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // set_arg
          // -------
          
%000000   function void set_arg (string arg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     if(arg=="") return;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_arg = arg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
          
          // set_arg_element
          // ---------------
          
%000000   function void set_arg_element (string arg, int ele);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     string tmp_value_str;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     tmp_value_str.itoa(ele);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     m_arg = {arg, "[", tmp_value_str, "]"};
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
          
        
          // unset_arg
          // ---------
          
%000000   function void unset_arg (string arg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000     if(arg == m_arg)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_scope_stack__Vclpkg
%000000       m_arg = "";
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_scope_stack__Vclpkg
          endfunction
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_status_container
        //
        // Internal class to contain status information for automation methods.
        //
        //------------------------------------------------------------------------------
        
%000001 class uvm_status_container;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
          //The clone setting is used by the set/get config to know if cloning is on.
%000001   bit             clone = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
        
          //Information variables used by the macro functions for storage.
          bit          warning;
          bit          status;
          uvm_bitstream_t  bitstream;
          int          intv;
          int          element;
          string       stringv;
          string       scratch1;
          string       scratch2;
          string       key;
          uvm_object   object;
          bit          array_warning_done;
        
          static bit field_array[string];
        
          static bit print_matches;
        
%000000   function void do_field_check(string field, uvm_object obj);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
           `ifdef UVM_ENABLE_FIELD_CHECKS                                           
            if (field_array.exists(field))
              uvm_report_error("MLTFLD", $sformatf("Field %s is defined multiple times in type '%s'",
                 field, obj.get_type_name()), UVM_NONE);
            `endif
%000000     field_array[field] = 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
          endfunction
        
        
%000000   function string get_function_type (int what);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
%000000     case (what)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_COPY:    return "copy";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_COMPARE: return "compare";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_PRINT:   return "print";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_RECORD:  return "record";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_PACK:    return "pack";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_UNPACK:  return "unpack";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_FLAGS:   return "get_flags";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_SETINT:  return "set";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_SETOBJ:  return "set_object";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       UVM_SETSTR:  return "set_string";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
%000000       default:     return "unknown";
-000000  point: type=line comment=case hier=uvm_pkg::uvm_status_container__Vclpkg
            endcase
          endfunction
        
        
        
          // The scope stack is used for messages that are emitted by policy classes.
%000001   uvm_scope_stack scope  = new;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
        
%000000   function string get_full_scope_arg ();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
%000000     get_full_scope_arg = scope.get();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
          endfunction
        
          //Used for checking cycles. When a data function is entered, if the depth is
          //non-zero, then then the existeance of the object in the map means that a
          //cycle has occured and the function should immediately exit. When the
          //function exits, it should reset the cycle map so that there is no memory
          //leak.
          bit             cycle_check[uvm_object];
        
          //These are the policy objects currently in use. The policy object gets set
          //when a function starts up. The macros use this.
          uvm_comparer    comparer;
          uvm_packer      packer;
          uvm_recorder    recorder;
          uvm_printer     printer;
          
          // utility function used to perform a cycle check when config setting are pushed
          // to uvm_objects. the function has to look at the current object stack representing 
          // the call stack of all __m_uvm_field_automation() invocations.
          // it is a only a cycle if the previous __m_uvm_field_automation call scope
          // is not identical with the current scope AND the scope is already present in the 
          // object stack
          uvm_object m_uvm_cycle_scopes[$];
%000000   function bit m_do_cycle_check(uvm_object scope);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
%000000     uvm_object l = m_uvm_cycle_scopes[$];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_status_container__Vclpkg
        
            // we have been in this scope before (but actually right before so assuming a super/derived context of the same object)
%000000     if(l == scope) 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
%000000     begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
%000000        m_uvm_cycle_scopes.push_back(scope);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
%000000        return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
            end
            else
%000000     begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
                // now check if we have already been in this scope before
%000000         uvm_object m[$] = m_uvm_cycle_scopes.find_first(item) with (item == scope);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
%000000         if(m.size()!=0) begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
%000000              return 1;   //   detected a cycle 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_status_container__Vclpkg
                end
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
%000000             m_uvm_cycle_scopes.push_back(scope);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
%000000             return 0;            
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_status_container__Vclpkg
                end
            end
          endfunction
        endclass
        
        
        
        //------------------------------------------------------------------------------
        //
        // CLASS- uvm_copy_map
        //
        //
        // Internal class used to map rhs to lhs so when a cycle is found in the rhs,
        // the correct lhs object can be bound to it.
        //------------------------------------------------------------------------------
        
%000002 class uvm_copy_map;
-000002  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
          local uvm_object m_map[uvm_object];
 000050   function void set(uvm_object key, uvm_object obj);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
 000050     m_map[key] = obj;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
          endfunction
 000050   function uvm_object get(uvm_object key);
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
~000050     if (m_map.exists(key))
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_copy_map__Vclpkg
+000050  point: type=branch comment=else hier=uvm_pkg::uvm_copy_map__Vclpkg
%000000        return m_map[key];
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_copy_map__Vclpkg
 000050     return null;
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
          endfunction
 000050   function void clear();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
 000050     m_map.delete();
+000050  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
          endfunction 
%000000   function void delete(uvm_object v);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
%000000     m_map.delete(v);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_copy_map__Vclpkg
          endfunction 
        endclass
        
        
        
        // Variable- uvm_global_random_seed
        //
        // Create a seed which is based off of the global seed which can be used to seed
        // srandom processes but will change if the command line seed setting is 
        // changed.
        //
%000001 int unsigned uvm_global_random_seed = $urandom;
-000001  point: type=line comment=block hier=uvm_pkg
        
        
        // Class- uvm_seed_map
        //
        // This map is a seed map that can be used to update seeds. The update
        // is done automatically by the seed hashing routine. The seed_table_lookup
        // uses an instance name lookup and the seed_table inside a given map
        // uses a type name for the lookup.
        //
 000061 class uvm_seed_map;
+000061  point: type=line comment=block hier=uvm_pkg::uvm_seed_map__Vclpkg
          int unsigned seed_table [string];
          int unsigned count [string];
        endclass
        
        uvm_seed_map uvm_random_seed_table_lookup [string];
        
        
        //------------------------------------------------------------------------------
        // Internal utility functions
        //------------------------------------------------------------------------------
        
        // Function- uvm_instance_scope
        //
        // A function that returns the scope that the UVM library lives in, either
        // an instance, a module, or a package.
        //
 001455 function string uvm_instance_scope();
+001455  point: type=line comment=block hier=uvm_pkg
 001455   byte c;
+001455  point: type=line comment=block hier=uvm_pkg
 001455   int pos;
+001455  point: type=line comment=block hier=uvm_pkg
          //first time through the scope is null and we need to calculate, afterwards it
          //is correctly set.
        
~000255   if(uvm_instance_scope != "") 
-000000  point: type=branch comment=if hier=uvm_pkg
+000255  point: type=branch comment=else hier=uvm_pkg
%000000     return uvm_instance_scope;
-000000  point: type=branch comment=if hier=uvm_pkg
        
 001455   $swrite(uvm_instance_scope, "%m");
+001455  point: type=line comment=block hier=uvm_pkg
          //remove the extraneous .uvm_instance_scope piece or ::uvm_instance_scope
 001455   pos = uvm_instance_scope.len()-1;
+001455  point: type=line comment=block hier=uvm_pkg
 001455   c = uvm_instance_scope[pos];
+001455  point: type=line comment=block hier=uvm_pkg
 004590   while(pos && (c != ".") && (c != ":")) 
+004590  point: type=line comment=block hier=uvm_pkg
 004590     c = uvm_instance_scope[--pos];
+004590  point: type=line comment=block hier=uvm_pkg
~000255   if(pos == 0)
-000000  point: type=branch comment=if hier=uvm_pkg
+000255  point: type=branch comment=else hier=uvm_pkg
%000000     uvm_report_error("SCPSTR", $sformatf("Illegal name %s in scope string",uvm_instance_scope));
-000000  point: type=branch comment=if hier=uvm_pkg
 001455   uvm_instance_scope = uvm_instance_scope.substr(0,pos);
+001455  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function- uvm_oneway_hash
        //
        // A one-way hash function that is useful for creating srandom seeds. An
        // unsigned int value is generated from the string input. An initial seed can
        // be used to seed the hash, if not supplied the uvm_global_random_seed 
        // value is used. Uses a CRC like functionality to minimize collisions.
        //
        parameter UVM_STR_CRC_POLYNOMIAL = 32'h04c11db6;
 000117 function int unsigned uvm_oneway_hash ( string string_in, int unsigned seed=0 );
+000117  point: type=line comment=block hier=uvm_pkg
 000117   bit          msb;
+000117  point: type=line comment=block hier=uvm_pkg
 000117   bit [7:0]    current_byte;
+000117  point: type=line comment=block hier=uvm_pkg
 000117   bit [31:0]   crc1;
+000117  point: type=line comment=block hier=uvm_pkg
              
~000117   if(!seed) seed = uvm_global_random_seed;
-000000  point: type=branch comment=if hier=uvm_pkg
+000117  point: type=branch comment=else hier=uvm_pkg
 000117   uvm_oneway_hash = seed;
+000117  point: type=line comment=block hier=uvm_pkg
        
 000117   crc1 = 32'hffffffff;
+000117  point: type=line comment=block hier=uvm_pkg
 007828   for (int _byte=0; _byte < string_in.len(); _byte++) begin
+000117  point: type=line comment=block hier=uvm_pkg
+007828  point: type=line comment=block hier=uvm_pkg
 007828      current_byte = string_in[_byte];
+007828  point: type=line comment=block hier=uvm_pkg
~007828      if (current_byte == 0) break;
-000000  point: type=branch comment=if hier=uvm_pkg
+007828  point: type=branch comment=else hier=uvm_pkg
 062624      for (int _bit=0; _bit < 8; _bit++) begin
+007828  point: type=line comment=block hier=uvm_pkg
+062624  point: type=line comment=block hier=uvm_pkg
 062624         msb = crc1[31];
+062624  point: type=line comment=block hier=uvm_pkg
 062624         crc1 <<= 1;
+062624  point: type=line comment=block hier=uvm_pkg
 031717         if (msb ^ current_byte[_bit]) begin
+031717  point: type=branch comment=else hier=uvm_pkg
+013451  point: type=expr comment=(msb==0 && current_byte[_bit[2:0]+:1]==0) => 0 hier=uvm_pkg
+017213  point: type=expr comment=(msb==0 && current_byte[_bit[2:0]+:1]==1) => 1 hier=uvm_pkg
+013694  point: type=expr comment=(msb==1 && current_byte[_bit[2:0]+:1]==0) => 1 hier=uvm_pkg
+018266  point: type=expr comment=(msb==1 && current_byte[_bit[2:0]+:1]==1) => 0 hier=uvm_pkg
+030907  point: type=branch comment=if hier=uvm_pkg
 030907            crc1 ^=  UVM_STR_CRC_POLYNOMIAL;
+030907  point: type=branch comment=if hier=uvm_pkg
 030907            crc1[0] = 1;
+030907  point: type=branch comment=if hier=uvm_pkg
                end
             end
          end
 000117   uvm_oneway_hash += ~{crc1[7:0], crc1[15:8], crc1[23:16], crc1[31:24]};
+000117  point: type=line comment=block hier=uvm_pkg
        
        endfunction
        
        
        // Function- uvm_create_random_seed
        //
        // Creates a random seed and updates the seed map so that if the same string
        // is used again, a new value will be generated. The inst_id is used to hash
        // by instance name and get a map of type name hashes which the type_id uses
        // for it's lookup.
        
 001455 function int unsigned uvm_create_random_seed ( string type_id, string inst_id="" );
+001455  point: type=line comment=block hier=uvm_pkg
 001455   uvm_seed_map seed_map;
+001455  point: type=line comment=block hier=uvm_pkg
        
 001434   if(inst_id == "")
+000021  point: type=branch comment=if hier=uvm_pkg
+001434  point: type=branch comment=else hier=uvm_pkg
 000021     inst_id = "__global__";
+000021  point: type=branch comment=if hier=uvm_pkg
        
 001394   if(!uvm_random_seed_table_lookup.exists(inst_id))
+000061  point: type=branch comment=if hier=uvm_pkg
+001394  point: type=branch comment=else hier=uvm_pkg
 000061     uvm_random_seed_table_lookup[inst_id] = new;
+000061  point: type=branch comment=if hier=uvm_pkg
 001455   seed_map = uvm_random_seed_table_lookup[inst_id];
+001455  point: type=line comment=block hier=uvm_pkg
        
 001455   type_id = {uvm_instance_scope(),type_id};
+001455  point: type=line comment=block hier=uvm_pkg
        
 001338   if(!seed_map.seed_table.exists(type_id)) begin
+000117  point: type=branch comment=if hier=uvm_pkg
+001338  point: type=branch comment=else hier=uvm_pkg
 000117     seed_map.seed_table[type_id] = uvm_oneway_hash ({type_id,"::",inst_id}, uvm_global_random_seed);
+000117  point: type=branch comment=if hier=uvm_pkg
          end
 001338   if (!seed_map.count.exists(type_id)) begin
+000117  point: type=branch comment=if hier=uvm_pkg
+001338  point: type=branch comment=else hier=uvm_pkg
 000117     seed_map.count[type_id] = 0;
+000117  point: type=branch comment=if hier=uvm_pkg
          end
        
          //can't just increment, otherwise too much chance for collision, so 
          //randomize the seed using the last seed as the seed value. Check if
          //the seed has been used before and if so increment it.
 001455   seed_map.seed_table[type_id] = seed_map.seed_table[type_id]+seed_map.count[type_id]; 
+001455  point: type=line comment=block hier=uvm_pkg
 001455   seed_map.count[type_id]++;
+001455  point: type=line comment=block hier=uvm_pkg
        
 001455   return seed_map.seed_table[type_id];
+001455  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function- uvm_object_value_str 
        //
        //
%000000 function string uvm_object_value_str(uvm_object v);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   if (v == null)
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     return "<null>";
-000000  point: type=branch comment=if hier=uvm_pkg
%000000   uvm_object_value_str.itoa(v.get_inst_id());
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_object_value_str = {"@",uvm_object_value_str};
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function- uvm_leaf_scope
        //
        //
%000000 function string uvm_leaf_scope (string full_name, byte scope_separator = ".");
-000000  point: type=line comment=block hier=uvm_pkg
%000000   byte bracket_match;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   int  pos;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   int  bmatches;
-000000  point: type=line comment=block hier=uvm_pkg
        
%000000   bmatches = 0;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   case(scope_separator)
-000000  point: type=line comment=block hier=uvm_pkg
%000000     "[": bracket_match = "]";
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "(": bracket_match = ")";
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "<": bracket_match = ">";
-000000  point: type=line comment=case hier=uvm_pkg
%000000     "{": bracket_match = "}";
-000000  point: type=line comment=case hier=uvm_pkg
%000000     default: bracket_match = "";
-000000  point: type=line comment=case hier=uvm_pkg
          endcase
        
          //Only use bracket matching if the input string has the end match
%000000   if(bracket_match != "" && bracket_match != full_name[full_name.len()-1])
-000000  point: type=expr comment=((bracket_match != (full_name.getc(((full_name) - 32'sh1))))==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((bracket_match != 8'h0)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((bracket_match != 8'h0)==1 && (bracket_match != (full_name.getc(((full_name) - 32'sh1))))==1) => 1 hier=uvm_pkg
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     bracket_match = "";
-000000  point: type=branch comment=if hier=uvm_pkg
        
%000000   for(pos=full_name.len()-1; pos!=0; --pos) begin
-000000  point: type=line comment=block hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000     if(full_name[pos] == bracket_match) bmatches++;
-000000  point: type=line comment=elsif hier=uvm_pkg
%000000     else if(full_name[pos] == scope_separator) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000       bmatches--;
-000000  point: type=branch comment=if hier=uvm_pkg
%000000       if(!bmatches || (bracket_match == "")) break;
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
            end
          end
%000000   if(pos) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     if(scope_separator != ".") pos--;
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     uvm_leaf_scope = full_name.substr(pos+1,full_name.len()-1);
-000000  point: type=branch comment=if hier=uvm_pkg
          end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     uvm_leaf_scope = full_name;
-000000  point: type=branch comment=else hier=uvm_pkg
          end
        endfunction
        
        
        // Function- uvm_vector_to_string
        //
        //
%000000 function string uvm_vector_to_string (uvm_bitstream_t value, int size,
-000000  point: type=line comment=block hier=uvm_pkg
                                              uvm_radix_enum radix=UVM_NORADIX,
                                              string radix_str="");
        
          // sign extend & don't show radix for negative values
%000000   if (radix == UVM_DEC && value[size-1] === 1)
-000000  point: type=expr comment=((radix == uvm_pkg::UVM_DEC)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((radix == uvm_pkg::UVM_DEC)==1 && (value[(size - 32'sh1)[11:0]+:1] === 32'sh1)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=((value[(size - 32'sh1)[11:0]+:1] === 32'sh1)==0) => 0 hier=uvm_pkg
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     return $sformatf("%0d", value);
-000000  point: type=branch comment=if hier=uvm_pkg
        
%000000   value &= (1 << size)-1;
-000000  point: type=line comment=block hier=uvm_pkg
        
%000000   case(radix)
-000000  point: type=line comment=block hier=uvm_pkg
%000000     UVM_BIN:      return $sformatf("%0s%0b", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     UVM_OCT:      return $sformatf("%0s%0o", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     UVM_UNSIGNED: return $sformatf("%0s%0d", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     UVM_STRING:   return $sformatf("%0s%0s", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     UVM_TIME:     return $sformatf("%0s%0t", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     UVM_DEC:      return $sformatf("%0s%0d", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
%000000     default:      return $sformatf("%0s%0x", radix_str, value);
-000000  point: type=line comment=case hier=uvm_pkg
          endcase
        endfunction
        
        
        // Function- uvm_get_array_index_int
        //
        // The following functions check to see if a string is representing an array
        // index, and if so, what the index is.
        
%000000 function int uvm_get_array_index_int(string arg, output bit is_wildcard);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   int i;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_get_array_index_int = 0;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   is_wildcard = 1;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   i = arg.len() - 1;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   if(arg[i] == "]")
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     while(i > 0 && (arg[i] != "[")) begin
-000000  point: type=expr comment=(((arg.getc(i)) != 8'h5b)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((i > 32'sh0)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((i > 32'sh0)==1 && ((arg.getc(i)) != 8'h5b)==1) => 1 hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000       --i;
-000000  point: type=line comment=block hier=uvm_pkg
%000000       if((arg[i] == "*") || (arg[i] == "?")) i=0;
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==0 && ((arg.getc(i)) == 8'h3f)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h3f)==1) => 1 hier=uvm_pkg
-000000  point: type=line comment=elsif hier=uvm_pkg
%000000       else if((arg[i] < "0") || (arg[i] > "9") && (arg[i] != "[")) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) < 8'h30)==0 && ((arg.getc(i)) != 8'h5b)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) < 8'h30)==0 && ((arg.getc(i)) > 8'h39)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) < 8'h30)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) > 8'h39)==1 && ((arg.getc(i)) != 8'h5b)==1) => 1 hier=uvm_pkg
%000000         uvm_get_array_index_int = -1; //illegal integral index
-000000  point: type=branch comment=if hier=uvm_pkg
%000000         i=0;
-000000  point: type=branch comment=if hier=uvm_pkg
              end
            end
%000000   else begin
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     is_wildcard = 0;
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     return 0;
-000000  point: type=branch comment=else hier=uvm_pkg
          end
        
%000000   if(i>0) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     arg = arg.substr(i+1, arg.len()-2);
-000000  point: type=branch comment=if hier=uvm_pkg
%000000     uvm_get_array_index_int = arg.atoi(); 
-000000  point: type=branch comment=if hier=uvm_pkg
%000000     is_wildcard = 0;
-000000  point: type=branch comment=if hier=uvm_pkg
          end
        endfunction 
          
        
        // Function- uvm_get_array_index_string
        //
        //
%000000 function string uvm_get_array_index_string(string arg, output bit is_wildcard);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   int i;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   uvm_get_array_index_string = "";
-000000  point: type=line comment=block hier=uvm_pkg
%000000   is_wildcard = 1;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   i = arg.len() - 1;
-000000  point: type=line comment=block hier=uvm_pkg
%000000   if(arg[i] == "]")
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     while(i > 0 && (arg[i] != "[")) begin
-000000  point: type=expr comment=(((arg.getc(i)) != 8'h5b)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((i > 32'sh0)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=((i > 32'sh0)==1 && ((arg.getc(i)) != 8'h5b)==1) => 1 hier=uvm_pkg
-000000  point: type=line comment=block hier=uvm_pkg
%000000       if((arg[i] == "*") || (arg[i] == "?")) i=0;
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==0 && ((arg.getc(i)) == 8'h3f)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h3f)==1) => 1 hier=uvm_pkg
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000       --i;
-000000  point: type=line comment=block hier=uvm_pkg
            end
%000000   if(i>0) begin
-000000  point: type=branch comment=if hier=uvm_pkg
-000000  point: type=branch comment=else hier=uvm_pkg
%000000     uvm_get_array_index_string = arg.substr(i+1, arg.len()-2);
-000000  point: type=branch comment=if hier=uvm_pkg
%000000     is_wildcard = 0;
-000000  point: type=branch comment=if hier=uvm_pkg
          end
        endfunction
        
        
        // Function- uvm_is_array
        //
        //
%000000 function bit uvm_is_array(string arg);
-000000  point: type=line comment=block hier=uvm_pkg
%000000   return arg[arg.len()-1] == "]";
-000000  point: type=line comment=block hier=uvm_pkg
        endfunction
        
        
        // Function- uvm_has_wildcard
        //
        //
 000017 function automatic bit uvm_has_wildcard (string arg);
+000017  point: type=line comment=block hier=uvm_pkg
 000017   uvm_has_wildcard = 0;
+000017  point: type=line comment=block hier=uvm_pkg
        
          //if it is a regex then return true
~000017   if( (arg.len() > 1) && (arg[0] == "/") && (arg[arg.len()-1] == "/") )
-000000  point: type=branch comment=if hier=uvm_pkg
+000017  point: type=branch comment=else hier=uvm_pkg
+000014  point: type=expr comment=(((arg) > 32'sh1)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg) > 32'sh1)==1 && ((arg.getc(32'sh0)) == 8'h2f)==1 && ((arg.getc(((arg) - 32'sh1))) == 8'h2f)==1) => 1 hier=uvm_pkg
+000017  point: type=expr comment=(((arg.getc(((arg) - 32'sh1))) == 8'h2f)==0) => 0 hier=uvm_pkg
+000017  point: type=expr comment=(((arg.getc(32'sh0)) == 8'h2f)==0) => 0 hier=uvm_pkg
%000000     return 1;
-000000  point: type=branch comment=if hier=uvm_pkg
        
          //check if it has globs
 000017   foreach(arg[i])
+000017  point: type=line comment=block hier=uvm_pkg
+000013  point: type=line comment=block hier=uvm_pkg
~000013     if( (arg[i] == "*") || (arg[i] == "+") || (arg[i] == "?") )
+000013  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==0 && ((arg.getc(i)) == 8'h2b)==0 && ((arg.getc(i)) == 8'h3f)==0) => 0 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2a)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h2b)==1) => 1 hier=uvm_pkg
-000000  point: type=expr comment=(((arg.getc(i)) == 8'h3f)==1) => 1 hier=uvm_pkg
-000000  point: type=branch comment=if hier=uvm_pkg
+000013  point: type=branch comment=else hier=uvm_pkg
%000000       uvm_has_wildcard = 1;
-000000  point: type=branch comment=if hier=uvm_pkg
        
        endfunction
        
        //------------------------------------------------------------------------------
        // CLASS: uvm_utils
        //
        // This class contains useful template functions.
        //
        //------------------------------------------------------------------------------
        
        typedef class uvm_component;
        typedef class uvm_root;
        typedef class uvm_object;
                
        class uvm_utils #(type TYPE=int, string FIELD="config");
        
          typedef TYPE types_t[$];
        
          // Function: find_all
          //
          // Recursively finds all component instances of the parameter type ~TYPE~,
          // starting with the component given by ~start~. Uses <uvm_root::find_all>.
        
          static function types_t find_all(uvm_component start);
            uvm_component list[$];
            types_t types;
            uvm_root top;
            top = uvm_root::get();
            top.find_all("*",list,start);
            foreach (list[i]) begin
              TYPE typ;
              if ($cast(typ,list[i]))
                types.push_back(typ);
            end
            if (types.size() == 0) begin
              `uvm_warning("find_type-no match",{"Instance of type '",TYPE::type_name,
                 " not found in component hierarchy beginning at ",start.get_full_name()})
            end
            return types;
          endfunction
        
          static function TYPE find(uvm_component start);
            types_t types = find_all(start);
            if (types.size() == 0)
              return null;
            if (types.size() > 1) begin
              `uvm_warning("find_type-multi match",{"More than one instance of type '",TYPE::type_name,
                 " found in component hierarchy beginning at ",start.get_full_name()})
              return null;
            end
            return types[0];
          endfunction
        
          static function TYPE create_type_by_name(string type_name, string contxt);
            uvm_object obj;
            TYPE  typ;
            obj = factory.create_object_by_name(type_name,contxt,type_name);
               if (!$cast(typ,obj))
                 uvm_report_error("WRONG_TYPE",{"The type_name given '",type_name,
                        "' with context '",contxt,"' did not produce the expected type."});
            return typ;
          endfunction
        
        
          // Function: get_config
          //
          // This method gets the object config of type ~TYPE~
          // associated with component ~comp~.
          // We check for the two kinds of error which may occur with this kind of 
          // operation.
        
          static function TYPE get_config(uvm_component comp, bit is_fatal);
            uvm_object obj;
            TYPE cfg;
        
            if (!comp.get_config_object(FIELD, obj, 0)) begin
              if (is_fatal)
                comp.uvm_report_fatal("NO_SET_CFG", {"no set_config to field '", FIELD,
                                   "' for component '",comp.get_full_name(),"'"},
                                   UVM_MEDIUM, `uvm_file , `uvm_line  );
              else
                comp.uvm_report_warning("NO_SET_CFG", {"no set_config to field '", FIELD,
                                   "' for component '",comp.get_full_name(),"'"},
                                   UVM_MEDIUM, `uvm_file , `uvm_line  );
              return null;
            end
        
            if (!$cast(cfg, obj)) begin
              if (is_fatal)
                comp.uvm_report_fatal( "GET_CFG_TYPE_FAIL",
                                  {"set_config_object with field name ",FIELD,
                                  " is not of type '",TYPE::type_name,"'"},
                                  UVM_NONE , `uvm_file , `uvm_line );
              else
                comp.uvm_report_warning( "GET_CFG_TYPE_FAIL",
                                  {"set_config_object with field name ",FIELD,
                                  " is not of type '",TYPE::type_name,"'"},
                                  UVM_NONE , `uvm_file , `uvm_line );
            end
        
            return cfg;
          endfunction
        endclass
        
        `ifdef UVM_USE_PROCESS_CONTAINER
        class process_container_c;
           process p;
           function new(process p_);
             p=p_;
           endfunction
        endclass
        `endif
        
        
