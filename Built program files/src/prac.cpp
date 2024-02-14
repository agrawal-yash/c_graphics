#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
#include<math.h>
#include<malloc.h>
#include<conio.h> 
#include<dos.h>


// void drawline(int x1, int y1, int x2, int y2)
// {
//     int x1, x2, y1, y2, dx, dy, p, x, y; 

//     dx = abs(x2-x1);
//     dy = abs(y2-y1);

//     p = 2*(dy-dx);

//     x = x1;
//     y=y1;
    
//     while (x<=x2)
//     {
//         if(p>=0)
//         {
//             putpixel(x,y,3);
//             y++;
//             p = p + 2*dy - 2*dx;
//         } 
//         else{
//             putpixel(x,y,7);
//             p = p + 2*dy;
//         } 
//         x++;
//     }
    
// }

int main(){
    int i, gd = DETECT, gm, flag = 0; 
    int x, y; 
    initgraph(&gd, &gm, "C:\\MinGW\\lib\\libbgi.a"); 

    /* get mid positions in x and y-axis */
 x = getmaxx()/2;
 y = 30;
 
 
 while (!kbhit()) {
  if(y >= getmaxy()-30 || y <= 30)
     flag = !flag;
     /* draws the gray board */
     setcolor(RED);
     setfillstyle(SOLID_FILL, RED);
     circle(x, y, 30);
     floodfill(x, y, RED);
 
 /* delay for 50 milli seconds */
 delay(50);
 
 /* clears screen */
 cleardevice();
 if(flag){
     y = y + 5;
 } else {
     y = y - 5;
 }
    }
    getch();
    closegraph();

    return 0;
}