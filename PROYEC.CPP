#include<stdio.h>
#include<conio.h>
#include<dos.h>
#include<stdlib.h>
#include<graphics.h>
#include<ctype.h>
void inicializa()
{
	int gm, gd=DETECT;
	initgraph(&gd, &gm, "C:\\TC\\TCPP\\BGI");
}
void stars()
{ int e;
for(e=1;e<1000; e=e+1)putpixel(rand()%640,rand()%480,rand()%10);
}
void menu()
{int i;
	setcolor(LIGHTGRAY); //modificar el color del texto
	settextstyle(0,0,1);
	outtextxy(280, 200, "[I]NICIAR");
	outtextxy(280, 210, "[D]IFICULTAD");
	outtextxy(280, 220, "[C]REDITOS");
	outtextxy(280, 230, "[S]ALIR");
	setcolor(WHITE);
	settextstyle(0,0,5);
	outtextxy(70,100, "GALACTIC MAZE");
}
void inicio()
{int i, j;
	inicializa();
	clearviewport();
	stars();
	for(i=0;i<10;i++)
	for(j=0;j<10;j++)
	bar(170+j*30,100+i*30,200+j*30,130+i*30);
	getch();

}

void main()
{char op;
	inicializa();
	stars();
	menu();
	op=toupper(getch());
	switch(op)
	{
	case 'I': inicio();
		  break;
	case 'D': outtextxy(300,300, "DIFICULTAD");
		  break;
	case 'C': outtextxy(300,300, "CREDITOS");
		  break;
	case 'S': outtextxy(300,300, "SALIR");
		  break;
	}
getch();
}