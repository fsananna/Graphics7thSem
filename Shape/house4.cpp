#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Roof - Triangle
    line(150, 200, 250, 100); // Left slope
    line(250, 100, 350, 200); // Right slope
    line(150, 200, 350, 200); // Base of the triangle

    // Main house body
    rectangle(150, 200, 350, 350);

    // Garage
    rectangle(350, 250, 500, 350);

    // Chimney
    rectangle(180, 120, 200, 170);

    // Circular window (roof)
    circle(250, 150, 15);

    // Square window (wall)
    rectangle(180, 250, 230, 300);

    // Door
    rectangle(260, 280, 310, 350);

    getch();
    closegraph();
    return 0;
}
