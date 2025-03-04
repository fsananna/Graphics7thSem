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



	line(0,450,750,450);



	//Right ---------

	rectangle(200,330,430,450);

	rectangle(230,444,295,450);

	rectangle(235,355,290,444);

	circle(244,399,3);



	rectangle(340,348,410,400);

	rectangle(345,353,405,395);

	line(375,353,375,395);



	line(130,249,426,249);

	line(430,330,445,330);

	line(445,330,426,249);



	rectangle(350,235,380,249);

	rectangle(346,230,384,235);

	//Left-----------

	line(200,310,200,450);

	line(40,310,40,450);



	line(30,316,120,250);

	line(210,316,120,250);



	line(30,307,120,241);

	line(210,307,120,241);



	line(30,307,30,316);

	line(210,307,210,316);



	rectangle(70,350,170,400);

	rectangle(75,355,165,395);



	line(105,355,105,395);

	line(135,355,135,395);



	rectangle(100,290,140,320);

	line(120,290,120,320);

	line(100,305,140,305);

	getch();

	closegraph();



}