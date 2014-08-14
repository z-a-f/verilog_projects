
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