/*Question: Modify movement controls to include diagonal movement.*/
#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    int x = 200, y = 200;
    char key;

    initgraph(&gd, &gm, "C:\\TC\\BGI");

    while (1) {
        cleardevice();
        circle(x, y, 20);
        outtextxy(10, 10, "Move: W/S/A/D, Diagonal: Q/E/Z/X, Quit: Q");

        key = getch();
        if (key == 'w') y -= 10;
        else if (key == 's') y += 10;
        else if (key == 'a') x -= 10;
        else if (key == 'd') x += 10;
        else if (key == 'q') { x -= 10; y -= 10; } // Up-left
        else if (key == 'e') { x += 10; y -= 10; } // Up-right
        else if (key == 'z') { x -= 10; y += 10; } // Down-left
        else if (key == 'x') { x += 10; y += 10; } // Down-right
        else if (key == 'Q') break;
    }

    closegraph();
    return 0;
}
