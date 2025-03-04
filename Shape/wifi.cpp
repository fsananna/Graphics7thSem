#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char driverPath[] = "";  // Fix warning by using a character array
    initgraph(&gd, &gm, driverPath);  // Initialize graphics mode

    int centerX = 320, centerY = 300;  // Center of Wi-Fi signal

    // Draw Wi-Fi signal arcs (flipped upwards)
    arc(centerX, centerY, 40, 140, 80);  // Largest arc
    arc(centerX, centerY, 45, 135, 60);  // Medium arc
    arc(centerX, centerY, 50, 130, 40);  // Smallest arc

    // Draw small filled circle (Wi-Fi source)
    circle(centerX, centerY + 40, 7);
    floodfill(centerX, centerY + 40, WHITE);  // Fill the source point

    getch();  // Wait for user input
    closegraph();
    return 0;
}
