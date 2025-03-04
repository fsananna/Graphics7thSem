#include <graphics.h>
#include <conio.h>
#include <math.h> // For trigonometric calculations

int main() {
    // Step 1: Initialize graphics mode
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");  // Auto-detect and initialize graphics mode

    // Step 2: Draw face (outer circle)
    circle(320, 240, 100);  // Center at (320, 240) with radius 100

    // Step 3: Draw eyes
    circle(290, 210, 10);  // Left eye at (290, 210)
    circle(350, 210, 10);  // Right eye at (350, 210)

    // Step 4: Fill the eyes with white color
    floodfill(290, 210, WHITE);
    floodfill(350, 210, WHITE);

    // Step 5: Arc properties for the smile
    int centerX = 320, centerY = 250; // Slightly below the face center
    int radius = 50;                   // Arc radius
    int startAngle = 200, endAngle = 340; // Smile curve angles

    // Step 6: Draw the smile using an arc
    arc(centerX, centerY, startAngle, endAngle, radius);

    // Step 7: Calculate arc endpoints for a connecting line
    // Using trigonometry: x = centerX + r * cos(angle), y = centerY - r * sin(angle)
    int x1 = centerX + radius * cos(startAngle * M_PI / 180);
    int y1 = centerY - radius * sin(startAngle * M_PI / 180);
    int x2 = centerX + radius * cos(endAngle * M_PI / 180);
    int y2 = centerY - radius * sin(endAngle * M_PI / 180);

    // Step 8: Draw a line connecting the arc endpoints to make the smile complete
    line(x1, y1, x2, y2);

    // Step 9: Wait for user input and close graphics mode
    getch();  // Pauses the screen so the drawing remains visible
    closegraph();  // Closes the graphics mode and frees memory

    return 0;
}
