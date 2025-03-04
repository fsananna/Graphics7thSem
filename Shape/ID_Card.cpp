#include <graphics.h>
#include <iostream>
using namespace std;

int main() {
    // Initialize graphics window
    int gd = DETECT, gm;
    const char* driver = "";
    initgraph(&gd, &gm, (char*)driver);
    
    // Set background color to white
    setbkcolor(WHITE);
    cleardevice();
    
    // Draw the outer rectangle (ID card)
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    // First draw the filled rectangle
    bar(100, 100, 500, 300);
    // Then draw a rounded outline over it
    setcolor(DARKGRAY);
    rectangle(100, 100, 500, 300);
    
    // Draw inner white area (card face)
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, WHITE);
    bar(110, 110, 490, 290);
    
  
    
    // Draw person silhouette - head circle
    setcolor(DARKGRAY);
    setfillstyle(SOLID_FILL, DARKGRAY);
    fillellipse(180, 170, 40, 40);
    
    // Draw person silhouette - body semicircle
    pieslice(180, 220, 180, 360, 50);
    
    // Draw text lines on the right side
    setfillstyle(SOLID_FILL, DARKGRAY);
    bar(280, 140, 450, 160); // First line
    bar(280, 180, 450, 200); // Second line
    bar(280, 220, 450, 240); // Third line
    bar(280, 260, 400, 270); // Shorter fourth line
    
    
    
    // Wait for user input to close
    getch();
    closegraph();
    return 0;
}