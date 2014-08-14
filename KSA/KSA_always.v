

module KSA_pipe(s, a, b, c, clk);
	parameter BITS = 64;
	parameter LEVELS = 6;

	// IO's
	input [BITS-1:0]	a;
	input [BITS-1:0]	b;
	input				c;

	input clk;

	output [BITS:0]		s;

	// Wires:
	wire [BITS-1:0]		aIn;
	wire [BITS-1:0]		bIn;
	wire				cIn;

	wire [BITS:0]		sOut;

	// Input Buffers:
	always @ (posedge clk) begin
		aIn <= a;
		bIn <= b;
		cIn <= c;
	end

	// Adder:
	KSA #(.BITS(BITS), .LEVELS(LEVELS))adder4 (sOut, aIn, bIn, cIn);

	// Output Buffers:
	always @ (posedge clk) begin
		s <= sOut;
	end

endmodule