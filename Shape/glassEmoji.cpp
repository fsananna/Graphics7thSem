#include <graphics.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set boundary color to white
    setcolor(WHITE);

    // Draw face outline
    circle(250, 250, 80); // Face outline

    // Draw glasses
    circle(200, 230, 35); // Left glass
    circle(300, 230, 35); // Right glass

    // Arc for glasses bridge (Upside-down curve)
    arc(250, 230, 20, 160, 15); // Now the arc is flipped upwards

    // Draw eyes
    line(190, 230, 210, 230); // Left eye
    line(290, 230, 310, 230); // Right eye

    // Draw smile
    arc(250, 260, 200, 340, 30); // Smile arc

    getch();
    closegraph();
    return 0;
}