// 
#include <iostream>
#include <conio.h>
#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);

    // Center position
    int centerX = getmaxx() / 2;  // Midpoint X
    int centerY = getmaxy() / 2;  // Midpoint Y

    // Adjusted coordinates for a bigger, centered radio
    int width = 200;  // Width of radio
    int height = 120; // Height of radio
    int topX = centerX - width / 2;
    int topY = centerY - height / 2;
    int bottomX = centerX + width / 2;
    int bottomY = centerY + height / 2;

    // Main Radio Body (Bigger & Centered)
    rectangle(topX, topY, bottomX, bottomY);

    // Top part (Antenna or speaker slot)
    rectangle(centerX - 40, topY - 20, centerX + 40, topY);

    // Left Speaker
    circle(centerX - 50, centerY, 20);
    circle(centerX - 50, centerY, 12);

    // Right Speaker
    circle(centerX + 50, centerY, 20);
    circle(centerX + 50, centerY, 12);

    // Center Button / Display
    rectangle(centerX - 15, centerY + 20, centerX + 15, centerY + 40);

    getch();  // Wait for key press
    closegraph();
    return 0;
}
