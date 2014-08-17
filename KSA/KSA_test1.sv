/************************************
 * This is a simple test for the KSA.
 * It just cross compares behavioral
 * with the module output
 ************************************/

module test;
   parameter BITS = 16;
   parameter LEVELS = $floor($clog2(BITS));
   // I am not sure if the above is synthesizable
   // If not, calculate the levels manually, using
   // LEVELS = floor(log2(BITS))

   // IO's
   reg [BITS-1:0]    a;
   reg [BITS-1:0]    b;

   // Results:
   wire [BITS:0]     s_KSA;
   wire [BITS:0]     s_BEHAV;

   reg 		     error = 1'b0;   // This is just for the stop condition (verificaiton)

   initial begin
      //$dumpfile("dump.vcd");
      //$dumpvars(1, test);
      a = 0;
      b = 1;
      // #1_000_000_000 $finish;
   end

   KSA #(.BITS(BITS), .LEVELS(LEVELS))adder4 (s_KSA, a, b, 1'b0);

   assign s_BEHAV = a + b;   // This is the baseline - will be compared to the DUT

   initial begin
      while (error == 1'b0) begin
	 #1 {a, b} = {a, b} + 1'b1;    // Keep on incrementing
	 if (s_BEHAV != s_KSA) begin   // Until the results differ
            $display ("Invalid: %d+%d = %d (not %d)", a, b, s_BEHAV, s_KSA);
            error = 1'b1;
	 end
	 if (a == 0 && b == 0)       // If all the values checked, $finish
           #1 $finish;
	 // $display ("a = %d", a);
      end

   end
endmodule
