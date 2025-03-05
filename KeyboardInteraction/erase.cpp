#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int visible = 1;
    char key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();
        if (visible) circle(200, 200, 50);
        outtextxy(10, 10, "Press 'Backspace' to erase, 'q' to quit");

        key = getch();
        if (key == 8) visible = 0; // Backspace key
        else if (key == 'q') break;
    }

    closegraph();
    return 0;
}
