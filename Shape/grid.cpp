#include <graphics.h>
#include <conio.h>
#include <stdio.h> // For sprintf

int main() {
    int gd = DETECT, gm;
    // Fix the string constant warning by using a const char*
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);
    
    int maxX = getmaxx();
    int maxY = getmaxy();
    
    // Draw coordinate system
    setcolor(LIGHTGRAY);
    
    // Draw grid lines every 50 pixels
    for(int i = 0; i <= maxX; i += 50) {
        line(i, 0, i, maxY);
        // Label X coordinates
        char str[10];
        sprintf(str, "%d", i);
        outtextxy(i, 10, str);
    }
    
    for(int j = 0; j <= maxY; j += 50) {
        line(0, j, maxX, j);
        // Label Y coordinates
        char str[10];
        sprintf(str, "%d", j);
        outtextxy(10, j, str);
    }
    
    // Highlight the center
    setcolor(RED);
    int centerX = maxX / 2;
    int centerY = maxY / 2;
    circle(centerX, centerY, 5);
    outtextxy(centerX + 10, centerY, (char*)"Center"); // Cast to fix warning
    
    getch();
    closegraph();
    return 0;
} 