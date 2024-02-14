#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
void main()
{
int x1,x2,y1,y2,x3,y3,nx1,nx2,nx3,ny1,ny2,ny3,sx,sy,tx,ty,c;
float r,t;
int gd=DETECT,gm=0;
initgraph(&gd,&gm,"c:\\tc\\bgi");
printf("Enter co-ordinates for triangle : ");
setcolor(15);
scanf(" %d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
line(x1,y1,x2,y2);
line(x2,y2,x3,y3);
line(x3,y3,x1,y1);
getch();
printf("\n1.SCALING\t2.TRANSLATION\t3.ROTATION\t4.EXIT\n");
printf("Enter your choice : ");
scanf("%d",&c);
switch(c)
{
case 1 : printf("Enter scaliing factors : ");
 scanf("%d%d",&sx,&sy);
 nx1=x1*sx;
 nx2=x2*sx;
 nx3=x3*sx;
 ny1=y1*sy;
 ny2=y2*sy;
 ny3=y3*sy;
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
 break;
case 2 : printf("Enter the translation factors : ");
 scanf("%d%d",&tx,&ty);
 nx1=x1+tx;
 nx2=x2+tx;
 nx3=x3+tx;
 ny1=y1+ty;
 ny2=y2+ty;
 ny3=y3+ty;
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
 break;
case 3 : printf("Enter angle : ");
 scanf("%f",&r);
 t=(3.14/180)*r;
 nx1=abs(x1*cos(t)-y1*sin(t));
 nx2=abs(x2*cos(t)-y2*sin(t));
 nx3=abs(x3*cos(t)-y3*sin(t));
 ny1=abs(x1*sin(t)+y1*cos(t));
 ny2=abs(x2*sin(t)+y2*cos(t));
 ny3=abs(x3*sin(t)+y3*cos(t));
 line(nx1,ny1,nx2,ny2);
 line(nx2,ny2,nx3,ny3);
 line(nx3,ny3,nx1,ny1);
 getch();
 break;
case 4 : printf("EXITING\n");
 break;
}
closegraph();
}
