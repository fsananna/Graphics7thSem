/*Question: Press '+' to increase speed, '-' to decrease.*/
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 200, y = 200, speed = 10;
    char key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();
        circle(x, y, 20);
        outtextxy(10, 10, "Move: W/S/A/D, Speed: +/- , Quit: Q");

        key = getch();
        if (key == '+') speed += 5;
        else if (key == '-' && speed > 5) speed -= 5;
        else if (key == 'w') y -= speed;
        else if (key == 's') y += speed;
        else if (key == 'a') x -= speed;
        else if (key == 'd') x += speed;
        else if (key == 'Q') break;
    }

    closegraph();
    return 0;
}
