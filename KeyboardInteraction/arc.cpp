#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int startAngle = 0, endAngle = 180;
    char key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();
        arc(200, 200, startAngle, endAngle, 50);
        outtextxy(10, 10, "Press '[' or ']' to adjust angle, 'q' to quit");

        key = getch();
        if (key == '[') startAngle -= 10;
        else if (key == ']') endAngle += 10;
        else if (key == 'q') break;
    }

    closegraph();
    return 0;
}
