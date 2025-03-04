#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\MinGW\\lib");
    
    // Draw a circle
    circle(200, 200, 50);
    
    // Hold the screen
    getch();
    
    // Close the graphics mode
    closegraph();
    
    return 0;
}
