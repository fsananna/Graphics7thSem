#include <graphics.h>
#include <conio.h>
#include <math.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\TC\\BGI");

    // Circle 1 properties
    int x1 = 200, y1 = 200, r1 = 50;

    // Circle 2 properties
    int x2 = 250, y2 = 200, r2 = 50;

    // Draw circles
    circle(x1, y1, r1);
    circle(x2, y2, r2);

    // Calculate distance between centers
    int dx = x2 - x1;
    int dy = y2 - y1;
    float distance = sqrt(dx * dx + dy * dy);

    // Check conditions
    if (distance > r1 + r2) {
        outtextxy(150, 350, "Circles are Separate.");
    }
    else if (distance == r1 + r2) {
        outtextxy(150, 350, "Circles Touch Externally.");
    }
    else if (distance < r1 + r2 && distance > abs(r1 - r2)) {
        outtextxy(150, 350, "Circles Overlap.");
    }
    else if (distance == abs(r1 - r2)) {
        outtextxy(150, 350, "Circles Touch Internally.");
    }
    else {
        outtextxy(150, 350, "One Circle is Inside Another.");
    }

    getch();
    closegraph();
    return 0;
}