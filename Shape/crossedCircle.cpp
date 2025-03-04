#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;//DETECT → Automatically detects the graphics driver.
    const char* driver = "";//gm → Stores the detected graphics mode.
    initgraph(&gd, &gm, (char*)driver);// Initializes the graphics system.

    // This sets the outline color of all shapes to white.
    setcolor(WHITE);

    // Draw the circle
    circle(250, 250, 100);
    setfillstyle(SOLID_FILL, DARKGRAY);// Fill the circle with dark gray
    floodfill(250, 250, WHITE);
    /*What floodfill does:
    It fills an area starting from (250, 250).
    It stops when it reaches a boundary of color WHITE.
    Why WHITE? Because we set outlines to white using setcolor(WHITE).*/

    // ----- Draw Vertical Rectangle -----
    // Outer part (Gray)
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(245, 120, 255, 150); // Upper outer part
    floodfill(250, 130, WHITE);
    rectangle(245, 350, 255, 380); // Lower outer part
    floodfill(250, 360, WHITE);

    // Inner part (White)
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(245, 150, 255, 350);
    floodfill(250, 200, WHITE); // Inside vertical part

    // ----- Draw Horizontal Rectangle -----
    // Outer part (Gray)
    setfillstyle(SOLID_FILL, DARKGRAY);
    rectangle(120, 245, 150, 255); // Left outer part
    floodfill(130, 250, WHITE);
    rectangle(350, 245, 380, 255); // Right outer part
    floodfill(360, 250, WHITE);

    // Inner part (White) - Fixing left and right inner parts
    setfillstyle(SOLID_FILL, WHITE);
    rectangle(150, 245, 350, 255);
    floodfill(200, 250, WHITE); // Left inner part fixed
    floodfill(300, 250, WHITE); // Right inner part fixed

    getch();
    closegraph();
    return 0;
}
