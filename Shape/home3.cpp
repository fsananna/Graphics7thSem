#include<iostream>

#include<conio.h>

#include<dos.h>

#include<stdlib.h>

#include<graphics.h>

int main()

{
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);

    line(200,100,300,200);
    line(300,200,295,205);
    line(295,205,200,110);

    line(200,100,100,200);
    line(100,200,105,205);
    line(105,205,200,110);

    line(110,205,110,300);
    line(290,205,290,300);
    line(110,300,290,300);

    //door
    line(180,300,180,250);
    line(210,300,210,250);
    line(180,250,210,250);

    rectangle(180,185,210,210);
    line(195,185,195,210);
    line(180,197,210,197);
    rectangle(130, 240,160,260);
     line(145,240,145,260);
      line(130,250,160,250);
    rectangle(230, 240,260,260);
     line(245,240,245,260);
      line(230,250,260,250);




	getch();

	closegraph();



}