#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<graphics.h>
void inicializa()
{
	int gm, gd=DETECT;
	initgraph(&gd, &gm, "C:\\TC\\TCPP\\BGI");
}
void pixeleada()
{ int i;
for(i=1;i<2000; i=i+1)putpixel(rand()%640,rand()%480,WHITE);
}
void triangulo()
{int tri[6];
	tri[0]= 400;
	tri[1]= 450;
	tri[2]= 200;
	tri[3]= 250;
	tri[4]= 300;
	tri[5]= 300;
	setcolor(BLACK);
	setfillstyle(1, LIGHTBLUE);
	fillpoly(3, tri);
}
void box(int x1, int y1, int x2, int y2, int relleno, int color)
{ int poly[8];
	poly[0]=x1;
	poly[1]=y1;
	poly[2]=x2;
	poly[3]=y1;
	poly[4]=x2;
	poly[5]=y2;
	poly[6]=x1;
	poly[7]=y2;
setfillstyle(relleno,color);
fillpoly(4,poly);
}
void main()
{ 	inicializa();
	box(0,0, getmaxx(),getmaxy(),1,BLUE);
	pixeleada();
	triangulo();
	box(40,40,600,80,5,LIGHTGRAY);
	box(100,200,500,250,9,BLACK);
	box(50,300,60,450,6,GREEN);
	getch();
}