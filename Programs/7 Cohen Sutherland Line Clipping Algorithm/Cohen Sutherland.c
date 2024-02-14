#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>
void main()
{
int a[4],b[4];
float m,xnew,ynew;
float xwmin=100,ywmin=100,xwmax=300,ywmax=300,x1=10,y1=200,x2=250,y2=150;
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TC\\BGI");
setcolor(5);
line(x1,y1,x2,y2);
setcolor(12);
rectangle(xwmin,ywmin,xwmax,ywmax);
m = (y2-y1)/(x2-x1);
if(x1<xwmin)
a[3]=1;
else a[3]=0;
if(x1>xwmax)
a[2]=1;
else a[2]=0;
if(y1<ywmin)
a[1]=1;
else a[1]=0;
if(y1>ywmax)
a[0]=1;
else a[0]=0;
if(x2<xwmin)
b[3]=1;
else b[3]=0;
if(x2>xwmax)
b[2]=1;
else b[2]=0;
if(y2<ywmin)
b[1]=1;
else b[1]=0;
if(y2>ywmax)
b[0]=1;
else b[0]=0;
printf("press a key to continue");
getch();
if(a[0] == 0 && a[1] == 0 && a[2] == 0 && a[3] == 0 && b[0] == 0
&& b[1] == 0 && b[2] == 0 && b[3] == 0)
{
printf("no clipping");
line(x1,x2,y1,y2);
}
else if(a[0]&&b[0] || a[1]&&b[1] || a[2]&&b[2] || a[3]&&b[3])
{
clrscr();
printf("line discarded");
rectangle(xwmin,ywmin,xwmax,ywmax);
}
else
{
if(a[3] == 1 && b[3] == 0)
{
ynew = (m*(xwmin-x1)) + y1;
setcolor(12);
rectangle(xwmin,ywmin,xwmax,ywmax);
setcolor(0);
line(x1,y1,x2,y2);
setcolor(15);
line(xwmin,ynew,x2,y2);
}
else if(a[2] == 1 && b[2] == 0)
{
xnew = x1 + (ywmin-y1)/m;
setcolor(0);
line(x1,y1,x2,y2);
setcolor(15);
line(xnew,ywmax,x2,y2);
}
else if(a[1] == 1 && b[1] == 0)
{
xnew = x1 + (ywmin-y2)/m;
setcolor(0);
line(x1,y1,x2,y2);
setcolor(15);
line(xnew,ywmax,x2,y2);
}
else if(a[0] == 1 && b[0] == 0)
{
xnew = x1 + (ywmax-y1)/m;
setcolor(0);
line(x1,y1,x2,y2);
setcolor(15);
line(xnew,ywmax,x2,y2);
}
}
getch();
closegraph(); }
