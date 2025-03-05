#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Cylinder parameters
    int x = 300, y = 150; // Top ellipse center
    int rX = 100, rY = 50; // X and Y radii of the ellipse
    int height = 200; // Height of the cylinder

    // Top arc (Full ellipse to show 3D effect)
    ellipse(x, y, 0, 360, rX, rY);

    // Bottom arc (Half ellipse for perspective)
    ellipse(x, y + height, 180,0, rX, rY);

    // Two vertical lines connecting arcs
    line(x - rX, y, x - rX, y + height); // Left side
    line(x + rX, y, x + rX, y + height); // Right side

    getch();
    closegraph();
    return 0;
}
