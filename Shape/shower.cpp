#include <graphics.h>
#include <conio.h>

void rectangular(int x, int y)
{
    rectangle(x-3, y+8, x+3, y-8);
}

void shower()
{
    arc(200, 200, 0, 180, 40);
    line(160, 200, 240, 200);

    line(190, 160, 190, 140);
    line(210, 160, 210, 140);
    arc(180, 140, 0, 80, 10);
    arc(180, 140, 0, 90, 30);
    line(180, 130, 100, 130);
    line(180, 110, 100, 110);

    line(100, 110, 100, 130);
    floodfill(200, 190, WHITE);
    floodfill(200, 150, WHITE);

    rectangular(170,220);
    rectangular(190,220);
    rectangular(210,220);
    rectangular(230,220);

    floodfill(170,220, 15);
    floodfill(190,220, 15);
    floodfill(210,220, 15);
    floodfill(230,220, 15);

    rectangular(170,250);
    rectangular(190,250);
    rectangular(210,250);
    rectangular(230,250);

    floodfill(170,250, 15);
    floodfill(190,250, 15);
    floodfill(210,250, 15);
    floodfill(230,250, 15);
}

int main ()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, " ");

    shower();

    getch();
    closegraph();
}
