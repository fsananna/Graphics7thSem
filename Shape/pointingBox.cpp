#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    // Initialize graphics window
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");
    
    // Set background color to white
    setbkcolor(WHITE);
    cleardevice();
    
    // Draw the icon with dark gray color
    setcolor(DARKGRAY);
    setlinestyle(SOLID_LINE, 0, 3);  // Make lines thicker (width 3)
    
    // Draw the box bottom (horizontal line)
    line(100, 350, 300, 350);
    
    // Draw the box sides (vertical lines)
    line(100, 250, 100, 350);
    line(300, 250, 300, 350);
    
    // Draw the box top left and right angled lines
    line(100, 250, 150, 200);
    line(300, 250, 250, 200);
    
    // Draw the indentation in the box (small horizontal line)
    line(150, 250, 250, 250);
    
    // Draw the arrow stem (vertical line)
    line(200, 100, 200, 220);
    
    // Draw the arrow head (two angled lines)
    line(200, 220, 170, 190);
    line(200, 220, 230, 190);
    
    
    getch();
    closegraph();
    return 0;
}