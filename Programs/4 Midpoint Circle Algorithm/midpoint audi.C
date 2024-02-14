#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<graphics.h>
void pixelcircle(int xc,int yc,int x,int y)
{
putpixel(xc+x,yc+y,WHITE);
putpixel(xc+y,yc+x,WHITE);
putpixel(xc+y,yc-x,WHITE);
putpixel(xc+x,yc-y,WHITE);
putpixel(xc-x,yc-y,WHITE);
putpixel(xc-y,yc-x,WHITE);
putpixel(xc-y,yc+x,WHITE);
putpixel(xc-x,yc+y,WHITE);
}
void main()
{
int xc,yc,x,y,pk,r;
int gd=DETECT,gm=0;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("Enter co-ordinates of centre: x and y\n");
printf("Enter value of x: ");
scanf("%d",&xc);
printf("Enter value of y: ");
scanf("%d",&yc);
printf("Enter radius of circle: ");
scanf("%d",&r);
x=0; y=r;
pk=(5/4)-r;
while(x<y)
{
pixelcircle(xc,yc,x,y);
if(pk<0)
{
x++;
pk=pk+2*x+1;
}
else
{
x++;
y--;
pk=pk+2*x+1-2*y;
}
pixelcircle(xc,yc,x,y);
pixelcircle(xc+70,yc,x,y);
pixelcircle(xc+130,yc,x,y);
pixelcircle(xc+200,yc,x,y);
delay(100);
}
getch();
closegraph();
}
