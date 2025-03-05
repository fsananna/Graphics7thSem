#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x1 = -1, y1 = -1, x2, y2;
    char key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();
        if (x1 != -1) line(x1, y1, x2, y2);
        outtextxy(10, 10, "Press 's' to start, 'e' to end, 'q' to quit");

        key = getch();
        if (key == 's') { x1 = 100; y1 = 100; }
        else if (key == 'e') { x2 = 300; y2 = 300; }
        else if (key == 'q') break;
    }

    closegraph();
    return 0;
}
