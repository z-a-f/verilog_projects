`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:12:43 04/14/2013
// Design Name:   vga_display
// Module Name:   X:/EC551/image/test_vga.v
// Project Name:  image
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: vga_display
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_vga;

	// Inputs
	reg rst;
	reg clk;

	// Outputs
	wire [2:0] R;
	wire [2:0] G;
	wire [1:0] B;
	wire HS;
	wire VS;

	// Instantiate the Unit Under Test (UUT)
	vga_display uut (
		.rst(rst), 
		.clk(clk), 
		.R(R), 
		.G(G), 
		.B(B), 
		.HS(HS), 
		.VS(VS)
	);

	initial begin
		// Initialize Inputs
		rst = 0;
		clk = 0;
		#1 rst = 1;
		#1000 rst = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
	
	always #1 clk = ~clk;
      
endmodule

