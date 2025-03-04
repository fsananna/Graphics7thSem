#include <graphics.h>  // Library for graphics functions
#include <conio.h>     // For getch() to pause execution
#include <math.h>      // For cosine and sine functions

int main() {
    int gd = DETECT, gm;  
    const char* driver = "";  // Graphics driver (default)
    initgraph(&gd, &gm, (char*)driver);  // Initialize graphics mode

    // =========================
    // DRAW THE HOUSE STRUCTURE
    // =========================

    // Draw the house base (rectangle)
    rectangle(200, 200, 400, 400);
    // rectangle(left, top, right, bottom)
    // Left-top corner: (200, 200), Right-bottom corner: (400, 400)

    // Draw the roof (triangle)
    line(200, 200, 300, 100);  // Left slope of the roof (from base to peak)
    line(300, 100, 400, 200);  // Right slope of the roof (from peak to base)
    line(200, 200, 400, 200);  // Base of the roof (to close the triangle)

    // =========================
    // DRAW THE WINDOWS
    // =========================

    circle(240, 250, 25);  // Left window, center at (240,250), radius 25
    circle(360, 250, 25);  // Right window, center at (360,250), radius 25

    // =========================
    // DRAW THE DOOR
    // =========================

    rectangle(280, 300, 320, 400);
    // Door from (280,300) to (320,400)

    // Door knob (small circle)
    circle(310, 350, 5);  // Small circle at (310,350) with radius 5

    // =========================
    // DRAW THE SUN
    // =========================

    circle(450, 100, 30);  // Sun at (450,100), radius 30

    // =========================
    // DRAW SUN RAYS
    // =========================
    
    for (int i = 0; i < 360; i += 30) { // Loop to create rays at every 30 degrees
        int x1 = 450 + 30 * cos(i * 3.14 / 180);  // Inner point of the ray
        int y1 = 100 + 30 * sin(i * 3.14 / 180);
        int x2 = 450 + 45 * cos(i * 3.14 / 180);  // Outer point of the ray
        int y2 = 100 + 45 * sin(i * 3.14 / 180);
        line(x1, y1, x2, y2);  // Draw the sun ray
    }

    // =========================
    // DRAW THE GROUND LINE
    // =========================

    line(50, 400, 550, 400);  // A straight line representing the ground
    //line(x1, y1, x2, y2)

    getch();  // Wait for user input before closing the graphics window
    closegraph();  // Close the graphics mode and free resources

    return 0;
}
