#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, nullptr);

    setlinestyle(SOLID_LINE, 0, 10);

    // 2. Curved Connector
    //arc(300, 200, 180, 360, 100); // Quarter circle curve

    ellipse(300, 200, 180, 360, 60, 100);



    line(300, 300, 300, 350);

    line(250, 350, 350, 350);
    line(250, 355, 350, 355);

    ellipse(300, 200, 0, 360, 40, 80);
     setfillstyle(SOLID_FILL, WHITE);
    //floodfill(310, 190, WHITE); // Fill inside the half-circle


    getch();
    closegraph();
    return 0;
}