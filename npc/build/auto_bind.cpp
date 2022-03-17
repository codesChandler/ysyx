#include <nvboard.h>
#include "Vtop.h"

void nvboard_bind_all_pins(Vtop* top){
	nvboard_bind_pin(&top->VGA_VSYNC, true, true, 1, VGA_VSYNC);
	nvboard_bind_pin(&top->VGA_HSYNC, true, true, 1, VGA_HSYNC);
	nvboard_bind_pin(&top->VGA_BLANK_N, true, true, 1, VGA_BLANK_N);
	nvboard_bind_pin(&top->VGA_R, true, true, 8, VGA_R7, VGA_R6, VGA_R5, VGA_R4, VGA_R3, VGA_R2, VGA_R1, VGA_R0);
	nvboard_bind_pin(&top->VGA_G, true, true, 8, VGA_G7, VGA_G6, VGA_G5, VGA_G4, VGA_G3, VGA_G2, VGA_G1, VGA_G0);
	nvboard_bind_pin(&top->VGA_B, true, true, 8, VGA_B7, VGA_B6, VGA_B5, VGA_B4, VGA_B3, VGA_B2, VGA_B1, VGA_B0);
	nvboard_bind_pin(&top->ledr, false, true, 16, LD15, LD14, LD13, LD12, LD11, LD10, LD9, LD8, LD7, LD6, LD5, LD4, LD3, LD2, LD1, LD0);
}