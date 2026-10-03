//      // verilator_coverage annotation
        //
        //------------------------------------------------------------------------------
        //   Copyright 2011 Mentor Graphics Corporation
        //   Copyright 2011 Cadence Design Systems, Inc. 
        //   Copyright 2011 Synopsys, Inc.
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
        
        
        
        //----------------------------------------------------------------------
        // class uvm_spell_chkr
        //----------------------------------------------------------------------
%000000 class uvm_spell_chkr #(type T=int);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
          typedef T tab_t[string];
%000001   static const int unsigned max = '1;
-000001  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
           
          //--------------------------------------------------------------------
          // check
          //
          // primary interface to the spell checker.  The function takes two
          // arguments, a table of strings and a string to check.  The table is
          // organized as an associative array of type T.  E.g.
          //
          //    T strtab[string]
          //
          // It doesn't matter what T is since we are only concerned with the
          // string keys. However, we need T in order to make argument types
          // match.
          //
          // First, we do the simple thing and see if the string already is in
          // the string table by calling the exists() method.  If it does exist
          // then there is a match and we're done.  If the string doesn't exist
          // in the table then we invoke the spell checker algorithm to see if
          // our string is a misspelled variation on a string that does exist in
          // the table.
          //
          // The main loop traverses the string table computing the levenshtein
          // distance between each string and the string we are checking.  The
          // strings in the table with the minimum distance are considered
          // possible alternatives.  There may be more than one string in the
          // table with a minimum distance. So all the alternatives are stored
          // in a queue.
          //
          // Note: This is not a particularly efficient algorithm.  It requires
          // computing the levenshtein distance for every string in the string
          // table.  If that list were very large the run time could be long.
          // For the resources application in UVM probably the size of the
          // string table is not excessive and run times will be fast enough.
          // If, on average, that proves to be an invalid assumption then we'll
          // have to find ways to optimize this algorithm.
          //--------------------------------------------------------------------
%000007   static function bit check (tab_t strtab, string s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000007     string key;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000007     int distance;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000007     int unsigned min;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000007     string min_key[$];
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     if(strtab.exists(s)) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       return 1;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
            end
        
%000007     min = max;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000007     foreach(strtab[key]) begin
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       distance = levenshtein_distance(key, s);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
              // A distance < 0 means either key, s, or both are empty.  This
              // should never happen here but we check for that condition just
              // in case.
%000000       if(distance < 0)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000       if(distance < min) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
                // set a new minimum.  Clean out the queue since previous
                // alternatives are now invalidated.
%000000         min = distance;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000         min_key.delete();
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000         min_key.push_back(key);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000         continue;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
              end
        
%000000       if(distance == min) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000         min_key.push_back(key);
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
              end
        
            end
        
%000007     $display("%s not located", s);
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
            // if (min == max) then the string table is empty
%000000     if(min == max) begin
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       $display("  no alternatives to suggest");
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       return 0;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
            end
        
            // dump all the alternatives with the minimum distance    
%000007     foreach(min_key[i]) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       $display("  did you mean %s?", min_key[i]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
            end
            
%000007     return 0;
-000007  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
          endfunction
        
        
          //--------------------------------------------------------------------
          // levenshtein_distance
          //
          // Compute levenshtein distance between s and t
          // The Levenshtein distance is defined as The smallest number of
          // insertions, deletions, and substitutions required to change one
          // string into another.  There is a tremendous amount of information
          // available on Levenshtein distance on the internet.  Two good
          // sources are wikipedia and nist.gov.  A nice, simple explanation of
          // the algorithm is at
          // http://www.codeproject.com/KB/recipes/Levenshtein.aspx.  Use google
          // to find others.
          //
          // This implementation of the Levenshtein
          // distance computation algorithm is a SystemVerilog adaptation of the
          // C implementatiion located at http://www.merriampark.com/ldc.htm.
          //--------------------------------------------------------------------
%000000   static local function int levenshtein_distance(string s, string t);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     int k, i, j, n, m, cost, distance;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000     int d[];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
            //Step 1
%000000     n = s.len() + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000     m = t.len() + 1;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     if(n == 1 || m == 1)
-000000  point: type=expr comment=((m == 32'sh1)==1) => 1 hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=expr comment=((n == 32'sh1)==0 && (m == 32'sh1)==0) => 0 hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=expr comment=((n == 32'sh1)==1) => 1 hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       return -1; //a negative return value means that one or both strings are empty.
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     d = new[m*n];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
            //Step 2	
%000000     for(k = 0; k < n; k++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       d[k] = k;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     for(k = 0; k < m; k++)
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       d[k*n] = k;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
            //Steps 3 and 4	
%000000     for(i = 1; i < n; i++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       for(j = 1; j < m; j++) begin
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
                //Step 5
%000000         cost = !(s[i-1] == t[j-1]);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=expr comment=(((s.getc((i - 32'sh1))) == (t.getc((j - 32'sh1))))==0) => 1 hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=expr comment=(((s.getc((i - 32'sh1))) == (t.getc((j - 32'sh1))))==1) => 0 hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
                //Step 6			 
%000000         d[j*n+i] = minimum(d[(j-1)*n+i]+1, d[j*n+i-1]+1, d[(j-1)*n+i-1]+cost);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
              end
            end
        
%000000     distance = d[n*m-1];
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000     return distance;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
          endfunction
        
          //--------------------------------------------------------------------
          // Gets the minimum of three values
          //--------------------------------------------------------------------
%000000   static local function int minimum(int a, int b, int c);
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     int min = a;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     if(b < min)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       min = b;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000     if(c < min)
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
-000000  point: type=branch comment=else hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
%000000       min = c;
-000000  point: type=branch comment=if hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
%000000     return min;
-000000  point: type=line comment=block hier=uvm_pkg::uvm_spell_chkr__Tz5__Vclpkg
        
          endfunction
        
        endclass
        
