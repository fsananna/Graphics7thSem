#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Set white background
    setbkcolor(WHITE);
    cleardevice();

    // Draw face outline
    setcolor(BLACK);
    circle(250, 250, 100);
    
    // Fill face with white
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(250, 250, BLACK);

    // Draw eyes
    ellipse(220, 220, 0, 360, 20, 25);  // Left eye outline
    ellipse(280, 220, 0, 360, 20, 25);  // Right eye outline

    // Fill pupils
    setfillstyle(SOLID_FILL, BLACK);
    fillellipse(230, 225, 5, 10); // Left pupil
    fillellipse(270, 225, 5, 10); // Right pupil

    // Draw ANGRY eyebrows (slanted towards center)
    line(200, 190, 230, 210);  // Left eyebrow slanted down
    line(270, 210, 300, 190);  // Right eyebrow slanted down

    // Draw frowning mouth
    arc(250, 280, 20, 160, 30); // Downward arc for frown

    // Draw small chin dimple
    arc(250, 315, 200, 340, 8); // Small chin arc

    getch();
    closegraph();
    return 0;
}
