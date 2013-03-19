#include<conio.h>
#include<stdio.h>
#include<dos.h>
#include<graphics.h>    //para trabajar modo grafico
void main()
{
	int gd, gm; //declarar variables
	gd=DETECT;
	initgraph (&gd, &gm,"C:\\TC\\TCPP\\BGI");   //iniciar modo grafico
	clearviewport(); //limpiar pantalla
	setbkcolor(LIGHTGREEN);  //modificar el color de atras
	setcolor(BLUE); //modificar el color del texto
	settextstyle(4,0,0);
	outtextxy(100, 100, "INGENIERO");
	settextstyle(3,0,0);
	outtextxy(150, 150, "INGENIERO");
	settextstyle(2,0,0);
	outtextxy(200, 200, "INGENIERO");
	settextstyle(1,0,0);
	outtextxy(250, 250, "INGENIERO");
	settextstyle(0,0,0);
	outtextxy(300, 300, "INGENIERO");
	getch(); clearviewport();
	setlinestyle(3,0,0); //(tipo,orientacion,)
	line(100,100,540,100); //ubicacion de la linea
	setlinestyle(2,0,0);
	line(100,150,540,150);
	setlinestyle(1,0,0);
	line(100,200,540,200);
	settextstyle(0,0,0);
	line(100,250,540,250);
	getch();
	clearviewport(); //CUADRO
	setfillstyle(9,MAGENTA);
	rectangle(50,100,150,200);
	bar(250,100,350,200);
	bar3d(450,100,550,200,50,1);
	getch();
	clearviewport(); //CURVAS
	putpixel(10,50,BLUE); //Punto
	circle(100,150,75); //circulo
	arc(250,150,45,270,50); //pedazo circulo
	ellipse (400,150,0,360,50,100); //elipse
	ellipse(550, 150, 90, 320, 75, 40); //pedazo de elipse
	fillellipse(100,350,50,100); //elipse rellena
	fillellipse(220, 350, 40, 40); //circulo relleno
	pieslice(350,350,120,320,50); //pedazo circulo relleno
	sector(500,350,20,220,100,25); //pedazo elipse rellena
	getch();
	}