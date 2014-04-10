`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Boston University
// Engineer: Zafar M. Takhirov
// 
// Create Date:    12:59:40 04/12/2011 
// Design Name: EC311 Support Files
// Module Name:    vga_display 
// Project Name: Lab5 / Lab6 / Project
// Target Devices: xc6slx16-3csg324
// Tool versions: XILINX ISE 13.3
// Description: 
//
// Dependencies: vga_controller_640_60
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_display(rst, clk, R, G, B, HS, VS);
	input rst;	// global reset
	input clk;	// 100MHz clk
		
	// color outputs to show on display (current pixel)
	output [2:0] R, G;
	output [1:0] B;
	
	// Synchronization signals
	output HS;
	output VS;
	
	// controls:
	wire [10:0] hcount, vcount;	// coordinates for the current pixel
	wire blank;	// signal to indicate the current coordinate is blank
	wire figure;	// the figure you want to display
	
	// memory interface:
	wire [14:0] addra;
	wire [7:0] douta;
	
	/////////////////////////////////////////////////////
	// Begin clock division
	parameter N = 2;	// parameter for clock division
	reg clk_25Mhz;
	reg [N-1:0] count;
	initial count = 0;
	always @ (posedge clk) begin
		count <= count + 1'b1;
		clk_25Mhz <= count[N-1];
	end
	// End clock division
	/////////////////////////////////////////////////////
	
	// Call driver
	vga_controller_640_60 vc(
		.rst(rst), 
		.pixel_clk(clk_25Mhz), 
		.HS(HS), 
		.VS(VS), 
		.hcounter(hcount), 
		.vcounter(vcount), 
		.blank(blank)
	);
	
	vga_bsprite sprites_mem(
		.x0(0+100), 
		.y0(0+100),
		.x1(343+100),
		.y1(47+100),
		.hc(hcount), 
		.vc(vcount), 
		.mem_value(douta), 
		.rom_addr(addra), 
		.R(R), 
		.G(G), 
		.B(B), 
		.blank(blank)
	);
	
	game_over_mem memory_1 (
		.clka(clk_25Mhz), // input clka
		.addra(addra), // input [14 : 0] addra
		.douta(douta) // output [7 : 0] douta
	);
	

endmodule
