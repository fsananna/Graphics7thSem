#include <graphics.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    int x_offset = 0, y_offset = 0, size = 1;
    int color = WHITE;
    char ch;

    do {
        cleardevice();
        setcolor(color);

        // Draw house base
        rectangle(200 * size + x_offset, 200 * size + y_offset, 400 * size + x_offset, 400 * size + y_offset);
        
        // Draw roof
        line(200 * size + x_offset, 200 * size + y_offset, 300 * size + x_offset, 100 * size + y_offset);
        line(300 * size + x_offset, 100 * size + y_offset, 400 * size + x_offset, 200 * size + y_offset);
        line(200 * size + x_offset, 200 * size + y_offset, 400 * size + x_offset, 200 * size + y_offset);

        // Draw windows
        circle(240 * size + x_offset, 250 * size + y_offset, 25 * size);
        circle(360 * size + x_offset, 250 * size + y_offset, 25 * size);

        // Draw door
        rectangle(280 * size + x_offset, 300 * size + y_offset, 320 * size + x_offset, 400 * size + y_offset);
        circle(310 * size + x_offset, 350 * size + y_offset, 5 * size);

        // Draw sun
        circle(450 * size + x_offset, 100 * size + y_offset, 30 * size);
        for (int i = 0; i < 360; i += 30) {
            int x1 = 450 * size + x_offset + 30 * size * cos(i * 3.14 / 180);
            int y1 = 100 * size + y_offset + 30 * size * sin(i * 3.14 / 180);
            int x2 = 450 * size + x_offset + 45 * size * cos(i * 3.14 / 180);
            int y2 = 100 * size + y_offset + 45 * size * sin(i * 3.14 / 180);
            line(x1, y1, x2, y2);
        }

        // Ground line
        line(50 * size + x_offset, 400 * size + y_offset, 550 * size + x_offset, 400 * size + y_offset);

        ch = getch();
        switch (ch) {
            case 'w': case 'W': y_offset -= 10; break;
            case 's': case 'S': y_offset += 10; break;
            case 'a': case 'A': x_offset -= 10; break;
            case 'd': case 'D': x_offset += 10; break;
            case 'c': case 'C': color = rand() % 15 + 1; break;
            case '+': size += 1; break;
            case '-': if (size > 1) size -= 1; break;
        }
    } while (ch != 'q' && ch != 'Q');

    closegraph();
    return 0;
}
