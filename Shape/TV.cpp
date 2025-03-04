#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver); // Initialize graphics mode

    // Draw outer frame (TV body)
    setcolor(WHITE);
    rectangle(150, 100, 500, 300); // Outer frame
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(151, 101, WHITE); // Fill TV body

    // Draw screen inside TV
    setcolor(WHITE);
    rectangle(170, 120, 480, 280); // Inner screen
    setfillstyle(SOLID_FILL, BLACK);
    floodfill(171, 121, WHITE); // Fill screen with black

    // Draw TV stand
    setcolor(WHITE);
    rectangle(290, 300, 360, 350); // Stand base
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(291, 301, WHITE);

    // Draw TV base (ellipse for the bottom part)
    setcolor(WHITE);
    ellipse(325, 360, 0, 360, 80, 15); // Base ellipse
    setfillstyle(SOLID_FILL, DARKGRAY);
    floodfill(326, 361, WHITE);

    // Draw power button on the stand
    setcolor(WHITE);
    circle(325, 290, 5); // Small circle for the button
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(326, 326, WHITE);

    getch();  // Wait for user input
    closegraph();  // Close graphics mode
    return 0;
}
