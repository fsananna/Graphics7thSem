
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, nullptr);

    setlinestyle(SOLID_LINE, 0, 8);

    circle(200, 300, 50);
    line(200, 300, 250, 250);

    fillellipse(300, 300, 15, 15);
    //circle(300, 300, 15);
    line(300, 300, 200, 200);

    line(200, 300, 300, 300);

    line(300, 300, 350, 250);

    circle(400, 300, 50);
    line(400, 300, 300, 200);

    //seat
    line(180, 200, 220, 200);

    //handle
    line(300, 200, 320, 180);

    
    // Hold the screen
    getch();

    // Close graphics mode
    closegraph();

    return 0;
}