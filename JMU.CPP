#include<dos.h>
#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<math.h>

void main()
{
int gd, gm, c1, c2, c3, c4, c5, c6, c7, c8;
gd=DETECT;
initgraph (&gd, &gm, "C:\\TC\\TCPP\\BGI");

clearviewport(); setbkcolor(LIGHTBLUE);
setfillstyle(9, WHITE);
bar(1, 480, 640, 440);
setcolor(BLUE);
setfillstyle(9, RED);
bar3d(1, 480, 100, 400, 50, 1);
bar3d(100, 150, 200, 500, 50, 1);
bar3d(200, 250, 300, 650, 60, 1);
bar3d(400, 480, 450, 360, 40, 1);
setfillstyle(1, YELLOW);
fillellipse(550, 1, 50, 50);
setfillstyle(9, RED);
bar3d(500, 480, 540, 400, 10, 1);
sound(100); delay(300); sound(200); delay(100); sound(500); delay(250);
sound(100); delay(300); sound(200); delay(100); sound(500); delay(250);
nosound();
setcolor(LIGHTBLUE);
for(c1=750 ,c2=730 ,c3=710 ,c4=770 , c5=790, c6=0; c1>=-100,c2>=-100,c3>=-100,c4>=-100,c5>=-100, c6<=850;c1--,c2--,c3--,c4--,c5--,c6++){
setfillstyle(5, WHITE);
sound(c6);
fillellipse(c1,50,80,20);
fillellipse(c1,50,5,5);
fillellipse(c2,50,5,5);
fillellipse(c3,50,5,5);
fillellipse(c4,50,5,5);
fillellipse(c5,50,5,5);
setfillstyle(1, YELLOW);
fillellipse(550, 1, 50, 50);
}
nosound();
setcolor(RED);
setfillstyle(1, RED);
for(c1=0, c2=50, c3=0;c1<=300, c2<=250, c3<=200;c1++,c2++,c3++){
sound(c3);
fillellipse(c1, c2, 5, 5); //Punto de impacto RAYO LASSER
}
setcolor(LIGHTBLUE);
setfillstyle(1, LIGHTBLUE);
for(c1=0, c2=50, c3=100;c1<=300, c2<=250, c3<=200;c1++,c2++,c3--){
sound(c3);
fillellipse(c1, c2, 5, 5); //Punto de impacto RAYO LASSER
}
setfillstyle(1, RED);
for(c1=5, c2=5; c1<=650, c2<=650;c1+=2, c2+=2){
fillellipse(430,479,c2,c1);
}
setbkcolor(BLUE);
setfillstyle(1, BROWN);
bar(1, 480, 640, 440);
delay(1000);
setcolor(WHITE);
settextstyle(2,1,50);
outtextxy(450,250,"EL FIN");
clearviewport();
setfillstyle(1, BROWN);
bar(1, 480, 640, 440);
settextstyle(2,1,50);
outtextxy(450,250,"EL FIN"); delay(500);
setbkcolor(BLUE); delay(500);     sound(100);
setbkcolor(BLACK); delay(500); sound(200);
nosound();
getch();
}
