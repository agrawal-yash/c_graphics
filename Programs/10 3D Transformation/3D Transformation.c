#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>
int maxx,maxy,midx,midy;

void axis()
{
  getch();
  cleardevice();
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
}
void main()
{
  int gd,gm,tx,ty,tz,ang,x1,x2,y1,y2,sx,sy,sz;
  detectgraph(&gd,&gm);
  initgraph(&gd,&gm,"C:/TURBOC3/BGI");
  setfillstyle(3,25);
  maxx=getmaxx();
  maxy=getmaxy();
  midx=maxx/2;
    midy=maxy/2;
  outtextxy(100,100,"ORIGINAL OBJECT");
  line(midx,0,midx,maxy);
  line(0,midy,maxx,midy);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  axis();
  outtextxy(100,20,"TRANSLATION");
  printf("\n\n Enter the Translation vector: ");
  scanf("%d%d",&tx,&ty);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+(tx+100),midy-(ty+20),midx+(tx+60),midy-(ty+90),20,5);
  axis();
  outtextxy(100,20,"SCALING");
  printf("\n Enter the Scaling Factor: ");
  scanf("%d%d%d",&sx,&sy,&sz);
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+(sx*100),midy-(sy*20),midx+(sx*60),midy-(sy*90),20*sz,5);
  axis();
  outtextxy(100,20,"ROTATION");
  printf("\n Enter the Rotation angle: ");
  scanf("%d",&ang);
  x1=100*cos(ang*3.14/180)-20*sin(ang*3.14/180);
  y1=100*sin(ang*3.14/180)+20*cos(ang*3.14/180);
  x2=60*cos(ang*3.14/180)-90*sin(ang*3.14/180);
  y2=60*sin(ang*3.14/180)+90*cos(ang*3.14/180);
  axis();
  printf("\n After rotating about z-axis\n");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+x1,midy-y1,midx+x2,midy-y2,20,5);
  axis();
  printf("\n After rotating about x-axis\n");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+100,midy-x1,midx+60,midy-x2,20,5);
  axis();
  printf("\n After rotating about y-axis\n");
  bar3d(midx+100,midy-20,midx+60,midy-90,20,5);
  bar3d(midx+x1,midy-20,midx+x2,midy-90,20,5);
  axis();
  closegraph();
}