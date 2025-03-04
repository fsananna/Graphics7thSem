#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    // Draw the face (White Circle with Black Outline)
    setcolor(WHITE);
    circle(250, 250, 100);
    setfillstyle(SOLID_FILL, WHITE);
    floodfill(250, 250, BLACK);//fill face with white

     // Draw right eye (Black Filled Oval)
     setfillstyle(SOLID_FILL, BLACK);
     ellipse(280, 220, 0, 360, 10, 18); // Right eye
     floodfill(280, 220, BLACK);

    setfillstyle(SOLID_FILL, WHITE);
    ellipse(280, 220, 0, 360, 8, 16); // Right eye (filled)
    floodfill(280, 220, WHITE);

    // Draw left eye (Winking Eye - Flipped Arc)
    arc(220, 215, 20, 160, 10); // Wink eye (upside-down arc)

    // Draw the smile (Shifted Left for Wicked Effect)
    arc(250,270,200, 340, 40); // Smile arc

    getch();
    closegraph();
    return 0;
}
