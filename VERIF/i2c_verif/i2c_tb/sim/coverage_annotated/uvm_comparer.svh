//      // verilator_coverage annotation
        //-----------------------------------------------------------------------------
        //   Copyright 2007-2010 Mentor Graphics Corporation
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
        // CLASS: uvm_comparer
        //
        // The uvm_comparer class provides a policy object for doing comparisons. The
        // policies determine how miscompares are treated and counted. Results of a
        // comparison are stored in the comparer object. The <uvm_object::compare>
        // and <uvm_object::do_compare> methods are passed an uvm_comparer policy
        // object.
        //
        //------------------------------------------------------------------------------
        
%000001 class uvm_comparer;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
          // Variable: policy
          //
          // Determines whether comparison is UVM_DEEP, UVM_REFERENCE, or UVM_SHALLOW.
        
%000001   uvm_recursion_policy_enum policy = UVM_DEFAULT_POLICY;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: show_max
          //
          // Sets the maximum number of messages to send to the messager for miscompares
          // of an object. 
        
%000001   int unsigned show_max = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: verbosity
          //
          // Sets the verbosity for printed messages. 
          //
          // The verbosity setting is used by the messaging mechanism to determine
          // whether messages should be suppressed or shown.
        
%000001   int unsigned verbosity = UVM_LOW;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: sev
          //
          // Sets the severity for printed messages. 
          //
          // The severity setting is used by the messaging mechanism for printing and
          // filtering messages.
        
%000001   uvm_severity sev = UVM_INFO;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: miscompares
          //
          // This string is reset to an empty string when a comparison is started. 
          //
          // The string holds the last set of miscompares that occurred during a
          // comparison.
        
%000001   string miscompares = "";
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: physical
          //
          // This bit provides a filtering mechanism for fields. 
          //
          // The abstract and physical settings allow an object to distinguish between
          // two different classes of fields.
          //
          // It is up to you, in the <uvm_object::do_compare> method, to test the
          // setting of this field if you want to use the physical trait as a filter.
        
%000001   bit physical = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: abstract
          //
          // This bit provides a filtering mechanism for fields. 
          //
          // The abstract and physical settings allow an object to distinguish between
          // two different classes of fields.
          //
          // It is up to you, in the <uvm_object::do_compare> method, to test the
          // setting of this field if you want to use the abstract trait as a filter.
        
%000001   bit abstract = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: check_type
          //
          // This bit determines whether the type, given by <uvm_object::get_type_name>,
          // is used to verify that the types of two objects are the same. 
          //
          // This bit is used by the <compare_object> method. In some cases it is useful
          // to set this to 0 when the two operands are related by inheritance but are
          // different types.
        
%000001   bit check_type = 1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Variable: result
          // 
          // This bit stores the number of miscompares for a given compare operation.
          // You can use the result to determine the number of miscompares that
          // were found.
        
%000001   int unsigned result = 0;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        
          // Function: compare_field
          //
          // Compares two integral values. 
          //
          // The ~name~ input is used for purposes of storing and printing a miscompare.
          //
          // The left-hand-side ~lhs~ and right-hand-side ~rhs~ objects are the two
          // objects used for comparison. 
          //
          // The size variable indicates the number of bits to compare; size must be
          // less than or equal to 4096. 
          //
          // The radix is used for reporting purposes, the default radix is hex.
        
%000000   virtual function bit compare_field (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
                                              uvm_bitstream_t lhs, 
                                              uvm_bitstream_t rhs, 
                                              int size,
                                              uvm_radix_enum radix=UVM_NORADIX); 
%000000     uvm_bitstream_t mask;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          
%000000     if(size <= 64)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return compare_field_int(name, lhs, rhs, size, radix);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
          
%000000     mask = -1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     mask >>= (UVM_STREAMBITS-size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if((lhs & mask) !== (rhs & mask)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       case (radix)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         UVM_BIN: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'b%0b : rhs = 'b%0b", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_OCT: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'o%0o : rhs = 'o%0o", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_DEC: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = %0d : rhs = %0d", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_TIME: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000             $swrite(msg, "lhs = %0t : rhs = %0t", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                end
%000000         UVM_STRING: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = %0s : rhs = %0s", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_ENUM: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                      //Printed as decimal, user should cuse compare string for enum val
%000000               $swrite(msg, "lhs = %0d : rhs = %0d", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                      end
%000000         default: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'h%0x : rhs = 'h%0x", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
              endcase
%000000       print_msg(msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
          
          
          // Function: compare_field_int
          //
          // This method is the same as <compare_field> except that the arguments are
          // small integers, less than or equal to 64 bits. It is automatically called
          // by <compare_field> if the operand size is less than or equal to 64.
        
%000000   virtual function bit compare_field_int (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
                                                  logic[63:0] lhs, 
                                                  logic[63:0] rhs, 
                                                  int size,
                                                  uvm_radix_enum radix=UVM_NORADIX); 
%000000     logic [63:0] mask;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          
%000000     mask = -1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     mask >>= (64-size);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if((lhs & mask) !== (rhs & mask)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       case (radix)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         UVM_BIN: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'b%0b : rhs = 'b%0b", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_OCT: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'o%0o : rhs = 'o%0o", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_DEC: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = %0d : rhs = %0d", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_TIME: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000             $swrite(msg, "lhs = %0t : rhs = %0t", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                end
%000000         UVM_STRING: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = %0s : rhs = %0s", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
%000000         UVM_ENUM: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                      //Printed as decimal, user should cuse compare string for enum val
%000000               $swrite(msg, "lhs = %0d : rhs = %0d", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                      end
%000000         default: begin
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000               $swrite(msg, "lhs = 'h%0x : rhs = 'h%0x", 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                        lhs&mask, rhs&mask);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                     end
              endcase
%000000       print_msg(msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
        
          // Function: compare_field_real
          //
          // This method is the same as <compare_field> except that the arguments are
          // real numbers.
        
%000000   virtual function bit compare_field_real (string name, 
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
                                                  real lhs, 
                                                  real rhs);
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          
%000000     if(lhs != rhs) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       $swrite(msg, "lhs = ", lhs, " : rhs = ", rhs);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       print_msg(msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
        
          // Function: compare_object
          //
          // Compares two class objects using the <policy> knob to determine whether the
          // comparison should be deep, shallow, or reference. 
          //
          // The name input is used for purposes of storing and printing a miscompare. 
          //
          // The ~lhs~ and ~rhs~ objects are the two objects used for comparison. 
          //
          // The ~check_type~ determines whether or not to verify the object
          // types match (the return from ~lhs.get_type_name()~ matches
          // ~rhs.get_type_name()~).
        
%000000   virtual function bit compare_object (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
                                               uvm_object lhs,
                                               uvm_object rhs);
%000000     if (rhs == lhs)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
        
%000000     if (policy == UVM_REFERENCE && lhs != rhs) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       print_msg_object(lhs, rhs);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
        
%000000     if (rhs == null || lhs == null) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       print_msg_object(lhs, rhs);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;  //miscompare
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
        
%000000     uvm_object::__m_uvm_status_container.scope.down(name);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     compare_object = lhs.compare(rhs, this);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     uvm_object::__m_uvm_status_container.scope.up();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
          endfunction
          
          
          // Function: compare_string
          //
          // Compares two string variables. 
          //
          // The ~name~ input is used for purposes of storing and printing a miscompare. 
          //
          // The ~lhs~ and ~rhs~ objects are the two objects used for comparison.
        
%000000   virtual function bit compare_string (string name,
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
                                               string lhs,
                                               string rhs);
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if(lhs != rhs) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_object::__m_uvm_status_container.scope.set_arg(name);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       msg = { "lhs = \"", lhs, "\" : rhs = \"", rhs, "\""};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       print_msg(msg);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     return 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
        
          // Function: print_msg
          //
          // Causes the error count to be incremented and the message, ~msg~, to be
          // appended to the <miscompares> string (a newline is used to separate
          // messages). 
          //
          // If the message count is less than the <show_max> setting, then the message
          // is printed to standard-out using the current verbosity and severity
          // settings. See the <verbosity> and <sev> variables for more information.
        
%000000   function void print_msg (string msg);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     result++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if(result <= show_max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000        msg = {"Miscompare for ", uvm_object::__m_uvm_status_container.scope.get(), ": ", msg};
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000        uvm_report_info("MISCMP", msg, UVM_LOW);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     miscompares = { miscompares, uvm_object::__m_uvm_status_container.scope.get(), ": ", msg, "\n" };
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
        
        
          // Internal methods - do not call directly
        
          // print_rollup
          // ------------
        
          //Need this function because sformat doesn't support objects
%000000   function void print_rollup(uvm_object rhs, uvm_object lhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     string msg;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if(uvm_object::__m_uvm_status_container.scope.depth() == 0) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       if(result && (show_max || (uvm_severity_type'(sev) != UVM_INFO))) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         if(show_max < result) 
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000            $swrite(msg, "%0d Miscompare(s) (%0d shown) for object ",
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000              result, show_max);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         else begin
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000            $swrite(msg, "%0d Miscompare(s) for object ", result);
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
                end
        
%000000         case (sev)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000           UVM_WARNING: begin 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                      uvm_report_warning("MISCMP", $sformatf("%s%s@%0d vs. %s@%0d", msg,
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                         lhs.get_name(), lhs.get_inst_id(), rhs.get_name(), rhs.get_inst_id()), UVM_NONE);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                           end
%000000           UVM_ERROR: begin 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                      uvm_report_error("MISCMP", $sformatf("%s%s@%0d vs. %s@%0d", msg,
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                         lhs.get_name(), lhs.get_inst_id(), rhs.get_name(), rhs.get_inst_id()), UVM_NONE);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                           end
%000000           default: begin 
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                      uvm_report_info("MISCMP", $sformatf("%s%s@%0d vs. %s@%0d", msg,
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
%000000                         lhs.get_name(), lhs.get_inst_id(), rhs.get_name(), rhs.get_inst_id()), UVM_LOW);
-000000  point: type=line comment=case hier=uvm_pkg::uvm_comparer__Vclpkg
                           end
                endcase
              end
            end
          endfunction
        
        
          // print_msg_object
          // ----------------
        
%000000   function void print_msg_object(uvm_object lhs, uvm_object rhs);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     result++;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if(result <= show_max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000       uvm_report_info("MISCMP", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         $sformatf("Miscompare for %0s: lhs = @%0d : rhs = @%0d", 
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         uvm_object::__m_uvm_status_container.scope.get(), (lhs!=null ? lhs.get_inst_id() : 0), (rhs != null ? rhs.get_inst_id() : 0)), verbosity);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
            end
%000000     $swrite(miscompares, "%s%s: lhs = @%0d : rhs = @%0d",
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000         miscompares, uvm_object::__m_uvm_status_container.scope.get(), (lhs != null ? lhs.get_inst_id() : 0), (rhs != null ? rhs.get_inst_id() : 0));
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
        
        
          // init ??
        
%000000   static function uvm_comparer init();
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     if(uvm_default_comparer==null) uvm_default_comparer=new;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_comparer__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_comparer__Vclpkg
%000000     return uvm_default_comparer;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
          endfunction
        
         
          int depth;                      //current depth of objects
%000001   uvm_copy_map compare_map = new; //mapping of rhs to lhs objects
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
%000001   uvm_scope_stack scope    = new;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_comparer__Vclpkg
        
        endclass
        
        
