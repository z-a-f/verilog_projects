`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: Boston University
// Engineer: Schuyler Eldridge; Zafar M. Takhirov
// 
// Create Date:    13:00:22 04/12/2011 
// Design Name: EC311/EC551 Support Files
// Module Name:    vga_controller_640_60 
// Project Name: N/A
// Target Devices: Spartan 6 Family
// Tool versions: XILINX ISE 1x.x
// Description: 
//
// Dependencies: none
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module vga_controller_640_60 (rst,pixel_clk,HS,VS,hcounter,vcounter,blank);

	input rst, pixel_clk;	// global reset, pixel clock
	output reg HS, VS, blank;	// sync controls, blank indicator
	output reg [10:0] hcounter, vcounter;	// pixel coordinates

	parameter HMAX = 800; 	// maxium value for the horizontal pixel counter
	parameter VMAX = 525; 	// maxium value for the vertical pixel counter
	parameter HLINES = 640;	// total number of visible columns
	parameter HFP = 648; 	// value for the horizontal counter where front porch ends
	parameter HSP = 744; 	// value for the horizontal counter where the synch pulse ends
	parameter VLINES = 480;	// total number of visible lines
	parameter VFP = 482; 	// value for the vertical counter where the frone proch ends
	parameter VSP = 484; 	// value for the vertical counter where the synch pulse ends
	parameter SPP = 0;		// value for the porch synchronization pulse

	wire video_enable;	// valid region indicator
	
	// create a "blank" indicator
	always@(posedge pixel_clk)begin
		blank <= ~video_enable; 
	end
	
	// Create a horizontal beam trace (horizontal time):
	always@(posedge pixel_clk)begin
		if(rst == 1) hcounter <= 0;
		else if (hcounter == HMAX) hcounter <= 0;
		else hcounter <= hcounter + 1'b1;
	end
	
	// Create a vertical beam trace (vertical time):
	always@(posedge pixel_clk)begin
		if(rst == 1) vcounter <=0;
		else if(hcounter == HMAX) begin
			if(vcounter == VMAX) vcounter <= 0;
			else vcounter <= vcounter + 1'b1; 
		end
	end
	
	// Check if between horizontal porches,
	// if not send horizontal porch synchronization pulse
	always@(posedge pixel_clk)begin
		if(hcounter >= HFP && hcounter < HSP) HS <= SPP;
		else HS <= ~SPP; 
	end
	
	// Check if between vertical porches,
	// if not send vertical porch synchronization pulse
	always@(posedge pixel_clk)begin
		if(vcounter >= VFP && vcounter < VSP) VS <= SPP;
		else VS <= ~SPP; 
	end
	
	// create a video enabled region
	assign video_enable = (hcounter < HLINES && vcounter < VLINES) ? 1'b1 : 1'b0;

endmodule
