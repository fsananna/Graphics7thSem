#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    char driverPath[] = "";  // Fix warning by using a character array
    initgraph(&gd, &gm, driverPath);  // Initialize graphics mode

    int centerX = getmaxx() / 2, centerY = getmaxy() / 2; // Dynamic center
    int color = WHITE;
    int size = 40; // Base size of arcs
    char ch;

    srand(time(NULL)); // Seed random number generator

    do {
        cleardevice(); // Clear the screen

        setcolor(color); // Set color
        setfillstyle(SOLID_FILL, color);
        
        // Draw Wi-Fi signal arcs (flipped upwards)
        arc(centerX, centerY, 40, 140, size * 2);  // Largest arc
        arc(centerX, centerY, 45, 135, size * 1.5);  // Medium arc
        arc(centerX, centerY, 50, 130, size);  // Smallest arc

        // Draw small filled circle (Wi-Fi source)
        circle(centerX, centerY + size, 7);
        floodfill(centerX, centerY + size, color);  // Fill the source point

        ch = getch(); // Wait for keypress
        switch (ch) {
            case 'w': case 'W': centerY -= 10; break;      // Move up
            case 's': case 'S': centerY += 10; break;      // Move down
            case 'a': case 'A': centerX -= 10; break;      // Move left
            case 'd': case 'D': centerX += 10; break;      // Move right
            case 'c': case 'C': color = rand() % 15 + 1; break; // Random color (1-15)
            case '+': size += 5; break;              // Increase size
            case '-': if (size > 10) size -= 5; break; // Decrease size (min 10)
        }

        // Keep within screen bounds
        centerX = (centerX < 50) ? 50 : (centerX > getmaxx() - 50) ? getmaxx() - 50 : centerX;
        centerY = (centerY < 50) ? 50 : (centerY > getmaxy() - 50) ? getmaxy() - 50 : centerY;
    
    } while (ch != 'q' && ch != 'Q'); // Quit on 'q'

    closegraph();
    return 0;
}
