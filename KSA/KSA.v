/************************************
 * Kogge-Stone Adder
 *
 * This is a sparsity-1 KSA with radix-2
 * Please, refer to the
 * http://en.wikipedia.org/wiki/Kogge-Stone_adder
 * for details
 *
 * Note: as this is just an adder, we
 * could have increased the sparsity
 * for better power efficiency
 *
 * This module uses GENERATE block!
 ************************************/

module KSA (s, a, b, c);
  // BITS specifies how many bits should be in the adder
  parameter BITS = 64;
  // LEVELS shows how many levels are there in the adder.
  // *IMPORTANT*:
  // !!!    LEVELS = floor(log2(BITS))   !!!
  parameter LEVELS = 6;

  // IO's
  input [BITS-1:0]  a;
  input [BITS-1:0]  b;
  input             c;      // Carry in => set to 0 at input

  output [BITS:0]   s;      // Sum output

  // PG wires:
  wire [BITS-1:0]   Plvl[LEVELS:0], Glvl[LEVELS:0];

  // level 0 - Create PG-generators (red):
  assign Plvl[0][BITS-1:0] = a^b;
  assign Glvl[0][BITS-1:0] = a&b;

  // level 1 - END:
  genvar lvl;
  generate
    for (lvl = 1; lvl <= LEVELS; lvl = lvl + 1) begin
      // Create buffers (green)
      assign Plvl[lvl][2**(lvl-1)-1:0] = Plvl[lvl-1][2**(lvl-1)-1:0];
      assign Glvl[lvl][2**(lvl-1)-1:0] = Glvl[lvl-1][2**(lvl-1)-1:0];
      // Create PG calculators (yellow)
      assign Plvl[lvl][BITS-1:2**(lvl-1)] = Plvl[lvl-1][BITS-1:2**(lvl-1)] & Plvl[lvl-1][BITS-1 - 2**(lvl-1):0];
      assign Glvl[lvl][BITS-1:2**(lvl-1)] = (Plvl[lvl-1][BITS-1:2**(lvl-1)] & Glvl[lvl-1][BITS-1 - 2**(lvl-1):0]) | Glvl[lvl-1][BITS-1:2**(lvl-1)];
    end
  endgenerate
  // At this point all the carries are stored in the Glvl[LEVELS][BITS-1:0]

  // Calculate sum by shifting the carries left by 1 bit:
  assign s = {1'b0, Plvl[0]}^{Glvl[LEVELS], 1'b0};
endmodule
