

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
	REGS #(.BITS(BITS)) inputBUF_A (aIn, a, clk);
	REGS #(.BITS(BITS)) inputBUF_B (bIn, b, clk);
	REG 				inputBUF_C (cIn, c, clk);

	// Adder:
	KSA #(.BITS(BITS), .LEVELS(LEVELS))adder4 (sOut, aIn, bIn, cIn);

	// Output Buffers:
	REGS #(.BITS(BITS+1)) outputBUF_S (s, sOut, clk);

endmodule

module REGS (Q, D, clk);
	parameter BITS = 64;
	input [BITS-1:0]	D;
	input				clk;
	output [BITS-1:0]	Q;

	genvar i;
	generate
		for (i = 0; i < BITS; i = i + 1) begin
			REG RR (Q[i], D[i], clk);
		end

	endgenerate

endmodule

module REG (Q, D, clk);
	input		D;
	input 		clk;
	output reg 	Q;

	always @ (posedge clk) begin
		Q <= D;
	end

endmodule