#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <graphics.h>
int main()
{
    int gm, x, y, gd = DETECT, i;
    // int midx, midy;
    int stangle = 45, endangle = 50;
    int radius = 50;
    
    char data[] = "C:\\MinGW\\lib\\libbgi.a"; //static file
    //init gd = DETECT,gm; 
    initgraph(&gd, &gm, data);
cleardevice();
ellipse(520,200,30,330,90,30);
circle(450,193,3);
line(430,200,450,200);
line(597,185,630,170);
line(597,215,630,227);
line(630,170,630,227);
line(597,200,630,200);
line(597,192,630,187);
line(597,207,630,213);
line(500,190,540,150);
line(530,190,540,150);
getch();
    closegraph();

    return 0;
}