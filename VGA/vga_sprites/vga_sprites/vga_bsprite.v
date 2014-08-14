`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Boston University
// Engineer: Zafar M. Takhirov
// 
// Create Date:    17:17:19 04/14/2013 
// Design Name: 	VGA sprites controller
// Module Name:    vga_bsprite 
// Project Name:  vga_display
// Target Devices: xc6slx16
// Tool versions: ISE 13.3
// Description: This project calls memory sprites to show on the screen
//
// Dependencies: game_over_mem, vga_controller
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_bsprite(x0, y0, x1, y1, hc, vc, mem_value, rom_addr, R, G, B, blank);
	input [10:0] x0, y0, x1, y1;	// Coordinates of where the image will be placed
	input [10:0] hc, vc;	// Coordinates of the current pixel
	input [7:0] mem_value;	// Memory value at address "rom_addr"
	input blank;
	output reg [14:0] rom_addr;	// ROM address
	output reg [2:0] R, G;
	output reg [1:0] B;	// RGB values outputs;
	
	reg [9:0] x, y;
	
	
	always @ (*) begin
		if (hc >= x0 & hc < x1)		// make sure thath x1-x0 = image_width
			x = hc-x0;	// offset the coordinates
		else
			x = 0;
			
		if (vc >= y0 & vc < y1)		// make sure that y1-y0 = image_height
			y = vc - y0;	//offset the coordinates
		else
			y = 0;
			
		rom_addr = y * 344 + x; // calculate the address
		// rom_addr = y*image_width + x
		
		if (x==0 & y==0)		// set the color output
			{R,G,B} = 8'd255;
		else
			{R,G,B} = mem_value;
	end
endmodule
