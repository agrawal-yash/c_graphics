// C Implementation for bar3d() function 
#include <graphics.h> 

// driver code 
int main() 
{ 
	// gm is Graphics mode which is 
	// a computer display mode that 
	// generates image using pixels. 
	// DETECT is a macro defined in 
	// "graphics.h" header file 
	int gd = DETECT, gm; 

	// initgraph initializes the 
	// graphics system by loading a 
	// graphics driver from disk 
	initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a"); 

	// location of sides 
	int left, top, right, bottom; 

	// depth of the bar 
	int depth; 

	// top flag denotes top line. 
	int topflag; 

	// left, top, right, bottom, 
	// depth, topflag location's 
	bar3d(left = 150, top = 250, 
	right = 190, bottom = 350, 
	depth = 20, topflag = 1); 

	bar3d(left = 220, top = 150, 
	right = 260, bottom = 350, 
	depth = 20, topflag = 0); 

	bar3d(left = 290, top = 200, 
	right = 330, bottom = 350, 
	depth = 20, topflag = 1); 

	// y axis line 
	line(100, 50, 100, 350); 

	// x axis line 
	line(100, 350, 400, 350); 

	getch(); 

	// closegraph function closes the 
	// graphics mode and deallocates 
	// all memory allocated by 
	// graphics system . 
	closegraph(); 

	return 0; 
} 
