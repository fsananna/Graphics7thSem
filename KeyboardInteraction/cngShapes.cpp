/*Question: Write a program where pressing 'c' cycles between a circle, square, and rectangle.*/
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    char key;
    int shape = 1; // 1 = Circle, 2 = Square, 3 = Rectangle

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();

        if (shape == 1) circle(200, 200, 50);
        else if (shape == 2) rectangle(150, 150, 250, 250);
        else if (shape == 3) rectangle(120, 150, 280, 220);

        outtextxy(10, 10, "Press 'c' to switch shape, 'q' to quit");

        key = getch();
        if (key == 'c') shape = (shape % 3) + 1; // Cycle through shapes
        else if (key == 'q') break;
    }

    closegraph();
    return 0;
}
