#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int gd = DETECT, gm;
    int x, y, size = 20, color = 4;
    char ch;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    x = getmaxx() / 2;
    y = getmaxy() / 2;

    srand(time(NULL)); // Seed the random number generator

    do {
        cleardevice(); // Clear the screen

        // Set the fill style and color
        setfillstyle(SOLID_FILL, color); // Set solid fill with the current color
        setcolor(color);                 // Set outline color

        // Draw the filled square
        bar(x - size, y - size, x + size, y + size);

        ch = getch(); // Wait for keypress
        switch (ch) {
            case 'w': case 'W': y -= 10; break;      // Move up
            case 's': case 'S': y += 10; break;      // Move down
            case 'a': case 'A': x -= 10; break;      // Move left
            case 'd': case 'D': x += 10; break;      // Move right
            case 'c': case 'C': color = rand() % 15 + 1; break; // Random color (1-15)
            case '+': size += 5; break;              // Increase size
            case '-': if (size > 5) size -= 5; break; // Decrease size (min 5)
        }

        // Keep the square within screen bounds
        x = (x - size < 0) ? size : (x + size > getmaxx()) ? getmaxx() - size : x;
        y = (y - size < 0) ? size : (y + size > getmaxy()) ? getmaxy() - size : y;

    } while (ch != 'q' && ch != 'Q');

    closegraph();
    return 0;
}